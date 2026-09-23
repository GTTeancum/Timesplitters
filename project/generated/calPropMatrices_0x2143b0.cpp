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

// Function: calPropMatrices
// Address: 0x2143b0 - 0x2147e0
void calPropMatrices_0x2143b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calPropMatrices_0x2143b0");
#endif

    switch (ctx->pc) {
        case 0x214460u: goto label_214460;
        case 0x2144b8u: goto label_2144b8;
        case 0x214518u: goto label_214518;
        case 0x214534u: goto label_214534;
        case 0x2145b4u: goto label_2145b4;
        case 0x214648u: goto label_214648;
        case 0x214660u: goto label_214660;
        case 0x21467cu: goto label_21467c;
        case 0x2146d4u: goto label_2146d4;
        case 0x2146e0u: goto label_2146e0;
        case 0x214758u: goto label_214758;
        default: break;
    }

    ctx->pc = 0x2143b0u;

    // 0x2143b0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2143b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2143b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2143b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2143b8: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x2143b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x2143bc: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2143bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
    // 0x2143c0: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2143c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2143c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2143c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143c8: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x2143c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2143cc: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x2143ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2143d0: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x2143d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x2143d4: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x2143d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x2143d8: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x2143d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x2143dc: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x2143dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x2143e0: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x2143e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x2143e4: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x2143e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x2143e8: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x2143e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2143ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2143ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2143f0: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2143f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2143f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2143f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2143f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2143f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2143fc: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2143fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214400: 0xc6540010  lwc1        $f20, 0x10($s2)
    ctx->pc = 0x214400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x214404: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x214404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214408: 0x0  nop
    ctx->pc = 0x214408u;
    // NOP
    // 0x21440c: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
    ctx->pc = 0x21440Cu;
    {
        const bool branch_taken_0x21440c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21440Cu;
        // 0x214410: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21440c) {
            ctx->pc = 0x21457Cu;
            goto label_21457c;
        }
    }
    ctx->pc = 0x214414u;
    // 0x214414: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x214414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214418: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x214418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21441c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x21441cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x214420: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x214420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x214424: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x214424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x214428: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x214428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21442c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x21442cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x214430: 0x0  nop
    ctx->pc = 0x214430u;
    // NOP
    // 0x214434: 0x0  nop
    ctx->pc = 0x214434u;
    // NOP
    // 0x214438: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x214438u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x21443c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x21443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x214440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x214440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x214444: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x214444u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x214448: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x214448u;
    {
        const bool branch_taken_0x214448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214448u;
        // 0x21444c: 0xe6030004  swc1        $f3, 0x4($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214448) {
            ctx->pc = 0x214484u;
            goto label_214484;
        }
    }
    ctx->pc = 0x214450u;
    // 0x214450: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x214450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214454: 0x0  nop
    ctx->pc = 0x214454u;
    // NOP
    // 0x214458: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x214458u;
    {
        const bool branch_taken_0x214458 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214458u;
        // 0x21445c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214458) {
            ctx->pc = 0x21449Cu;
            goto label_21449c;
        }
    }
    ctx->pc = 0x214460u;
label_214460:
    // 0x214460: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x214460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214464: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x214464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x214468: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x214468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x21446c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x21446cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214470: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x214470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x214474: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x214474u;
    {
        const bool branch_taken_0x214474 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x214474) {
            ctx->pc = 0x214460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214460;
        }
    }
    ctx->pc = 0x21447Cu;
    // 0x21447c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21447Cu;
    {
        const bool branch_taken_0x21447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21447Cu;
        // 0x214480: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21447c) {
            ctx->pc = 0x2144A0u;
            goto label_2144a0;
        }
    }
    ctx->pc = 0x214484u;
