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

// Function: enemyInformOthers
// Address: 0x2cb908 - 0x2cbb3c
void enemyInformOthers_0x2cb908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyInformOthers_0x2cb908");
#endif

    switch (ctx->pc) {
        case 0x2cb960u: goto label_2cb960;
        case 0x2cba40u: goto label_2cba40;
        case 0x2cba58u: goto label_2cba58;
        case 0x2cba6cu: goto label_2cba6c;
        case 0x2cbac4u: goto label_2cbac4;
        case 0x2cbafcu: goto label_2cbafc;
        default: break;
    }

    ctx->pc = 0x2cb908u;

    // 0x2cb908: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2cb908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2cb90c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2cb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2cb910: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2cb910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2cb914: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2cb914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cb918: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cb918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb91c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2cb91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2cb920: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2cb920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2cb924: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2cb924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2cb928: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2cb928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2cb92c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2cb92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2cb930: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2cb930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2cb934: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2cb934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2cb938: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2cb938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2cb93c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2cb93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2cb940: 0x8c44c4f0  lw          $a0, -0x3B10($v0)
    ctx->pc = 0x2cb940u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2cb944: 0x14830071  bne         $a0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2CB944u;
    {
        const bool branch_taken_0x2cb944 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB944u;
        // 0x2cb948: 0x8e7e0160  lw          $fp, 0x160($s3) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb944) {
            ctx->pc = 0x2CBB0Cu;
            goto label_2cbb0c;
        }
    }
    ctx->pc = 0x2CB94Cu;
    // 0x2cb94c: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x2cb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2cb950: 0x1840006e  blez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2CB950u;
    {
        const bool branch_taken_0x2cb950 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB950u;
        // 0x2cb954: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb950) {
            ctx->pc = 0x2CBB0Cu;
            goto label_2cbb0c;
        }
    }
    ctx->pc = 0x2CB958u;
    // 0x2cb958: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x2cb958u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x2cb95c: 0x26e22058  addiu       $v0, $s7, 0x2058
    ctx->pc = 0x2cb95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8280));
label_2cb960:
    // 0x2cb960: 0x12b080  sll         $s6, $s2, 2
    ctx->pc = 0x2cb960u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2cb964: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2cb964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2cb968: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2cb968u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb96c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2cb96cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb970: 0x1133004d  beq         $t1, $s3, . + 4 + (0x4D << 2)
    ctx->pc = 0x2CB970u;
    {
        const bool branch_taken_0x2cb970 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 19));
        ctx->pc = 0x2CB974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB970u;
        // 0x2cb974: 0x8d310160  lw          $s1, 0x160($t1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb970) {
            ctx->pc = 0x2CBAA8u;
            goto label_2cbaa8;
        }
    }
    ctx->pc = 0x2CB978u;
    // 0x2cb978: 0x8e230a9c  lw          $v1, 0xA9C($s1)
    ctx->pc = 0x2cb978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2cb97c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2cb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2cb980: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2cb980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2cb984: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2cb984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cb988: 0x50600048  beql        $v1, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x2CB988u;
    {
        const bool branch_taken_0x2cb988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb988) {
            ctx->pc = 0x2CB98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB988u;
            // 0x2cb98c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBAACu;
            goto label_2cbaac;
        }
    }
    ctx->pc = 0x2CB990u;
    // 0x2cb990: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2cb990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2cb994: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2cb994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2cb998: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x2CB998u;
    {
        const bool branch_taken_0x2cb998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb998) {
            ctx->pc = 0x2CB99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB998u;
            // 0x2cb99c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBAACu;
            goto label_2cbaac;
        }
    }
    ctx->pc = 0x2CB9A0u;
    // 0x2cb9a0: 0xc5200030  lwc1        $f0, 0x30($t1)
    ctx->pc = 0x2cb9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb9a4: 0xc6640030  lwc1        $f4, 0x30($s3)
    ctx->pc = 0x2cb9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cb9a8: 0xc5220034  lwc1        $f2, 0x34($t1)
    ctx->pc = 0x2cb9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cb9ac: 0xc6660034  lwc1        $f6, 0x34($s3)
    ctx->pc = 0x2cb9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cb9b0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2cb9b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2cb9b4: 0xc5210038  lwc1        $f1, 0x38($t1)
    ctx->pc = 0x2cb9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb9b8: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x2cb9b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x2cb9bc: 0xc6650038  lwc1        $f5, 0x38($s3)
    ctx->pc = 0x2cb9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cb9c0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2cb9c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2cb9c4: 0xc6230b44  lwc1        $f3, 0xB44($s1)
    ctx->pc = 0x2cb9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cb9c8: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2cb9c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2cb9cc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2cb9ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2cb9d0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2cb9d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2cb9d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cb9d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cb9d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cb9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cb9dc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2cb9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb9e0: 0x0  nop
    ctx->pc = 0x2cb9e0u;
    // NOP
    // 0x2cb9e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2CB9E4u;
    {
        const bool branch_taken_0x2cb9e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb9e4) {
            ctx->pc = 0x2CB9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB9E4u;
            // 0x2cb9e8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB9ECu;
            goto label_2cb9ec;
        }
    }
    ctx->pc = 0x2CB9ECu;
