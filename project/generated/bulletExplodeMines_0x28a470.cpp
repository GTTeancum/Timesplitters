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

// Function: bulletExplodeMines
// Address: 0x28a470 - 0x28a684
void bulletExplodeMines_0x28a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletExplodeMines_0x28a470");
#endif

    switch (ctx->pc) {
        case 0x28a4c0u: goto label_28a4c0;
        case 0x28a550u: goto label_28a550;
        case 0x28a5ccu: goto label_28a5cc;
        case 0x28a5e8u: goto label_28a5e8;
        case 0x28a60cu: goto label_28a60c;
        case 0x28a618u: goto label_28a618;
        case 0x28a630u: goto label_28a630;
        case 0x28a638u: goto label_28a638;
        default: break;
    }

    ctx->pc = 0x28a470u;

    // 0x28a470: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28a470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28a474: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x28a474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x28a478: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x28a478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x28a47c: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x28a47cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a480: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x28a480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x28a484: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x28a484u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28a488: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x28a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x28a48c: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x28a48cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x28a490: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x28a490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x28a494: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28a494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a498: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28a498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28a49c: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x28a49cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x28a4a0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x28a4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x28a4a4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x28a4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x28a4a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x28a4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x28a4ac: 0x8f84b948  lw          $a0, -0x46B8($gp)
    ctx->pc = 0x28a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
    // 0x28a4b0: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x28a4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28a4b4: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x28a4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28a4b8: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x28a4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28a4bc: 0x24030114  addiu       $v1, $zero, 0x114
    ctx->pc = 0x28a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_28a4c0:
    // 0x28a4c0: 0x2831018  mult        $v0, $s4, $v1
    ctx->pc = 0x28a4c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28a4c4: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x28a4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28a4c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a4cc: 0x2442fff2  addiu       $v0, $v0, -0xE
    ctx->pc = 0x28a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967282));
    // 0x28a4d0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x28a4d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x28a4d4: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x28A4D4u;
    {
        const bool branch_taken_0x28a4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a4d4) {
            ctx->pc = 0x28A4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A4D4u;
            // 0x28a4d8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A64Cu;
            goto label_28a64c;
        }
    }
    ctx->pc = 0x28A4DCu;
    // 0x28a4dc: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x28a4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28a4e0: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x28a4e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x28a4e4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x28a4e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28a4e8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x28a4e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x28a4ec: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x28a4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a4f0: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x28a4f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x28a4f4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x28a4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28a4f8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28a4f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28a4fc: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x28a4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a500: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x28a500u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x28a504: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28a504u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28a508: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x28a508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28a50c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28a50cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28a510: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x28a510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a514: 0x0  nop
    ctx->pc = 0x28a514u;
    // NOP
    // 0x28a518: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x28A518u;
    {
        const bool branch_taken_0x28a518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A518u;
        // 0x28a51c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a518) {
            ctx->pc = 0x28A648u;
            goto label_28a648;
        }
    }
    ctx->pc = 0x28A520u;
    // 0x28a520: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28a520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28a524: 0x26120018  addiu       $s2, $s0, 0x18
    ctx->pc = 0x28a524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28a528: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28a528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28a52c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28a52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a530: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x28a530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28a534: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28a534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a538: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x28a538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28a53c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28a53cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a540: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28a540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a544: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28a544u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a548: 0xc09640e  jal         func_259038
    ctx->pc = 0x28A548u;
    SET_GPR_U32(ctx, 31, 0x28A550u);
    ctx->pc = 0x28A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A548u;
    // 0x28a54c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x28A548u, 0x28A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A550u;
label_28a550:
    // 0x28a550: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x28A550u;
    {
        const bool branch_taken_0x28a550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A550u;
        // 0x28a554: 0x8f84b948  lw          $a0, -0x46B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a550) {
            ctx->pc = 0x28A63Cu;
            goto label_28a63c;
        }
    }
    ctx->pc = 0x28A558u;
    // 0x28a558: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28a558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a55c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x28a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28a560: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28A560u;
    {
        const bool branch_taken_0x28a560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a560) {
            ctx->pc = 0x28A564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A560u;
            // 0x28a564: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A580u;
            goto label_28a580;
        }
    }
    ctx->pc = 0x28A568u;
    // 0x28a568: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x28a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x28a56c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x28a56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28a570: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x28A570u;
    {
        const bool branch_taken_0x28a570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a570) {
            ctx->pc = 0x28A574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A570u;
            // 0x28a574: 0xae160078  sw          $s6, 0x78($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A638u;
            goto label_28a638;
        }
    }
    ctx->pc = 0x28A578u;
    // 0x28a578: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x28A578u;
    {
        const bool branch_taken_0x28a578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A578u;
        // 0x28a57c: 0xc6250000  lwc1        $f5, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a578) {
            ctx->pc = 0x28A640u;
            goto label_28a640;
        }
    }
    ctx->pc = 0x28A580u;
