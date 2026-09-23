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

// Function: particleTrailTick
// Address: 0x29ae88 - 0x29b28c
void particleTrailTick_0x29ae88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleTrailTick_0x29ae88");
#endif

    switch (ctx->pc) {
        case 0x29afc0u: goto label_29afc0;
        case 0x29b010u: goto label_29b010;
        case 0x29b088u: goto label_29b088;
        case 0x29b10cu: goto label_29b10c;
        case 0x29b1b0u: goto label_29b1b0;
        default: break;
    }

    ctx->pc = 0x29ae88u;

    // 0x29ae88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29ae88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29ae8c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29ae8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29ae90: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x29ae90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x29ae94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29ae94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae98: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x29ae98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x29ae9c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x29ae9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x29aea0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x29aea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x29aea4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x29aea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x29aea8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x29aea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29aeac: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x29aeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29aeb0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29aeb4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29aeb8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x29aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x29aebc: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x29aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x29aec0: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x29AEC0u;
    {
        const bool branch_taken_0x29aec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEC0u;
        // 0x29aec4: 0x8e430018  lw          $v1, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aec0) {
            ctx->pc = 0x29AF20u;
            goto label_29af20;
        }
    }
    ctx->pc = 0x29AEC8u;
    // 0x29aec8: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29AEC8u;
    {
        const bool branch_taken_0x29aec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aec8) {
            ctx->pc = 0x29AECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AEC8u;
            // 0x29aecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AEF0u;
            goto label_29aef0;
        }
    }
    ctx->pc = 0x29AED0u;
    // 0x29aed0: 0xc6400e90  lwc1        $f0, 0xE90($s2)
    ctx->pc = 0x29aed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aed4: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x29aed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29aed8: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x29aed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29aedc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29aedcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29aee0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x29aee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aee4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x29AEE4u;
    {
        const bool branch_taken_0x29aee4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aee4) {
            ctx->pc = 0x29AF20u;
            goto label_29af20;
        }
    }
    ctx->pc = 0x29AEECu;
    // 0x29aeec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29aeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29aef0:
    // 0x29aef0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x29aef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29aef4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x29aef4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29aef8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x29aef8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29aefc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x29aefcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29af00: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x29af00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29af04: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29af04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29af08: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29af08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29af0c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29af0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29af10: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29af10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29af14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29af14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29af18: 0x80a5ac2  j           func_296B08
    ctx->pc = 0x29AF18u;
    ctx->pc = 0x29AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF18u;
    // 0x29af1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B08u;
    particleFree_0x296b08(rdram, ctx, runtime); return;
    ctx->pc = 0x29AF20u;
label_29af20:
    // 0x29af20: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AF20u;
    {
        const bool branch_taken_0x29af20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF20u;
        // 0x29af24: 0x28620064  slti        $v0, $v1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af20) {
            ctx->pc = 0x29AF34u;
            goto label_29af34;
        }
    }
    ctx->pc = 0x29AF28u;
    // 0x29af28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29af2c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x29AF2Cu;
    {
        const bool branch_taken_0x29af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF2Cu;
        // 0x29af30: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af2c) {
            ctx->pc = 0x29AF78u;
            goto label_29af78;
        }
    }
    ctx->pc = 0x29AF34u;
