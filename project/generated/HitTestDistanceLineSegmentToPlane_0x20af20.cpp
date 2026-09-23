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

// Function: HitTestDistanceLineSegmentToPlane
// Address: 0x20af20 - 0x20b1a8
void HitTestDistanceLineSegmentToPlane_0x20af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitTestDistanceLineSegmentToPlane_0x20af20");
#endif

    ctx->pc = 0x20af20u;

    // 0x20af20: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x20af20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20af24: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20af24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20af28: 0xc48c0004  lwc1        $f12, 0x4($a0)
    ctx->pc = 0x20af28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20af2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20af2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af30: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x20af30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20af34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20af34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af38: 0xc48a0000  lwc1        $f10, 0x0($a0)
    ctx->pc = 0x20af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x20af3c: 0x460560c1  sub.s       $f3, $f12, $f5
    ctx->pc = 0x20af3cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x20af40: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x20af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20af44: 0x46005101  sub.s       $f4, $f10, $f0
    ctx->pc = 0x20af44u;
    ctx->f[4] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x20af48: 0xc4e70004  lwc1        $f7, 0x4($a3)
    ctx->pc = 0x20af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20af4c: 0xc48b0008  lwc1        $f11, 0x8($a0)
    ctx->pc = 0x20af4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20af50: 0xc4e80000  lwc1        $f8, 0x0($a3)
    ctx->pc = 0x20af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x20af54: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x20af54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x20af58: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x20af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x20af5c: 0x46065841  sub.s       $f1, $f11, $f6
    ctx->pc = 0x20af5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[11], ctx->f[6]);
    // 0x20af60: 0xc4ae0004  lwc1        $f14, 0x4($a1)
    ctx->pc = 0x20af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20af64: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x20af64u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x20af68: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x20af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20af6c: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x20af6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x20af70: 0x46057141  sub.s       $f5, $f14, $f5
    ctx->pc = 0x20af70u;
    ctx->f[5] = FPU_SUB_S(ctx->f[14], ctx->f[5]);
    // 0x20af74: 0xc4ad0008  lwc1        $f13, 0x8($a1)
    ctx->pc = 0x20af74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20af78: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20af78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x20af7c: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x20af7cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x20af80: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x20af80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20af84: 0x46066981  sub.s       $f6, $f13, $f6
    ctx->pc = 0x20af84u;
    ctx->f[6] = FPU_SUB_S(ctx->f[13], ctx->f[6]);
    // 0x20af88: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x20af88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20af8c: 0x460729c2  mul.s       $f7, $f5, $f7
    ctx->pc = 0x20af8cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x20af90: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x20af90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x20af94: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x20af94u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x20af98: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x20af98u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20af9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20af9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20afa0: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x20afa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x20afa4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x20afa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x20afa8: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x20afa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20afac: 0x0  nop
    ctx->pc = 0x20afacu;
    // NOP
    // 0x20afb0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x20AFB0u;
    {
        const bool branch_taken_0x20afb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFB0u;
        // 0x20afb4: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20afb0) {
            ctx->pc = 0x20AFDCu;
            goto label_20afdc;
        }
    }
    ctx->pc = 0x20AFB8u;
    // 0x20afb8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x20afb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20afbc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20AFBCu;
    {
        const bool branch_taken_0x20afbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20afbc) {
            ctx->pc = 0x20AFDCu;
            goto label_20afdc;
        }
    }
    ctx->pc = 0x20AFC4u;
    // 0x20afc4: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x20afc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20afc8: 0x0  nop
    ctx->pc = 0x20afc8u;
    // NOP
    // 0x20afcc: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x20AFCCu;
    {
        const bool branch_taken_0x20afcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20afcc) {
            ctx->pc = 0x20AFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AFCCu;
            // 0x20afd0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B00Cu;
            goto label_20b00c;
        }
    }
    ctx->pc = 0x20AFD4u;
    // 0x20afd4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20AFD4u;
    {
        const bool branch_taken_0x20afd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFD4u;
        // 0x20afd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20afd4) {
            ctx->pc = 0x20B00Cu;
            goto label_20b00c;
        }
    }
    ctx->pc = 0x20AFDCu;
