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

// Function: enemyNoRoute
// Address: 0x2caf78 - 0x2cb290
void enemyNoRoute_0x2caf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyNoRoute_0x2caf78");
#endif

    switch (ctx->pc) {
        case 0x2cafc0u: goto label_2cafc0;
        case 0x2caff4u: goto label_2caff4;
        case 0x2cb04cu: goto label_2cb04c;
        case 0x2cb060u: goto label_2cb060;
        case 0x2cb070u: goto label_2cb070;
        case 0x2cb080u: goto label_2cb080;
        case 0x2cb094u: goto label_2cb094;
        case 0x2cb110u: goto label_2cb110;
        case 0x2cb164u: goto label_2cb164;
        case 0x2cb19cu: goto label_2cb19c;
        case 0x2cb214u: goto label_2cb214;
        default: break;
    }

    ctx->pc = 0x2caf78u;

    // 0x2caf78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2caf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2caf7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2caf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2caf80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2caf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2caf84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2caf84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2caf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2caf8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2caf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2caf90: 0x8e300160  lw          $s0, 0x160($s1)
    ctx->pc = 0x2caf90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2caf94: 0x8e020ae4  lw          $v0, 0xAE4($s0)
    ctx->pc = 0x2caf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2caf98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CAF98u;
    {
        const bool branch_taken_0x2caf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF98u;
        // 0x2caf9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf98) {
            ctx->pc = 0x2CAFB8u;
            goto label_2cafb8;
        }
    }
    ctx->pc = 0x2CAFA0u;
    // 0x2cafa0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2cafa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cafa4: 0xe6000aec  swc1        $f0, 0xAEC($s0)
    ctx->pc = 0x2cafa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2796), bits); }
    // 0x2cafa8: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2cafa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cafac: 0xe6010af0  swc1        $f1, 0xAF0($s0)
    ctx->pc = 0x2cafacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2800), bits); }
    // 0x2cafb0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2cafb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cafb4: 0xe6000af4  swc1        $f0, 0xAF4($s0)
    ctx->pc = 0x2cafb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2804), bits); }
label_2cafb8:
    // 0x2cafb8: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CAFB8u;
    SET_GPR_U32(ctx, 31, 0x2CAFC0u);
    ctx->pc = 0x2CAFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAFB8u;
    // 0x2cafbc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CAFB8u, 0x2CAFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAFC0u;
label_2cafc0:
    // 0x2cafc0: 0x8e030aa8  lw          $v1, 0xAA8($s0)
    ctx->pc = 0x2cafc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
    // 0x2cafc4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2cafc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2cafc8: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2CAFC8u;
    {
        const bool branch_taken_0x2cafc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFC8u;
        // 0x2cafcc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cafc8) {
            ctx->pc = 0x2CB278u;
            goto label_2cb278;
        }
    }
    ctx->pc = 0x2CAFD0u;
    // 0x2cafd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cafd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cafd4: 0x24429f40  addiu       $v0, $v0, -0x60C0
    ctx->pc = 0x2cafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942528));
    // 0x2cafd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cafd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cafdc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cafe0: 0x800008  jr          $a0
    ctx->pc = 0x2CAFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CAFE8u: goto label_2cafe8;
            case 0x2CB054u: goto label_2cb054;
            case 0x2CB0D4u: goto label_2cb0d4;
            case 0x2CB1ACu: goto label_2cb1ac;
            case 0x2CB1F8u: goto label_2cb1f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAFE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CAFE8u;
label_2cafe8:
    // 0x2cafe8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cafec: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CAFECu;
    SET_GPR_U32(ctx, 31, 0x2CAFF4u);
    ctx->pc = 0x2CAFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAFECu;
    // 0x2caff0: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CAFECu, 0x2CAFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAFF4u;
label_2caff4:
    // 0x2caff4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAFF4u;
    {
        const bool branch_taken_0x2caff4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFF4u;
        // 0x2caff8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caff4) {
            ctx->pc = 0x2CB008u;
            goto label_2cb008;
        }
    }
    ctx->pc = 0x2CAFFCu;
    // 0x2caffc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2caffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cb000: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB000u;
    {
        const bool branch_taken_0x2cb000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB000u;
        // 0x2cb004: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb000) {
            ctx->pc = 0x2CB01Cu;
            goto label_2cb01c;
        }
    }
    ctx->pc = 0x2CB008u;