label_214484:
    // 0x214484: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x214484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214488: 0x0  nop
    ctx->pc = 0x214488u;
    // NOP
    // 0x21448c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x21448Cu;
    {
        const bool branch_taken_0x21448c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21448Cu;
        // 0x214490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21448c) {
            ctx->pc = 0x21449Cu;
            goto label_21449c;
        }
    }
    ctx->pc = 0x214494u;
    // 0x214494: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x214494u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x214498: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x214498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_21449c:
    // 0x21449c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x21449cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2144a0:
    // 0x2144a0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2144a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2144a4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2144a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2144a8: 0x0  nop
    ctx->pc = 0x2144a8u;
    // NOP
    // 0x2144ac: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x2144ACu;
    {
        const bool branch_taken_0x2144ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2144ac) {
            ctx->pc = 0x2144B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2144ACu;
            // 0x2144b0: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2144E4u;
            goto label_2144e4;
        }
    }
    ctx->pc = 0x2144B4u;
    // 0x2144b4: 0x0  nop
    ctx->pc = 0x2144b4u;
    // NOP
label_2144b8:
    // 0x2144b8: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x2144b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2144bc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2144bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2144c0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2144c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2144c4: 0x0  nop
    ctx->pc = 0x2144c4u;
    // NOP
    // 0x2144c8: 0x0  nop
    ctx->pc = 0x2144c8u;
    // NOP
    // 0x2144cc: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x2144CCu;
    {
        const bool branch_taken_0x2144cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2144cc) {
            ctx->pc = 0x2144B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2144b8;
        }
    }
    ctx->pc = 0x2144D4u;
    // 0x2144d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2144d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2144d8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2144d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2144dc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2144dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2144e0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2144e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2144e4:
    // 0x2144e4: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2144E4u;
    {
        const bool branch_taken_0x2144e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2144e4) {
            ctx->pc = 0x2144E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2144E4u;
            // 0x2144e8: 0x8e2200f4  lw          $v0, 0xF4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214580u;
            goto label_214580;
        }
    }
    ctx->pc = 0x2144ECu;
    // 0x2144ec: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2144ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2144f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2144f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2144f4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2144F4u;
    {
        const bool branch_taken_0x2144f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2144F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144F4u;
        // 0x2144f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144f4) {
            ctx->pc = 0x21457Cu;
            goto label_21457c;
        }
    }
    ctx->pc = 0x2144FCu;
    // 0x2144fc: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x2144fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x214500: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214508: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x214508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x21450c: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x21450cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x214510: 0xc0854a0  jal         func_215280
    ctx->pc = 0x214510u;
    SET_GPR_U32(ctx, 31, 0x214518u);
    ctx->pc = 0x214514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214510u;
    // 0x214514: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x214510u, 0x214518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214518u;
label_214518:
    // 0x214518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21451c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21451cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214524: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x214524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214528: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x214528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21452c: 0xc0854a0  jal         func_215280
    ctx->pc = 0x21452Cu;
    SET_GPR_U32(ctx, 31, 0x214534u);
    ctx->pc = 0x214530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21452Cu;
    // 0x214530: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x21452Cu, 0x214534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214534u;
label_214534:
    // 0x214534: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x214534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214538: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x214538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21453c: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x21453cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214540: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x214540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214544: 0xc6040018  lwc1        $f4, 0x18($s0)
    ctx->pc = 0x214544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214548: 0xc606001c  lwc1        $f6, 0x1C($s0)
    ctx->pc = 0x214548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21454c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x21454cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x214550: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x214550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x214554: 0xc7a500b0  lwc1        $f5, 0xB0($sp)
    ctx->pc = 0x214554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x214558: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x214558u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x21455c: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x21455cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214560: 0xc7a400b8  lwc1        $f4, 0xB8($sp)
    ctx->pc = 0x214560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214564: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x214564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x214568: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x214568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x21456c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x21456cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x214570: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x214570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x214574: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x214574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x214578: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x214578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_21457c:
    // 0x21457c: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x21457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_214580:
    // 0x214580: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x214580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x214584: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x214584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x214588: 0x1460008a  bnez        $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x214588u;
    {
        const bool branch_taken_0x214588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214588u;
        // 0x21458c: 0xdfbf0170  ld          $ra, 0x170($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214588) {
            ctx->pc = 0x2147B4u;
            goto label_2147b4;
        }
    }
    ctx->pc = 0x214590u;
    // 0x214590: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x214590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x214594: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x214594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x214598: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x214598u;
    {
        const bool branch_taken_0x214598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214598u;
        // 0x21459c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214598) {
            ctx->pc = 0x2147B4u;
            goto label_2147b4;
        }
    }
    ctx->pc = 0x2145A0u;
    // 0x2145a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2145a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2145a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145a8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2145a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2145ac: 0xc085314  jal         func_214C50
    ctx->pc = 0x2145ACu;
    SET_GPR_U32(ctx, 31, 0x2145B4u);
    ctx->pc = 0x2145B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2145ACu;
    // 0x2145b0: 0x27a700f4  addiu       $a3, $sp, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214C50u, 0x2145ACu, 0x2145B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2145B4u;
