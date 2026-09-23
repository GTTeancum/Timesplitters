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

// Function: moveFindFloorHeight
// Address: 0x27c578 - 0x27c798
void moveFindFloorHeight_0x27c578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("moveFindFloorHeight_0x27c578");
#endif

    switch (ctx->pc) {
        case 0x27c5d8u: goto label_27c5d8;
        case 0x27c650u: goto label_27c650;
        case 0x27c710u: goto label_27c710;
        default: break;
    }

    ctx->pc = 0x27c578u;

    // 0x27c578: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27c578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x27c57c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27c580: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x27c580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x27c584: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x27c584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27c588: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x27c588u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c58c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27c58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27c590: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x27c590u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c594: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27c598: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x27c598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c59c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27c5a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27c5a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5a4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x27c5a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27c5a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27c5a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5ac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27c5b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5b4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27c5b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27c5bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c5c0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x27c5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27c5c4: 0x12000065  beqz        $s0, . + 4 + (0x65 << 2)
    ctx->pc = 0x27C5C4u;
    {
        const bool branch_taken_0x27c5c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5C4u;
        // 0x27c5c8: 0xc454f9c0  lwc1        $f20, -0x640($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5c4) {
            ctx->pc = 0x27C75Cu;
            goto label_27c75c;
        }
    }
    ctx->pc = 0x27C5CCu;
    // 0x27c5cc: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x27c5ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27c5d0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x27c5d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27c5d4: 0x0  nop
    ctx->pc = 0x27c5d4u;
    // NOP
label_27c5d8:
    // 0x27c5d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C5D8u;
    {
        const bool branch_taken_0x27c5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5D8u;
        // 0x27c5dc: 0x561024  and         $v0, $v0, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5d8) {
            ctx->pc = 0x27C5E8u;
            goto label_27c5e8;
        }
    }
    ctx->pc = 0x27C5E0u;
    // 0x27c5e0: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x27C5E0u;
    {
        const bool branch_taken_0x27c5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5E0u;
        // 0x27c5e4: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5e0) {
            ctx->pc = 0x27C744u;
            goto label_27c744;
        }
    }
    ctx->pc = 0x27C5E8u;
label_27c5e8:
    // 0x27c5e8: 0x960a0006  lhu         $t2, 0x6($s0)
    ctx->pc = 0x27c5e8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x27c5ec: 0x31420010  andi        $v0, $t2, 0x10
    ctx->pc = 0x27c5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16);
    // 0x27c5f0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x27C5F0u;
    {
        const bool branch_taken_0x27c5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c5f0) {
            ctx->pc = 0x27C5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C5F0u;
            // 0x27c5f4: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C614u;
            goto label_27c614;
        }
    }
    ctx->pc = 0x27C5F8u;
    // 0x27c5f8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x27c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c5fc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x27c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c604: 0x0  nop
    ctx->pc = 0x27c604u;
    // NOP
    // 0x27c608: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x27C608u;
    {
        const bool branch_taken_0x27c608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C608u;
        // 0x27c60c: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c608) {
            ctx->pc = 0x27C744u;
            goto label_27c744;
        }
    }
    ctx->pc = 0x27C610u;
    // 0x27c610: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x27c610u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27c614:
    // 0x27c614: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c618: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x27c618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27c61c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27c61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c620: 0x1141018  mult        $v0, $t0, $s4
    ctx->pc = 0x27c620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27c624: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x27c624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x27c628: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x27c628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27c62c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x27c62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c630: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x27c630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c634: 0x0  nop
    ctx->pc = 0x27c634u;
    // NOP
    // 0x27c638: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x27C638u;
    {
        const bool branch_taken_0x27c638 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C638u;
        // 0x27c63c: 0x46002986  mov.s       $f6, $f5 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c638) {
            ctx->pc = 0x27C644u;
            goto label_27c644;
        }
    }
    ctx->pc = 0x27C640u;
    // 0x27c640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27c640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c644:
    // 0x27c644: 0x11000026  beqz        $t0, . + 4 + (0x26 << 2)
    ctx->pc = 0x27C644u;
    {
        const bool branch_taken_0x27c644 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C644u;
        // 0x27c648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c644) {
            ctx->pc = 0x27C6E0u;
            goto label_27c6e0;
        }
    }
    ctx->pc = 0x27C64Cu;
    // 0x27c64c: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x27c64cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_27c650:
    // 0x27c650: 0xf41018  mult        $v0, $a3, $s4
    ctx->pc = 0x27c650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27c654: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x27c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x27c658: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x27c658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27c65c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x27c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27c660: 0x46023036  c.le.s      $f6, $f2
    ctx->pc = 0x27c660u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c664: 0x0  nop
    ctx->pc = 0x27c664u;
    // NOP
    // 0x27c668: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x27C668u;
    {
        const bool branch_taken_0x27c668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C668u;
        // 0x27c66c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c668) {
            ctx->pc = 0x27C674u;
            goto label_27c674;
        }
    }
    ctx->pc = 0x27C670u;
    // 0x27c670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27c670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c674:
    // 0x27c674: 0x50c50014  beql        $a2, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x27C674u;
    {
        const bool branch_taken_0x27c674 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x27c674) {
            ctx->pc = 0x27C678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C674u;
            // 0x27c678: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C6C8u;
            goto label_27c6c8;
        }
    }
    ctx->pc = 0x27C67Cu;
    // 0x27c67c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x27c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27c680: 0x46051101  sub.s       $f4, $f2, $f5
    ctx->pc = 0x27c680u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x27c684: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x27c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c688: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x27c688u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x27c68c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27c68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c690: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x27c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27c694: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27c694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27c698: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x27c698u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27c69c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27c69cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27c6a0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27c6a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x27c6a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c6a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c6a8: 0x0  nop
    ctx->pc = 0x27c6a8u;
    // NOP
    // 0x27c6ac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x27C6ACu;
    {
        const bool branch_taken_0x27c6ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6ACu;
        // 0x27c6b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6ac) {
            ctx->pc = 0x27C6B8u;
            goto label_27c6b8;
        }
    }
    ctx->pc = 0x27C6B4u;
    // 0x27c6b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c6b8:
    // 0x27c6b8: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C6B8u;
    {
        const bool branch_taken_0x27c6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x27C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6B8u;
        // 0x27c6bc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6b8) {
            ctx->pc = 0x27C6C8u;
            goto label_27c6c8;
        }
    }
    ctx->pc = 0x27C6C0u;
    // 0x27c6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c6c4: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x27c6c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_27c6c8:
    // 0x27c6c8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x27c6c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6cc: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x27c6ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x27c6d0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x27C6D0u;
    {
        const bool branch_taken_0x27c6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6D0u;
        // 0x27c6d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6d0) {
            ctx->pc = 0x27C650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c650;
        }
    }
    ctx->pc = 0x27C6D8u;
    // 0x27c6d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27C6D8u;
    {
        const bool branch_taken_0x27c6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c6d8) {
            ctx->pc = 0x27C6E4u;
            goto label_27c6e4;
        }
    }
    ctx->pc = 0x27C6E0u;