label_2cb008:
    // 0x2cb008: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb00c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cb00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cb010: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cb010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cb014: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2cb014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2cb018: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2cb018u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2cb01c:
    // 0x2cb01c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cb01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cb020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cb020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb024: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2cb024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2cb028: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cb028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2cb02c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cb02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb030: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2cb030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cb034: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2cb034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2cb038: 0xc60c0b4c  lwc1        $f12, 0xB4C($s0)
    ctx->pc = 0x2cb038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cb03c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2cb03cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2cb040: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cb040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cb044: 0xc099ae4  jal         func_266B90
    ctx->pc = 0x2CB044u;
    SET_GPR_U32(ctx, 31, 0x2CB04Cu);
    ctx->pc = 0x2CB048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB044u;
    // 0x2cb048: 0xe6000aac  swc1        $f0, 0xAAC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2732), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B90u, 0x2CB044u, 0x2CB04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB04Cu;
label_2cb04c:
    // 0x2cb04c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2CB04Cu;
    {
        const bool branch_taken_0x2cb04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB04Cu;
        // 0x2cb050: 0xae0202a8  sw          $v0, 0x2A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb04c) {
            ctx->pc = 0x2CB278u;
            goto label_2cb278;
        }
    }
    ctx->pc = 0x2CB054u;
label_2cb054:
    // 0x2cb054: 0xc60c0adc  lwc1        $f12, 0xADC($s0)
    ctx->pc = 0x2cb054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cb058: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2CB058u;
    SET_GPR_U32(ctx, 31, 0x2CB060u);
    ctx->pc = 0x2CB05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB058u;
    // 0x2cb05c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2CB058u, 0x2CB060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB060u;
label_2cb060:
    // 0x2cb060: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cb060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb064: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cb064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb068: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2CB068u;
    SET_GPR_U32(ctx, 31, 0x2CB070u);
    ctx->pc = 0x2CB06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB068u;
    // 0x2cb06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2CB068u, 0x2CB070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB070u;
label_2cb070:
    // 0x2cb070: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB070u;
    {
        const bool branch_taken_0x2cb070 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB070u;
        // 0x2cb074: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb070) {
            ctx->pc = 0x2CB084u;
            goto label_2cb084;
        }
    }
    ctx->pc = 0x2CB078u;
    // 0x2cb078: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2CB078u;
    SET_GPR_U32(ctx, 31, 0x2CB080u);
    ctx->pc = 0x2CB07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB078u;
    // 0x2cb07c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2CB078u, 0x2CB080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB080u;
label_2cb080:
    // 0x2cb080: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cb080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb084:
    // 0x2cb084: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x2cb084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x2cb088: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2cb088u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2cb08c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2CB08Cu;
    SET_GPR_U32(ctx, 31, 0x2CB094u);
    ctx->pc = 0x2CB090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB08Cu;
    // 0x2cb090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2CB08Cu, 0x2CB094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB094u;
