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

// Function: hsv2col
// Address: 0x22e610 - 0x22e7b0
void hsv2col_0x22e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hsv2col_0x22e610");
#endif

    switch (ctx->pc) {
        case 0x22e640u: goto label_22e640;
        case 0x22e678u: goto label_22e678;
        case 0x22e680u: goto label_22e680;
        case 0x22e688u: goto label_22e688;
        default: break;
    }

    ctx->pc = 0x22e610u;

    // 0x22e610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22e610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22e614: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x22e614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x22e618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e61c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x22e61cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x22e620: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22e620u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x22e624: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x22e624u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22e628: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22e628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e62c: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x22e62cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x22e630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22e634: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x22e634u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x22e638: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22E638u;
    {
        const bool branch_taken_0x22e638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E638u;
        // 0x22e63c: 0x46007546  mov.s       $f21, $f14 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e638) {
            ctx->pc = 0x22E65Cu;
            goto label_22e65c;
        }
    }
    ctx->pc = 0x22E640u;
label_22e640:
    // 0x22e640: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x22e640u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x22e644: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22e644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e648: 0x0  nop
    ctx->pc = 0x22e648u;
    // NOP
    // 0x22e64c: 0x0  nop
    ctx->pc = 0x22e64cu;
    // NOP
    // 0x22e650: 0x0  nop
    ctx->pc = 0x22e650u;
    // NOP
    // 0x22e654: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22E654u;
    {
        const bool branch_taken_0x22e654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e654) {
            ctx->pc = 0x22E640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e640;
        }
    }
    ctx->pc = 0x22E65Cu;
label_22e65c:
    // 0x22e65c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x22e65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x22e660: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e664: 0x0  nop
    ctx->pc = 0x22e664u;
    // NOP
    // 0x22e668: 0x0  nop
    ctx->pc = 0x22e668u;
    // NOP
    // 0x22e66c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x22e66cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x22e670: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22E670u;
    SET_GPR_U32(ctx, 31, 0x22E678u);
    ctx->pc = 0x22E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E670u;
    // 0x22e674: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22E670u, 0x22E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E678u;
label_22e678:
    // 0x22e678: 0xc0b5bfc  jal         func_2D6FF0
    ctx->pc = 0x22E678u;
    SET_GPR_U32(ctx, 31, 0x22E680u);
    ctx->pc = 0x22E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E678u;
    // 0x22e67c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6FF0u, 0x22E678u, 0x22E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E680u;
label_22e680:
    // 0x22e680: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x22E680u;
    SET_GPR_U32(ctx, 31, 0x22E688u);
    ctx->pc = 0x22E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E680u;
    // 0x22e684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x22E680u, 0x22E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E688u;
label_22e688:
    // 0x22e688: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22e688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22e68c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22e68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22e690: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22e690u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x22e694: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x22e694u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x22e698: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x22e698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x22e69c: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x22e69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x22e6a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x22e6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x22e6a4: 0x461608c1  sub.s       $f3, $f1, $f22
    ctx->pc = 0x22e6a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
    // 0x22e6a8: 0x4604a942  mul.s       $f5, $f21, $f4
    ctx->pc = 0x22e6a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
    // 0x22e6ac: 0x2d450006  sltiu       $a1, $t2, 0x6
    ctx->pc = 0x22e6acu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x22e6b0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x22e6b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22e6b4: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x22e6b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x22e6b8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x22e6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x22e6bc: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x22e6bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x22e6c0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x22e6c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x22e6c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22e6c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22e6c8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x22e6c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x22e6cc: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22e6ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x22e6d0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x22e6d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x22e6d4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x22e6d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x22e6d8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x22e6d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x22e6dc: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x22e6dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e6e0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x22e6e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x22e6e4: 0x460028a4  .word       0x460028A4                   # cvt.w.s     $f2, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22e6e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x22e6e8: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x22e6e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x22e6ec: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x22e6ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x22e6f0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22e6f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x22e6f4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x22e6f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x22e6f8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x22e6f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22e6fc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22e6fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22e700: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x22e700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x22e704: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x22e704u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22e708: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x22E708u;
    {
        const bool branch_taken_0x22e708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E708u;
        // 0x22e70c: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e708) {
            ctx->pc = 0x22E794u;
            goto label_22e794;
        }
    }
    ctx->pc = 0x22E710u;
    // 0x22e710: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x22e710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x22e714: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x22e714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x22e718: 0x24421920  addiu       $v0, $v0, 0x1920
    ctx->pc = 0x22e718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6432));
    // 0x22e71c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e720: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e724: 0x800008  jr          $a0
    ctx->pc = 0x22E724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E72Cu: goto label_22e72c;
            case 0x22E73Cu: goto label_22e73c;
            case 0x22E74Cu: goto label_22e74c;
            case 0x22E75Cu: goto label_22e75c;
            case 0x22E76Cu: goto label_22e76c;
            case 0x22E778u: goto label_22e778;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E724u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22E72Cu;