label_29af34:
    // 0x29af34: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29AF34u;
    {
        const bool branch_taken_0x29af34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF34u;
        // 0x29af38: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af34) {
            ctx->pc = 0x29AF7Cu;
            goto label_29af7c;
        }
    }
    ctx->pc = 0x29AF3Cu;
    // 0x29af3c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x29af3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29af40: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x29af40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x29af44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29af44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29af48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29af48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29af4c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x29af4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29af50: 0xc6420e90  lwc1        $f2, 0xE90($s2)
    ctx->pc = 0x29af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29af54: 0x0  nop
    ctx->pc = 0x29af54u;
    // NOP
    // 0x29af58: 0x0  nop
    ctx->pc = 0x29af58u;
    // NOP
    // 0x29af5c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x29af5cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x29af60: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29af60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x29af64: 0x0  nop
    ctx->pc = 0x29af64u;
    // NOP
    // 0x29af68: 0x0  nop
    ctx->pc = 0x29af68u;
    // NOP
    // 0x29af6c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29af6cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29af70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29af70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29af74: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x29af74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_29af78:
    // 0x29af78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29af7c:
    // 0x29af7c: 0x184000b7  blez        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x29AF7Cu;
    {
        const bool branch_taken_0x29af7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF7Cu;
        // 0x29af80: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af7c) {
            ctx->pc = 0x29B25Cu;
            goto label_29b25c;
        }
    }
    ctx->pc = 0x29AF84u;
    // 0x29af84: 0x28620064  slti        $v0, $v1, 0x64
    ctx->pc = 0x29af84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x29af88: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x29AF88u;
    {
        const bool branch_taken_0x29af88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF88u;
        // 0x29af8c: 0x264503a0  addiu       $a1, $s2, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af88) {
            ctx->pc = 0x29B25Cu;
            goto label_29b25c;
        }
    }
    ctx->pc = 0x29AF90u;
    // 0x29af90: 0x264803a4  addiu       $t0, $s2, 0x3A4
    ctx->pc = 0x29af90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 932));
    // 0x29af94: 0x264a03a8  addiu       $t2, $s2, 0x3A8
    ctx->pc = 0x29af94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 936));
    // 0x29af98: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x29af98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x29af9c: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x29af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x29afa0: 0x265e0850  addiu       $fp, $s2, 0x850
    ctx->pc = 0x29afa0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 2128));
    // 0x29afa4: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x29afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x29afa8: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x29afa8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x29afac: 0x265709e0  addiu       $s7, $s2, 0x9E0
    ctx->pc = 0x29afacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 2528));
    // 0x29afb0: 0x265609e4  addiu       $s6, $s2, 0x9E4
    ctx->pc = 0x29afb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 2532));
    // 0x29afb4: 0x265509e8  addiu       $s5, $s2, 0x9E8
    ctx->pc = 0x29afb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2536));
    // 0x29afb8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x29afb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29afbc: 0x0  nop
    ctx->pc = 0x29afbcu;
    // NOP
label_29afc0:
    // 0x29afc0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x29afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29afc4: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x29afc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29afc8: 0xa00013  mtlo        $a1
    ctx->pc = 0x29afc8u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x29afcc: 0x70641000  madd        $v0, $v1, $a0
    ctx->pc = 0x29afccu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29afd0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29afd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29afd4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x29afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x29afd8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x29afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29afdc: 0x400013  mtlo        $v0
    ctx->pc = 0x29afdcu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x29afe0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x29afe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29afe4: 0x70641800  madd        $v1, $v1, $a0
    ctx->pc = 0x29afe4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29afe8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x29afe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29afec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x29afecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29aff0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x29aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29aff4: 0x600013  mtlo        $v1
    ctx->pc = 0x29aff4u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x29aff8: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x29aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29affc: 0x70441000  madd        $v0, $v0, $a0
    ctx->pc = 0x29affcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29b000: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29b000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29b004: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x29b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b008: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29B008u;
    SET_GPR_U32(ctx, 31, 0x29B010u);
    ctx->pc = 0x29B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B008u;
    // 0x29b00c: 0xe6400e90  swc1        $f0, 0xE90($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3728), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29B008u, 0x29B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B010u;
label_29b010:
    // 0x29b010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b014: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x29b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29b018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29b018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29b01c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B01Cu;
    {
        const bool branch_taken_0x29b01c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x29B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B01Cu;
        // 0x29b020: 0x3c22821  addu        $a1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b01c) {
            ctx->pc = 0x29B034u;
            goto label_29b034;
        }
    }
    ctx->pc = 0x29B024u;
    // 0x29b024: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x29b024u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b028: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29b028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29b02c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29B02Cu;
    {
        const bool branch_taken_0x29b02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B02Cu;
        // 0x29b030: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b02c) {
            ctx->pc = 0x29B050u;
            goto label_29b050;
        }
    }
    ctx->pc = 0x29B034u;