label_2145b4:
    // 0x2145b4: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x2145b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2145b8: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x2145b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2145bc: 0x10e30019  beq         $a3, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2145BCu;
    {
        const bool branch_taken_0x2145bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x2145C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145BCu;
        // 0x2145c0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145bc) {
            ctx->pc = 0x214624u;
            goto label_214624;
        }
    }
    ctx->pc = 0x2145C4u;
    // 0x2145c4: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2145c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2145c8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2145c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2145cc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2145ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2145d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2145d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2145d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2145d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2145d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2145d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2145dc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2145dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2145e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2145e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2145e4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2145e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2145e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2145e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2145ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2145ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2145f0: 0x0  nop
    ctx->pc = 0x2145f0u;
    // NOP
    // 0x2145f4: 0x0  nop
    ctx->pc = 0x2145f4u;
    // NOP
    // 0x2145f8: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2145f8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x2145fc: 0x0  nop
    ctx->pc = 0x2145fcu;
    // NOP
    // 0x214600: 0x0  nop
    ctx->pc = 0x214600u;
    // NOP
    // 0x214604: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x214604u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x214608: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x214608u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x21460c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21460cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x214610: 0x0  nop
    ctx->pc = 0x214610u;
    // NOP
    // 0x214614: 0x0  nop
    ctx->pc = 0x214614u;
    // NOP
    // 0x214618: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x214618u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[0];
    // 0x21461c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21461Cu;
    {
        const bool branch_taken_0x21461c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21461Cu;
        // 0x214620: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21461c) {
            ctx->pc = 0x21462Cu;
            goto label_21462c;
        }
    }
    ctx->pc = 0x214624u;
label_214624:
    // 0x214624: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x214624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x214628: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x214628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_21462c:
    // 0x21462c: 0x18400045  blez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x21462Cu;
    {
        const bool branch_taken_0x21462c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x214630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21462Cu;
        // 0x214630: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21462c) {
            ctx->pc = 0x214744u;
            goto label_214744;
        }
    }
    ctx->pc = 0x214634u;
    // 0x214634: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x214634u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x214638: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x214638u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21463c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x21463cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x214640: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x214640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x214644: 0x0  nop
    ctx->pc = 0x214644u;
    // NOP
label_214648:
    // 0x214648: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x214648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21464c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21464cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214650: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214654: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x214654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214658: 0xc0854a0  jal         func_215280
    ctx->pc = 0x214658u;
    SET_GPR_U32(ctx, 31, 0x214660u);
    ctx->pc = 0x21465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214658u;
    // 0x21465c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x214658u, 0x214660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214660u;
label_214660:
    // 0x214660: 0x8fa700f4  lw          $a3, 0xF4($sp)
    ctx->pc = 0x214660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x214664: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x214664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21466c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21466cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214670: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x214670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214674: 0xc0854a0  jal         func_215280
    ctx->pc = 0x214674u;
    SET_GPR_U32(ctx, 31, 0x21467Cu);
    ctx->pc = 0x214678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214674u;
    // 0x214678: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x214674u, 0x21467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21467Cu;
label_21467c:
    // 0x21467c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21467cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x214680: 0xc7a7007c  lwc1        $f7, 0x7C($sp)
    ctx->pc = 0x214680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x214684: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x214684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214688: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x214688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21468c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21468cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214690: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x214690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x214694: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x214694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x214698: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x214698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21469c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21469cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146a0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2146a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2146a4: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2146a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2146a8: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x2146a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2146ac: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x2146acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2146b0: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x2146b0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2146b4: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x2146b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2146b8: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x2146b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2146bc: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x2146bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2146c0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2146c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2146c4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2146c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2146c8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2146c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2146cc: 0xc0ad020  jal         func_2B4080
    ctx->pc = 0x2146CCu;
    SET_GPR_U32(ctx, 31, 0x2146D4u);
    ctx->pc = 0x2146D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2146CCu;
    // 0x2146d0: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4080u, 0x2146CCu, 0x2146D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2146D4u;
