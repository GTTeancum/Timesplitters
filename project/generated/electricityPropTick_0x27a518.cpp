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

// Function: electricityPropTick
// Address: 0x27a518 - 0x27aa14
void electricityPropTick_0x27a518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("electricityPropTick_0x27a518");
#endif

    switch (ctx->pc) {
        case 0x27a580u: goto label_27a580;
        case 0x27a5bcu: goto label_27a5bc;
        case 0x27a5d4u: goto label_27a5d4;
        case 0x27a5f0u: goto label_27a5f0;
        case 0x27a638u: goto label_27a638;
        case 0x27a6a0u: goto label_27a6a0;
        case 0x27a7f8u: goto label_27a7f8;
        case 0x27a858u: goto label_27a858;
        case 0x27a8e8u: goto label_27a8e8;
        case 0x27a8f8u: goto label_27a8f8;
        case 0x27a900u: goto label_27a900;
        case 0x27a944u: goto label_27a944;
        case 0x27a99cu: goto label_27a99c;
        case 0x27a9bcu: goto label_27a9bc;
        default: break;
    }

    ctx->pc = 0x27a518u;

    // 0x27a518: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x27a518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x27a51c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x27a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27a520: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27a520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27a524: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27a528: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27a528u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a52c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27a52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x27a530: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27a530u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a534: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x27a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x27a538: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x27a538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x27a53c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x27a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x27a540: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27a540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27a544: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27a544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27a548: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27a54c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27a54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27a550: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x27a550u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x27a554: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x27a554u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x27a558: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x27a558u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27a55c: 0x8ea90020  lw          $t1, 0x20($s5)
    ctx->pc = 0x27a55cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x27a560: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x27a560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x27a564: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x27a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x27a568: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27a568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a56c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x27a56cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27a570: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27a570u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27a574: 0x18800092  blez        $a0, . + 4 + (0x92 << 2)
    ctx->pc = 0x27A574u;
    {
        const bool branch_taken_0x27a574 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x27A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A574u;
        // 0x27a578: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a574) {
            ctx->pc = 0x27A7C0u;
            goto label_27a7c0;
        }
    }
    ctx->pc = 0x27A57Cu;
    // 0x27a57c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x27a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_27a580:
    // 0x27a580: 0x267effff  addiu       $fp, $s3, -0x1
    ctx->pc = 0x27a580u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x27a584: 0x24623658  addiu       $v0, $v1, 0x3658
    ctx->pc = 0x27a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 13912));
    // 0x27a588: 0x1eb880  sll         $s7, $fp, 2
    ctx->pc = 0x27a588u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x27a58c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x27a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27a590: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x27a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x27a594: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x27a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27a598: 0x600013  mtlo        $v1
    ctx->pc = 0x27a598u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x27a59c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a5a0: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x27A5A0u;
    {
        const bool branch_taken_0x27a5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5A0u;
        // 0x27a5a4: 0x7264b000  madd        $s6, $s3, $a0 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 22, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5a0) {
            ctx->pc = 0x27A7A4u;
            goto label_27a7a4;
        }
    }
    ctx->pc = 0x27A5A8u;
    // 0x27a5a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27a5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27a5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27a5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a5b4: 0xc09d194  jal         func_274650
    ctx->pc = 0x27A5B4u;
    SET_GPR_U32(ctx, 31, 0x27A5BCu);
    ctx->pc = 0x27A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A5B4u;
    // 0x27a5b8: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274650u, 0x27A5B4u, 0x27A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5BCu;
label_27a5bc:
    // 0x27a5bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27a5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27a5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27a5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a5c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27a5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a5cc: 0xc09d11a  jal         func_274468
    ctx->pc = 0x27A5CCu;
    SET_GPR_U32(ctx, 31, 0x27A5D4u);
    ctx->pc = 0x27A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A5CCu;
    // 0x27a5d0: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x27A5CCu, 0x27A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5D4u;
