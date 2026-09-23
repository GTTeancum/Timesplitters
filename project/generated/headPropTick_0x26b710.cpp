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

// Function: headPropTick
// Address: 0x26b710 - 0x26be78
void headPropTick_0x26b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("headPropTick_0x26b710");
#endif

    switch (ctx->pc) {
        case 0x26b7b4u: goto label_26b7b4;
        case 0x26b7f8u: goto label_26b7f8;
        case 0x26b81cu: goto label_26b81c;
        case 0x26b870u: goto label_26b870;
        case 0x26b89cu: goto label_26b89c;
        case 0x26b934u: goto label_26b934;
        case 0x26b9d0u: goto label_26b9d0;
        case 0x26ba8cu: goto label_26ba8c;
        case 0x26baecu: goto label_26baec;
        case 0x26be10u: goto label_26be10;
        case 0x26be24u: goto label_26be24;
        case 0x26be54u: goto label_26be54;
        default: break;
    }

    ctx->pc = 0x26b710u;

    // 0x26b710: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x26b710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b714: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x26b714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x26b718: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x26b718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x26b71c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b720: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26b720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x26b724: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x26b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x26b728: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x26b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x26b72c: 0x0  nop
    ctx->pc = 0x26b72cu;
    // NOP
    // 0x26b730: 0x0  nop
    ctx->pc = 0x26b730u;
    // NOP
    // 0x26b734: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26b734u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x26b738: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x26b738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x26b73c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b740: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x26b740u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x26b744: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x26b744u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x26b748: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x26b748u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x26b74c: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x26b74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x26b750: 0x8e320160  lw          $s2, 0x160($s1)
    ctx->pc = 0x26b750u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x26b754: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26b754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26b758: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26b75c: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x26b75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b760: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x26b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26b764: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26b764u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26b768: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26b768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26b76c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x26b76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x26b770: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x26b770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b774: 0x0  nop
    ctx->pc = 0x26b774u;
    // NOP
    // 0x26b778: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x26B778u;
    {
        const bool branch_taken_0x26b778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B778u;
        // 0x26b77c: 0xe6410044  swc1        $f1, 0x44($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b778) {
            ctx->pc = 0x26B7B4u;
            goto label_26b7b4;
        }
    }
    ctx->pc = 0x26B780u;
    // 0x26b780: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x26b780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x26b784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b788: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26b788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26b78c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26b78cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x26b790: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x26b790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x26b794: 0x0  nop
    ctx->pc = 0x26b794u;
    // NOP
    // 0x26b798: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26B798u;
    {
        const bool branch_taken_0x26b798 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x26B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B798u;
        // 0x26b79c: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b798) {
            ctx->pc = 0x26B7B4u;
            goto label_26b7b4;
        }
    }
    ctx->pc = 0x26B7A0u;
    // 0x26b7a0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x26b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26b7a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x26b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b7a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26b7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b7ac: 0xc098ffc  jal         func_263FF0
    ctx->pc = 0x26B7ACu;
    SET_GPR_U32(ctx, 31, 0x26B7B4u);
    ctx->pc = 0x26B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B7ACu;
    // 0x26b7b0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FF0u, 0x26B7ACu, 0x26B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7B4u;
label_26b7b4:
    // 0x26b7b4: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x26b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x26b7b8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x26b7b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x26b7bc: 0x104001a5  beqz        $v0, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x26B7BCu;
    {
        const bool branch_taken_0x26b7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7BCu;
        // 0x26b7c0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7bc) {
            ctx->pc = 0x26BE54u;
            goto label_26be54;
        }
    }
    ctx->pc = 0x26B7C4u;
    // 0x26b7c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26b7c8: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x26b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x26b7cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b7d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b7d4: 0x800008  jr          $a0
    ctx->pc = 0x26B7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B7DCu: goto label_26b7dc;
            case 0x26B804u: goto label_26b804;
            case 0x26B880u: goto label_26b880;
            case 0x26B9BCu: goto label_26b9bc;
            case 0x26BE4Cu: goto label_26be4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B7D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26B7DCu;
