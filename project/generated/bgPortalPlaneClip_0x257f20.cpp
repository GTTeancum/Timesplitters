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

// Function: bgPortalPlaneClip
// Address: 0x257f20 - 0x258104
void bgPortalPlaneClip_0x257f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalPlaneClip_0x257f20");
#endif

    switch (ctx->pc) {
        case 0x257f80u: goto label_257f80;
        case 0x258088u: goto label_258088;
        default: break;
    }

    ctx->pc = 0x257f20u;

    // 0x257f20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x257f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x257f24: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x257f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x257f28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x257f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x257f2c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x257f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x257f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x257f34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x257f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f38: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x257f38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x257f3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x257f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f40: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x257f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x257f44: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x257f44u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x257f48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x257f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x257f4c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x257f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x257f50: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x257f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x257f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257f58: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x257f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x257f5c: 0x1840005e  blez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x257F5Cu;
    {
        const bool branch_taken_0x257f5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x257F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F5Cu;
        // 0x257f60: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f5c) {
            ctx->pc = 0x2580D8u;
            goto label_2580d8;
        }
    }
    ctx->pc = 0x257F64u;
    // 0x257f64: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x257f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x257f68: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x257f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x257f6c: 0x18400055  blez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x257F6Cu;
    {
        const bool branch_taken_0x257f6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x257F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F6Cu;
        // 0x257f70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f6c) {
            ctx->pc = 0x2580C4u;
            goto label_2580c4;
        }
    }
    ctx->pc = 0x257F74u;
    // 0x257f74: 0x6a880  sll         $s5, $a2, 2
    ctx->pc = 0x257f74u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x257f78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x257f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257f7c: 0x0  nop
    ctx->pc = 0x257f7cu;
    // NOP
label_257f80:
    // 0x257f80: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x257f80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257f84: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x257f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x257f88: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x257f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x257f8c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x257f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x257f90: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x257f90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257f94: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x257f94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257f98: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x257f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x257f9c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x257f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x257fa0: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x257fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
    // 0x257fa4: 0x731024  and         $v0, $v1, $s3
    ctx->pc = 0x257fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x257fa8: 0x10820038  beq         $a0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x257FA8u;
    {
        const bool branch_taken_0x257fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x257FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FA8u;
        // 0x257fac: 0xf51021  addu        $v0, $a3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fa8) {
            ctx->pc = 0x25808Cu;
            goto label_25808c;
        }
    }
    ctx->pc = 0x257FB0u;
    // 0x257fb0: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x257fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x257fb4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x257fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x257fb8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x257fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x257fbc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x257fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257fc0: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x257fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257fc4: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x257fc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x257fc8: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x257fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257fcc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x257fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x257fd0: 0x8f82b8ac  lw          $v0, -0x4754($gp)
    ctx->pc = 0x257fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949036)));
    // 0x257fd4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x257fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x257fd8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x257fd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x257fdc: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x257fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x257fe0: 0x463018  mult        $a2, $v0, $a2
    ctx->pc = 0x257fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x257fe4: 0x8f85b8a8  lw          $a1, -0x4758($gp)
    ctx->pc = 0x257fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949032)));
    // 0x257fe8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x257fe8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x257fec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x257fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x257ff0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x257ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x257ff4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x257ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x257ff8: 0xaf82b8ac  sw          $v0, -0x4754($gp)
    ctx->pc = 0x257ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949036), GPR_U32(ctx, 2));
    // 0x257ffc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x257ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x258000: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x258000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x258004: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x258004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x258008: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x258008u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x25800c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x25800cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x258010: 0xae240050  sw          $a0, 0x50($s1)
    ctx->pc = 0x258010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
    // 0x258014: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x258014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258018: 0x0  nop
    ctx->pc = 0x258018u;
    // NOP
    // 0x25801c: 0x0  nop
    ctx->pc = 0x25801cu;
    // NOP
    // 0x258020: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x258020u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x258024: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x258024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258028: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x258028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25802c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25802cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x258030: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x258030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x258034: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x258034u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x258038: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x258038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x25803c: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x25803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258040: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x258040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258044: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x258044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x258048: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x258048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x25804c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25804cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x258050: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x258050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x258054: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x258054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258058: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x258058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25805c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25805cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x258060: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x258060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x258064: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x258064u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x258068: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x258068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x25806c: 0xc4e2000c  lwc1        $f2, 0xC($a3)
    ctx->pc = 0x25806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258070: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x258070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258074: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x258074u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x258078: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x258078u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x25807c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x25807cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x258080: 0xc095f8e  jal         func_257E38
    ctx->pc = 0x258080u;
    SET_GPR_U32(ctx, 31, 0x258088u);
    ctx->pc = 0x258084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258080u;
    // 0x258084: 0xe4a2000c  swc1        $f2, 0xC($a1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E38u, 0x258080u, 0x258088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258088u;
label_258088:
    // 0x258088: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x258088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_25808c:
    // 0x25808c: 0x731024  and         $v0, $v1, $s3
    ctx->pc = 0x25808cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x258090: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x258090u;
    {
        const bool branch_taken_0x258090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258090) {
            ctx->pc = 0x258094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258090u;
            // 0x258094: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2580B4u;
            goto label_2580b4;
        }
    }
    ctx->pc = 0x258098u;
    // 0x258098: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x258098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x25809c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25809cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2580a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2580a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2580a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2580a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2580a8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2580a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2580ac: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x2580acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x2580b0: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2580b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2580b4:
    // 0x2580b4: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2580b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2580b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2580b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2580bc: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2580BCu;
    {
        const bool branch_taken_0x2580bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2580C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580BCu;
        // 0x2580c0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580bc) {
            ctx->pc = 0x257F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257f80;
        }
    }
    ctx->pc = 0x2580C4u;
label_2580c4:
    // 0x2580c4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2580c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2580c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2580c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2580cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2580ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2580d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2580d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2580d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2580d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2580d8:
    // 0x2580d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2580d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2580dc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2580dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2580e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2580e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2580e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2580e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2580e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2580e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2580ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2580ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2580f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2580f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2580f4: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2580f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2580f8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2580f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2580fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2580FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580FCu;
        // 0x258100: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2580FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258104u;
}