label_20afdc:
    // 0x20afdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20afdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20afe0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x20afe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20afe4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x20AFE4u;
    {
        const bool branch_taken_0x20afe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20afe4) {
            ctx->pc = 0x20B00Cu;
            goto label_20b00c;
        }
    }
    ctx->pc = 0x20AFECu;
    // 0x20afec: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x20afecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20aff0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x20AFF0u;
    {
        const bool branch_taken_0x20aff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20aff0) {
            ctx->pc = 0x20B00Cu;
            goto label_20b00c;
        }
    }
    ctx->pc = 0x20AFF8u;
    // 0x20aff8: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x20aff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20affc: 0x0  nop
    ctx->pc = 0x20affcu;
    // NOP
    // 0x20b000: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x20B000u;
    {
        const bool branch_taken_0x20b000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b000) {
            ctx->pc = 0x20B004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B000u;
            // 0x20b004: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B00Cu;
            goto label_20b00c;
        }
    }
    ctx->pc = 0x20B008u;
    // 0x20b008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b00c:
    // 0x20b00c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x20B00Cu;
    {
        const bool branch_taken_0x20b00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b00c) {
            ctx->pc = 0x20B078u;
            goto label_20b078;
        }
    }
    ctx->pc = 0x20B014u;
    // 0x20b014: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x20B014u;
    {
        const bool branch_taken_0x20b014 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b014) {
            ctx->pc = 0x20B050u;
            goto label_20b050;
        }
    }
    ctx->pc = 0x20B01Cu;
    // 0x20b01c: 0x46082002  mul.s       $f0, $f4, $f8
    ctx->pc = 0x20b01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x20b020: 0x46005001  sub.s       $f0, $f10, $f0
    ctx->pc = 0x20b020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x20b024: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x20b024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x20b028: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x20b028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b02c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x20b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b030: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x20b030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x20b034: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20b034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20b038: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x20b038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x20b03c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x20b03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b040: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x20b040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b044: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x20b044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x20b048: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20b048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20b04c: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x20b04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_20b050:
    // 0x20b050: 0x51000053  beql        $t0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x20B050u;
    {
        const bool branch_taken_0x20b050 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b050) {
            ctx->pc = 0x20B054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B050u;
            // 0x20b054: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B1A0u;
            goto label_20b1a0;
        }
    }
    ctx->pc = 0x20B058u;
    // 0x20b058: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x20b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b05c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x20b05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x20b060: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x20b060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b064: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x20b064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x20b068: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x20b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b06c: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x20b06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x20b070: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x20B070u;
    {
        const bool branch_taken_0x20b070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B070u;
        // 0x20b074: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b070) {
            ctx->pc = 0x20B1A0u;
            goto label_20b1a0;
        }
    }
    ctx->pc = 0x20B078u;
label_20b078:
    // 0x20b078: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20B078u;
    {
        const bool branch_taken_0x20b078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b078) {
            ctx->pc = 0x20B0E4u;
            goto label_20b0e4;
        }
    }
    ctx->pc = 0x20B080u;
    // 0x20b080: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x20B080u;
    {
        const bool branch_taken_0x20b080 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b080) {
            ctx->pc = 0x20B0BCu;
            goto label_20b0bc;
        }
    }
    ctx->pc = 0x20B088u;
    // 0x20b088: 0x46081002  mul.s       $f0, $f2, $f8
    ctx->pc = 0x20b088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x20b08c: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x20b08cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x20b090: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x20b090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x20b094: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x20b094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b098: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x20b098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b09c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x20b09cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x20b0a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20b0a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20b0a4: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x20b0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x20b0a8: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x20b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b0ac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x20b0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b0b0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x20b0b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x20b0b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20b0b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20b0b8: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x20b0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_20b0bc:
    // 0x20b0bc: 0x51000038  beql        $t0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x20B0BCu;
    {
        const bool branch_taken_0x20b0bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b0bc) {
            ctx->pc = 0x20B0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B0BCu;
            // 0x20b0c0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B1A0u;
            goto label_20b1a0;
        }
    }
    ctx->pc = 0x20B0C4u;
    // 0x20b0c4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x20b0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b0c8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x20b0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x20b0cc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x20b0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b0d0: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x20b0d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x20b0d4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x20b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b0d8: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x20b0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x20b0dc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x20B0DCu;
    {
        const bool branch_taken_0x20b0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0DCu;
        // 0x20b0e0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0dc) {
            ctx->pc = 0x20B1A0u;
            goto label_20b1a0;
        }
    }
    ctx->pc = 0x20B0E4u;