label_26b7dc:
    // 0x26b7dc: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x26b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x26b7e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26b7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7e8: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x26b7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x26b7ec: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x26b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x26b7f0: 0xc09c0b6  jal         func_2702D8
    ctx->pc = 0x26B7F0u;
    SET_GPR_U32(ctx, 31, 0x26B7F8u);
    ctx->pc = 0x26B7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B7F0u;
    // 0x26b7f4: 0x8c460014  lw          $a2, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2702D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2702D8u, 0x26B7F0u, 0x26B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7F8u;
label_26b7f8:
    // 0x26b7f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b7fc: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x26B7FCu;
    {
        const bool branch_taken_0x26b7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7FCu;
        // 0x26b800: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7fc) {
            ctx->pc = 0x26BE54u;
            goto label_26be54;
        }
    }
    ctx->pc = 0x26B804u;
label_26b804:
    // 0x26b804: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x26b804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26b808: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b80c: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x26b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x26b810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b814: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x26B814u;
    SET_GPR_U32(ctx, 31, 0x26B81Cu);
    ctx->pc = 0x26B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B814u;
    // 0x26b818: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x26B814u, 0x26B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B81Cu;
label_26b81c:
    // 0x26b81c: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x26b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x26b820: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x26b820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x26b824: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x26b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26b828: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26b828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b82c: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x26b82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b830: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x26b830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26b834: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x26b834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x26b838: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x26b838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26b83c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b83cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b840: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x26b840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b844: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x26b844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x26b848: 0xe621004c  swc1        $f1, 0x4C($s1)
    ctx->pc = 0x26b848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x26b84c: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x26b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b850: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x26b850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x26b854: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x26b854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b858: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x26b858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x26b85c: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x26b85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b860: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x26b860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x26b864: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x26b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b868: 0xc09829e  jal         func_260A78
    ctx->pc = 0x26B868u;
    SET_GPR_U32(ctx, 31, 0x26B870u);
    ctx->pc = 0x26B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B868u;
    // 0x26b86c: 0xe6210038  swc1        $f1, 0x38($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x26B868u, 0x26B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B870u;
label_26b870:
    // 0x26b870: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x26b870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x26b874: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26b874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x26b878: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x26B878u;
    {
        const bool branch_taken_0x26b878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B878u;
        // 0x26b87c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b878) {
            ctx->pc = 0x26BE54u;
            goto label_26be54;
        }
    }
    ctx->pc = 0x26B880u;
label_26b880:
    // 0x26b880: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x26b880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26b884: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26b884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b888: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x26b888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26b88c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26b88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26b890: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x26b890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26b894: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x26B894u;
    SET_GPR_U32(ctx, 31, 0x26B89Cu);
    ctx->pc = 0x26B898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B894u;
    // 0x26b898: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x26B894u, 0x26B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B89Cu;
label_26b89c:
    // 0x26b89c: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x26b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b8a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b8a4: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x26b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b8a8: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x26b8a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b8ac: 0x0  nop
    ctx->pc = 0x26b8acu;
    // NOP
    // 0x26b8b0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x26B8B0u;
    {
        const bool branch_taken_0x26b8b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8B0u;
        // 0x26b8b4: 0xe621003c  swc1        $f1, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8b0) {
            ctx->pc = 0x26B8DCu;
            goto label_26b8dc;
        }
    }
    ctx->pc = 0x26B8B8u;
    // 0x26b8b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26b8bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b8c0: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x26b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b8c4: 0x0  nop
    ctx->pc = 0x26b8c4u;
    // NOP
    // 0x26b8c8: 0x0  nop
    ctx->pc = 0x26b8c8u;
    // NOP
    // 0x26b8cc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x26b8ccu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x26b8d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26b8d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26b8d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26B8D4u;
    {
        const bool branch_taken_0x26b8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8D4u;
        // 0x26b8d8: 0xe6210040  swc1        $f1, 0x40($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8d4) {
            ctx->pc = 0x26B8F0u;
            goto label_26b8f0;
        }
    }
    ctx->pc = 0x26B8DCu;
