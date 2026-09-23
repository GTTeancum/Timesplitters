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

// Function: enemySnipe1
// Address: 0x2ca6a8 - 0x2cab94
void enemySnipe1_0x2ca6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemySnipe1_0x2ca6a8");
#endif

    switch (ctx->pc) {
        case 0x2ca6d4u: goto label_2ca6d4;
        case 0x2ca74cu: goto label_2ca74c;
        case 0x2ca758u: goto label_2ca758;
        case 0x2ca7c8u: goto label_2ca7c8;
        case 0x2ca7e8u: goto label_2ca7e8;
        case 0x2ca850u: goto label_2ca850;
        case 0x2ca898u: goto label_2ca898;
        case 0x2ca8e8u: goto label_2ca8e8;
        case 0x2ca908u: goto label_2ca908;
        case 0x2ca958u: goto label_2ca958;
        case 0x2ca964u: goto label_2ca964;
        case 0x2ca9b8u: goto label_2ca9b8;
        case 0x2caa40u: goto label_2caa40;
        case 0x2caac4u: goto label_2caac4;
        default: break;
    }

    ctx->pc = 0x2ca6a8u;

    // 0x2ca6a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca6ac: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2ca6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2ca6b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ca6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ca6b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ca6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ca6b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca6c0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2ca6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ca6c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA6C4u;
    {
        const bool branch_taken_0x2ca6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6C4u;
        // 0x2ca6c8: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca6c4) {
            ctx->pc = 0x2CA6D8u;
            goto label_2ca6d8;
        }
    }
    ctx->pc = 0x2CA6CCu;
    // 0x2ca6cc: 0xc0b368a  jal         func_2CDA28
    ctx->pc = 0x2CA6CCu;
    SET_GPR_U32(ctx, 31, 0x2CA6D4u);
    ctx->pc = 0x2CDA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA28u, 0x2CA6CCu, 0x2CA6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA6D4u;
label_2ca6d4:
    // 0x2ca6d4: 0xae020ae4  sw          $v0, 0xAE4($s0)
    ctx->pc = 0x2ca6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
label_2ca6d8:
    // 0x2ca6d8: 0x8e030ae4  lw          $v1, 0xAE4($s0)
    ctx->pc = 0x2ca6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2ca6dc: 0x10600129  beqz        $v1, . + 4 + (0x129 << 2)
    ctx->pc = 0x2CA6DCu;
    {
        const bool branch_taken_0x2ca6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6DCu;
        // 0x2ca6e0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca6dc) {
            ctx->pc = 0x2CAB84u;
            goto label_2cab84;
        }
    }
    ctx->pc = 0x2CA6E4u;
    // 0x2ca6e4: 0x8e050ad4  lw          $a1, 0xAD4($s0)
    ctx->pc = 0x2ca6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
    // 0x2ca6e8: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CA6E8u;
    {
        const bool branch_taken_0x2ca6e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6e8) {
            ctx->pc = 0x2CA6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA6E8u;
            // 0x2ca6ec: 0x8e030aa8  lw          $v1, 0xAA8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA71Cu;
            goto label_2ca71c;
        }
    }
    ctx->pc = 0x2CA6F0u;
    // 0x2ca6f0: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2ca6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2ca6f4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2ca6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2ca6f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA6F8u;
    {
        const bool branch_taken_0x2ca6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6f8) {
            ctx->pc = 0x2CA6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA6F8u;
            // 0x2ca6fc: 0x8e030aa8  lw          $v1, 0xAA8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA71Cu;
            goto label_2ca71c;
        }
    }
    ctx->pc = 0x2CA700u;
    // 0x2ca700: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2ca700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca704: 0xe6000aec  swc1        $f0, 0xAEC($s0)
    ctx->pc = 0x2ca704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2796), bits); }
    // 0x2ca708: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x2ca708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca70c: 0xe6010af0  swc1        $f1, 0xAF0($s0)
    ctx->pc = 0x2ca70cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2800), bits); }
    // 0x2ca710: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x2ca710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca714: 0xe6000af4  swc1        $f0, 0xAF4($s0)
    ctx->pc = 0x2ca714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2804), bits); }
    // 0x2ca718: 0x8e030aa8  lw          $v1, 0xAA8($s0)
    ctx->pc = 0x2ca718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