label_29b034:
    // 0x29b034: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x29b034u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x29b038: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x29b038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x29b03c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29b03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29b040: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29b040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b044: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29b044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29b048: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x29b048u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x29b04c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x29b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_29b050:
    // 0x29b050: 0x24110068  addiu       $s1, $zero, 0x68
    ctx->pc = 0x29b050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29b054: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29b054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29b058: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29b058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b05c: 0x269098c0  addiu       $s0, $s4, -0x6740
    ctx->pc = 0x29b05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940864));
    // 0x29b060: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x29b060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29b064: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29b064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29b068: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b06c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29b06cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29b070: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x29b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29b074: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29b074u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29b078: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x29b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b07c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29b07cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29b080: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29B080u;
    SET_GPR_U32(ctx, 31, 0x29B088u);
    ctx->pc = 0x29B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B080u;
    // 0x29b084: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29B080u, 0x29B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B088u;
label_29b088:
    // 0x29b088: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x29b088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29b08c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29b08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b090: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x29b090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29b094: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29b094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29b098: 0x824018  mult        $t0, $a0, $v0
    ctx->pc = 0x29b098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x29b09c: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x29b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x29b0a0: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x29b0a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29b0a4: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x29b0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x29b0a8: 0x1173821  addu        $a3, $t0, $s7
    ctx->pc = 0x29b0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
    // 0x29b0ac: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x29b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29b0b0: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B0B0u;
    {
        const bool branch_taken_0x29b0b0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x29B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B0B0u;
        // 0x29b0b4: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0b0) {
            ctx->pc = 0x29B0C4u;
            goto label_29b0c4;
        }
    }
    ctx->pc = 0x29B0B8u;
    // 0x29b0b8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x29b0b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b0bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29B0BCu;
    {
        const bool branch_taken_0x29b0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B0BCu;
        // 0x29b0c0: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0bc) {
            ctx->pc = 0x29B0DCu;
            goto label_29b0dc;
        }
    }
    ctx->pc = 0x29B0C4u;
label_29b0c4:
    // 0x29b0c4: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x29b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x29b0c8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x29b0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x29b0cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29b0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29b0d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b0d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29b0d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29b0d8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29b0d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29b0dc:
    // 0x29b0dc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29b0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29b0e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b0e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29b0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29b0e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29b0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29b0ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29b0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29b0f0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x29b0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b0f4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x29b0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b0f8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x29b0f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x29b0fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29b0fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29b100: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x29b100u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x29b104: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29B104u;
    SET_GPR_U32(ctx, 31, 0x29B10Cu);
    ctx->pc = 0x29B108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B104u;
    // 0x29b108: 0xe4e20000  swc1        $f2, 0x0($a3) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29B104u, 0x29B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B10Cu;
label_29b10c:
    // 0x29b10c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x29b10cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29b110: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x29b110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b114: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x29b114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29b118: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x29b118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29b11c: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x29b11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x29b120: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29b124: 0xa25018  mult        $t2, $a1, $v0
    ctx->pc = 0x29b124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x29b128: 0x268398c0  addiu       $v1, $s4, -0x6740
    ctx->pc = 0x29b128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940864));
    // 0x29b12c: 0x24660048  addiu       $a2, $v1, 0x48
    ctx->pc = 0x29b12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x29b130: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x29b130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x29b134: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x29b134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x29b138: 0x1564821  addu        $t1, $t2, $s6
    ctx->pc = 0x29b138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 22)));
    // 0x29b13c: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B13Cu;
    {
        const bool branch_taken_0x29b13c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x29B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B13Cu;
        // 0x29b140: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b13c) {
            ctx->pc = 0x29B150u;
            goto label_29b150;
        }
    }
    ctx->pc = 0x29B144u;
    // 0x29b144: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x29b144u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b148: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29B148u;
    {
        const bool branch_taken_0x29b148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B148u;
        // 0x29b14c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b148) {
            ctx->pc = 0x29B168u;
            goto label_29b168;
        }
    }
    ctx->pc = 0x29B150u;