label_2cb094:
    // 0x2cb094: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB094u;
    {
        const bool branch_taken_0x2cb094 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2cb094) {
            ctx->pc = 0x2CB098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB094u;
            // 0x2cb098: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB0B4u;
            goto label_2cb0b4;
        }
    }
    ctx->pc = 0x2CB09Cu;
    // 0x2cb09c: 0x8e020ad4  lw          $v0, 0xAD4($s0)
    ctx->pc = 0x2cb09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
    // 0x2cb0a0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CB0A0u;
    {
        const bool branch_taken_0x2cb0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0A0u;
        // 0x2cb0a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0a0) {
            ctx->pc = 0x2CB0ACu;
            goto label_2cb0ac;
        }
    }
    ctx->pc = 0x2CB0A8u;
    // 0x2cb0a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cb0ac:
    // 0x2cb0ac: 0xae020aa8  sw          $v0, 0xAA8($s0)
    ctx->pc = 0x2cb0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    // 0x2cb0b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cb0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cb0b4:
    // 0x2cb0b4: 0x8f82b4dc  lw          $v0, -0x4B24($gp)
    ctx->pc = 0x2cb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948060)));
    // 0x2cb0b8: 0x14620070  bne         $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2CB0B8u;
    {
        const bool branch_taken_0x2cb0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0B8u;
        // 0x2cb0bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0b8) {
            ctx->pc = 0x2CB27Cu;
            goto label_2cb27c;
        }
    }
    ctx->pc = 0x2CB0C0u;
    // 0x2cb0c0: 0x8e020ad4  lw          $v0, 0xAD4($s0)
    ctx->pc = 0x2cb0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
    // 0x2cb0c4: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2CB0C4u;
    {
        const bool branch_taken_0x2cb0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0C4u;
        // 0x2cb0c8: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0c4) {
            ctx->pc = 0x2CB280u;
            goto label_2cb280;
        }
    }
    ctx->pc = 0x2CB0CCu;
    // 0x2cb0cc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2CB0CCu;
    {
        const bool branch_taken_0x2cb0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0CCu;
        // 0x2cb0d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0cc) {
            ctx->pc = 0x2CB1F0u;
            goto label_2cb1f0;
        }
    }
    ctx->pc = 0x2CB0D4u;
label_2cb0d4:
    // 0x2cb0d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2cb0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2cb0d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cb0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb0dc: 0x8c44c4f0  lw          $a0, -0x3B10($v0)
    ctx->pc = 0x2cb0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2cb0e0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB0E0u;
    {
        const bool branch_taken_0x2cb0e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CB0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0E0u;
        // 0x2cb0e4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0e0) {
            ctx->pc = 0x2CB0F8u;
            goto label_2cb0f8;
        }
    }
    ctx->pc = 0x2CB0E8u;
    // 0x2cb0e8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB0E8u;
    {
        const bool branch_taken_0x2cb0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0E8u;
        // 0x2cb0ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0e8) {
            ctx->pc = 0x2CB0F8u;
            goto label_2cb0f8;
        }
    }
    ctx->pc = 0x2CB0F0u;
    // 0x2cb0f0: 0x1482001a  bne         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CB0F0u;
    {
        const bool branch_taken_0x2cb0f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cb0f0) {
            ctx->pc = 0x2CB15Cu;
            goto label_2cb15c;
        }
    }
    ctx->pc = 0x2CB0F8u;
label_2cb0f8:
    // 0x2cb0f8: 0x8f87b4e8  lw          $a3, -0x4B18($gp)
    ctx->pc = 0x2cb0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948072)));
    // 0x2cb0fc: 0x18e00017  blez        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CB0FCu;
    {
        const bool branch_taken_0x2cb0fc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2CB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0FCu;
        // 0x2cb100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0fc) {
            ctx->pc = 0x2CB15Cu;
            goto label_2cb15c;
        }
    }
    ctx->pc = 0x2CB104u;
    // 0x2cb104: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x2cb104u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x2cb108: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2cb108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2cb10c: 0x0  nop
    ctx->pc = 0x2cb10cu;
    // NOP
label_2cb110:
    // 0x2cb110: 0x25032028  addiu       $v1, $t0, 0x2028
    ctx->pc = 0x2cb110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 8232));
    // 0x2cb114: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cb114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cb118: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cb118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb11c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2cb11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2cb120: 0x8ca30160  lw          $v1, 0x160($a1)
    ctx->pc = 0x2cb120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x2cb124: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2cb124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2cb128: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CB128u;
    {
        const bool branch_taken_0x2cb128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB128u;
        // 0x2cb12c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb128) {
            ctx->pc = 0x2CB150u;
            goto label_2cb150;
        }
    }
    ctx->pc = 0x2CB130u;
    // 0x2cb130: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2cb130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2cb134: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2cb134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2cb138: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB138u;
    {
        const bool branch_taken_0x2cb138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cb138) {
            ctx->pc = 0x2CB150u;
            goto label_2cb150;
        }
    }
    ctx->pc = 0x2CB140u;
    // 0x2cb140: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2cb140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2cb144: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb148: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2CB148u;
    {
        const bool branch_taken_0x2cb148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb148) {
            ctx->pc = 0x2CB14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB148u;
            // 0x2cb14c: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB228u;
            goto label_2cb228;
        }
    }
    ctx->pc = 0x2CB150u;