label_2ca71c:
    // 0x2ca71c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2ca71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ca720: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x2CA720u;
    {
        const bool branch_taken_0x2ca720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA720u;
        // 0x2ca724: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca720) {
            ctx->pc = 0x2CAB08u;
            goto label_2cab08;
        }
    }
    ctx->pc = 0x2CA728u;
    // 0x2ca728: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ca728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ca72c: 0x24429f20  addiu       $v0, $v0, -0x60E0
    ctx->pc = 0x2ca72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942496));
    // 0x2ca730: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ca730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca734: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ca734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ca738: 0x800008  jr          $a0
    ctx->pc = 0x2CA738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CA740u: goto label_2ca740;
            case 0x2CA7BCu: goto label_2ca7bc;
            case 0x2CA834u: goto label_2ca834;
            case 0x2CA87Cu: goto label_2ca87c;
            case 0x2CA8F0u: goto label_2ca8f0;
            case 0x2CAA04u: goto label_2caa04;
            case 0x2CAA9Cu: goto label_2caa9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA738u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CA740u;
label_2ca740:
    // 0x2ca740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca744: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CA744u;
    SET_GPR_U32(ctx, 31, 0x2CA74Cu);
    ctx->pc = 0x2CA748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA744u;
    // 0x2ca748: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CA744u, 0x2CA74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA74Cu;
label_2ca74c:
    // 0x2ca74c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ca74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca750: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CA750u;
    SET_GPR_U32(ctx, 31, 0x2CA758u);
    ctx->pc = 0x2CA754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA750u;
    // 0x2ca754: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CA750u, 0x2CA758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA758u;
label_2ca758:
    // 0x2ca758: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA758u;
    {
        const bool branch_taken_0x2ca758 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA758u;
        // 0x2ca75c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca758) {
            ctx->pc = 0x2CA76Cu;
            goto label_2ca76c;
        }
    }
    ctx->pc = 0x2CA760u;
    // 0x2ca760: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca764: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA764u;
    {
        const bool branch_taken_0x2ca764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA764u;
        // 0x2ca768: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca764) {
            ctx->pc = 0x2CA780u;
            goto label_2ca780;
        }
    }
    ctx->pc = 0x2CA76Cu;
label_2ca76c:
    // 0x2ca76c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca770: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca774: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca778: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ca778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ca77c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2ca77cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2ca780:
    // 0x2ca780: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ca780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ca784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca788: 0xc6010b94  lwc1        $f1, 0xB94($s0)
    ctx->pc = 0x2ca788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca78c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ca78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ca790: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ca790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ca794: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ca794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ca798: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2ca798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2ca79c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ca79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca7a0: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2ca7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2ca7a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ca7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2ca7a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ca7a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ca7ac: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ca7acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ca7b0: 0xe6010b94  swc1        $f1, 0xB94($s0)
    ctx->pc = 0x2ca7b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2964), bits); }
    // 0x2ca7b4: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x2CA7B4u;
    {
        const bool branch_taken_0x2ca7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7B4u;
        // 0x2ca7b8: 0xe6000aac  swc1        $f0, 0xAAC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7b4) {
            ctx->pc = 0x2CAB08u;
            goto label_2cab08;
        }
    }
    ctx->pc = 0x2CA7BCu;
label_2ca7bc:
    // 0x2ca7bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca7c0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CA7C0u;
    SET_GPR_U32(ctx, 31, 0x2CA7C8u);
    ctx->pc = 0x2CA7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7C0u;
    // 0x2ca7c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CA7C0u, 0x2CA7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7C8u;
label_2ca7c8:
    // 0x2ca7c8: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2ca7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca7cc: 0xc6000aac  lwc1        $f0, 0xAAC($s0)
    ctx->pc = 0x2ca7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca7d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ca7d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca7d4: 0x0  nop
    ctx->pc = 0x2ca7d4u;
    // NOP
    // 0x2ca7d8: 0x450000cb  bc1f        . + 4 + (0xCB << 2)
    ctx->pc = 0x2CA7D8u;
    {
        const bool branch_taken_0x2ca7d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7D8u;
        // 0x2ca7dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7d8) {
            ctx->pc = 0x2CAB08u;
            goto label_2cab08;
        }
    }
    ctx->pc = 0x2CA7E0u;
    // 0x2ca7e0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CA7E0u;
    SET_GPR_U32(ctx, 31, 0x2CA7E8u);
    ctx->pc = 0x2CA7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7E0u;
    // 0x2ca7e4: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CA7E0u, 0x2CA7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7E8u;
