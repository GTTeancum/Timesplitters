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

// Function: bglightGet
// Address: 0x25a7d0 - 0x25aae0
void bglightGet_0x25a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bglightGet_0x25a7d0");
#endif

    switch (ctx->pc) {
        case 0x25a970u: goto label_25a970;
        default: break;
    }

    ctx->pc = 0x25a7d0u;

    // 0x25a7d0: 0x8f83a294  lw          $v1, -0x5D6C($gp)
    ctx->pc = 0x25a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
    // 0x25a7d4: 0x3c02c18f  lui         $v0, 0xC18F
    ctx->pc = 0x25a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49551 << 16));
    // 0x25a7d8: 0x34429c19  ori         $v0, $v0, 0x9C19
    ctx->pc = 0x25a7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39961);
    // 0x25a7dc: 0x3c0c01fc  lui         $t4, 0x1FC
    ctx->pc = 0x25a7dcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)508 << 16));
    // 0x25a7e0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x25a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25a7e4: 0x3c0d01fc  lui         $t5, 0x1FC
    ctx->pc = 0x25a7e4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)508 << 16));
    // 0x25a7e8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x25a7e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25a7ec: 0x8f88b460  lw          $t0, -0x4BA0($gp)
    ctx->pc = 0x25a7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x25a7f0: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x25a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x25a7f4: 0x258b63c8  addiu       $t3, $t4, 0x63C8
    ctx->pc = 0x25a7f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 25544));
    // 0x25a7f8: 0x244963f8  addiu       $t1, $v0, 0x63F8
    ctx->pc = 0x25a7f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 25592));
    // 0x25a7fc: 0x25aa63e0  addiu       $t2, $t5, 0x63E0
    ctx->pc = 0x25a7fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 25568));
    // 0x25a800: 0x8f829da8  lw          $v0, -0x6258($gp)
    ctx->pc = 0x25a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x25a804: 0x19000005  blez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A804u;
    {
        const bool branch_taken_0x25a804 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x25A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A804u;
        // 0x25a808: 0x318c3  sra         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a804) {
            ctx->pc = 0x25A81Cu;
            goto label_25a81c;
        }
    }
    ctx->pc = 0x25A80Cu;
    // 0x25a80c: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x25a80cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25a810: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25A810u;
    {
        const bool branch_taken_0x25a810 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a810) {
            ctx->pc = 0x25A814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A810u;
            // 0x25a814: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A818u;
            goto label_25a818;
        }
    }
    ctx->pc = 0x25A818u;
