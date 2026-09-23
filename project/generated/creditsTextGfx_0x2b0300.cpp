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

// Function: creditsTextGfx
// Address: 0x2b0300 - 0x2b04f8
void creditsTextGfx_0x2b0300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsTextGfx_0x2b0300");
#endif

    switch (ctx->pc) {
        case 0x2b0334u: goto label_2b0334;
        case 0x2b03a0u: goto label_2b03a0;
        case 0x2b03c4u: goto label_2b03c4;
        case 0x2b0420u: goto label_2b0420;
        case 0x2b0434u: goto label_2b0434;
        case 0x2b0450u: goto label_2b0450;
        case 0x2b0468u: goto label_2b0468;
        case 0x2b0490u: goto label_2b0490;
        case 0x2b04acu: goto label_2b04ac;
        default: break;
    }

    ctx->pc = 0x2b0300u;

    // 0x2b0300: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b0300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b0304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b0304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0308: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b0308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b030c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2b030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2b0310: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b0310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b0314: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b0314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b0318: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b0318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b031c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b0320: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b0320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b0324: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b0324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b0328: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b0328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b032c: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2B032Cu;
    SET_GPR_U32(ctx, 31, 0x2B0334u);
    ctx->pc = 0x2B0330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B032Cu;
    // 0x2b0330: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2B032Cu, 0x2B0334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0334u;
label_2b0334:
    // 0x2b0334: 0xc781b360  lwc1        $f1, -0x4CA0($gp)
    ctx->pc = 0x2b0334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0338: 0xc780b364  lwc1        $f0, -0x4C9C($gp)
    ctx->pc = 0x2b0338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b033c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b033cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0340: 0x0  nop
    ctx->pc = 0x2b0340u;
    // NOP
    // 0x2b0344: 0x45010061  bc1t        . + 4 + (0x61 << 2)
    ctx->pc = 0x2B0344u;
    {
        const bool branch_taken_0x2b0344 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0344u;
        // 0x2b0348: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0344) {
            ctx->pc = 0x2B04CCu;
            goto label_2b04cc;
        }
    }
    ctx->pc = 0x2B034Cu;
    // 0x2b034c: 0x8f84b354  lw          $a0, -0x4CAC($gp)
    ctx->pc = 0x2b034cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947668)));
    // 0x2b0350: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2b0350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2b0354: 0xc780b35c  lwc1        $f0, -0x4CA4($gp)
    ctx->pc = 0x2b0354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0358: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2b0358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2b035c: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x2b035cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2b0360: 0x2465d850  addiu       $a1, $v1, -0x27B0
    ctx->pc = 0x2b0360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957136));
    // 0x2b0364: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b0368: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2b0368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b036c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b0370: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2b0370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2b0374: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2b0374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b0378: 0x10640054  beq         $v1, $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2B0378u;
    {
        const bool branch_taken_0x2b0378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0378u;
        // 0x2b037c: 0x3c02002f  lui         $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0378) {
            ctx->pc = 0x2B04CCu;
            goto label_2b04cc;
        }
    }
    ctx->pc = 0x2B0380u;
    // 0x2b0380: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2b0380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0384: 0x245e2c18  addiu       $fp, $v0, 0x2C18
    ctx->pc = 0x2b0384u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x2b0388: 0x24b60004  addiu       $s6, $a1, 0x4
    ctx->pc = 0x2b0388u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2b038c: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x2b038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2b0390: 0x24b70008  addiu       $s7, $a1, 0x8
    ctx->pc = 0x2b0390u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2b0394: 0x459821  addu        $s3, $v0, $a1
    ctx->pc = 0x2b0394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b0398: 0xf6a021  addu        $s4, $a3, $s6
    ctx->pc = 0x2b0398u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    // 0x2b039c: 0x2458821  addu        $s1, $s2, $a1
    ctx->pc = 0x2b039cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_2b03a0:
    // 0x2b03a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b03a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B03A4u;
    {
        const bool branch_taken_0x2b03a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03A4u;
        // 0x2b03a8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03a4) {
            ctx->pc = 0x2B03BCu;
            goto label_2b03bc;
        }
    }
    ctx->pc = 0x2B03ACu;
    // 0x2b03ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b03acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b03b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b03b4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2B03B4u;
    {
        const bool branch_taken_0x2b03b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03B4u;
        // 0x2b03b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03b4) {
            ctx->pc = 0x2B04ACu;
            goto label_2b04ac;
        }
    }
    ctx->pc = 0x2B03BCu;
label_2b03bc:
    // 0x2b03bc: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B03BCu;
    SET_GPR_U32(ctx, 31, 0x2B03C4u);
    ctx->pc = 0x2B03C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B03BCu;
    // 0x2b03c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B03BCu, 0x2B03C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B03C4u;
