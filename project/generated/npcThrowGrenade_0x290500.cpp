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

// Function: npcThrowGrenade
// Address: 0x290500 - 0x2906a0
void npcThrowGrenade_0x290500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("npcThrowGrenade_0x290500");
#endif

    switch (ctx->pc) {
        case 0x290584u: goto label_290584;
        case 0x2905a8u: goto label_2905a8;
        case 0x29060cu: goto label_29060c;
        case 0x290680u: goto label_290680;
        default: break;
    }

    ctx->pc = 0x290500u;

    // 0x290500: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x290500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x290504: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x290504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x290508: 0xffb30120  sd          $s3, 0x120($sp)
    ctx->pc = 0x290508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 19));
    // 0x29050c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x29050cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x290510: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x290510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290514: 0xffb10100  sd          $s1, 0x100($sp)
    ctx->pc = 0x290514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 17));
    // 0x290518: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x290518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29051c: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x29051cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x290520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x290520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290524: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x290524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x290528: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x290528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x29052c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x29052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x290530: 0x8e340160  lw          $s4, 0x160($s1)
    ctx->pc = 0x290530u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x290534: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x290534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x290538: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x290538u;
    {
        const bool branch_taken_0x290538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290538u;
        // 0x29053c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290538) {
            ctx->pc = 0x290680u;
            goto label_290680;
        }
    }
    ctx->pc = 0x290540u;
    // 0x290540: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x290540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x290544: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x290544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x290548: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x290548u;
    {
        const bool branch_taken_0x290548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290548u;
        // 0x29054c: 0x27b000b0  addiu       $s0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290548) {
            ctx->pc = 0x290680u;
            goto label_290680;
        }
    }
    ctx->pc = 0x290550u;
    // 0x290550: 0xc62f004c  lwc1        $f15, 0x4C($s1)
    ctx->pc = 0x290550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x290554: 0xc7808b38  lwc1        $f0, -0x74C8($gp)
    ctx->pc = 0x290554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29055c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x29055cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x290560: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x290560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290564: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x290564u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x290568: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x290568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29056c: 0xc62d0034  lwc1        $f13, 0x34($s1)
    ctx->pc = 0x29056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x290570: 0x0  nop
    ctx->pc = 0x290570u;
    // NOP
    // 0x290574: 0x0  nop
    ctx->pc = 0x290574u;
    // NOP
    // 0x290578: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x290578u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x29057c: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x29057Cu;
    SET_GPR_U32(ctx, 31, 0x290584u);
    ctx->pc = 0x290580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29057Cu;
    // 0x290580: 0xc62e0038  lwc1        $f14, 0x38($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x29057Cu, 0x290584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290584u;
label_290584:
    // 0x290584: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x290584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x290588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x290588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29058c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x29058cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x290590: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x290590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x290594: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x290594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290598: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x290598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x29059c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x29059cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2905a0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2905A0u;
    SET_GPR_U32(ctx, 31, 0x2905A8u);
    ctx->pc = 0x2905A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2905A0u;
    // 0x2905a4: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2905A0u, 0x2905A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2905A8u;
label_2905a8:
    // 0x2905a8: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x2905a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2905ac: 0xc6620034  lwc1        $f2, 0x34($s3)
    ctx->pc = 0x2905acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2905b0: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x2905b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2905b4: 0xc7a500a4  lwc1        $f5, 0xA4($sp)
    ctx->pc = 0x2905b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2905b8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2905b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2905bc: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2905bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2905c0: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2905c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2905c4: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x2905c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2905c8: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x2905c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2905cc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2905ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2905d0: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x2905d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2905d4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2905d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2905d8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2905d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2905dc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2905dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2905e0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2905e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2905e4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2905e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2905e8: 0x0  nop
    ctx->pc = 0x2905e8u;
    // NOP
    // 0x2905ec: 0x0  nop
    ctx->pc = 0x2905ecu;
    // NOP
    // 0x2905f0: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2905f0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2905f4: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2905f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2905f8: 0x0  nop
    ctx->pc = 0x2905f8u;
    // NOP
    // 0x2905fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2905FCu;
    {
        const bool branch_taken_0x2905fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905FCu;
        // 0x290600: 0xe7a30050  swc1        $f3, 0x50($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905fc) {
            ctx->pc = 0x290610u;
            goto label_290610;
        }
    }
    ctx->pc = 0x290604u;
    // 0x290604: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x290604u;
    SET_GPR_U32(ctx, 31, 0x29060Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x290604u, 0x29060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29060Cu;
label_29060c:
    // 0x29060c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x29060cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_290610:
    // 0x290610: 0x3c0140d0  lui         $at, 0x40D0
    ctx->pc = 0x290610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16592 << 16));
    // 0x290614: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x290614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29061c: 0x3c014278  lui         $at, 0x4278
    ctx->pc = 0x29061cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17016 << 16));
    // 0x290620: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x290620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x290624: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x290624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290628: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x290628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29062c: 0xc7858b3c  lwc1        $f5, -0x74C4($gp)
    ctx->pc = 0x29062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x290630: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x290630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290634: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x290634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290638: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x290638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29063c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29063cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290640: 0x0  nop
    ctx->pc = 0x290640u;
    // NOP
    // 0x290644: 0x0  nop
    ctx->pc = 0x290644u;
    // NOP
    // 0x290648: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x290648u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x29064c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x29064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290650: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x290650u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x290654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290658: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x290658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29065c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x29065cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290660: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x290660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x290664: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x290664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290668: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x290668u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x29066c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x29066cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x290670: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x290670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x290674: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x290674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x290678: 0xc0a41b2  jal         func_2906C8
    ctx->pc = 0x290678u;
    SET_GPR_U32(ctx, 31, 0x290680u);
    ctx->pc = 0x29067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290678u;
    // 0x29067c: 0xe6420004  swc1        $f2, 0x4($s2) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906C8u, 0x290678u, 0x290680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290680u;
label_290680:
    // 0x290680: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x290680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x290684: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x290684u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x290688: 0xdfb30120  ld          $s3, 0x120($sp)
    ctx->pc = 0x290688u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29068c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x29068cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x290690: 0xdfb10100  ld          $s1, 0x100($sp)
    ctx->pc = 0x290690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x290694: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x290694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x290698: 0x3e00008  jr          $ra
    ctx->pc = 0x290698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290698u;
        // 0x29069c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2906A0u;
}