label_26b8dc:
    // 0x26b8dc: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x26b8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b8e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26b8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26b8e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b8e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26b8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26b8ec: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x26b8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_26b8f0:
    // 0x26b8f0: 0xc625003c  lwc1        $f5, 0x3C($s1)
    ctx->pc = 0x26b8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26b8f4: 0xc6240040  lwc1        $f4, 0x40($s1)
    ctx->pc = 0x26b8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26b8f8: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x26b8f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x26b8fc: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x26b8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b900: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x26b900u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x26b904: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x26b904u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26b908: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x26b908u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x26b90c: 0x46030b00  add.s       $f12, $f1, $f3
    ctx->pc = 0x26b90cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x26b910: 0x0  nop
    ctx->pc = 0x26b910u;
    // NOP
    // 0x26b914: 0x0  nop
    ctx->pc = 0x26b914u;
    // NOP
    // 0x26b918: 0x460c0184  c1          0xC0184
    ctx->pc = 0x26b918u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[12]);
    // 0x26b91c: 0x46063032  c.eq.s      $f6, $f6
    ctx->pc = 0x26b91cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b920: 0x0  nop
    ctx->pc = 0x26b920u;
    // NOP
    // 0x26b924: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x26B924u;
    {
        const bool branch_taken_0x26b924 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B924u;
        // 0x26b928: 0xe6200044  swc1        $f0, 0x44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b924) {
            ctx->pc = 0x26B940u;
            goto label_26b940;
        }
    }
    ctx->pc = 0x26B92Cu;
    // 0x26b92c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x26B92Cu;
    SET_GPR_U32(ctx, 31, 0x26B934u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x26B92Cu, 0x26B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B934u;
label_26b934:
    // 0x26b934: 0xc625003c  lwc1        $f5, 0x3C($s1)
    ctx->pc = 0x26b934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26b938: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x26b938u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x26b93c: 0xc6240040  lwc1        $f4, 0x40($s1)
    ctx->pc = 0x26b93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26b940:
    // 0x26b940: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26b940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26b944: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b948: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26b948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b94c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x26b94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x26b950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b954: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26b954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b958: 0x0  nop
    ctx->pc = 0x26b958u;
    // NOP
    // 0x26b95c: 0x0  nop
    ctx->pc = 0x26b95cu;
    // NOP
    // 0x26b960: 0x46060983  div.s       $f6, $f1, $f6
    ctx->pc = 0x26b960u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[6] = ctx->f[1] / ctx->f[6];
    // 0x26b964: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x26b964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x26b968: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26b96c: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x26b96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b970: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x26b970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x26b974: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x26b974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x26b978: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26b978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26b97c: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x26b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
    // 0x26b980: 0xaf80b140  sw          $zero, -0x4EC0($gp)
    ctx->pc = 0x26b980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947136), GPR_U32(ctx, 0));
    // 0x26b984: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x26b984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x26b988: 0x0  nop
    ctx->pc = 0x26b988u;
    // NOP
    // 0x26b98c: 0x0  nop
    ctx->pc = 0x26b98cu;
    // NOP
    // 0x26b990: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x26b990u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x26b994: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26b994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26b998: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x26b998u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x26b99c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x26b99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x26b9a0: 0xe6210044  swc1        $f1, 0x44($s1)
    ctx->pc = 0x26b9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x26b9a4: 0xe622003c  swc1        $f2, 0x3C($s1)
    ctx->pc = 0x26b9a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x26b9a8: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x26b9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x26b9ac: 0xe6430048  swc1        $f3, 0x48($s2)
    ctx->pc = 0x26b9acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x26b9b0: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x26b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x26b9b4: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x26B9B4u;
    {
        const bool branch_taken_0x26b9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9B4u;
        // 0x26b9b8: 0xae40004c  sw          $zero, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9b4) {
            ctx->pc = 0x26BE54u;
            goto label_26be54;
        }
    }
    ctx->pc = 0x26B9BCu;
label_26b9bc:
    // 0x26b9bc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x26b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26b9c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26b9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b9c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26b9c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26b9c8: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x26B9C8u;
    SET_GPR_U32(ctx, 31, 0x26B9D0u);
    ctx->pc = 0x26B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B9C8u;
    // 0x26b9cc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x26B9C8u, 0x26B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9D0u;
