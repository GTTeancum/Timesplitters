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

// Function: scalbnf
// Address: 0x2dc610 - 0x2dc770
void scalbnf_0x2dc610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scalbnf_0x2dc610");
#endif

    switch (ctx->pc) {
        case 0x2dc72cu: goto label_2dc72c;
        default: break;
    }

    ctx->pc = 0x2dc610u;

    // 0x2dc610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc614: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x2dc614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2dc618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc61c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2dc61cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc620: 0x3c077f80  lui         $a3, 0x7F80
    ctx->pc = 0x2dc620u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32640 << 16));
    // 0x2dc624: 0xc71024  and         $v0, $a2, $a3
    ctx->pc = 0x2dc624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x2dc628: 0x21dc3  sra         $v1, $v0, 23
    ctx->pc = 0x2dc628u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 23));
    // 0x2dc62c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2DC62Cu;
    {
        const bool branch_taken_0x2dc62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC62Cu;
        // 0x2dc630: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc62c) {
            ctx->pc = 0x2DC6A0u;
            goto label_2dc6a0;
        }
    }
    ctx->pc = 0x2DC634u;
    // 0x2dc634: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2dc634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2dc638: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc63c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2dc63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2dc640: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC640u;
    {
        const bool branch_taken_0x2dc640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC640u;
        // 0x2dc644: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc640) {
            ctx->pc = 0x2DC658u;
            goto label_2dc658;
        }
    }
    ctx->pc = 0x2DC648u;
    // 0x2dc648: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2dc648u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc64c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2DC64Cu;
    {
        const bool branch_taken_0x2dc64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC64Cu;
        // 0x2dc650: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc64c) {
            ctx->pc = 0x2DC768u;
            goto label_2dc768;
        }
    }
    ctx->pc = 0x2DC654u;
    // 0x2dc654: 0x0  nop
    ctx->pc = 0x2dc654u;
    // NOP
label_2dc658:
    // 0x2dc658: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x2dc658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x2dc65c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc660: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2dc660u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc664: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2dc664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc668: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2dc668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2dc66c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2dc66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc670: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x2dc670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x2dc674: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2dc674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2dc678: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x2dc678u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x2dc67c: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x2dc67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x2dc680: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2dc680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dc684: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC684u;
    {
        const bool branch_taken_0x2dc684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC684u;
        // 0x2dc688: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc684) {
            ctx->pc = 0x2DC6A0u;
            goto label_2dc6a0;
        }
    }
    ctx->pc = 0x2DC68Cu;
    // 0x2dc68c: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x2dc68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x2dc690: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x2dc690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x2dc694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc698: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2DC698u;
    {
        const bool branch_taken_0x2dc698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC698u;
        // 0x2dc69c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc698) {
            ctx->pc = 0x2DC760u;
            goto label_2dc760;
        }
    }
    ctx->pc = 0x2DC6A0u;
label_2dc6a0:
    // 0x2dc6a0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2dc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2dc6a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC6A4u;
    {
        const bool branch_taken_0x2dc6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6A4u;
        // 0x2dc6a8: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6a4) {
            ctx->pc = 0x2DC6B8u;
            goto label_2dc6b8;
        }
    }
    ctx->pc = 0x2DC6ACu;
    // 0x2dc6ac: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2dc6acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dc6b0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2DC6B0u;
    {
        const bool branch_taken_0x2dc6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6B0u;
        // 0x2dc6b4: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6b0) {
            ctx->pc = 0x2DC760u;
            goto label_2dc760;
        }
    }
    ctx->pc = 0x2DC6B8u;
label_2dc6b8:
    // 0x2dc6b8: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x2dc6b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2dc6bc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DC6BCu;
    {
        const bool branch_taken_0x2dc6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc6bc) {
            ctx->pc = 0x2DC714u;
            goto label_2dc714;
        }
    }
    ctx->pc = 0x2DC6C4u;
    // 0x2dc6c4: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2DC6C4u;
    {
        const bool branch_taken_0x2dc6c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2DC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6C4u;
        // 0x2dc6c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6c4) {
            ctx->pc = 0x2DC6F0u;
            goto label_2dc6f0;
        }
    }
    ctx->pc = 0x2DC6CCu;
    // 0x2dc6cc: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x2dc6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x2dc6d0: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x2dc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x2dc6d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc6d8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2dc6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2dc6dc: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2dc6dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2dc6e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2dc6e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc6e4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2DC6E4u;
    {
        const bool branch_taken_0x2dc6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6E4u;
        // 0x2dc6e8: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6e4) {
            ctx->pc = 0x2DC768u;
            goto label_2dc768;
        }
    }
    ctx->pc = 0x2DC6ECu;
    // 0x2dc6ec: 0x0  nop
    ctx->pc = 0x2dc6ecu;
    // NOP
label_2dc6f0:
    // 0x2dc6f0: 0x2862ffe8  slti        $v0, $v1, -0x18
    ctx->pc = 0x2dc6f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967272) ? 1 : 0);
    // 0x2dc6f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DC6F4u;
    {
        const bool branch_taken_0x2dc6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6F4u;
        // 0x2dc6f8: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6f4) {
            ctx->pc = 0x2DC734u;
            goto label_2dc734;
        }
    }
    ctx->pc = 0x2DC6FCu;
    // 0x2dc6fc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2dc6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2dc700: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x2dc700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x2dc704: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x2dc704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x2dc708: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dc708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2dc70c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC70Cu;
    {
        const bool branch_taken_0x2dc70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc70c) {
            ctx->pc = 0x2DC720u;
            goto label_2dc720;
        }
    }
    ctx->pc = 0x2DC714u;
label_2dc714:
    // 0x2dc714: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x2dc714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x2dc718: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x2dc718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x2dc71c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dc71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dc720:
    // 0x2dc720: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2dc720u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dc724: 0xc0b71ee  jal         func_2DC7B8
    ctx->pc = 0x2DC724u;
    SET_GPR_U32(ctx, 31, 0x2DC72Cu);
    ctx->pc = 0x2DC728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC724u;
    // 0x2dc728: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC7B8u, 0x2DC724u, 0x2DC72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC72Cu;
label_2dc72c:
    // 0x2dc72c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DC72Cu;
    {
        const bool branch_taken_0x2dc72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC72Cu;
        // 0x2dc730: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc72c) {
            ctx->pc = 0x2DC760u;
            goto label_2dc760;
        }
    }
    ctx->pc = 0x2DC734u;
label_2dc734:
    // 0x2dc734: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x2dc734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x2dc738: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x2dc738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x2dc73c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc740: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x2dc740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x2dc744: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2dc744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2dc748: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2dc748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2dc74c: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x2dc74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x2dc750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc754: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2dc754u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc758: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dc758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc75c: 0x0  nop
    ctx->pc = 0x2dc75cu;
    // NOP
label_2dc760:
    // 0x2dc760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc764: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2dc764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dc768:
    // 0x2dc768: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC768u;
        // 0x2dc76c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC770u;
}