label_2ca7e8:
    // 0x2ca7e8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA7E8u;
    {
        const bool branch_taken_0x2ca7e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7E8u;
        // 0x2ca7ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7e8) {
            ctx->pc = 0x2CA7FCu;
            goto label_2ca7fc;
        }
    }
    ctx->pc = 0x2CA7F0u;
    // 0x2ca7f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca7f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA7F4u;
    {
        const bool branch_taken_0x2ca7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7F4u;
        // 0x2ca7f8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7f4) {
            ctx->pc = 0x2CA810u;
            goto label_2ca810;
        }
    }
    ctx->pc = 0x2CA7FCu;
label_2ca7fc:
    // 0x2ca7fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca800: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca804: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca808: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ca808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ca80c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ca80cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2ca810:
    // 0x2ca810: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ca810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ca814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca818: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ca818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ca81c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ca81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca820: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ca820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca824: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2ca824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2ca828: 0xc7819244  lwc1        $f1, -0x6DBC($gp)
    ctx->pc = 0x2ca828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca82c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2CA82Cu;
    {
        const bool branch_taken_0x2ca82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA82Cu;
        // 0x2ca830: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca82c) {
            ctx->pc = 0x2CA9F8u;
            goto label_2ca9f8;
        }
    }
    ctx->pc = 0x2CA834u;
label_2ca834:
    // 0x2ca834: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x2ca834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x2ca838: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2ca838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2ca83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca840: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ca840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ca844: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ca844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ca848: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CA848u;
    SET_GPR_U32(ctx, 31, 0x2CA850u);
    ctx->pc = 0x2CA84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA848u;
    // 0x2ca84c: 0xae020a94  sw          $v0, 0xA94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CA848u, 0x2CA850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA850u;
label_2ca850:
    // 0x2ca850: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2ca850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca854: 0xc6000aac  lwc1        $f0, 0xAAC($s0)
    ctx->pc = 0x2ca854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca858: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ca858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca85c: 0x0  nop
    ctx->pc = 0x2ca85cu;
    // NOP
    // 0x2ca860: 0x450000a9  bc1f        . + 4 + (0xA9 << 2)
    ctx->pc = 0x2CA860u;
    {
        const bool branch_taken_0x2ca860 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA860u;
        // 0x2ca864: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca860) {
            ctx->pc = 0x2CAB08u;
            goto label_2cab08;
        }
    }
    ctx->pc = 0x2CA868u;
    // 0x2ca868: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2ca868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2ca86c: 0xae030aa8  sw          $v1, 0xAA8($s0)
    ctx->pc = 0x2ca86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 3));
    // 0x2ca870: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2ca870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2ca874: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2CA874u;
    {
        const bool branch_taken_0x2ca874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA874u;
        // 0x2ca878: 0xae020a90  sw          $v0, 0xA90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca874) {
            ctx->pc = 0x2CAB08u;
            goto label_2cab08;
        }
    }
    ctx->pc = 0x2CA87Cu;
label_2ca87c:
    // 0x2ca87c: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2ca87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2ca880: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ca880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ca884: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CA884u;
    {
        const bool branch_taken_0x2ca884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA884u;
        // 0x2ca888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca884) {
            ctx->pc = 0x2CA8E0u;
            goto label_2ca8e0;
        }
    }
    ctx->pc = 0x2CA88Cu;
    // 0x2ca88c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ca88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca890: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CA890u;
    SET_GPR_U32(ctx, 31, 0x2CA898u);
    ctx->pc = 0x2CA894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA890u;
    // 0x2ca894: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CA890u, 0x2CA898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA898u;
label_2ca898:
    // 0x2ca898: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA898u;
    {
        const bool branch_taken_0x2ca898 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA898u;
        // 0x2ca89c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca898) {
            ctx->pc = 0x2CA8ACu;
            goto label_2ca8ac;
        }
    }
    ctx->pc = 0x2CA8A0u;
    // 0x2ca8a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca8a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA8A4u;
    {
        const bool branch_taken_0x2ca8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8A4u;
        // 0x2ca8a8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca8a4) {
            ctx->pc = 0x2CA8C0u;
            goto label_2ca8c0;
        }
    }
    ctx->pc = 0x2CA8ACu;