label_29b150:
    // 0x29b150: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x29b150u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x29b154: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x29b154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x29b158: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29b158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29b15c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29b160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29b164: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29b164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29b168:
    // 0x29b168: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29b168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29b16c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b170: 0x24110068  addiu       $s1, $zero, 0x68
    ctx->pc = 0x29b170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29b174: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29b174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29b178: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29b178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29b17c: 0x1111018  mult        $v0, $t0, $s1
    ctx->pc = 0x29b17cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29b180: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x29b180u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29b184: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x29b184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b188: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x29b188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b18c: 0x269098c0  addiu       $s0, $s4, -0x6740
    ctx->pc = 0x29b18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940864));
    // 0x29b190: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x29b190u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x29b194: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x29b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29b198: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x29b198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29b19c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29b19cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29b1a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29b1a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29b1a4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x29b1a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29b1a8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29B1A8u;
    SET_GPR_U32(ctx, 31, 0x29B1B0u);
    ctx->pc = 0x29B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B1A8u;
    // 0x29b1ac: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29B1A8u, 0x29B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1B0u;
label_29b1b0:
    // 0x29b1b0: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x29b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29b1b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29b1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1b8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x29b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29b1bc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29b1c0: 0x824018  mult        $t0, $a0, $v0
    ctx->pc = 0x29b1c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x29b1c4: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x29b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x29b1c8: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x29b1c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29b1cc: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x29b1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x29b1d0: 0x1153821  addu        $a3, $t0, $s5
    ctx->pc = 0x29b1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 21)));
    // 0x29b1d4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x29b1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29b1d8: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B1D8u;
    {
        const bool branch_taken_0x29b1d8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x29B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B1D8u;
        // 0x29b1dc: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1d8) {
            ctx->pc = 0x29B1ECu;
            goto label_29b1ec;
        }
    }
    ctx->pc = 0x29B1E0u;
    // 0x29b1e0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29b1e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b1e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29B1E4u;
    {
        const bool branch_taken_0x29b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B1E4u;
        // 0x29b1e8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1e4) {
            ctx->pc = 0x29B204u;
            goto label_29b204;
        }
    }
    ctx->pc = 0x29B1ECu;
label_29b1ec:
    // 0x29b1ec: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x29b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x29b1f0: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x29b1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x29b1f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29b1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29b1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b1fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29b1fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29b200: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29b200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29b204:
    // 0x29b204: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29b204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29b208: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b20c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29b20cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29b210: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29b210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29b214: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29b214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29b218: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x29b218u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29b21c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x29b21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b220: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x29b220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b224: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x29b224u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b228: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x29b228u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x29b22c: 0x26a182a  slt         $v1, $s3, $t2
    ctx->pc = 0x29b22cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x29b230: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29b230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29b234: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29b234u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29b238: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x29b238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x29b23c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x29b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29b240: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29b244: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B244u;
    {
        const bool branch_taken_0x29b244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B244u;
        // 0x29b248: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b244) {
            ctx->pc = 0x29B25Cu;
            goto label_29b25c;
        }
    }
    ctx->pc = 0x29B24Cu;
    // 0x29b24c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29b24cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b250: 0x28620064  slti        $v0, $v1, 0x64
    ctx->pc = 0x29b250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x29b254: 0x1440ff5a  bnez        $v0, . + 4 + (-0xA6 << 2)
    ctx->pc = 0x29B254u;
    {
        const bool branch_taken_0x29b254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B254u;
        // 0x29b258: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b254) {
            ctx->pc = 0x29AFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29afc0;
        }
    }
    ctx->pc = 0x29B25Cu;
label_29b25c:
    // 0x29b25c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x29b25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29b260: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x29b260u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29b264: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x29b264u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29b268: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x29b268u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29b26c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x29b26cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b270: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29b270u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b274: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29b274u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b278: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29b278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b27c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29b27cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b280: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29b280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b284: 0x3e00008  jr          $ra
    ctx->pc = 0x29B284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B284u;
        // 0x29b288: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B28Cu;
}