label_22e72c:
    // 0x22e72c: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x22e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x22e730: 0x91200  sll         $v0, $t1, 8
    ctx->pc = 0x22e730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x22e734: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x22E734u;
    {
        const bool branch_taken_0x22e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E734u;
        // 0x22e738: 0x72400  sll         $a0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e734) {
            ctx->pc = 0x22E784u;
            goto label_22e784;
        }
    }
    ctx->pc = 0x22E73Cu;
label_22e73c:
    // 0x22e73c: 0x81e00  sll         $v1, $t0, 24
    ctx->pc = 0x22e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x22e740: 0x91200  sll         $v0, $t1, 8
    ctx->pc = 0x22e740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x22e744: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22E744u;
    {
        const bool branch_taken_0x22e744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E744u;
        // 0x22e748: 0x62400  sll         $a0, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e744) {
            ctx->pc = 0x22E784u;
            goto label_22e784;
        }
    }
    ctx->pc = 0x22E74Cu;
label_22e74c:
    // 0x22e74c: 0x91e00  sll         $v1, $t1, 24
    ctx->pc = 0x22e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x22e750: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x22e750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x22e754: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22E754u;
    {
        const bool branch_taken_0x22e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E754u;
        // 0x22e758: 0x62400  sll         $a0, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e754) {
            ctx->pc = 0x22E784u;
            goto label_22e784;
        }
    }
    ctx->pc = 0x22E75Cu;
label_22e75c:
    // 0x22e75c: 0x91e00  sll         $v1, $t1, 24
    ctx->pc = 0x22e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x22e760: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x22e760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x22e764: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22E764u;
    {
        const bool branch_taken_0x22e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E764u;
        // 0x22e768: 0x82400  sll         $a0, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e764) {
            ctx->pc = 0x22E784u;
            goto label_22e784;
        }
    }
    ctx->pc = 0x22E76Cu;
label_22e76c:
    // 0x22e76c: 0x71e00  sll         $v1, $a3, 24
    ctx->pc = 0x22e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x22e770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22E770u;
    {
        const bool branch_taken_0x22e770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E770u;
        // 0x22e774: 0x61200  sll         $v0, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e770) {
            ctx->pc = 0x22E780u;
            goto label_22e780;
        }
    }
    ctx->pc = 0x22E778u;
label_22e778:
    // 0x22e778: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x22e778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x22e77c: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x22e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_22e780:
    // 0x22e780: 0x92400  sll         $a0, $t1, 16
    ctx->pc = 0x22e780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_22e784:
    // 0x22e784: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x22e784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x22e788: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22e788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22e78c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22E78Cu;
    {
        const bool branch_taken_0x22e78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E78Cu;
        // 0x22e790: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e78c) {
            ctx->pc = 0x22E798u;
            goto label_22e798;
        }
    }
    ctx->pc = 0x22E794u;
label_22e794:
    // 0x22e794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e798:
    // 0x22e798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e79c: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x22e79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22e7a0: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x22e7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22e7a4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x22e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22e7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22E7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7A8u;
        // 0x22e7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E7B0u;
}