label_26b9d0:
    // 0x26b9d0: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x26b9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b9d4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x26b9d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b9d8: 0x0  nop
    ctx->pc = 0x26b9d8u;
    // NOP
    // 0x26b9dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26B9DCu;
    {
        const bool branch_taken_0x26b9dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9DCu;
        // 0x26b9e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9dc) {
            ctx->pc = 0x26B9E8u;
            goto label_26b9e8;
        }
    }
    ctx->pc = 0x26B9E4u;
    // 0x26b9e4: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x26b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_26b9e8:
    // 0x26b9e8: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x26b9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b9ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x26b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x26b9f0: 0xc6220040  lwc1        $f2, 0x40($s1)
    ctx->pc = 0x26b9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b9f4: 0x3484ffdf  ori         $a0, $a0, 0xFFDF
    ctx->pc = 0x26b9f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65503);
    // 0x26b9f8: 0xc6230044  lwc1        $f3, 0x44($s1)
    ctx->pc = 0x26b9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26b9fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x26b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26ba00: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x26ba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ba04: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x26ba04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26ba08: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x26ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26ba0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26ba0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26ba10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26ba14: 0xc6240030  lwc1        $f4, 0x30($s1)
    ctx->pc = 0x26ba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26ba18: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26ba18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26ba1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26ba20: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x26ba20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x26ba24: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x26ba24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26ba28: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x26ba28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26ba2c: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x26ba2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26ba30: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x26ba30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26ba34: 0x262a000c  addiu       $t2, $s1, 0xC
    ctx->pc = 0x26ba34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x26ba38: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x26ba38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26ba3c: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x26ba3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x26ba40: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x26ba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ba44: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x26ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x26ba48: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x26ba48u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x26ba4c: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x26ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ba50: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x26ba50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26ba54: 0xc6220038  lwc1        $f2, 0x38($s1)
    ctx->pc = 0x26ba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ba58: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x26ba58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x26ba5c: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x26ba5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x26ba60: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x26ba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ba64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26ba64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ba68: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x26ba68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x26ba6c: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x26ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ba70: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x26ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x26ba74: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x26ba74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26ba78: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26ba7c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x26ba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26ba80: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26ba84: 0xc09640e  jal         func_259038
    ctx->pc = 0x26BA84u;
    SET_GPR_U32(ctx, 31, 0x26BA8Cu);
    ctx->pc = 0x26BA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BA84u;
    // 0x26ba88: 0xe7a200a8  swc1        $f2, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x26BA84u, 0x26BA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA8Cu;
