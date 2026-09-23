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

// Function: pickupposAdd
// Address: 0x272ac0 - 0x272cc8
void pickupposAdd_0x272ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pickupposAdd_0x272ac0");
#endif

    ctx->pc = 0x272ac0u;

    // 0x272ac0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x272ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x272ac4: 0x8f99a358  lw          $t9, -0x5CA8($gp)
    ctx->pc = 0x272ac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943576)));
    // 0x272ac8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x272ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x272acc: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x272accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x272ad0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x272ad0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ad4: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x272ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x272ad8: 0x2b220064  slti        $v0, $t9, 0x64
    ctx->pc = 0x272ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x272adc: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x272adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x272ae0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x272ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x272ae4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x272ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x272ae8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x272ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x272aec: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x272aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x272af0: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x272AF0u;
    {
        const bool branch_taken_0x272af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AF0u;
        // 0x272af4: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272af0) {
            ctx->pc = 0x272C98u;
            goto label_272c98;
        }
    }
    ctx->pc = 0x272AF8u;
    // 0x272af8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x272af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x272afc: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x272afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272b00: 0x3221018  mult        $v0, $t9, $v0
    ctx->pc = 0x272b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x272b04: 0xc7828578  lwc1        $f2, -0x7A88($gp)
    ctx->pc = 0x272b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272b08: 0x3c0401fd  lui         $a0, 0x1FD
    ctx->pc = 0x272b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)509 << 16));
    // 0x272b0c: 0xc784857c  lwc1        $f4, -0x7A84($gp)
    ctx->pc = 0x272b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x272b10: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x272b10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x272b14: 0x2484e190  addiu       $a0, $a0, -0x1E70
    ctx->pc = 0x272b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959504));
    // 0x272b18: 0x3c0501fd  lui         $a1, 0x1FD
    ctx->pc = 0x272b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)509 << 16));
    // 0x272b1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x272b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x272b20: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x272b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x272b24: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x272b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x272b28: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x272b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x272b2c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x272b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x272b30: 0x24a5f450  addiu       $a1, $a1, -0xBB0
    ctx->pc = 0x272b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964304));
    // 0x272b34: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x272b34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b38: 0xa2b821  addu        $s7, $a1, $v0
    ctx->pc = 0x272b38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x272b3c: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x272b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272b40: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x272b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b44: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x272b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x272b48: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x272b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b4c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x272b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x272b50: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x272b50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b54: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x272b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b58: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x272b58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b5c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x272b5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b60: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x272b60u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b64: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x272b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x272b68: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x272b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b6c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x272b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x272b70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x272b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b74: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x272b74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b78: 0x45b021  addu        $s6, $v0, $a1
    ctx->pc = 0x272b78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x272b7c: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x272b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272b80: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x272b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b84: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x272b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x272b88: 0x60c02d  daddu       $t8, $v1, $zero
    ctx->pc = 0x272b88u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b8c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x272b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x272b90: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x272b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x272b94: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x272b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x272b98: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x272b98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b9c: 0x3c0601fd  lui         $a2, 0x1FD
    ctx->pc = 0x272b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)509 << 16));
    // 0x272ba0: 0x191900  sll         $v1, $t9, 4
    ctx->pc = 0x272ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x272ba4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x272ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x272ba8: 0x24c60710  addiu       $a2, $a2, 0x710
    ctx->pc = 0x272ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1808));
    // 0x272bac: 0xc37021  addu        $t6, $a2, $v1
    ctx->pc = 0x272bacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x272bb0: 0x666821  addu        $t5, $v1, $a2
    ctx->pc = 0x272bb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x272bb4: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x272bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272bb8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x272bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bbc: 0x3c07177f  lui         $a3, 0x177F
    ctx->pc = 0x272bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)6015 << 16));
    // 0x272bc0: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x272bc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bc4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x272bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x272bc8: 0x34e77f7f  ori         $a3, $a3, 0x7F7F
    ctx->pc = 0x272bc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32639);
    // 0x272bcc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x272bccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bd0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x272bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bd4: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x272bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bd8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x272bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x272bdc: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x272bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x272be0: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x272be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272be4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x272be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x272be8: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x272be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x272bec: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x272becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272bf0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x272bf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x272bf4: 0xe5810014  swc1        $f1, 0x14($t4)
    ctx->pc = 0x272bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 20), bits); }
    // 0x272bf8: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x272bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272bfc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x272bfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x272c00: 0xe5e00018  swc1        $f0, 0x18($t7)
    ctx->pc = 0x272c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 24), bits); }
    // 0x272c04: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x272c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272c08: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x272c08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x272c0c: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x272c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x272c10: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x272c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272c14: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x272c14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x272c18: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x272c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x272c1c: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x272c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272c20: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x272c20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x272c24: 0xe6a10024  swc1        $f1, 0x24($s5)
    ctx->pc = 0x272c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x272c28: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x272c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272c2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x272c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272c30: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x272c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x272c34: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x272c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x272c38: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x272c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272c3c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x272c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x272c40: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x272c40u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
    // 0x272c44: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x272c44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x272c48: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x272c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x272c4c: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x272c4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x272c50: 0xe703000c  swc1        $f3, 0xC($t8)
    ctx->pc = 0x272c50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 12), bits); }
    // 0x272c54: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x272c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x272c58: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x272c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x272c5c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x272c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x272c60: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x272c60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x272c64: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x272c64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x272c68: 0xe683001c  swc1        $f3, 0x1C($s4)
    ctx->pc = 0x272c68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x272c6c: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x272c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x272c70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x272c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272c74: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x272c74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x272c78: 0xe6030024  swc1        $f3, 0x24($s0)
    ctx->pc = 0x272c78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x272c7c: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x272c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x272c80: 0xadc70004  sw          $a3, 0x4($t6)
    ctx->pc = 0x272c80u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 7));
    // 0x272c84: 0xad670008  sw          $a3, 0x8($t3)
    ctx->pc = 0x272c84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 7));
    // 0x272c88: 0xe5430028  swc1        $f3, 0x28($t2)
    ctx->pc = 0x272c88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 40), bits); }
    // 0x272c8c: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x272c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x272c90: 0xe4a3002c  swc1        $f3, 0x2C($a1)
    ctx->pc = 0x272c90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x272c94: 0xaf99a358  sw          $t9, -0x5CA8($gp)
    ctx->pc = 0x272c94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943576), GPR_U32(ctx, 25));
label_272c98:
    // 0x272c98: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x272c98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x272c9c: 0x2722ffff  addiu       $v0, $t9, -0x1
    ctx->pc = 0x272c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x272ca0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x272ca0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x272ca4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x272ca4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x272ca8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x272ca8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x272cac: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x272cacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x272cb0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x272cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x272cb4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x272cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x272cb8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x272cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x272cbc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x272cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x272CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CC0u;
        // 0x272cc4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272CC8u;
}