label_2ca8ac:
    // 0x2ca8ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca8b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca8b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca8b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ca8b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ca8bc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2ca8bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2ca8c0:
    // 0x2ca8c0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ca8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ca8c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca8c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ca8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ca8cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ca8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca8d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ca8d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ca8d4: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2ca8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2ca8d8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2CA8D8u;
    {
        const bool branch_taken_0x2ca8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8D8u;
        // 0x2ca8dc: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca8d8) {
            ctx->pc = 0x2CA9F8u;
            goto label_2ca9f8;
        }
    }
    ctx->pc = 0x2CA8E0u;
label_2ca8e0:
    // 0x2ca8e0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CA8E0u;
    SET_GPR_U32(ctx, 31, 0x2CA8E8u);
    ctx->pc = 0x2CA8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8E0u;
    // 0x2ca8e4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CA8E0u, 0x2CA8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8E8u;
label_2ca8e8:
    // 0x2ca8e8: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2CA8E8u;
    {
        const bool branch_taken_0x2ca8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8E8u;
        // 0x2ca8ec: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca8e8) {
            ctx->pc = 0x2CAB0Cu;
            goto label_2cab0c;
        }
    }
    ctx->pc = 0x2CA8F0u;
label_2ca8f0:
    // 0x2ca8f0: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2ca8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2ca8f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ca8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ca8f8: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2CA8F8u;
    {
        const bool branch_taken_0x2ca8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8F8u;
        // 0x2ca8fc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca8f8) {
            ctx->pc = 0x2CAB0Cu;
            goto label_2cab0c;
        }
    }
    ctx->pc = 0x2CA900u;
    // 0x2ca900: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CA900u;
    SET_GPR_U32(ctx, 31, 0x2CA908u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CA900u, 0x2CA908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA908u;
label_2ca908:
    // 0x2ca908: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA908u;
    {
        const bool branch_taken_0x2ca908 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA908u;
        // 0x2ca90c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca908) {
            ctx->pc = 0x2CA91Cu;
            goto label_2ca91c;
        }
    }
    ctx->pc = 0x2CA910u;
    // 0x2ca910: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca914: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA914u;
    {
        const bool branch_taken_0x2ca914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA914u;
        // 0x2ca918: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca914) {
            ctx->pc = 0x2CA930u;
            goto label_2ca930;
        }
    }
    ctx->pc = 0x2CA91Cu;
label_2ca91c:
    // 0x2ca91c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca920: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca924: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca928: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ca928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ca92c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2ca92cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2ca930:
    // 0x2ca930: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ca930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ca934: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca938: 0xc7819248  lwc1        $f1, -0x6DB8($gp)
    ctx->pc = 0x2ca938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca93c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ca93cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ca940: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ca940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca944: 0x0  nop
    ctx->pc = 0x2ca944u;
    // NOP
    // 0x2ca948: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2CA948u;
    {
        const bool branch_taken_0x2ca948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA948u;
        // 0x2ca94c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca948) {
            ctx->pc = 0x2CA9ACu;
            goto label_2ca9ac;
        }
    }
    ctx->pc = 0x2CA950u;
    // 0x2ca950: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CA950u;
    SET_GPR_U32(ctx, 31, 0x2CA958u);
    ctx->pc = 0x2CA954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA950u;
    // 0x2ca954: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CA950u, 0x2CA958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA958u;
label_2ca958:
    // 0x2ca958: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ca958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca95c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CA95Cu;
    SET_GPR_U32(ctx, 31, 0x2CA964u);
    ctx->pc = 0x2CA960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA95Cu;
    // 0x2ca960: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CA95Cu, 0x2CA964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA964u;
label_2ca964:
    // 0x2ca964: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA964u;
    {
        const bool branch_taken_0x2ca964 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA964u;
        // 0x2ca968: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca964) {
            ctx->pc = 0x2CA978u;
            goto label_2ca978;
        }
    }
    ctx->pc = 0x2CA96Cu;
    // 0x2ca96c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca970: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA970u;
    {
        const bool branch_taken_0x2ca970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA970u;
        // 0x2ca974: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca970) {
            ctx->pc = 0x2CA98Cu;
            goto label_2ca98c;
        }
    }
    ctx->pc = 0x2CA978u;
