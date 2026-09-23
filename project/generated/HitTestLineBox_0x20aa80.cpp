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

// Function: HitTestLineBox
// Address: 0x20aa80 - 0x20acec
void HitTestLineBox_0x20aa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitTestLineBox_0x20aa80");
#endif

    switch (ctx->pc) {
        case 0x20aab0u: goto label_20aab0;
        case 0x20ab58u: goto label_20ab58;
        case 0x20abc0u: goto label_20abc0;
        case 0x20ac28u: goto label_20ac28;
        default: break;
    }

    ctx->pc = 0x20aa80u;

    // 0x20aa80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20aa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20aa84: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x20aa84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aa88: 0x27ae0030  addiu       $t6, $sp, 0x30
    ctx->pc = 0x20aa88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20aa8c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x20aa8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aa90: 0x108700b  movn        $t6, $t0, $t0
    ctx->pc = 0x20aa90u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 8));
    // 0x20aa94: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x20aa94u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20aa98: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x20aa98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa9c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x20aa9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aaa0: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x20aaa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aaa4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x20aaa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aaa8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x20aaa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20aaac: 0x0  nop
    ctx->pc = 0x20aaacu;
    // NOP
label_20aab0:
    // 0x20aab0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20aab4: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x20aab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20aab8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20aab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20aabc: 0x0  nop
    ctx->pc = 0x20aabcu;
    // NOP
    // 0x20aac0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x20AAC0u;
    {
        const bool branch_taken_0x20aac0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20aac0) {
            ctx->pc = 0x20AAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AAC0u;
            // 0x20aac4: 0xc5600000  lwc1        $f0, 0x0($t3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AAD8u;
            goto label_20aad8;
        }
    }
    ctx->pc = 0x20AAC8u;
    // 0x20aac8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20aac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x20aacc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x20aaccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aad0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20AAD0u;
    {
        const bool branch_taken_0x20aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAD0u;
        // 0x20aad4: 0xac4f0000  sw          $t7, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aad0) {
            ctx->pc = 0x20AAF4u;
            goto label_20aaf4;
        }
    }
    ctx->pc = 0x20AAD8u;
label_20aad8:
    // 0x20aad8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20aad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20aadc: 0x0  nop
    ctx->pc = 0x20aadcu;
    // NOP
    // 0x20aae0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x20AAE0u;
    {
        const bool branch_taken_0x20aae0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20aae0) {
            ctx->pc = 0x20AAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AAE0u;
            // 0x20aae4: 0xac4d0000  sw          $t5, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AAF4u;
            goto label_20aaf4;
        }
    }
    ctx->pc = 0x20AAE8u;
    // 0x20aae8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20aae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x20aaec: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x20aaecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aaf0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20aaf4:
    // 0x20aaf4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20aaf8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x20aaf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x20aafc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x20aafcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x20ab00: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x20ab00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x20ab04: 0x501ffea  bgez        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x20AB04u;
    {
        const bool branch_taken_0x20ab04 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x20AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB04u;
        // 0x20ab08: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab04) {
            ctx->pc = 0x20AAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20aab0;
        }
    }
    ctx->pc = 0x20AB0Cu;
    // 0x20ab0c: 0x11800008  beqz        $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x20AB0Cu;
    {
        const bool branch_taken_0x20ab0c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB0Cu;
        // 0x20ab10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab0c) {
            ctx->pc = 0x20AB30u;
            goto label_20ab30;
        }
    }
    ctx->pc = 0x20AB14u;
    // 0x20ab14: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x20ab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ab18: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x20ab18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x20ab1c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x20ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ab20: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x20ab20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x20ab24: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x20ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ab28: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x20AB28u;
    {
        const bool branch_taken_0x20ab28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB28u;
        // 0x20ab2c: 0xe5c00008  swc1        $f0, 0x8($t6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab28) {
            ctx->pc = 0x20ACE4u;
            goto label_20ace4;
        }
    }
    ctx->pc = 0x20AB30u;