label_25a818:
    // 0x25a818: 0x1012  mflo        $v0
    ctx->pc = 0x25a818u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_25a81c:
    // 0x25a81c: 0xada063e0  sw          $zero, 0x63E0($t5)
    ctx->pc = 0x25a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 25568), GPR_U32(ctx, 0));
    // 0x25a820: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x25a820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x25a824: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x25a824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x25a828: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x25a828u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a82c: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x25A82Cu;
    {
        const bool branch_taken_0x25a82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A82Cu;
        // 0x25a830: 0xad8063c8  sw          $zero, 0x63C8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 25544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a82c) {
            ctx->pc = 0x25A93Cu;
            goto label_25a93c;
        }
    }
    ctx->pc = 0x25A834u;
    // 0x25a834: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x25a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x25a838: 0x84480222  lh          $t0, 0x222($v0)
    ctx->pc = 0x25a838u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 546)));
    // 0x25a83c: 0x84420220  lh          $v0, 0x220($v0)
    ctx->pc = 0x25a83cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x25a840: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25A840u;
    {
        const bool branch_taken_0x25a840 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A840u;
        // 0x25a844: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a840) {
            ctx->pc = 0x25A8C0u;
            goto label_25a8c0;
        }
    }
    ctx->pc = 0x25A848u;
    // 0x25a848: 0x3c0e01fc  lui         $t6, 0x1FC
    ctx->pc = 0x25a848u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)508 << 16));
    // 0x25a84c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25a850: 0x25c35f18  addiu       $v1, $t6, 0x5F18
    ctx->pc = 0x25a850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 24344));
    // 0x25a854: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x25a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25a858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a85c: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x25a85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x25a860: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25a860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x25a864: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a868: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x25a868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a86c: 0xad8363c8  sw          $v1, 0x63C8($t4)
    ctx->pc = 0x25a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 25544), GPR_U32(ctx, 3));
    // 0x25a870: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x25a870u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x25a874: 0xe5620004  swc1        $f2, 0x4($t3)
    ctx->pc = 0x25a874u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x25a878: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x25a878u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25a87c: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x25a87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a880: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x25a880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a884: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25a884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25a888: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x25a888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x25a88c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x25a88cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25a890: 0xc463004c  lwc1        $f3, 0x4C($v1)
    ctx->pc = 0x25a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25a894: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25a894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a898: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25a898u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25a89c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x25a89cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25a8a0: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x25a8a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25a8a4: 0xe561000c  swc1        $f1, 0xC($t3)
    ctx->pc = 0x25a8a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x25a8a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25a8a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25a8ac: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x25a8acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a8b0: 0x0  nop
    ctx->pc = 0x25a8b0u;
    // NOP
    // 0x25a8b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25A8B4u;
    {
        const bool branch_taken_0x25a8b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8B4u;
        // 0x25a8b8: 0xe5620010  swc1        $f2, 0x10($t3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a8b4) {
            ctx->pc = 0x25A8C0u;
            goto label_25a8c0;
        }
    }
    ctx->pc = 0x25A8BCu;
    // 0x25a8bc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x25a8bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25a8c0:
    // 0x25a8c0: 0x500001e  bltz        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25A8C0u;
    {
        const bool branch_taken_0x25a8c0 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x25A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8C0u;
        // 0x25a8c4: 0x3c0e01fc  lui         $t6, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a8c0) {
            ctx->pc = 0x25A93Cu;
            goto label_25a93c;
        }
    }
    ctx->pc = 0x25A8C8u;
    // 0x25a8c8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x25a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x25a8cc: 0x25c35f18  addiu       $v1, $t6, 0x5F18
    ctx->pc = 0x25a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 24344));
    // 0x25a8d0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x25a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25a8d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a8d8: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x25a8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x25a8dc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25a8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x25a8e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a8e4: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x25a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a8e8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x25a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x25a8ec: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x25a8ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x25a8f0: 0xe5420004  swc1        $f2, 0x4($t2)
    ctx->pc = 0x25a8f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x25a8f4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x25a8f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25a8f8: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x25a8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a8fc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x25a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a900: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25a900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25a904: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x25a904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x25a908: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x25a908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25a90c: 0xc463004c  lwc1        $f3, 0x4C($v1)
    ctx->pc = 0x25a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25a910: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a914: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25a914u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25a918: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x25a918u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25a91c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x25a91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25a920: 0xe541000c  swc1        $f1, 0xC($t2)
    ctx->pc = 0x25a920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x25a924: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25a924u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25a928: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x25a928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a92c: 0x0  nop
    ctx->pc = 0x25a92cu;
    // NOP
    // 0x25a930: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25A930u;
    {
        const bool branch_taken_0x25a930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A930u;
        // 0x25a934: 0xe5420010  swc1        $f2, 0x10($t2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a930) {
            ctx->pc = 0x25A93Cu;
            goto label_25a93c;
        }
    }
    ctx->pc = 0x25A938u;
    // 0x25a938: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x25a938u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25a93c:
    // 0x25a93c: 0x11a00065  beqz        $t5, . + 4 + (0x65 << 2)
    ctx->pc = 0x25A93Cu;
    {
        const bool branch_taken_0x25a93c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A93Cu;
        // 0x25a940: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a93c) {
            ctx->pc = 0x25AAD4u;
            goto label_25aad4;
        }
    }
    ctx->pc = 0x25A944u;
    // 0x25a944: 0x8c8400f4  lw          $a0, 0xF4($a0)
    ctx->pc = 0x25a944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x25a948: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x25a948u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x25a94c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a94cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a950: 0x8f8ca298  lw          $t4, -0x5D68($gp)
    ctx->pc = 0x25a950u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943384)));
    // 0x25a954: 0xa4820222  sh          $v0, 0x222($a0)
    ctx->pc = 0x25a954u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x25a958: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x25a958u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x25a95c: 0x1980005d  blez        $t4, . + 4 + (0x5D << 2)
    ctx->pc = 0x25A95Cu;
    {
        const bool branch_taken_0x25a95c = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x25A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A95Cu;
        // 0x25a960: 0xa4820220  sh          $v0, 0x220($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a95c) {
            ctx->pc = 0x25AAD4u;
            goto label_25aad4;
        }
    }
    ctx->pc = 0x25A964u;
    // 0x25a964: 0x3c0e01fc  lui         $t6, 0x1FC
    ctx->pc = 0x25a964u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)508 << 16));
    // 0x25a968: 0x25c35f18  addiu       $v1, $t6, 0x5F18
    ctx->pc = 0x25a968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 24344));
    // 0x25a96c: 0x0  nop
    ctx->pc = 0x25a96cu;
    // NOP
