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

// Function: headPropNew
// Address: 0x26b538 - 0x26b70c
void headPropNew_0x26b538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("headPropNew_0x26b538");
#endif

    switch (ctx->pc) {
        case 0x26b5a4u: goto label_26b5a4;
        case 0x26b60cu: goto label_26b60c;
        case 0x26b6d4u: goto label_26b6d4;
        default: break;
    }

    ctx->pc = 0x26b538u;

    // 0x26b538: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26b538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26b53c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x26b53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x26b540: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26b540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26b544: 0x3c152000  lui         $s5, 0x2000
    ctx->pc = 0x26b544u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
    // 0x26b548: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26b548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26b54c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26b54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26b550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b554: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x26b558: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26b558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26b55c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26b55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26b560: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x26b560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x26b564: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x26b564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26b568: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x26b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x26b56c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26B56Cu;
    {
        const bool branch_taken_0x26b56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B56Cu;
        // 0x26b570: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b56c) {
            ctx->pc = 0x26B588u;
            goto label_26b588;
        }
    }
    ctx->pc = 0x26B574u;
    // 0x26b574: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x26b574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x26b578: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26b578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b57c: 0x8c440bd0  lw          $a0, 0xBD0($v0)
    ctx->pc = 0x26b57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3024)));
    // 0x26b580: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B580u;
    {
        const bool branch_taken_0x26b580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26b580) {
            ctx->pc = 0x26B584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B580u;
            // 0x26b584: 0xc62c0030  lwc1        $f12, 0x30($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B590u;
            goto label_26b590;
        }
    }
    ctx->pc = 0x26B588u;
label_26b588:
    // 0x26b588: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x26B588u;
    {
        const bool branch_taken_0x26b588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B588u;
        // 0x26b58c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b588) {
            ctx->pc = 0x26B6E4u;
            goto label_26b6e4;
        }
    }
    ctx->pc = 0x26B590u;
label_26b590:
    // 0x26b590: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26b590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26b594: 0xc62d0034  lwc1        $f13, 0x34($s1)
    ctx->pc = 0x26b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26b598: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x26b598u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x26b59c: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x26B59Cu;
    SET_GPR_U32(ctx, 31, 0x26B5A4u);
    ctx->pc = 0x26B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B59Cu;
    // 0x26b5a0: 0xc62e0038  lwc1        $f14, 0x38($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x26B59Cu, 0x26B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B5A4u;
label_26b5a4:
    // 0x26b5a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26b5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b5a8: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x26b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x26b5ac: 0x8e490020  lw          $t1, 0x20($s2)
    ctx->pc = 0x26b5acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x26b5b0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x26b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26b5b4: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x26b5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26b5b8: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x26b5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26b5bc: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x26b5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x26b5c0: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x26b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x26b5c4: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x26b5c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x26b5c8: 0x24540d50  addiu       $s4, $v0, 0xD50
    ctx->pc = 0x26b5c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3408));
    // 0x26b5cc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x26b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x26b5d0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x26b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x26b5d4: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x26b5d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26b5d8: 0x244290c0  addiu       $v0, $v0, -0x6F40
    ctx->pc = 0x26b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938816));
    // 0x26b5dc: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x26b5dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26b5e0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x26b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x26b5e4: 0xc28021  addu        $s0, $a2, $v0
    ctx->pc = 0x26b5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x26b5e8: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x26b5e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b5ec: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x26B5ECu;
    {
        const bool branch_taken_0x26b5ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5ECu;
        // 0x26b5f0: 0xe43823  subu        $a3, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5ec) {
            ctx->pc = 0x26B628u;
            goto label_26b628;
        }
    }
    ctx->pc = 0x26B5F4u;
    // 0x26b5f4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x26b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26b5f8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x26b5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b5fc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x26b5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b600: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x26b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x26b604: 0xc098d32  jal         func_2634C8
    ctx->pc = 0x26B604u;
    SET_GPR_U32(ctx, 31, 0x26B60Cu);
    ctx->pc = 0x26B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B604u;
    // 0x26b608: 0x8c460024  lw          $a2, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2634C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2634C8u, 0x26B604u, 0x26B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B60Cu;
label_26b60c:
    // 0x26b60c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b610: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x26b610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x26b614: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x26b614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x26b618: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26b618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b61c: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x26b61cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26b620: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x26b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x26b624: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x26b624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_26b628:
    // 0x26b628: 0x8e500160  lw          $s0, 0x160($s2)
    ctx->pc = 0x26b628u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x26b62c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26b630: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x26b630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x26b634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b638: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x26b638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x26b63c: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x26b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b640: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x26b640u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x26b644: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x26b644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x26b648: 0x240400d3  addiu       $a0, $zero, 0xD3
    ctx->pc = 0x26b648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x26b64c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x26b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26b650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b654: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x26b654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b658: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x26b658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26b65c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x26b65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x26b660: 0xae110060  sw          $s1, 0x60($s0)
    ctx->pc = 0x26b660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
    // 0x26b664: 0x0  nop
    ctx->pc = 0x26b664u;
    // NOP
    // 0x26b668: 0x0  nop
    ctx->pc = 0x26b668u;
    // NOP
    // 0x26b66c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x26b66cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x26b670: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x26b670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x26b674: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x26b674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x26b678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26b678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b67c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x26b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26b680: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26b680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26b684: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x26b684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x26b688: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x26b688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x26b68c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x26b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x26b690: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x26b690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b694: 0x0  nop
    ctx->pc = 0x26b694u;
    // NOP
    // 0x26b698: 0x0  nop
    ctx->pc = 0x26b698u;
    // NOP
    // 0x26b69c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x26b69cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x26b6a0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x26b6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x26b6a4: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x26b6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b6a8: 0xe6140050  swc1        $f20, 0x50($s0)
    ctx->pc = 0x26b6a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x26b6ac: 0x0  nop
    ctx->pc = 0x26b6acu;
    // NOP
    // 0x26b6b0: 0x0  nop
    ctx->pc = 0x26b6b0u;
    // NOP
    // 0x26b6b4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x26b6b4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x26b6b8: 0xe6140054  swc1        $f20, 0x54($s0)
    ctx->pc = 0x26b6b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x26b6bc: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x26b6bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x26b6c0: 0xe614005c  swc1        $f20, 0x5C($s0)
    ctx->pc = 0x26b6c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x26b6c4: 0xe6140048  swc1        $f20, 0x48($s0)
    ctx->pc = 0x26b6c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x26b6c8: 0xe614004c  swc1        $f20, 0x4C($s0)
    ctx->pc = 0x26b6c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x26b6cc: 0xc081602  jal         func_205808
    ctx->pc = 0x26B6CCu;
    SET_GPR_U32(ctx, 31, 0x26B6D4u);
    ctx->pc = 0x26B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B6CCu;
    // 0x26b6d0: 0xe601006c  swc1        $f1, 0x6C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205808u, 0x26B6CCu, 0x26B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6D4u;
label_26b6d4:
    // 0x26b6d4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x26b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x26b6d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x26b6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b6dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26b6e0: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x26b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_26b6e4:
    // 0x26b6e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26b6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b6e8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x26b6e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b6ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26b6ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b6f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26b6f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b6f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26b6f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b6f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26b6f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b6fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26b6fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b700: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x26b700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26b704: 0x3e00008  jr          $ra
    ctx->pc = 0x26B704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B704u;
        // 0x26b708: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B70Cu;
}