label_26ba8c:
    // 0x26ba8c: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x26ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x26ba90: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x26BA90u;
    {
        const bool branch_taken_0x26ba90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA90u;
        // 0x26ba94: 0xac700010  sw          $s0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba90) {
            ctx->pc = 0x26BC34u;
            goto label_26bc34;
        }
    }
    ctx->pc = 0x26BA98u;
    // 0x26ba98: 0xc7808420  lwc1        $f0, -0x7BE0($gp)
    ctx->pc = 0x26ba98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ba9c: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x26ba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26baa0: 0xc642004c  lwc1        $f2, 0x4C($s2)
    ctx->pc = 0x26baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26baa4: 0xc6430050  lwc1        $f3, 0x50($s2)
    ctx->pc = 0x26baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26baa8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26baa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26baac: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26baacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26bab0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x26bab0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x26bab4: 0xe6410048  swc1        $f1, 0x48($s2)
    ctx->pc = 0x26bab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x26bab8: 0xe642004c  swc1        $f2, 0x4C($s2)
    ctx->pc = 0x26bab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x26babc: 0xe6430050  swc1        $f3, 0x50($s2)
    ctx->pc = 0x26babcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x26bac0: 0xc7aa0050  lwc1        $f10, 0x50($sp)
    ctx->pc = 0x26bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x26bac4: 0x460a5302  mul.s       $f12, $f10, $f10
    ctx->pc = 0x26bac4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x26bac8: 0x0  nop
    ctx->pc = 0x26bac8u;
    // NOP
    // 0x26bacc: 0x0  nop
    ctx->pc = 0x26baccu;
    // NOP
    // 0x26bad0: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x26bad0u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x26bad4: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x26bad4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bad8: 0x0  nop
    ctx->pc = 0x26bad8u;
    // NOP
    // 0x26badc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x26BADCu;
    {
        const bool branch_taken_0x26badc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BADCu;
        // 0x26bae0: 0xc7a20054  lwc1        $f2, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26badc) {
            ctx->pc = 0x26BAF8u;
            goto label_26baf8;
        }
    }
    ctx->pc = 0x26BAE4u;
    // 0x26bae4: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x26BAE4u;
    SET_GPR_U32(ctx, 31, 0x26BAECu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x26BAE4u, 0x26BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAECu;
label_26baec:
    // 0x26baec: 0xc7aa0050  lwc1        $f10, 0x50($sp)
    ctx->pc = 0x26baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x26baf0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x26baf0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x26baf4: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x26baf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26baf8:
    // 0x26baf8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x26baf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bafc: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x26bafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26bb00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26bb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26bb04: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x26bb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x26bb08: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x26bb08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26bb0c: 0xc7a70070  lwc1        $f7, 0x70($sp)
    ctx->pc = 0x26bb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x26bb10: 0xc7a80074  lwc1        $f8, 0x74($sp)
    ctx->pc = 0x26bb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x26bb14: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x26bb14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x26bb18: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x26bb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26bb1c: 0xc7838424  lwc1        $f3, -0x7BDC($gp)
    ctx->pc = 0x26bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26bb20: 0x46040240  add.s       $f9, $f0, $f4
    ctx->pc = 0x26bb20u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x26bb24: 0x0  nop
    ctx->pc = 0x26bb24u;
    // NOP
    // 0x26bb28: 0x0  nop
    ctx->pc = 0x26bb28u;
    // NOP
    // 0x26bb2c: 0x46093183  div.s       $f6, $f6, $f9
    ctx->pc = 0x26bb2cu;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[6] = ctx->f[6] / ctx->f[9];
    // 0x26bb30: 0x46034834  c.lt.s      $f9, $f3
    ctx->pc = 0x26bb30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bb34: 0x46065102  mul.s       $f4, $f10, $f6
    ctx->pc = 0x26bb34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x26bb38: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x26bb38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x26bb3c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x26bb3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x26bb40: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x26bb40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x26bb44: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x26bb44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x26bb48: 0x46081182  mul.s       $f6, $f2, $f8
    ctx->pc = 0x26bb48u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x26bb4c: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x26bb4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x26bb50: 0x460508c2  mul.s       $f3, $f1, $f5
    ctx->pc = 0x26bb50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x26bb54: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x26bb54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x26bb58: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x26bb58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x26bb5c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x26bb5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26bb60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x26bb60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x26bb64: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x26bb64u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x26bb68: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x26bb68u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x26bb6c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x26bb6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x26bb70: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x26bb70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x26bb74: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x26bb74u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x26bb78: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x26bb78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26bb7c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x26bb7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x26bb80: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x26bb80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x26bb84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x26BB84u;
    {
        const bool branch_taken_0x26bb84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB84u;
        // 0x26bb88: 0xe7a20094  swc1        $f2, 0x94($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb84) {
            ctx->pc = 0x26BB9Cu;
            goto label_26bb9c;
        }
    }
    ctx->pc = 0x26BB8Cu;
    // 0x26bb8c: 0xe6540048  swc1        $f20, 0x48($s2)
    ctx->pc = 0x26bb8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x26bb90: 0x4600a246  mov.s       $f9, $f20
    ctx->pc = 0x26bb90u;
    ctx->f[9] = FPU_MOV_S(ctx->f[20]);
    // 0x26bb94: 0xe654004c  swc1        $f20, 0x4C($s2)
    ctx->pc = 0x26bb94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x26bb98: 0xe6540050  swc1        $f20, 0x50($s2)
    ctx->pc = 0x26bb98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_26bb9c:
    // 0x26bb9c: 0xc784b468  lwc1        $f4, -0x4B98($gp)
    ctx->pc = 0x26bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26bba0: 0x46142032  c.eq.s      $f4, $f20
    ctx->pc = 0x26bba0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bba4: 0x0  nop
    ctx->pc = 0x26bba4u;
    // NOP
    // 0x26bba8: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x26BBA8u;
    {
        const bool branch_taken_0x26bba8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBA8u;
        // 0x26bbac: 0xc7a10090  lwc1        $f1, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bba8) {
            ctx->pc = 0x26BC00u;
            goto label_26bc00;
        }
    }
    ctx->pc = 0x26BBB0u;
    // 0x26bbb0: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x26bbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26bbb4: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x26bbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26bbb8: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x26bbb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x26bbbc: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x26bbbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x26bbc0: 0xc7808428  lwc1        $f0, -0x7BD8($gp)
    ctx->pc = 0x26bbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bbc4: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x26bbc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x26bbc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26bbc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26bbcc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26bbccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26bbd0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x26bbd0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x26bbd4: 0x0  nop
    ctx->pc = 0x26bbd4u;
    // NOP
    // 0x26bbd8: 0x0  nop
    ctx->pc = 0x26bbd8u;
    // NOP
    // 0x26bbdc: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x26bbdcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x26bbe0: 0x0  nop
    ctx->pc = 0x26bbe0u;
    // NOP
    // 0x26bbe4: 0x0  nop
    ctx->pc = 0x26bbe4u;
    // NOP
    // 0x26bbe8: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x26bbe8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x26bbec: 0x0  nop
    ctx->pc = 0x26bbecu;
    // NOP
    // 0x26bbf0: 0x0  nop
    ctx->pc = 0x26bbf0u;
    // NOP
    // 0x26bbf4: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x26bbf4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[4];
    // 0x26bbf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26BBF8u;
    {
        const bool branch_taken_0x26bbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBF8u;
        // 0x26bbfc: 0xe621003c  swc1        $f1, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbf8) {
            ctx->pc = 0x26BC28u;
            goto label_26bc28;
        }
    }
    ctx->pc = 0x26BC00u;