label_2cb9ec:
    // 0x2cb9ec: 0xc7819284  lwc1        $f1, -0x6D7C($gp)
    ctx->pc = 0x2cb9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb9f0: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2cb9f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cb9f4: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2cb9f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cb9f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9fc: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2cb9fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cba00: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x2cba00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x2cba04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cba04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cba08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba0c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x2cba0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2cba10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cba10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba14: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2cba14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cba18: 0xc5200030  lwc1        $f0, 0x30($t1)
    ctx->pc = 0x2cba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cba1c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2cba1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2cba20: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2cba20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2cba24: 0xc5210034  lwc1        $f1, 0x34($t1)
    ctx->pc = 0x2cba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cba28: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x2cba28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x2cba2c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2cba2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2cba30: 0xc5200038  lwc1        $f0, 0x38($t1)
    ctx->pc = 0x2cba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cba34: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2cba34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2cba38: 0xc09633c  jal         func_258CF0
    ctx->pc = 0x2CBA38u;
    SET_GPR_U32(ctx, 31, 0x2CBA40u);
    ctx->pc = 0x2CBA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA38u;
    // 0x2cba3c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CF0u, 0x2CBA38u, 0x2CBA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA40u;
label_2cba40:
    // 0x2cba40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cba40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cba44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba48: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CBA48u;
    {
        const bool branch_taken_0x2cba48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA48u;
        // 0x2cba4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba48) {
            ctx->pc = 0x2CBA84u;
            goto label_2cba84;
        }
    }
    ctx->pc = 0x2CBA50u;
    // 0x2cba50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cba50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2cba54: 0x0  nop
    ctx->pc = 0x2cba54u;
    // NOP
label_2cba58:
    // 0x2cba58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cba58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cba5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cba60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba64: 0xc09633c  jal         func_258CF0
    ctx->pc = 0x2CBA64u;
    SET_GPR_U32(ctx, 31, 0x2CBA6Cu);
    ctx->pc = 0x2CBA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA64u;
    // 0x2cba68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CF0u, 0x2CBA64u, 0x2CBA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA6Cu;
label_2cba6c:
    // 0x2cba6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cba6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2cba70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba74: 0x14c7fff8  bne         $a2, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CBA74u;
    {
        const bool branch_taken_0x2cba74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x2CBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA74u;
        // 0x2cba78: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba74) {
            ctx->pc = 0x2CBA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cba58;
        }
    }
    ctx->pc = 0x2CBA7Cu;
    // 0x2cba7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBA7Cu;
    {
        const bool branch_taken_0x2cba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA7Cu;
        // 0x2cba80: 0x26e32058  addiu       $v1, $s7, 0x2058 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba7c) {
            ctx->pc = 0x2CBA8Cu;
            goto label_2cba8c;
        }
    }
    ctx->pc = 0x2CBA84u;
label_2cba84:
    // 0x2cba84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cba84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2cba88: 0x26e32058  addiu       $v1, $s7, 0x2058
    ctx->pc = 0x2cba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8280));