label_27a5d4:
    // 0x27a5d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27a5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27a5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a5e4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27a5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27a5e8: 0xc09d11a  jal         func_274468
    ctx->pc = 0x27A5E8u;
    SET_GPR_U32(ctx, 31, 0x27A5F0u);
    ctx->pc = 0x27A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A5E8u;
    // 0x27a5ec: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x27A5E8u, 0x27A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5F0u;
label_27a5f0:
    // 0x27a5f0: 0x12000068  beqz        $s0, . + 4 + (0x68 << 2)
    ctx->pc = 0x27A5F0u;
    {
        const bool branch_taken_0x27a5f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5F0u;
        // 0x27a5f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5f0) {
            ctx->pc = 0x27A794u;
            goto label_27a794;
        }
    }
    ctx->pc = 0x27A5F8u;
    // 0x27a5f8: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x27A5F8u;
    {
        const bool branch_taken_0x27a5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5F8u;
        // 0x27a5fc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5f8) {
            ctx->pc = 0x27A794u;
            goto label_27a794;
        }
    }
    ctx->pc = 0x27A600u;
    // 0x27a600: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x27a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a604: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27a604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27a608: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x27a608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x27a60c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27a60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a610: 0xc7828708  lwc1        $f2, -0x78F8($gp)
    ctx->pc = 0x27a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a614: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x27a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x27a618: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x27a618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a61c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27a61cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27a620: 0x8ed40034  lw          $s4, 0x34($s6)
    ctx->pc = 0x27a620u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x27a624: 0x8ed00030  lw          $s0, 0x30($s6)
    ctx->pc = 0x27a624u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x27a628: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27A628u;
    {
        const bool branch_taken_0x27a628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A628u;
        // 0x27a62c: 0x46020502  mul.s       $f20, $f0, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a628) {
            ctx->pc = 0x27A680u;
            goto label_27a680;
        }
    }
    ctx->pc = 0x27A630u;
    // 0x27a630: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x27A630u;
    SET_GPR_U32(ctx, 31, 0x27A638u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x27A630u, 0x27A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A638u;
label_27a638:
    // 0x27a638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27a638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a63c: 0x3c0b0036  lui         $t3, 0x36
    ctx->pc = 0x27a63cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)54 << 16));
    // 0x27a640: 0x256236b8  addiu       $v0, $t3, 0x36B8
    ctx->pc = 0x27a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 14008));
    // 0x27a644: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A644u;
    {
        const bool branch_taken_0x27a644 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A644u;
        // 0x27a648: 0x2e22821  addu        $a1, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a644) {
            ctx->pc = 0x27A658u;
            goto label_27a658;
        }
    }
    ctx->pc = 0x27A64Cu;
    // 0x27a64c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x27a64cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a650: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27A650u;
    {
        const bool branch_taken_0x27a650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A650u;
        // 0x27a654: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a650) {
            ctx->pc = 0x27A670u;
            goto label_27a670;
        }
    }
    ctx->pc = 0x27A658u;
label_27a658:
    // 0x27a658: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x27a658u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x27a65c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x27a65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x27a660: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27a660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27a664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27a664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a668: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27a668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27a66c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27a66cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27a670:
    // 0x27a670: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x27a670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x27a674: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a678: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27a678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27a67c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x27a67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_27a680:
    // 0x27a680: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x27a680u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a684: 0x19400046  blez        $t2, . + 4 + (0x46 << 2)
    ctx->pc = 0x27A684u;
    {
        const bool branch_taken_0x27a684 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x27A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A684u;
        // 0x27a688: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a684) {
            ctx->pc = 0x27A7A0u;
            goto label_27a7a0;
        }
    }
    ctx->pc = 0x27A68Cu;
    // 0x27a68c: 0x8ea90020  lw          $t1, 0x20($s5)
    ctx->pc = 0x27a68cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x27a690: 0x26680001  addiu       $t0, $s3, 0x1
    ctx->pc = 0x27a690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27a694: 0x3c0b0036  lui         $t3, 0x36
    ctx->pc = 0x27a694u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)54 << 16));
    // 0x27a698: 0x3c0c0037  lui         $t4, 0x37
    ctx->pc = 0x27a698u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)55 << 16));
    // 0x27a69c: 0x0  nop
    ctx->pc = 0x27a69cu;
    // NOP