label_20ab30:
    // 0x20ab30: 0x27ac0010  addiu       $t4, $sp, 0x10
    ctx->pc = 0x20ab30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20ab34: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x20ab34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x20ab38: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20ab38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x20ab3c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20ab3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20ab40: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x20ab40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ab44: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x20ab44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab48: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x20ab48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab4c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x20ab4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab50: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x20ab50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab54: 0x27ad001c  addiu       $t5, $sp, 0x1C
    ctx->pc = 0x20ab54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_20ab58:
    // 0x20ab58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ab5c: 0x504f000d  beql        $v0, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x20AB5Cu;
    {
        const bool branch_taken_0x20ab5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x20ab5c) {
            ctx->pc = 0x20AB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AB5Cu;
            // 0x20ab60: 0xe5030000  swc1        $f3, 0x0($t0) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AB94u;
            goto label_20ab94;
        }
    }
    ctx->pc = 0x20AB64u;
    // 0x20ab64: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x20ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ab68: 0x46041032  c.eq.s      $f2, $f4
    ctx->pc = 0x20ab68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ab6c: 0x0  nop
    ctx->pc = 0x20ab6cu;
    // NOP
    // 0x20ab70: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x20AB70u;
    {
        const bool branch_taken_0x20ab70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ab70) {
            ctx->pc = 0x20AB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AB70u;
            // 0x20ab74: 0xe5030000  swc1        $f3, 0x0($t0) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AB94u;
            goto label_20ab94;
        }
    }
    ctx->pc = 0x20AB78u;
    // 0x20ab78: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x20ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ab7c: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x20ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ab80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20ab80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20ab84: 0x0  nop
    ctx->pc = 0x20ab84u;
    // NOP
    // 0x20ab88: 0x0  nop
    ctx->pc = 0x20ab88u;
    // NOP
    // 0x20ab8c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x20ab8cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x20ab90: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x20ab90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_20ab94:
    // 0x20ab94: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x20ab94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x20ab98: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x20ab98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x20ab9c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x20ab9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x20aba0: 0x10d102a  slt         $v0, $t0, $t5
    ctx->pc = 0x20aba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x20aba4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x20ABA4u;
    {
        const bool branch_taken_0x20aba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABA4u;
        // 0x20aba8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aba4) {
            ctx->pc = 0x20AB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ab58;
        }
    }
    ctx->pc = 0x20ABACu;
    // 0x20abac: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x20abacu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20abb0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20abb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20abb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20abb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20abb8: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x20abb8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20abbc: 0x25830004  addiu       $v1, $t4, 0x4
    ctx->pc = 0x20abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_20abc0:
    // 0x20abc0: 0x16a1021  addu        $v0, $t3, $t2
    ctx->pc = 0x20abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x20abc4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20abc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20abc8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20abc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20abcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20abccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20abd0: 0x0  nop
    ctx->pc = 0x20abd0u;
    // NOP
    // 0x20abd4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x20ABD4u;
    {
        const bool branch_taken_0x20abd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20abd4) {
            ctx->pc = 0x20ABD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ABD4u;
            // 0x20abd8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ABE8u;
            goto label_20abe8;
        }
    }
    ctx->pc = 0x20ABDCu;
    // 0x20abdc: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x20abdcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20abe0: 0x85080  sll         $t2, $t0, 2
    ctx->pc = 0x20abe0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x20abe4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20abe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_20abe8:
    // 0x20abe8: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x20abe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20abec: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20ABECu;
    {
        const bool branch_taken_0x20abec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABECu;
        // 0x20abf0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abec) {
            ctx->pc = 0x20ABC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20abc0;
        }
    }
    ctx->pc = 0x20ABF4u;
    // 0x20abf4: 0x18a1021  addu        $v0, $t4, $t2
    ctx->pc = 0x20abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x20abf8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20abf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20abfc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ac00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20ac00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ac04: 0x0  nop
    ctx->pc = 0x20ac04u;
    // NOP
    // 0x20ac08: 0x45030036  bc1tl       . + 4 + (0x36 << 2)
    ctx->pc = 0x20AC08u;
    {
        const bool branch_taken_0x20ac08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ac08) {
            ctx->pc = 0x20AC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AC08u;
            // 0x20ac0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ACE4u;
            goto label_20ace4;
        }
    }
    ctx->pc = 0x20AC10u;
    // 0x20ac10: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x20ac10u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac14: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x20ac14u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x20ac18: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x20ac18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20ac1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac20: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x20ac20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac24: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x20ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20ac28:
    // 0x20ac28: 0x51a80013  beql        $t5, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20AC28u;
    {
        const bool branch_taken_0x20ac28 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 8));
        if (branch_taken_0x20ac28) {
            ctx->pc = 0x20AC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AC28u;
            // 0x20ac2c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AC78u;
            goto label_20ac78;
        }
    }
    ctx->pc = 0x20AC30u;
    // 0x20ac30: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x20ac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ac34: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x20ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ac38: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x20ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ac3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20ac3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20ac40: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x20ac40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x20ac44: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x20ac44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x20ac48: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x20ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ac4c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20ac4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ac50: 0x0  nop
    ctx->pc = 0x20ac50u;
    // NOP
    // 0x20ac54: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x20AC54u;
    {
        const bool branch_taken_0x20ac54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC54u;
        // 0x20ac58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac54) {
            ctx->pc = 0x20ACE4u;
            goto label_20ace4;
        }
    }
    ctx->pc = 0x20AC5Cu;
    // 0x20ac5c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x20ac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ac60: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20ac60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ac64: 0x0  nop
    ctx->pc = 0x20ac64u;
    // NOP
    // 0x20ac68: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x20AC68u;
    {
        const bool branch_taken_0x20ac68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ac68) {
            ctx->pc = 0x20AC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AC68u;
            // 0x20ac6c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ACBCu;
            goto label_20acbc;
        }
    }
    ctx->pc = 0x20AC70u;
    // 0x20ac70: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20AC70u;
    {
        const bool branch_taken_0x20ac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ac70) {
            ctx->pc = 0x20ACE4u;
            goto label_20ace4;
        }
    }
    ctx->pc = 0x20AC78u;