label_2ca978:
    // 0x2ca978: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca97c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca980: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca984: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ca984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ca988: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2ca988u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2ca98c:
    // 0x2ca98c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ca98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ca990: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca994: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ca994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ca998: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ca998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca99c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ca99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ca9a0: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2ca9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2ca9a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2CA9A4u;
    {
        const bool branch_taken_0x2ca9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9A4u;
        // 0x2ca9a8: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca9a4) {
            ctx->pc = 0x2CA9F8u;
            goto label_2ca9f8;
        }
    }
    ctx->pc = 0x2CA9ACu;
label_2ca9ac:
    // 0x2ca9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca9b0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CA9B0u;
    SET_GPR_U32(ctx, 31, 0x2CA9B8u);
    ctx->pc = 0x2CA9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA9B0u;
    // 0x2ca9b4: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CA9B0u, 0x2CA9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9B8u;
label_2ca9b8:
    // 0x2ca9b8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA9B8u;
    {
        const bool branch_taken_0x2ca9b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9B8u;
        // 0x2ca9bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca9b8) {
            ctx->pc = 0x2CA9CCu;
            goto label_2ca9cc;
        }
    }
    ctx->pc = 0x2CA9C0u;
    // 0x2ca9c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca9c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA9C4u;
    {
        const bool branch_taken_0x2ca9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9C4u;
        // 0x2ca9c8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca9c4) {
            ctx->pc = 0x2CA9E0u;
            goto label_2ca9e0;
        }
    }
    ctx->pc = 0x2CA9CCu;
label_2ca9cc:
    // 0x2ca9cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca9d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca9d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca9d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ca9d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ca9dc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2ca9dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2ca9e0:
    // 0x2ca9e0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ca9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ca9e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca9e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ca9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ca9ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ca9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca9f0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ca9f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ca9f4: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2ca9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
label_2ca9f8:
    // 0x2ca9f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca9f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca9fc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2CA9FCu;
    {
        const bool branch_taken_0x2ca9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9FCu;
        // 0x2caa00: 0xe6000aac  swc1        $f0, 0xAAC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca9fc) {
            ctx->pc = 0x2CAB08u;
            goto label_2cab08;
        }
    }
    ctx->pc = 0x2CAA04u;
label_2caa04:
    // 0x2caa04: 0x8f87b4f4  lw          $a3, -0x4B0C($gp)
    ctx->pc = 0x2caa04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948084)));
    // 0x2caa08: 0x18e0001a  blez        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CAA08u;
    {
        const bool branch_taken_0x2caa08 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2CAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA08u;
        // 0x2caa0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa08) {
            ctx->pc = 0x2CAA74u;
            goto label_2caa74;
        }
    }
    ctx->pc = 0x2CAA10u;
    // 0x2caa10: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x2caa10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x2caa14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2caa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2caa18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2caa18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2caa1c: 0x25042488  addiu       $a0, $t0, 0x2488
    ctx->pc = 0x2caa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 9352));
    // 0x2caa20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2caa20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38248Cu));
    // 0x2caa24: 0xc4400214  lwc1        $f0, 0x214($v0)
    ctx->pc = 0x2caa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caa28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2caa28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caa2c: 0x0  nop
    ctx->pc = 0x2caa2cu;
    // NOP
    // 0x2caa30: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2CAA30u;
    {
        const bool branch_taken_0x2caa30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA30u;
        // 0x2caa34: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa30) {
            ctx->pc = 0x2CAA78u;
            goto label_2caa78;
        }
    }
    ctx->pc = 0x2CAA38u;
    // 0x2caa38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2caa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa3c: 0x0  nop
    ctx->pc = 0x2caa3cu;
    // NOP