label_27a6a0:
    // 0x27a6a0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x27a6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a6a4: 0x256236b8  addiu       $v0, $t3, 0x36B8
    ctx->pc = 0x27a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 14008));
    // 0x27a6a8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x27a6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x27a6ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a6b0: 0x1e2880  sll         $a1, $fp, 2
    ctx->pc = 0x27a6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x27a6b4: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x27a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27a6b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27a6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27a6bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27a6bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27a6c0: 0xc782870c  lwc1        $f2, -0x78F4($gp)
    ctx->pc = 0x27a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a6c4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x27a6c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x27a6c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27a6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27a6cc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27a6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27a6d0: 0x25845c60  addiu       $a0, $t4, 0x5C60
    ctx->pc = 0x27a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 23648));
    // 0x27a6d4: 0xc7848710  lwc1        $f4, -0x78F0($gp)
    ctx->pc = 0x27a6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27a6d8: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x27a6d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x27a6dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27a6e0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x27a6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x27a6e4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x27a6e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x27a6e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x27a6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x27a6ec: 0xea302a  slt         $a2, $a3, $t2
    ctx->pc = 0x27a6ecu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x27a6f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27a6f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27a6f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27a6f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27a6f8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x27a6f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x27a6fc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x27a6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x27a700: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27a700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x27a704: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x27a704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27a708: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27a708u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27a70c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27a70cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27a710: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x27a710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x27a714: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x27a714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x27a718: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x27a718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x27a71c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27a720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27a724: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27a728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a72c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a730: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x27a730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a734: 0xe6450000  swc1        $f5, 0x0($s2)
    ctx->pc = 0x27a734u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x27a738: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27a738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x27a73c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x27a73cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x27a740: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27a740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a744: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27a744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27a748: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27a748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27a74c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x27a74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x27a750: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x27a750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a754: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x27a754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x27a758: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x27a758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x27a75c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x27a75cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x27a760: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x27a760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a764: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x27a764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a768: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27a768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27a76c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x27a76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x27a770: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x27a770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a774: 0xe626000c  swc1        $f6, 0xC($s1)
    ctx->pc = 0x27a774u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x27a778: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x27a778u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x27a77c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x27a77cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x27a780: 0xe6260008  swc1        $f6, 0x8($s1)
    ctx->pc = 0x27a780u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x27a784: 0x14c0ffc6  bnez        $a2, . + 4 + (-0x3A << 2)
    ctx->pc = 0x27A784u;
    {
        const bool branch_taken_0x27a784 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A784u;
        // 0x27a788: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a784) {
            ctx->pc = 0x27A6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a6a0;
        }
    }
    ctx->pc = 0x27A78Cu;
    // 0x27a78c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27A78Cu;
    {
        const bool branch_taken_0x27a78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A78Cu;
        // 0x27a790: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a78c) {
            ctx->pc = 0x27A7ACu;
            goto label_27a7ac;
        }
    }
    ctx->pc = 0x27A794u;
label_27a794:
    // 0x27a794: 0x26680001  addiu       $t0, $s3, 0x1
    ctx->pc = 0x27a794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27a798: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27A798u;
    {
        const bool branch_taken_0x27a798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A798u;
        // 0x27a79c: 0x8ea90020  lw          $t1, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a798) {
            ctx->pc = 0x27A7A8u;
            goto label_27a7a8;
        }
    }
    ctx->pc = 0x27A7A0u;
label_27a7a0:
    // 0x27a7a0: 0x8ea90020  lw          $t1, 0x20($s5)
    ctx->pc = 0x27a7a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_27a7a4:
    // 0x27a7a4: 0x26680001  addiu       $t0, $s3, 0x1
    ctx->pc = 0x27a7a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_27a7a8:
    // 0x27a7a8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x27a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_27a7ac:
    // 0x27a7ac: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x27a7acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a7b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a7b4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x27a7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27a7b8: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x27A7B8u;
    {
        const bool branch_taken_0x27a7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7B8u;
        // 0x27a7bc: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7b8) {
            ctx->pc = 0x27A580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a580;
        }
    }
    ctx->pc = 0x27A7C0u;