label_26bc00:
    // 0x26bc00: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x26bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26bc04: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x26bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26bc08: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x26bc08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x26bc0c: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x26bc0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x26bc10: 0xc780842c  lwc1        $f0, -0x7BD4($gp)
    ctx->pc = 0x26bc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bc14: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x26bc14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x26bc18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26bc18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26bc1c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26bc1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26bc20: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x26bc20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x26bc24: 0xe621003c  swc1        $f1, 0x3C($s1)
    ctx->pc = 0x26bc24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_26bc28:
    // 0x26bc28: 0xe6220040  swc1        $f2, 0x40($s1)
    ctx->pc = 0x26bc28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x26bc2c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x26BC2Cu;
    {
        const bool branch_taken_0x26bc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC2Cu;
        // 0x26bc30: 0xe6230044  swc1        $f3, 0x44($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc2c) {
            ctx->pc = 0x26BD78u;
            goto label_26bd78;
        }
    }
    ctx->pc = 0x26BC34u;
label_26bc34:
    // 0x26bc34: 0xc78ab468  lwc1        $f10, -0x4B98($gp)
    ctx->pc = 0x26bc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x26bc38: 0xc7808430  lwc1        $f0, -0x7BD0($gp)
    ctx->pc = 0x26bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bc3c: 0xc6230040  lwc1        $f3, 0x40($s1)
    ctx->pc = 0x26bc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26bc40: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x26bc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x26bc44: 0xc7a90050  lwc1        $f9, 0x50($sp)
    ctx->pc = 0x26bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x26bc48: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x26bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26bc4c: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x26bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26bc50: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x26bc50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x26bc54: 0xc6260030  lwc1        $f6, 0x30($s1)
    ctx->pc = 0x26bc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26bc58: 0xc6270034  lwc1        $f7, 0x34($s1)
    ctx->pc = 0x26bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x26bc5c: 0xc6280038  lwc1        $f8, 0x38($s1)
    ctx->pc = 0x26bc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x26bc60: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x26bc60u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x26bc64: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x26bc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bc68: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x26bc68u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x26bc6c: 0xc7828434  lwc1        $f2, -0x7BCC($gp)
    ctx->pc = 0x26bc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26bc70: 0x46054200  add.s       $f8, $f8, $f5
    ctx->pc = 0x26bc70u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
    // 0x26bc74: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x26bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bc78: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x26bc78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26bc7c: 0xe6260030  swc1        $f6, 0x30($s1)
    ctx->pc = 0x26bc7cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x26bc80: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x26bc80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26bc84: 0xe6270034  swc1        $f7, 0x34($s1)
    ctx->pc = 0x26bc84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x26bc88: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x26bc88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x26bc8c: 0xe6280038  swc1        $f8, 0x38($s1)
    ctx->pc = 0x26bc8cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x26bc90: 0xe621003c  swc1        $f1, 0x3C($s1)
    ctx->pc = 0x26bc90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x26bc94: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x26bc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x26bc98: 0xe6230040  swc1        $f3, 0x40($s1)
    ctx->pc = 0x26bc98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x26bc9c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x26bc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x26bca0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26bca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26bca4: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x26bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bca8: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x26bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bcac: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x26bcacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x26bcb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26bcb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26bcb4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x26bcb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bcb8: 0x0  nop
    ctx->pc = 0x26bcb8u;
    // NOP
    // 0x26bcbc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26BCBCu;
    {
        const bool branch_taken_0x26bcbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCBCu;
        // 0x26bcc0: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bcbc) {
            ctx->pc = 0x26BCCCu;
            goto label_26bccc;
        }
    }
    ctx->pc = 0x26BCC4u;
    // 0x26bcc4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x26bcc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x26bcc8: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x26bcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_26bccc:
    // 0x26bccc: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x26bcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bcd0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x26bcd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bcd4: 0x0  nop
    ctx->pc = 0x26bcd4u;
    // NOP
    // 0x26bcd8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x26BCD8u;
    {
        const bool branch_taken_0x26bcd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bcd8) {
            ctx->pc = 0x26BCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BCD8u;
            // 0x26bcdc: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BCECu;
            goto label_26bcec;
        }
    }
    ctx->pc = 0x26BCE0u;
    // 0x26bce0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x26bce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26bce4: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x26bce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x26bce8: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x26bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26bcec:
    // 0x26bcec: 0xc641004c  lwc1        $f1, 0x4C($s2)
    ctx->pc = 0x26bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bcf0: 0xc6420058  lwc1        $f2, 0x58($s2)
    ctx->pc = 0x26bcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26bcf4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26bcf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26bcf8: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x26bcf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x26bcfc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x26bcfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bd00: 0x0  nop
    ctx->pc = 0x26bd00u;
    // NOP
    // 0x26bd04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26BD04u;
    {
        const bool branch_taken_0x26bd04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD04u;
        // 0x26bd08: 0xe6400058  swc1        $f0, 0x58($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd04) {
            ctx->pc = 0x26BD14u;
            goto label_26bd14;
        }
    }
    ctx->pc = 0x26BD0Cu;
    // 0x26bd0c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x26bd0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x26bd10: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x26bd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