label_2cba8c:
    // 0x2cba8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cba90: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x2cba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2cba94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cba94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cba98: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2cba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cba9c: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x2cba9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x2cbaa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CBAA0u;
    {
        const bool branch_taken_0x2cbaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAA0u;
        // 0x2cbaa4: 0xa2a80a  movz        $s5, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbaa0) {
            ctx->pc = 0x2CBAACu;
            goto label_2cbaac;
        }
    }
    ctx->pc = 0x2CBAA8u;
label_2cbaa8:
    // 0x2cbaa8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cbaa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2cbaac:
    // 0x2cbaac: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CBAACu;
    {
        const bool branch_taken_0x2cbaac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAACu;
        // 0x2cbab0: 0x8f82b59c  lw          $v0, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbaac) {
            ctx->pc = 0x2CBB00u;
            goto label_2cbb00;
        }
    }
    ctx->pc = 0x2CBAB4u;
    // 0x2cbab4: 0x8fc50ae4  lw          $a1, 0xAE4($fp)
    ctx->pc = 0x2cbab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2788)));
    // 0x2cbab8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cbab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbabc: 0xc0b179a  jal         func_2C5E68
    ctx->pc = 0x2CBABCu;
    SET_GPR_U32(ctx, 31, 0x2CBAC4u);
    ctx->pc = 0x2CBAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBABCu;
    // 0x2cbac0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E68u, 0x2CBABCu, 0x2CBAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAC4u;
label_2cbac4:
    // 0x2cbac4: 0x8e230aa4  lw          $v1, 0xAA4($s1)
    ctx->pc = 0x2cbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2724)));
    // 0x2cbac8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBAC8u;
    {
        const bool branch_taken_0x2cbac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAC8u;
        // 0x2cbacc: 0xae220ae4  sw          $v0, 0xAE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbac8) {
            ctx->pc = 0x2CBAE0u;
            goto label_2cbae0;
        }
    }
    ctx->pc = 0x2CBAD0u;
    // 0x2cbad0: 0x8e220a9c  lw          $v0, 0xA9C($s1)
    ctx->pc = 0x2cbad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2cbad4: 0xae230a9c  sw          $v1, 0xA9C($s1)
    ctx->pc = 0x2cbad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 3));
    // 0x2cbad8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBAD8u;
    {
        const bool branch_taken_0x2cbad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAD8u;
        // 0x2cbadc: 0xae220aa0  sw          $v0, 0xAA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbad8) {
            ctx->pc = 0x2CBAF0u;
            goto label_2cbaf0;
        }
    }
    ctx->pc = 0x2CBAE0u;
label_2cbae0:
    // 0x2cbae0: 0x8e230a9c  lw          $v1, 0xA9C($s1)
    ctx->pc = 0x2cbae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2cbae4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2cbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cbae8: 0xae220a9c  sw          $v0, 0xA9C($s1)
    ctx->pc = 0x2cbae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 2));
    // 0x2cbaec: 0xae230aa0  sw          $v1, 0xAA0($s1)
    ctx->pc = 0x2cbaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 3));
label_2cbaf0:
    // 0x2cbaf0: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2cbaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2cbaf4: 0xc0b2d6e  jal         func_2CB5B8
    ctx->pc = 0x2CBAF4u;
    SET_GPR_U32(ctx, 31, 0x2CBAFCu);
    ctx->pc = 0x2CBAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBAF4u;
    // 0x2cbaf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB5B8u, 0x2CBAF4u, 0x2CBAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAFCu;
label_2cbafc:
    // 0x2cbafc: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x2cbafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_2cbb00:
    // 0x2cbb00: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2cbb00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cbb04: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x2CBB04u;
    {
        const bool branch_taken_0x2cbb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB04u;
        // 0x2cbb08: 0x26e22058  addiu       $v0, $s7, 0x2058 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb04) {
            ctx->pc = 0x2CB960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb960;
        }
    }
    ctx->pc = 0x2CBB0Cu;
label_2cbb0c:
    // 0x2cbb0c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2cbb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2cbb10: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2cbb10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cbb14: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2cbb14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cbb18: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2cbb18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cbb1c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2cbb1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cbb20: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2cbb20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cbb24: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2cbb24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cbb28: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2cbb28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cbb2c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2cbb2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cbb30: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2cbb30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbb34: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB34u;
        // 0x2cbb38: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBB3Cu;
}