label_27a7c0:
    // 0x27a7c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x27a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x27a7c4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x27a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x27a7c8: 0xa5200124  sh          $zero, 0x124($t1)
    ctx->pc = 0x27a7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 292), (uint16_t)GPR_U32(ctx, 0));
    // 0x27a7cc: 0x24523658  addiu       $s2, $v0, 0x3658
    ctx->pc = 0x27a7ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13912));
    // 0x27a7d0: 0xc7948714  lwc1        $f20, -0x78EC($gp)
    ctx->pc = 0x27a7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27a7d4: 0x24763688  addiu       $s6, $v1, 0x3688
    ctx->pc = 0x27a7d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 13960));
    // 0x27a7d8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x27a7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x27a7dc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27a7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27a7e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27a7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a7e4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x27a7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x27a7e8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27a7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27a7ec: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x27a7ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a7f0: 0x78880  sll         $s1, $a3, 2
    ctx->pc = 0x27a7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x27a7f4: 0x0  nop
    ctx->pc = 0x27a7f4u;
    // NOP
label_27a7f8:
    // 0x27a7f8: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x27a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x27a7fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a800: 0x1474002d  bne         $v1, $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x27A800u;
    {
        const bool branch_taken_0x27a800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x27A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A800u;
        // 0x27a804: 0x24f30001  addiu       $s3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a800) {
            ctx->pc = 0x27A8B8u;
            goto label_27a8b8;
        }
    }
    ctx->pc = 0x27A808u;
    // 0x27a808: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x27a808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a80c: 0x2368021  addu        $s0, $s1, $s6
    ctx->pc = 0x27a80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x27a810: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x27a810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x27a814: 0x0  nop
    ctx->pc = 0x27a814u;
    // NOP
    // 0x27a818: 0x0  nop
    ctx->pc = 0x27a818u;
    // NOP
    // 0x27a81c: 0x46160843  div.s       $f1, $f1, $f22
    ctx->pc = 0x27a81cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[22];
    // 0x27a820: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27a820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a824: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x27a824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27a828: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x27a828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x27a82c: 0x94820124  lhu         $v0, 0x124($a0)
    ctx->pc = 0x27a82cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x27a830: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x27a830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27a834: 0x8f85b460  lw          $a1, -0x4BA0($gp)
    ctx->pc = 0x27a834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x27a838: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x27a838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x27a83c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27a83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27a840: 0xa4820124  sh          $v0, 0x124($a0)
    ctx->pc = 0x27a840u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 292), (uint16_t)GPR_U32(ctx, 2));
    // 0x27a844: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27a844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27a848: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x27A848u;
    {
        const bool branch_taken_0x27a848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A848u;
        // 0x27a84c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a848) {
            ctx->pc = 0x27A8B8u;
            goto label_27a8b8;
        }
    }
    ctx->pc = 0x27A850u;
    // 0x27a850: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x27A850u;
    SET_GPR_U32(ctx, 31, 0x27A858u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x27A850u, 0x27A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A858u;
label_27a858:
    // 0x27a858: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A858u;
    {
        const bool branch_taken_0x27a858 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A858u;
        // 0x27a85c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a858) {
            ctx->pc = 0x27A870u;
            goto label_27a870;
        }
    }
    ctx->pc = 0x27A860u;
    // 0x27a860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a864: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27a864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27a868: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27A868u;
    {
        const bool branch_taken_0x27a868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A868u;
        // 0x27a86c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a868) {
            ctx->pc = 0x27A888u;
            goto label_27a888;
        }
    }
    ctx->pc = 0x27A870u;