label_25a970:
    // 0x25a970: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x25a970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x25a974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a978: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25a978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a97c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a980: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x25a980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a984: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x25a984u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x25a988: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x25a988u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25a98c: 0xe5250004  swc1        $f5, 0x4($t1)
    ctx->pc = 0x25a98cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x25a990: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x25a990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a994: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x25a994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a998: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x25a998u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25a99c: 0xe5240008  swc1        $f4, 0x8($t1)
    ctx->pc = 0x25a99cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x25a9a0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25a9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a9a4: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x25a9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a9a8: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x25a9a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25a9ac: 0xe523000c  swc1        $f3, 0xC($t1)
    ctx->pc = 0x25a9acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x25a9b0: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x25a9b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x25a9b4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x25A9B4u;
    {
        const bool branch_taken_0x25a9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a9b4) {
            ctx->pc = 0x25A9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A9B4u;
            // 0x25a9b8: 0xc5200004  lwc1        $f0, 0x4($t1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A9FCu;
            goto label_25a9fc;
        }
    }
    ctx->pc = 0x25A9BCu;
    // 0x25a9bc: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x25a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a9c0: 0xc4620084  lwc1        $f2, 0x84($v1)
    ctx->pc = 0x25a9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25a9c4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x25a9c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x25a9c8: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x25a9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a9cc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x25a9ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x25a9d0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x25a9d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x25a9d4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x25a9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25a9d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25a9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25a9dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25a9dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25a9e0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x25a9e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a9e4: 0x0  nop
    ctx->pc = 0x25a9e4u;
    // NOP
    // 0x25a9e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25A9E8u;
    {
        const bool branch_taken_0x25a9e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9E8u;
        // 0x25a9ec: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9e8) {
            ctx->pc = 0x25A9F8u;
            goto label_25a9f8;
        }
    }
    ctx->pc = 0x25A9F0u;
    // 0x25a9f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25A9F0u;
    {
        const bool branch_taken_0x25a9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9F0u;
        // 0x25a9f4: 0xc440ea8c  lwc1        $f0, -0x1574($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9f0) {
            ctx->pc = 0x25AA18u;
            goto label_25aa18;
        }
    }
    ctx->pc = 0x25A9F8u;
label_25a9f8:
    // 0x25a9f8: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x25a9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a9fc:
    // 0x25a9fc: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x25a9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25aa00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x25aa00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25aa04: 0xc521000c  lwc1        $f1, 0xC($t1)
    ctx->pc = 0x25aa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25aa08: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x25aa08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25aa0c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x25aa0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25aa10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25aa10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25aa14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25aa14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25aa18:
    // 0x25aa18: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x25aa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x25aa1c: 0xc5210010  lwc1        $f1, 0x10($t1)
    ctx->pc = 0x25aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25aa20: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x25aa20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x25aa24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25aa24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25aa28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25aa28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25aa2c: 0x0  nop
    ctx->pc = 0x25aa2cu;
    // NOP
    // 0x25aa30: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
    ctx->pc = 0x25AA30u;
    {
        const bool branch_taken_0x25aa30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25aa30) {
            ctx->pc = 0x25AA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AA30u;
            // 0x25aa34: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AAC8u;
            goto label_25aac8;
        }
    }
    ctx->pc = 0x25AA38u;
    // 0x25aa38: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x25aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x25aa3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AA3Cu;
    {
        const bool branch_taken_0x25aa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA3Cu;
        // 0x25aa40: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa3c) {
            ctx->pc = 0x25AA58u;
            goto label_25aa58;
        }
    }
    ctx->pc = 0x25AA44u;
    // 0x25aa44: 0xc5600010  lwc1        $f0, 0x10($t3)
    ctx->pc = 0x25aa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aa48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25aa48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25aa4c: 0x0  nop
    ctx->pc = 0x25aa4cu;
    // NOP
    // 0x25aa50: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x25AA50u;
    {
        const bool branch_taken_0x25aa50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25aa50) {
            ctx->pc = 0x25AA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AA50u;
            // 0x25aa54: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AA9Cu;
            goto label_25aa9c;
        }
    }
    ctx->pc = 0x25AA58u;