label_2caa40:
    // 0x2caa40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2caa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2caa44: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2caa44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2caa48: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x2caa48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2caa4c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CAA4Cu;
    {
        const bool branch_taken_0x2caa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA4Cu;
        // 0x2caa50: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa4c) {
            ctx->pc = 0x2CAA80u;
            goto label_2caa80;
        }
    }
    ctx->pc = 0x2CAA54u;
    // 0x2caa54: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2caa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2caa58: 0xc4400214  lwc1        $f0, 0x214($v0)
    ctx->pc = 0x2caa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caa5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2caa5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caa60: 0x0  nop
    ctx->pc = 0x2caa60u;
    // NOP
    // 0x2caa64: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
    ctx->pc = 0x2CAA64u;
    {
        const bool branch_taken_0x2caa64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA64u;
        // 0x2caa68: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa64) {
            ctx->pc = 0x2CAA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2caa40;
        }
    }
    ctx->pc = 0x2CAA6Cu;
    // 0x2caa6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CAA6Cu;
    {
        const bool branch_taken_0x2caa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA6Cu;
        // 0x2caa70: 0x25022488  addiu       $v0, $t0, 0x2488 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 9352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa6c) {
            ctx->pc = 0x2CAA88u;
            goto label_2caa88;
        }
    }
    ctx->pc = 0x2CAA74u;
label_2caa74:
    // 0x2caa74: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x2caa74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
label_2caa78:
    // 0x2caa78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CAA78u;
    {
        const bool branch_taken_0x2caa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA78u;
        // 0x2caa7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa78) {
            ctx->pc = 0x2CAA84u;
            goto label_2caa84;
        }
    }
    ctx->pc = 0x2CAA80u;
label_2caa80:
    // 0x2caa80: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2caa80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2caa84:
    // 0x2caa84: 0x25022488  addiu       $v0, $t0, 0x2488
    ctx->pc = 0x2caa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 9352));
label_2caa88:
    // 0x2caa88: 0xae000aa8  sw          $zero, 0xAA8($s0)
    ctx->pc = 0x2caa88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 0));
    // 0x2caa8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2caa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2caa90: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2caa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2caa94: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2CAA94u;
    {
        const bool branch_taken_0x2caa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA94u;
        // 0x2caa98: 0xae030ae4  sw          $v1, 0xAE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa94) {
            ctx->pc = 0x2CAB80u;
            goto label_2cab80;
        }
    }
    ctx->pc = 0x2CAA9Cu;
label_2caa9c:
    // 0x2caa9c: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2caa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2caaa0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2caaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2caaa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2caaa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2caaa8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2caaa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caaac: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2CAAACu;
    {
        const bool branch_taken_0x2caaac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2caaac) {
            ctx->pc = 0x2CAAF8u;
            goto label_2caaf8;
        }
    }
    ctx->pc = 0x2CAAB4u;
    // 0x2caab4: 0x54a00032  bnel        $a1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CAAB4u;
    {
        const bool branch_taken_0x2caab4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caab4) {
            ctx->pc = 0x2CAAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAAB4u;
            // 0x2caab8: 0xae000aa8  sw          $zero, 0xAA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAB80u;
            goto label_2cab80;
        }
    }
    ctx->pc = 0x2CAABCu;
    // 0x2caabc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CAABCu;
    SET_GPR_U32(ctx, 31, 0x2CAAC4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CAABCu, 0x2CAAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAAC4u;
label_2caac4:
    // 0x2caac4: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x2caac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2caac8: 0x2406071c  addiu       $a2, $zero, 0x71C
    ctx->pc = 0x2caac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2caacc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2caaccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2caad0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CAAD0u;
    {
        const bool branch_taken_0x2caad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caad0) {
            ctx->pc = 0x2CAAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAAD0u;
            // 0x2caad4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAAD8u;
            goto label_2caad8;
        }
    }
    ctx->pc = 0x2CAAD8u;
label_2caad8:
    // 0x2caad8: 0x8f85b230  lw          $a1, -0x4DD0($gp)
    ctx->pc = 0x2caad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2caadc: 0xae000aa8  sw          $zero, 0xAA8($s0)
    ctx->pc = 0x2caadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 0));
    // 0x2caae0: 0x2010  mfhi        $a0
    ctx->pc = 0x2caae0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2caae4: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x2caae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2caae8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2caae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2caaec: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x2caaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x2caaf0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2CAAF0u;
    {
        const bool branch_taken_0x2caaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAF0u;
        // 0x2caaf4: 0xae020ae4  sw          $v0, 0xAE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caaf0) {
            ctx->pc = 0x2CAB80u;
            goto label_2cab80;
        }
    }
    ctx->pc = 0x2CAAF8u;