label_27a870:
    // 0x27a870: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27a870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27a874: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27a874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27a878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a87c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27a87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27a880: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27a880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x27a884: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27a884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_27a888:
    // 0x27a888: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x27a888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a88c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x27a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a890: 0x0  nop
    ctx->pc = 0x27a890u;
    // NOP
    // 0x27a894: 0x0  nop
    ctx->pc = 0x27a894u;
    // NOP
    // 0x27a898: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27a898u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27a89c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x27a89cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x27a8a0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x27a8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x27a8a4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x27a8a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a8a8: 0x0  nop
    ctx->pc = 0x27a8a8u;
    // NOP
    // 0x27a8ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27A8ACu;
    {
        const bool branch_taken_0x27a8ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8ACu;
        // 0x27a8b0: 0x2321021  addu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8ac) {
            ctx->pc = 0x27A8B8u;
            goto label_27a8b8;
        }
    }
    ctx->pc = 0x27A8B4u;
    // 0x27a8b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_27a8b8:
    // 0x27a8b8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27a8b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8bc: 0x28e2000c  slti        $v0, $a3, 0xC
    ctx->pc = 0x27a8bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x27a8c0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x27A8C0u;
    {
        const bool branch_taken_0x27a8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8C0u;
        // 0x27a8c4: 0x78880  sll         $s1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8c0) {
            ctx->pc = 0x27A7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a7f8;
        }
    }
    ctx->pc = 0x27A8C8u;
    // 0x27a8c8: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x27a8c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27a8cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27a8d0: 0x4d1023  subu        $v0, $v0, $t5
    ctx->pc = 0x27a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x27a8d4: 0x18400040  blez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x27A8D4u;
    {
        const bool branch_taken_0x27a8d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8D4u;
        // 0x27a8d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8d4) {
            ctx->pc = 0x27A9D8u;
            goto label_27a9d8;
        }
    }
    ctx->pc = 0x27A8DCu;
    // 0x27a8dc: 0x3c140036  lui         $s4, 0x36
    ctx->pc = 0x27a8dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
    // 0x27a8e0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x27a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x27a8e4: 0x0  nop
    ctx->pc = 0x27a8e4u;
    // NOP
label_27a8e8:
    // 0x27a8e8: 0x24f30001  addiu       $s3, $a3, 0x1
    ctx->pc = 0x27a8e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x27a8ec: 0x24523658  addiu       $s2, $v0, 0x3658
    ctx->pc = 0x27a8ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13912));
    // 0x27a8f0: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x27a8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27a8f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27a8f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a8f8:
    // 0x27a8f8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x27A8F8u;
    SET_GPR_U32(ctx, 31, 0x27A900u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x27A8F8u, 0x27A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A900u;
label_27a900:
    // 0x27a900: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x27a900u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x27a904: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27A904u;
    {
        const bool branch_taken_0x27a904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a904) {
            ctx->pc = 0x27A908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A904u;
            // 0x27a908: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A90Cu;
            goto label_27a90c;
        }
    }
    ctx->pc = 0x27A90Cu;
label_27a90c:
    // 0x27a90c: 0x1810  mfhi        $v1
    ctx->pc = 0x27a90cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x27a910: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x27a910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a914: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x27a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x27a918: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a91c: 0x1071fff6  beq         $v1, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x27A91Cu;
    {
        const bool branch_taken_0x27a91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x27A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A91Cu;
        // 0x27a920: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a91c) {
            ctx->pc = 0x27A8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a8f8;
        }
    }
    ctx->pc = 0x27A924u;
    // 0x27a924: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x27a924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a928: 0x24433658  addiu       $v1, $v0, 0x3658
    ctx->pc = 0x27a928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 13912));
    // 0x27a92c: 0x26823688  addiu       $v0, $s4, 0x3688
    ctx->pc = 0x27a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 13960));
    // 0x27a930: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27a930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27a934: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27a934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27a938: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x27a938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x27a93c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x27A93Cu;
    SET_GPR_U32(ctx, 31, 0x27A944u);
    ctx->pc = 0x27A940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A93Cu;
    // 0x27a940: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x27A93Cu, 0x27A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A944u;