label_2cb150:
    // 0x2cb150: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2cb150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2cb154: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2CB154u;
    {
        const bool branch_taken_0x2cb154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB154u;
        // 0x2cb158: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb154) {
            ctx->pc = 0x2CB110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb110;
        }
    }
    ctx->pc = 0x2CB15Cu;
label_2cb15c:
    // 0x2cb15c: 0xc0b02b8  jal         func_2C0AE0
    ctx->pc = 0x2CB15Cu;
    SET_GPR_U32(ctx, 31, 0x2CB164u);
    ctx->pc = 0x2CB160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB15Cu;
    // 0x2cb160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0AE0u, 0x2CB15Cu, 0x2CB164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB164u;
label_2cb164:
    // 0x2cb164: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CB164u;
    {
        const bool branch_taken_0x2cb164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb164) {
            ctx->pc = 0x2CB168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB164u;
            // 0x2cb168: 0xae020ae4  sw          $v0, 0xAE4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB16Cu;
            goto label_2cb16c;
        }
    }
    ctx->pc = 0x2CB16Cu;
label_2cb16c:
    // 0x2cb16c: 0x8e030ae4  lw          $v1, 0xAE4($s0)
    ctx->pc = 0x2cb16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2cb170: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2CB170u;
    {
        const bool branch_taken_0x2cb170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB170u;
        // 0x2cb174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb170) {
            ctx->pc = 0x2CB278u;
            goto label_2cb278;
        }
    }
    ctx->pc = 0x2CB178u;
    // 0x2cb178: 0x8c640160  lw          $a0, 0x160($v1)
    ctx->pc = 0x2cb178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2cb17c: 0xae020aa8  sw          $v0, 0xAA8($s0)
    ctx->pc = 0x2cb17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    // 0x2cb180: 0x8c8302a8  lw          $v1, 0x2A8($a0)
    ctx->pc = 0x2cb180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x2cb184: 0x460003c  bltz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2CB184u;
    {
        const bool branch_taken_0x2cb184 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB184u;
        // 0x2cb188: 0xae0302ac  sw          $v1, 0x2AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb184) {
            ctx->pc = 0x2CB278u;
            goto label_2cb278;
        }
    }
    ctx->pc = 0x2CB18Cu;
    // 0x2cb18c: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x2cb18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x2cb190: 0x260402a8  addiu       $a0, $s0, 0x2A8
    ctx->pc = 0x2cb190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    // 0x2cb194: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2CB194u;
    SET_GPR_U32(ctx, 31, 0x2CB19Cu);
    ctx->pc = 0x2CB198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB194u;
    // 0x2cb198: 0xae000a84  sw          $zero, 0xA84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2CB194u, 0x2CB19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB19Cu;
label_2cb19c:
    // 0x2cb19c: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2CB19Cu;
    {
        const bool branch_taken_0x2cb19c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CB1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB19Cu;
        // 0x2cb1a0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb19c) {
            ctx->pc = 0x2CB278u;
            goto label_2cb278;
        }
    }
    ctx->pc = 0x2CB1A4u;
    // 0x2cb1a4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2CB1A4u;
    {
        const bool branch_taken_0x2cb1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1A4u;
        // 0x2cb1a8: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1a4) {
            ctx->pc = 0x2CB22Cu;
            goto label_2cb22c;
        }
    }
    ctx->pc = 0x2CB1ACu;