label_20b0e4:
    // 0x20b0e4: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B0E4u;
    {
        const bool branch_taken_0x20b0e4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b0e4) {
            ctx->pc = 0x20B0F4u;
            goto label_20b0f4;
        }
    }
    ctx->pc = 0x20B0ECu;
    // 0x20b0ec: 0x1120002b  beqz        $t1, . + 4 + (0x2B << 2)
    ctx->pc = 0x20B0ECu;
    {
        const bool branch_taken_0x20b0ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b0ec) {
            ctx->pc = 0x20B19Cu;
            goto label_20b19c;
        }
    }
    ctx->pc = 0x20B0F4u;
label_20b0f4:
    // 0x20b0f4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x20b0f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20b0f8: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x20b0f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
    // 0x20b0fc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x20b0fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b100: 0x0  nop
    ctx->pc = 0x20b100u;
    // NOP
    // 0x20b104: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20B104u;
    {
        const bool branch_taken_0x20b104 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b104) {
            ctx->pc = 0x20B108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B104u;
            // 0x20b108: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B10Cu;
            goto label_20b10c;
        }
    }
    ctx->pc = 0x20B10Cu;
label_20b10c:
    // 0x20b10c: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x20b10cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
    // 0x20b110: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x20b110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b114: 0x0  nop
    ctx->pc = 0x20b114u;
    // NOP
    // 0x20b118: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20B118u;
    {
        const bool branch_taken_0x20b118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b118) {
            ctx->pc = 0x20B11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B118u;
            // 0x20b11c: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B120u;
            goto label_20b120;
        }
    }
    ctx->pc = 0x20B120u;
label_20b120:
    // 0x20b120: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x20b120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b124: 0x0  nop
    ctx->pc = 0x20b124u;
    // NOP
    // 0x20b128: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x20B128u;
    {
        const bool branch_taken_0x20b128 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b128) {
            ctx->pc = 0x20B12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B128u;
            // 0x20b12c: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B134u;
            goto label_20b134;
        }
    }
    ctx->pc = 0x20B130u;
    // 0x20b130: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20b130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_20b134:
    // 0x20b134: 0x0  nop
    ctx->pc = 0x20b134u;
    // NOP
    // 0x20b138: 0x0  nop
    ctx->pc = 0x20b138u;
    // NOP
    // 0x20b13c: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x20b13cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x20b140: 0x460a4801  sub.s       $f0, $f9, $f10
    ctx->pc = 0x20b140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[10]);
    // 0x20b144: 0x460c7041  sub.s       $f1, $f14, $f12
    ctx->pc = 0x20b144u;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x20b148: 0x460b6881  sub.s       $f2, $f13, $f11
    ctx->pc = 0x20b148u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[11]);
    // 0x20b14c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x20b14cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x20b150: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x20b150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x20b154: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x20b154u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x20b158: 0x46005100  add.s       $f4, $f10, $f0
    ctx->pc = 0x20b158u;
    ctx->f[4] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x20b15c: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x20b15cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x20b160: 0x46025800  add.s       $f0, $f11, $f2
    ctx->pc = 0x20b160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[2]);
    // 0x20b164: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x20b164u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20b168: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x20b168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20b16c: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B16Cu;
    {
        const bool branch_taken_0x20b16c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B16Cu;
        // 0x20b170: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b16c) {
            ctx->pc = 0x20B180u;
            goto label_20b180;
        }
    }
    ctx->pc = 0x20B174u;
    // 0x20b174: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x20b174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x20b178: 0xe5240000  swc1        $f4, 0x0($t1)
    ctx->pc = 0x20b178u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x20b17c: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x20b17cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_20b180:
    // 0x20b180: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B180u;
    {
        const bool branch_taken_0x20b180 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B180u;
        // 0x20b184: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b180) {
            ctx->pc = 0x20B19Cu;
            goto label_20b19c;
        }
    }
    ctx->pc = 0x20B188u;
    // 0x20b188: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x20b188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20b18c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x20b18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b190: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x20b190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x20b194: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x20b194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x20b198: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x20b198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_20b19c:
    // 0x20b19c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b19cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20b1a0:
    // 0x20b1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x20B1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1A0u;
        // 0x20b1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B1A8u;
}