label_2146d4:
    // 0x2146d4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2146d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2146d8: 0xc0acfe4  jal         func_2B3F90
    ctx->pc = 0x2146D8u;
    SET_GPR_U32(ctx, 31, 0x2146E0u);
    ctx->pc = 0x2146DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2146D8u;
    // 0x2146dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F90u, 0x2146D8u, 0x2146E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2146E0u;
label_2146e0:
    // 0x2146e0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2146e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2146e4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2146e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2146e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2146e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2146ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2146ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2146f0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2146f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2146f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2146f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2146f8: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x2146f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2146fc: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x2146fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214700: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x214700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214704: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x214704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214708: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x214708u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21470c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x21470cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x214710: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x214710u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x214714: 0xe4420034  swc1        $f2, 0x34($v0)
    ctx->pc = 0x214714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x214718: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x214718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21471c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x21471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214720: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x214720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214724: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x214724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x214728: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x214728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x21472c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x21472cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x214730: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x214730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x214734: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x214734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x214738: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x214738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21473c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x21473Cu;
    {
        const bool branch_taken_0x21473c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21473Cu;
        // 0x214740: 0x8fa700f0  lw          $a3, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21473c) {
            ctx->pc = 0x214648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214648;
        }
    }
    ctx->pc = 0x214744u;
label_214744:
    // 0x214744: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x214744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21474c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21474cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214750: 0xc08526c  jal         func_2149B0
    ctx->pc = 0x214750u;
    SET_GPR_U32(ctx, 31, 0x214758u);
    ctx->pc = 0x214754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214750u;
    // 0x214754: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2149B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2149B0u, 0x214750u, 0x214758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214758u;
label_214758:
    // 0x214758: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x214758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x21475c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x21475cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x214760: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x214760u;
    {
        const bool branch_taken_0x214760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214760) {
            ctx->pc = 0x214764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214760u;
            // 0x214764: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2147A8u;
            goto label_2147a8;
        }
    }
    ctx->pc = 0x214768u;
    // 0x214768: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x214768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21476c: 0xc6240068  lwc1        $f4, 0x68($s1)
    ctx->pc = 0x21476cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214770: 0xc6220074  lwc1        $f2, 0x74($s1)
    ctx->pc = 0x214770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214774: 0xc625006c  lwc1        $f5, 0x6C($s1)
    ctx->pc = 0x214774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x214778: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x214778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21477c: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x21477cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x214780: 0xc623007c  lwc1        $f3, 0x7C($s1)
    ctx->pc = 0x214780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214784: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x214784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x214788: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x214788u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x21478c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x21478cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x214790: 0xe6220080  swc1        $f2, 0x80($s1)
    ctx->pc = 0x214790u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x214794: 0xe6240074  swc1        $f4, 0x74($s1)
    ctx->pc = 0x214794u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x214798: 0xe6210084  swc1        $f1, 0x84($s1)
    ctx->pc = 0x214798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x21479c: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x21479cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x2147a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2147A0u;
    {
        const bool branch_taken_0x2147a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2147A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147A0u;
        // 0x2147a4: 0xe6250078  swc1        $f5, 0x78($s1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147a0) {
            ctx->pc = 0x2147B0u;
            goto label_2147b0;
        }
    }
    ctx->pc = 0x2147A8u;
label_2147a8:
    // 0x2147a8: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x2147a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x2147ac: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x2147acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
label_2147b0:
    // 0x2147b0: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x2147b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_2147b4:
    // 0x2147b4: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x2147b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2147b8: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x2147b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2147bc: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x2147bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2147c0: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x2147c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2147c4: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x2147c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2147c8: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x2147c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2147cc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2147ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2147d0: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x2147d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2147d4: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x2147d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2147d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2147D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2147DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147D8u;
        // 0x2147dc: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2147D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2147E0u;
}