label_2cb1ac:
    // 0x2cb1ac: 0x8e020ae4  lw          $v0, 0xAE4($s0)
    ctx->pc = 0x2cb1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2cb1b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CB1B0u;
    {
        const bool branch_taken_0x2cb1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1B0u;
        // 0x2cb1b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1b0) {
            ctx->pc = 0x2CB1F0u;
            goto label_2cb1f0;
        }
    }
    ctx->pc = 0x2CB1B8u;
    // 0x2cb1b8: 0x8e020ad4  lw          $v0, 0xAD4($s0)
    ctx->pc = 0x2cb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
    // 0x2cb1bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CB1BCu;
    {
        const bool branch_taken_0x2cb1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1BCu;
        // 0x2cb1c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1bc) {
            ctx->pc = 0x2CB1F0u;
            goto label_2cb1f0;
        }
    }
    ctx->pc = 0x2CB1C4u;
    // 0x2cb1c4: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2cb1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb1c8: 0xc6000aac  lwc1        $f0, 0xAAC($s0)
    ctx->pc = 0x2cb1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb1cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cb1ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb1d0: 0x0  nop
    ctx->pc = 0x2cb1d0u;
    // NOP
    // 0x2cb1d4: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x2CB1D4u;
    {
        const bool branch_taken_0x2cb1d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1D4u;
        // 0x2cb1d8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1d4) {
            ctx->pc = 0x2CB278u;
            goto label_2cb278;
        }
    }
    ctx->pc = 0x2CB1DCu;
    // 0x2cb1dc: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2cb1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2cb1e0: 0xae030aa8  sw          $v1, 0xAA8($s0)
    ctx->pc = 0x2cb1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 3));
    // 0x2cb1e4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2cb1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2cb1e8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2CB1E8u;
    {
        const bool branch_taken_0x2cb1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1E8u;
        // 0x2cb1ec: 0xae020a90  sw          $v0, 0xA90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1e8) {
            ctx->pc = 0x2CB278u;
            goto label_2cb278;
        }
    }
    ctx->pc = 0x2CB1F0u;
label_2cb1f0:
    // 0x2cb1f0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2CB1F0u;
    {
        const bool branch_taken_0x2cb1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1F0u;
        // 0x2cb1f4: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1f0) {
            ctx->pc = 0x2CB278u;
            goto label_2cb278;
        }
    }
    ctx->pc = 0x2CB1F8u;
label_2cb1f8:
    // 0x2cb1f8: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2cb1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2cb1fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2cb1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2cb200: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2CB200u;
    {
        const bool branch_taken_0x2cb200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB200u;
        // 0x2cb204: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb200) {
            ctx->pc = 0x2CB27Cu;
            goto label_2cb27c;
        }
    }
    ctx->pc = 0x2CB208u;
    // 0x2cb208: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cb208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cb20c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CB20Cu;
    SET_GPR_U32(ctx, 31, 0x2CB214u);
    ctx->pc = 0x2CB210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB20Cu;
    // 0x2cb210: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CB20Cu, 0x2CB214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB214u;
label_2cb214:
    // 0x2cb214: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CB214u;
    {
        const bool branch_taken_0x2cb214 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB214u;
        // 0x2cb218: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb214) {
            ctx->pc = 0x2CB23Cu;
            goto label_2cb23c;
        }
    }
    ctx->pc = 0x2CB21Cu;
    // 0x2cb21c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb220: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CB220u;
    {
        const bool branch_taken_0x2cb220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB220u;
        // 0x2cb224: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb220) {
            ctx->pc = 0x2CB250u;
            goto label_2cb250;
        }
    }
    ctx->pc = 0x2CB228u;
label_2cb228:
    // 0x2cb228: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2cb228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2cb22c:
    // 0x2cb22c: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2cb22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2cb230: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2cb230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
    // 0x2cb234: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB234u;
    {
        const bool branch_taken_0x2cb234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB234u;
        // 0x2cb238: 0xae000b4c  sw          $zero, 0xB4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb234) {
            ctx->pc = 0x2CB278u;
            goto label_2cb278;
        }
    }
    ctx->pc = 0x2CB23Cu;
label_2cb23c:
    // 0x2cb23c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb240: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cb240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cb244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb248: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2cb248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2cb24c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2cb24cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2cb250:
    // 0x2cb250: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cb250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cb254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cb254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb258: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cb258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2cb25c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2cb25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cb260: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cb260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb264: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2cb264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2cb268: 0xc7819258  lwc1        $f1, -0x6DA8($gp)
    ctx->pc = 0x2cb268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb26c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cb26cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cb270: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cb270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cb274: 0xe6000aac  swc1        $f0, 0xAAC($s0)
    ctx->pc = 0x2cb274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2732), bits); }
label_2cb278:
    // 0x2cb278: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cb278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb27c:
    // 0x2cb27c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cb27cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb280:
    // 0x2cb280: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2cb280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb288: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB288u;
        // 0x2cb28c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB290u;
}