label_20ac78:
    // 0x20ac78: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x20AC78u;
    {
        const bool branch_taken_0x20ac78 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC78u;
        // 0x20ac7c: 0xe5400000  swc1        $f0, 0x0($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac78) {
            ctx->pc = 0x20ACB8u;
            goto label_20acb8;
        }
    }
    ctx->pc = 0x20AC80u;
    // 0x20ac80: 0xe5230008  swc1        $f3, 0x8($t1)
    ctx->pc = 0x20ac80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x20ac84: 0xe5230004  swc1        $f3, 0x4($t1)
    ctx->pc = 0x20ac84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x20ac88: 0xe5230000  swc1        $f3, 0x0($t1)
    ctx->pc = 0x20ac88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x20ac8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20ac8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20ac90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20ac90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20ac94: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ac98: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x20ac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ac9c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20ac9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20aca0: 0x0  nop
    ctx->pc = 0x20aca0u;
    // NOP
    // 0x20aca4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x20ACA4u;
    {
        const bool branch_taken_0x20aca4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20aca4) {
            ctx->pc = 0x20ACA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ACA4u;
            // 0x20aca8: 0xe5620000  swc1        $f2, 0x0($t3) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ACB8u;
            goto label_20acb8;
        }
    }
    ctx->pc = 0x20ACACu;
    // 0x20acac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20acacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x20acb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20acb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20acb4: 0xe5620000  swc1        $f2, 0x0($t3)
    ctx->pc = 0x20acb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_20acb8:
    // 0x20acb8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20acb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_20acbc:
    // 0x20acbc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x20acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x20acc0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x20acc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x20acc4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x20acc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x20acc8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x20acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x20accc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x20acccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x20acd0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x20acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x20acd4: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x20acd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20acd8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x20ACD8u;
    {
        const bool branch_taken_0x20acd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACD8u;
        // 0x20acdc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acd8) {
            ctx->pc = 0x20AC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ac28;
        }
    }
    ctx->pc = 0x20ACE0u;
    // 0x20ace0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ace4:
    // 0x20ace4: 0x3e00008  jr          $ra
    ctx->pc = 0x20ACE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACE4u;
        // 0x20ace8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ACE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ACECu;
}