label_28a580:
    // 0x28a580: 0x4800010  bltz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28A580u;
    {
        const bool branch_taken_0x28a580 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A580u;
        // 0x28a584: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a580) {
            ctx->pc = 0x28A5C4u;
            goto label_28a5c4;
        }
    }
    ctx->pc = 0x28A588u;
    // 0x28a588: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x28a588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x28a58c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a590: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A590u;
    {
        const bool branch_taken_0x28a590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A590u;
        // 0x28a594: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a590) {
            ctx->pc = 0x28A5ACu;
            goto label_28a5ac;
        }
    }
    ctx->pc = 0x28A598u;
    // 0x28a598: 0x8f83b230  lw          $v1, -0x4DD0($gp)
    ctx->pc = 0x28a598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x28a59c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28a59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28a5a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a5a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28A5A4u;
    {
        const bool branch_taken_0x28a5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5A4u;
        // 0x28a5a8: 0x8c530180  lw          $s3, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5a4) {
            ctx->pc = 0x28A5C4u;
            goto label_28a5c4;
        }
    }
    ctx->pc = 0x28A5ACu;
label_28a5ac:
    // 0x28a5ac: 0x14760005  bne         $v1, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A5ACu;
    {
        const bool branch_taken_0x28a5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x28A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5ACu;
        // 0x28a5b0: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5ac) {
            ctx->pc = 0x28A5C4u;
            goto label_28a5c4;
        }
    }
    ctx->pc = 0x28A5B4u;
    // 0x28a5b4: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x28a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x28a5b8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28a5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28a5bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a5c0: 0x8c530bcc  lw          $s3, 0xBCC($v0)
    ctx->pc = 0x28a5c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
label_28a5c4:
    // 0x28a5c4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28A5C4u;
    SET_GPR_U32(ctx, 31, 0x28A5CCu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28A5C4u, 0x28A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5CCu;
label_28a5cc:
    // 0x28a5cc: 0x55001b  divu        $zero, $v0, $s5
    ctx->pc = 0x28a5ccu;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x28a5d0: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28A5D0u;
    {
        const bool branch_taken_0x28a5d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a5d0) {
            ctx->pc = 0x28A5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A5D0u;
            // 0x28a5d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A5D8u;
            goto label_28a5d8;
        }
    }
    ctx->pc = 0x28A5D8u;
label_28a5d8:
    // 0x28a5d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28a5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5dc: 0x2010  mfhi        $a0
    ctx->pc = 0x28a5dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x28a5e0: 0xc081546  jal         func_205518
    ctx->pc = 0x28A5E0u;
    SET_GPR_U32(ctx, 31, 0x28A5E8u);
    ctx->pc = 0x28A5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5E0u;
    // 0x28a5e4: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28A5E0u, 0x28A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5E8u;
label_28a5e8:
    // 0x28a5e8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x28a5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a5ec: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x28a5ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28a5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5fc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x28a5fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a600: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x28a600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28a604: 0xc0a5e30  jal         func_2978C0
    ctx->pc = 0x28A604u;
    SET_GPR_U32(ctx, 31, 0x28A60Cu);
    ctx->pc = 0x28A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A604u;
    // 0x28a608: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x28A604u, 0x28A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A60Cu;
label_28a60c:
    // 0x28a60c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a610: 0xc0a5f8c  jal         func_297E30
    ctx->pc = 0x28A610u;
    SET_GPR_U32(ctx, 31, 0x28A618u);
    ctx->pc = 0x28A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A610u;
    // 0x28a614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E30u, 0x28A610u, 0x28A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A618u;
label_28a618:
    // 0x28a618: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28a618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a61c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28a61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a620: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x28a620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28a624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a628: 0xc0a900a  jal         func_2A4028
    ctx->pc = 0x28A628u;
    SET_GPR_U32(ctx, 31, 0x28A630u);
    ctx->pc = 0x28A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A628u;
    // 0x28a62c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4028u, 0x28A628u, 0x28A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A630u;
label_28a630:
    // 0x28a630: 0xc0a2572  jal         func_2895C8
    ctx->pc = 0x28A630u;
    SET_GPR_U32(ctx, 31, 0x28A638u);
    ctx->pc = 0x28A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A630u;
    // 0x28a634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2895C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2895C8u, 0x28A630u, 0x28A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A638u;
label_28a638:
    // 0x28a638: 0x8f84b948  lw          $a0, -0x46B8($gp)
    ctx->pc = 0x28a638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
label_28a63c:
    // 0x28a63c: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x28a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28a640:
    // 0x28a640: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x28a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28a644: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x28a644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28a648:
    // 0x28a648: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28a648u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_28a64c:
    // 0x28a64c: 0x2a820032  slti        $v0, $s4, 0x32
    ctx->pc = 0x28a64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x28a650: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x28A650u;
    {
        const bool branch_taken_0x28a650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A650u;
        // 0x28a654: 0x24030114  addiu       $v1, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a650) {
            ctx->pc = 0x28A4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a4c0;
        }
    }
    ctx->pc = 0x28A658u;
    // 0x28a658: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28a658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28a65c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x28a65cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a660: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x28a660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a664: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x28a664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a668: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x28a668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a66c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x28a66cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a670: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x28a670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a674: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x28a674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a678: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x28a678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28a67c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A67Cu;
        // 0x28a680: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A684u;
}