label_25aa58:
    // 0x25aa58: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x25aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x25aa5c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x25aa5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AA60u;
    {
        const bool branch_taken_0x25aa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA60u;
        // 0x25aa64: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa60) {
            ctx->pc = 0x25AA80u;
            goto label_25aa80;
        }
    }
    ctx->pc = 0x25AA68u;
    // 0x25aa68: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x25aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25aa6c: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x25aa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aa70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25aa70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25aa74: 0x0  nop
    ctx->pc = 0x25aa74u;
    // NOP
    // 0x25aa78: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x25AA78u;
    {
        const bool branch_taken_0x25aa78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25aa78) {
            ctx->pc = 0x25AA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AA78u;
            // 0x25aa7c: 0xa4880220  sh          $t0, 0x220($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AAC4u;
            goto label_25aac4;
        }
    }
    ctx->pc = 0x25AA80u;
label_25aa80:
    // 0x25aa80: 0x94820220  lhu         $v0, 0x220($a0)
    ctx->pc = 0x25aa80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x25aa84: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x25aa84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa88: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x25aa88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa8c: 0xa4820222  sh          $v0, 0x222($a0)
    ctx->pc = 0x25aa8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x25aa90: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x25aa90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25AA94u;
    {
        const bool branch_taken_0x25aa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA94u;
        // 0x25aa98: 0xa4880220  sh          $t0, 0x220($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa94) {
            ctx->pc = 0x25AAC4u;
            goto label_25aac4;
        }
    }
    ctx->pc = 0x25AA9Cu;
label_25aa9c:
    // 0x25aa9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AA9Cu;
    {
        const bool branch_taken_0x25aa9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA9Cu;
        // 0x25aaa0: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa9c) {
            ctx->pc = 0x25AAB8u;
            goto label_25aab8;
        }
    }
    ctx->pc = 0x25AAA4u;
    // 0x25aaa4: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x25aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aaa8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25aaa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25aaac: 0x0  nop
    ctx->pc = 0x25aaacu;
    // NOP
    // 0x25aab0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x25AAB0u;
    {
        const bool branch_taken_0x25aab0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25aab0) {
            ctx->pc = 0x25AAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AAB0u;
            // 0x25aab4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AAC8u;
            goto label_25aac8;
        }
    }
    ctx->pc = 0x25AAB8u;
label_25aab8:
    // 0x25aab8: 0xa4880222  sh          $t0, 0x222($a0)
    ctx->pc = 0x25aab8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 546), (uint16_t)GPR_U32(ctx, 8));
    // 0x25aabc: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x25aabcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aac0: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x25aac0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25aac4:
    // 0x25aac4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x25aac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_25aac8:
    // 0x25aac8: 0x10c102a  slt         $v0, $t0, $t4
    ctx->pc = 0x25aac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x25aacc: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x25AACCu;
    {
        const bool branch_taken_0x25aacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AACCu;
        // 0x25aad0: 0x25c35f18  addiu       $v1, $t6, 0x5F18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 24344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aacc) {
            ctx->pc = 0x25A970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a970;
        }
    }
    ctx->pc = 0x25AAD4u;
label_25aad4:
    // 0x25aad4: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x25aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x25aad8: 0x3e00008  jr          $ra
    ctx->pc = 0x25AAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAD8u;
        // 0x25aadc: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AAE0u;
}