label_27a944:
    // 0x27a944: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27a944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a948: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x27a948u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x27a94c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27A94Cu;
    {
        const bool branch_taken_0x27a94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a94c) {
            ctx->pc = 0x27A950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A94Cu;
            // 0x27a950: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A954u;
            goto label_27a954;
        }
    }
    ctx->pc = 0x27A954u;
label_27a954:
    // 0x27a954: 0x2010  mfhi        $a0
    ctx->pc = 0x27a954u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x27a958: 0x5090000b  beql        $a0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x27A958u;
    {
        const bool branch_taken_0x27a958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x27a958) {
            ctx->pc = 0x27A95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A958u;
            // 0x27a95c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A988u;
            goto label_27a988;
        }
    }
    ctx->pc = 0x27A960u;
    // 0x27a960: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A960u;
    {
        const bool branch_taken_0x27a960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A960u;
        // 0x27a964: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a960) {
            ctx->pc = 0x27A978u;
            goto label_27a978;
        }
    }
    ctx->pc = 0x27A968u;
    // 0x27a968: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27A968u;
    {
        const bool branch_taken_0x27a968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A968u;
        // 0x27a96c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a968) {
            ctx->pc = 0x27A9A4u;
            goto label_27a9a4;
        }
    }
    ctx->pc = 0x27A970u;
    // 0x27a970: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27A970u;
    {
        const bool branch_taken_0x27a970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A970u;
        // 0x27a974: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a970) {
            ctx->pc = 0x27A9C4u;
            goto label_27a9c4;
        }
    }
    ctx->pc = 0x27A978u;
label_27a978:
    // 0x27a978: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x27a978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x27a97c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27a97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27a980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27A980u;
    {
        const bool branch_taken_0x27a980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A980u;
        // 0x27a984: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a980) {
            ctx->pc = 0x27A990u;
            goto label_27a990;
        }
    }
    ctx->pc = 0x27A988u;
label_27a988:
    // 0x27a988: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x27a988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x27a98c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27a98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27a990:
    // 0x27a990: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x27a990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x27a994: 0xc081566  jal         func_205598
    ctx->pc = 0x27A994u;
    SET_GPR_U32(ctx, 31, 0x27A99Cu);
    ctx->pc = 0x27A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A994u;
    // 0x27a998: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205598u, 0x27A994u, 0x27A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A99Cu;
label_27a99c:
    // 0x27a99c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27A99Cu;
    {
        const bool branch_taken_0x27a99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A99Cu;
        // 0x27a9a0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a99c) {
            ctx->pc = 0x27A9C0u;
            goto label_27a9c0;
        }
    }
    ctx->pc = 0x27A9A4u;
label_27a9a4:
    // 0x27a9a4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x27a9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x27a9a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27a9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27a9ac: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x27a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27a9b0: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x27a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x27a9b4: 0xc081566  jal         func_205598
    ctx->pc = 0x27A9B4u;
    SET_GPR_U32(ctx, 31, 0x27A9BCu);
    ctx->pc = 0x27A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9B4u;
    // 0x27a9b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205598u, 0x27A9B4u, 0x27A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9BCu;
label_27a9bc:
    // 0x27a9bc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x27a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_27a9c0:
    // 0x27a9c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27a9c4:
    // 0x27a9c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27a9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a9cc: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x27a9ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27a9d0: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x27A9D0u;
    {
        const bool branch_taken_0x27a9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9D0u;
        // 0x27a9d4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9d0) {
            ctx->pc = 0x27A8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a8e8;
        }
    }
    ctx->pc = 0x27A9D8u;
label_27a9d8:
    // 0x27a9d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27a9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27a9dc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x27a9dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27a9e0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x27a9e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27a9e4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x27a9e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27a9e8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27a9e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27a9ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27a9ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a9f0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27a9f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a9f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27a9f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a9f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27a9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a9fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27a9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27aa00: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x27aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27aa04: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x27aa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27aa08: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x27aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27aa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x27AA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA0Cu;
        // 0x27aa10: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AA14u;
}