label_27c6e0:
    // 0x27c6e0: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x27c6e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_27c6e4:
    // 0x27c6e4: 0x11200017  beqz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x27C6E4u;
    {
        const bool branch_taken_0x27c6e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6E4u;
        // 0x27c6e8: 0x31420010  andi        $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6e4) {
            ctx->pc = 0x27C744u;
            goto label_27c744;
        }
    }
    ctx->pc = 0x27C6ECu;
    // 0x27c6ec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C6ECu;
    {
        const bool branch_taken_0x27c6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c6ec) {
            ctx->pc = 0x27C6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C6ECu;
            // 0x27c6f0: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C6FCu;
            goto label_27c6fc;
        }
    }
    ctx->pc = 0x27C6F4u;
    // 0x27c6f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27C6F4u;
    {
        const bool branch_taken_0x27c6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6F4u;
        // 0x27c6f8: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6f4) {
            ctx->pc = 0x27C714u;
            goto label_27c714;
        }
    }
    ctx->pc = 0x27C6FCu;
label_27c6fc:
    // 0x27c6fc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x27c6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x27c700: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x27c700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27c704: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x27c704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x27c708: 0xc09f12a  jal         func_27C4A8
    ctx->pc = 0x27C708u;
    SET_GPR_U32(ctx, 31, 0x27C710u);
    ctx->pc = 0x27C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C708u;
    // 0x27c70c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C4A8u, 0x27C708u, 0x27C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C710u;
label_27c710:
    // 0x27c710: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c710u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c714:
    // 0x27c714: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x27c714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c718: 0x0  nop
    ctx->pc = 0x27c718u;
    // NOP
    // 0x27c71c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x27C71Cu;
    {
        const bool branch_taken_0x27c71c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C71Cu;
        // 0x27c720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c71c) {
            ctx->pc = 0x27C748u;
            goto label_27c748;
        }
    }
    ctx->pc = 0x27C724u;
    // 0x27c724: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x27c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c72c: 0x0  nop
    ctx->pc = 0x27c72cu;
    // NOP
    // 0x27c730: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x27C730u;
    {
        const bool branch_taken_0x27c730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C730u;
        // 0x27c734: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c730) {
            ctx->pc = 0x27C74Cu;
            goto label_27c74c;
        }
    }
    ctx->pc = 0x27C738u;
    // 0x27c738: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x27c738u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x27c73c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27C73Cu;
    {
        const bool branch_taken_0x27c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C73Cu;
        // 0x27c740: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c73c) {
            ctx->pc = 0x27C74Cu;
            goto label_27c74c;
        }
    }
    ctx->pc = 0x27C744u;
label_27c744:
    // 0x27c744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c748:
    // 0x27c748: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27c748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_27c74c:
    // 0x27c74c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x27c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x27c750: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x27c750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c754: 0x5600ffa0  bnel        $s0, $zero, . + 4 + (-0x60 << 2)
    ctx->pc = 0x27C754u;
    {
        const bool branch_taken_0x27c754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c754) {
            ctx->pc = 0x27C758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C754u;
            // 0x27c758: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c5d8;
        }
    }
    ctx->pc = 0x27C75Cu;
label_27c75c:
    // 0x27c75c: 0x56e00001  bnel        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27C75Cu;
    {
        const bool branch_taken_0x27c75c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c75c) {
            ctx->pc = 0x27C760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C75Cu;
            // 0x27c760: 0xaef50000  sw          $s5, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C764u;
            goto label_27c764;
        }
    }
    ctx->pc = 0x27C764u;
label_27c764:
    // 0x27c764: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x27c764u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x27c768: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27c768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27c76c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x27c76cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27c770: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x27c770u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27c774: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x27c774u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27c778: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27c778u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27c77c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27c77cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c780: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27c780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c784: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27c784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c78c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x27c78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27c790: 0x3e00008  jr          $ra
    ctx->pc = 0x27C790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C790u;
        // 0x27c794: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C798u;
}