label_2b03c4:
    // 0x2b03c4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2b03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2b03c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b03c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b03cc: 0x86240010  lh          $a0, 0x10($s1)
    ctx->pc = 0x2b03ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b03d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b03d4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x2b03d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b03d8: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x2b03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2b03dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b03dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b03e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b03e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b03e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b03e8: 0x10c50010  beq         $a2, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B03E8u;
    {
        const bool branch_taken_0x2b03e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03E8u;
        // 0x2b03ec: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03e8) {
            ctx->pc = 0x2B042Cu;
            goto label_2b042c;
        }
    }
    ctx->pc = 0x2B03F0u;
    // 0x2b03f0: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x2b03f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b03f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B03F4u;
    {
        const bool branch_taken_0x2b03f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03F4u;
        // 0x2b03f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03f4) {
            ctx->pc = 0x2B040Cu;
            goto label_2b040c;
        }
    }
    ctx->pc = 0x2B03FCu;
    // 0x2b03fc: 0x50c20012  beql        $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B03FCu;
    {
        const bool branch_taken_0x2b03fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b03fc) {
            ctx->pc = 0x2B0400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B03FCu;
            // 0x2b0400: 0x24150040  addiu       $s5, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0448u;
            goto label_2b0448;
        }
    }
    ctx->pc = 0x2B0404u;
    // 0x2b0404: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B0404u;
    {
        const bool branch_taken_0x2b0404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0404) {
            ctx->pc = 0x2B0448u;
            goto label_2b0448;
        }
    }
    ctx->pc = 0x2B040Cu;
label_2b040c:
    // 0x2b040c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b0410: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B0410u;
    {
        const bool branch_taken_0x2b0410 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0410) {
            ctx->pc = 0x2B0448u;
            goto label_2b0448;
        }
    }
    ctx->pc = 0x2B0418u;
    // 0x2b0418: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2B0418u;
    SET_GPR_U32(ctx, 31, 0x2B0420u);
    ctx->pc = 0x2B041Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0418u;
    // 0x2b041c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2B0418u, 0x2B0420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0420u;
label_2b0420:
    // 0x2b0420: 0x24030244  addiu       $v1, $zero, 0x244
    ctx->pc = 0x2b0420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
    // 0x2b0424: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0424u;
    {
        const bool branch_taken_0x2b0424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0424u;
        // 0x2b0428: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0424) {
            ctx->pc = 0x2B0448u;
            goto label_2b0448;
        }
    }
    ctx->pc = 0x2B042Cu;
label_2b042c:
    // 0x2b042c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2B042Cu;
    SET_GPR_U32(ctx, 31, 0x2B0434u);
    ctx->pc = 0x2B0430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B042Cu;
    // 0x2b0430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2B042Cu, 0x2B0434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0434u;
label_2b0434:
    // 0x2b0434: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2b0434u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2b0438: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x2b0438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2b043c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b043cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0440: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2b0440u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2b0444: 0x83a823  subu        $s5, $a0, $v1
    ctx->pc = 0x2b0444u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2b0448:
    // 0x2b0448: 0xc080a98  jal         func_202A60
    ctx->pc = 0x2B0448u;
    SET_GPR_U32(ctx, 31, 0x2B0450u);
    ctx->pc = 0x2B044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0448u;
    // 0x2b044c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A60u, 0x2B0448u, 0x2B0450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0450u;
label_2b0450:
    // 0x2b0450: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2b0450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2b0454: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2b0454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b0458: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b0458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b045c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2b045cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2b0460: 0xc0ac03a  jal         func_2B00E8
    ctx->pc = 0x2B0460u;
    SET_GPR_U32(ctx, 31, 0x2B0468u);
    ctx->pc = 0x2B0464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0460u;
    // 0x2b0464: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B00E8u, 0x2B0460u, 0x2B0468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0468u;
label_2b0468:
    // 0x2b0468: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x2b0468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2b046c: 0x2571021  addu        $v0, $s2, $s7
    ctx->pc = 0x2b046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x2b0470: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2b0470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0474: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0474u;
    {
        const bool branch_taken_0x2b0474 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0474u;
        // 0x2b0478: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0474) {
            ctx->pc = 0x2B0498u;
            goto label_2b0498;
        }
    }
    ctx->pc = 0x2B047Cu;
    // 0x2b047c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2b047cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b0480: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b0480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0484: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0488: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x2B0488u;
    SET_GPR_U32(ctx, 31, 0x2B0490u);
    ctx->pc = 0x2B048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0488u;
    // 0x2b048c: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x2B0488u, 0x2B0490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0490u;
label_2b0490:
    // 0x2b0490: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0490u;
    {
        const bool branch_taken_0x2b0490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0490u;
        // 0x2b0494: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0490) {
            ctx->pc = 0x2B04B0u;
            goto label_2b04b0;
        }
    }
    ctx->pc = 0x2B0498u;
label_2b0498:
    // 0x2b0498: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x2b0498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x2b049c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2b049cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b04a0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2b04a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b04a4: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2B04A4u;
    SET_GPR_U32(ctx, 31, 0x2B04ACu);
    ctx->pc = 0x2B04A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B04A4u;
    // 0x2b04a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2B04A4u, 0x2B04ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B04ACu;
label_2b04ac:
    // 0x2b04ac: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x2b04acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_2b04b0:
    // 0x2b04b0: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x2b04b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x2b04b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b04b8: 0x2652001c  addiu       $s2, $s2, 0x1C
    ctx->pc = 0x2b04b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2b04bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b04bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b04c0: 0x1462ffb7  bne         $v1, $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2B04C0u;
    {
        const bool branch_taken_0x2b04c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04C0u;
        // 0x2b04c4: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04c0) {
            ctx->pc = 0x2B03A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b03a0;
        }
    }
    ctx->pc = 0x2B04C8u;
    // 0x2b04c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b04c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2b04cc:
    // 0x2b04cc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b04ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b04d0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b04d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b04d4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b04d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b04d8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b04d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b04dc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b04dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b04e0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b04e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b04e4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b04e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b04e8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b04e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b04ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b04ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b04f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B04F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04F0u;
        // 0x2b04f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B04F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B04F8u;
}