label_26bd14:
    // 0x26bd14: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x26bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bd18: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x26bd18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bd1c: 0x0  nop
    ctx->pc = 0x26bd1cu;
    // NOP
    // 0x26bd20: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x26BD20u;
    {
        const bool branch_taken_0x26bd20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bd20) {
            ctx->pc = 0x26BD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BD20u;
            // 0x26bd24: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BD34u;
            goto label_26bd34;
        }
    }
    ctx->pc = 0x26BD28u;
    // 0x26bd28: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x26bd28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26bd2c: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x26bd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x26bd30: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x26bd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26bd34:
    // 0x26bd34: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x26bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bd38: 0xc642005c  lwc1        $f2, 0x5C($s2)
    ctx->pc = 0x26bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26bd3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26bd3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26bd40: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x26bd40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x26bd44: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x26bd44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bd48: 0x0  nop
    ctx->pc = 0x26bd48u;
    // NOP
    // 0x26bd4c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26BD4Cu;
    {
        const bool branch_taken_0x26bd4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD4Cu;
        // 0x26bd50: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd4c) {
            ctx->pc = 0x26BD5Cu;
            goto label_26bd5c;
        }
    }
    ctx->pc = 0x26BD54u;
    // 0x26bd54: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x26bd54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x26bd58: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x26bd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
label_26bd5c:
    // 0x26bd5c: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x26bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bd60: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x26bd60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bd64: 0x0  nop
    ctx->pc = 0x26bd64u;
    // NOP
    // 0x26bd68: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x26BD68u;
    {
        const bool branch_taken_0x26bd68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bd68) {
            ctx->pc = 0x26BD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BD68u;
            // 0x26bd6c: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BD7Cu;
            goto label_26bd7c;
        }
    }
    ctx->pc = 0x26BD70u;
    // 0x26bd70: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x26bd70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26bd74: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x26bd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