label_2caaf8:
    // 0x2caaf8: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CAAF8u;
    {
        const bool branch_taken_0x2caaf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAF8u;
        // 0x2caafc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caaf8) {
            ctx->pc = 0x2CAB84u;
            goto label_2cab84;
        }
    }
    ctx->pc = 0x2CAB00u;
    // 0x2cab00: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2CAB00u;
    {
        const bool branch_taken_0x2cab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB00u;
        // 0x2cab04: 0xae000aa8  sw          $zero, 0xAA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab00) {
            ctx->pc = 0x2CAB84u;
            goto label_2cab84;
        }
    }
    ctx->pc = 0x2CAB08u;
label_2cab08:
    // 0x2cab08: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2cab08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2cab0c:
    // 0x2cab0c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2cab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cab10: 0x8c44c4f0  lw          $a0, -0x3B10($v0)
    ctx->pc = 0x2cab10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x2cab14: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CAB14u;
    {
        const bool branch_taken_0x2cab14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB14u;
        // 0x2cab18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab14) {
            ctx->pc = 0x2CAB84u;
            goto label_2cab84;
        }
    }
    ctx->pc = 0x2CAB1Cu;
    // 0x2cab1c: 0x8e020ae4  lw          $v0, 0xAE4($s0)
    ctx->pc = 0x2cab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2cab20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cab20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cab24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cab24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cab28: 0xc4400214  lwc1        $f0, 0x214($v0)
    ctx->pc = 0x2cab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cab2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2cab2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cab30: 0x0  nop
    ctx->pc = 0x2cab30u;
    // NOP
    // 0x2cab34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAB34u;
    {
        const bool branch_taken_0x2cab34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB34u;
        // 0x2cab38: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab34) {
            ctx->pc = 0x2CAB48u;
            goto label_2cab48;
        }
    }
    ctx->pc = 0x2CAB3Cu;
    // 0x2cab3c: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2cab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2cab40: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CAB40u;
    {
        const bool branch_taken_0x2cab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB40u;
        // 0x2cab44: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab40) {
            ctx->pc = 0x2CAB84u;
            goto label_2cab84;
        }
    }
    ctx->pc = 0x2CAB48u;
label_2cab48:
    // 0x2cab48: 0x8e030aa8  lw          $v1, 0xAA8($s0)
    ctx->pc = 0x2cab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
    // 0x2cab4c: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CAB4Cu;
    {
        const bool branch_taken_0x2cab4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB4Cu;
        // 0x2cab50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab4c) {
            ctx->pc = 0x2CAB80u;
            goto label_2cab80;
        }
    }
    ctx->pc = 0x2CAB54u;
    // 0x2cab54: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CAB54u;
    {
        const bool branch_taken_0x2cab54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB54u;
        // 0x2cab58: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab54) {
            ctx->pc = 0x2CAB84u;
            goto label_2cab84;
        }
    }
    ctx->pc = 0x2CAB5Cu;
    // 0x2cab5c: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x2cab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x2cab60: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2cab60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2cab64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CAB64u;
    {
        const bool branch_taken_0x2cab64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB64u;
        // 0x2cab68: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab64) {
            ctx->pc = 0x2CAB88u;
            goto label_2cab88;
        }
    }
    ctx->pc = 0x2CAB6Cu;
    // 0x2cab6c: 0x8e020ad4  lw          $v0, 0xAD4($s0)
    ctx->pc = 0x2cab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
    // 0x2cab70: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CAB70u;
    {
        const bool branch_taken_0x2cab70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cab70) {
            ctx->pc = 0x2CAB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAB70u;
            // 0x2cab74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAB8Cu;
            goto label_2cab8c;
        }
    }
    ctx->pc = 0x2CAB78u;
    // 0x2cab78: 0xae040aa8  sw          $a0, 0xAA8($s0)
    ctx->pc = 0x2cab78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 4));
    // 0x2cab7c: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2cab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
label_2cab80:
    // 0x2cab80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cab80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cab84:
    // 0x2cab84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2cab84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cab88:
    // 0x2cab88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cab88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cab8c:
    // 0x2cab8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB8Cu;
        // 0x2cab90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAB94u;
}