label_26bd78:
    // 0x26bd78: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x26bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_26bd7c:
    // 0x26bd7c: 0xc62001fc  lwc1        $f0, 0x1FC($s1)
    ctx->pc = 0x26bd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bd80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26bd84: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26bd84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26bd88: 0xc7838438  lwc1        $f3, -0x7BC8($gp)
    ctx->pc = 0x26bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26bd8c: 0xc4540030  lwc1        $f20, 0x30($v0)
    ctx->pc = 0x26bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26bd90: 0xc4550034  lwc1        $f21, 0x34($v0)
    ctx->pc = 0x26bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26bd94: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x26bd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x26bd98: 0xc4560038  lwc1        $f22, 0x38($v0)
    ctx->pc = 0x26bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26bd9c: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x26bd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bda0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x26bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26bda4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x26bda4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x26bda8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26bda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26bdac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26bdacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26bdb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26bdb4: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x26bdb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x26bdb8: 0xc6200204  lwc1        $f0, 0x204($s1)
    ctx->pc = 0x26bdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bdbc: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x26bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26bdc0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26bdc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26bdc4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26bdc8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x26bdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x26bdcc: 0xc64e005c  lwc1        $f14, 0x5C($s2)
    ctx->pc = 0x26bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26bdd0: 0xc64c0054  lwc1        $f12, 0x54($s2)
    ctx->pc = 0x26bdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26bdd4: 0xc64d0058  lwc1        $f13, 0x58($s2)
    ctx->pc = 0x26bdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26bdd8: 0x46037382  mul.s       $f14, $f14, $f3
    ctx->pc = 0x26bdd8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x26bddc: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x26bddcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x26bde0: 0x46036b42  mul.s       $f13, $f13, $f3
    ctx->pc = 0x26bde0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
    // 0x26bde4: 0x0  nop
    ctx->pc = 0x26bde4u;
    // NOP
    // 0x26bde8: 0x0  nop
    ctx->pc = 0x26bde8u;
    // NOP
    // 0x26bdec: 0x46027383  div.s       $f14, $f14, $f2
    ctx->pc = 0x26bdecu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[2];
    // 0x26bdf0: 0x0  nop
    ctx->pc = 0x26bdf0u;
    // NOP
    // 0x26bdf4: 0x0  nop
    ctx->pc = 0x26bdf4u;
    // NOP
    // 0x26bdf8: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x26bdf8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x26bdfc: 0x0  nop
    ctx->pc = 0x26bdfcu;
    // NOP
    // 0x26be00: 0x0  nop
    ctx->pc = 0x26be00u;
    // NOP
    // 0x26be04: 0x46026b43  div.s       $f13, $f13, $f2
    ctx->pc = 0x26be04u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[2];
    // 0x26be08: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x26BE08u;
    SET_GPR_U32(ctx, 31, 0x26BE10u);
    ctx->pc = 0x26BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE08u;
    // 0x26be0c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x26BE08u, 0x26BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE10u;
label_26be10:
    // 0x26be10: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x26be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26be14: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26be14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26be18: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26be18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26be1c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26BE1Cu;
    SET_GPR_U32(ctx, 31, 0x26BE24u);
    ctx->pc = 0x26BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE1Cu;
    // 0x26be20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26BE1Cu, 0x26BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE24u;
label_26be24:
    // 0x26be24: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x26be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26be28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26be28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26be2c: 0xe4740030  swc1        $f20, 0x30($v1)
    ctx->pc = 0x26be2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x26be30: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x26be30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26be34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26be34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26be38: 0xe4750034  swc1        $f21, 0x34($v1)
    ctx->pc = 0x26be38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x26be3c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x26be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26be40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26be40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26be44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26BE44u;
    {
        const bool branch_taken_0x26be44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE44u;
        // 0x26be48: 0xe4760038  swc1        $f22, 0x38($v1) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be44) {
            ctx->pc = 0x26BE54u;
            goto label_26be54;
        }
    }
    ctx->pc = 0x26BE4Cu;
label_26be4c:
    // 0x26be4c: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x26BE4Cu;
    SET_GPR_U32(ctx, 31, 0x26BE54u);
    ctx->pc = 0x26BE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE4Cu;
    // 0x26be50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x26BE4Cu, 0x26BE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE54u;
label_26be54:
    // 0x26be54: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x26be54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26be58: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x26be58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26be5c: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x26be5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26be60: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x26be60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26be64: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x26be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26be68: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x26be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26be6c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x26be6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26be70: 0x3e00008  jr          $ra
    ctx->pc = 0x26BE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE70u;
        // 0x26be74: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BE78u;
}
