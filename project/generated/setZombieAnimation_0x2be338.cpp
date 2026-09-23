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

// Function: setZombieAnimation
// Address: 0x2be338 - 0x2bece0
void setZombieAnimation_0x2be338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setZombieAnimation_0x2be338");
#endif

    switch (ctx->pc) {
        case 0x2be364u: goto label_2be364;
        case 0x2be374u: goto label_2be374;
        case 0x2be384u: goto label_2be384;
        case 0x2be394u: goto label_2be394;
        case 0x2be3a4u: goto label_2be3a4;
        case 0x2be3c4u: goto label_2be3c4;
        case 0x2be3dcu: goto label_2be3dc;
        case 0x2be3ecu: goto label_2be3ec;
        case 0x2be424u: goto label_2be424;
        case 0x2be434u: goto label_2be434;
        case 0x2be464u: goto label_2be464;
        case 0x2be490u: goto label_2be490;
        case 0x2be4a4u: goto label_2be4a4;
        case 0x2be4b8u: goto label_2be4b8;
        case 0x2be4c8u: goto label_2be4c8;
        case 0x2be4d8u: goto label_2be4d8;
        case 0x2be504u: goto label_2be504;
        case 0x2be528u: goto label_2be528;
        case 0x2be538u: goto label_2be538;
        case 0x2be548u: goto label_2be548;
        case 0x2be568u: goto label_2be568;
        case 0x2be578u: goto label_2be578;
        case 0x2be598u: goto label_2be598;
        case 0x2be5c0u: goto label_2be5c0;
        case 0x2be5dcu: goto label_2be5dc;
        case 0x2be604u: goto label_2be604;
        case 0x2be614u: goto label_2be614;
        case 0x2be624u: goto label_2be624;
        case 0x2be644u: goto label_2be644;
        case 0x2be654u: goto label_2be654;
        case 0x2be674u: goto label_2be674;
        case 0x2be69cu: goto label_2be69c;
        case 0x2be6b8u: goto label_2be6b8;
        case 0x2be6c8u: goto label_2be6c8;
        case 0x2be6d8u: goto label_2be6d8;
        case 0x2be6e8u: goto label_2be6e8;
        case 0x2be6f8u: goto label_2be6f8;
        case 0x2be744u: goto label_2be744;
        case 0x2be760u: goto label_2be760;
        case 0x2be770u: goto label_2be770;
        case 0x2be78cu: goto label_2be78c;
        case 0x2be798u: goto label_2be798;
        case 0x2be7b8u: goto label_2be7b8;
        case 0x2be7d8u: goto label_2be7d8;
        case 0x2be7f8u: goto label_2be7f8;
        case 0x2be818u: goto label_2be818;
        case 0x2be828u: goto label_2be828;
        case 0x2be838u: goto label_2be838;
        case 0x2be848u: goto label_2be848;
        case 0x2be8a0u: goto label_2be8a0;
        case 0x2be8bcu: goto label_2be8bc;
        case 0x2be8ccu: goto label_2be8cc;
        case 0x2be8e8u: goto label_2be8e8;
        case 0x2be900u: goto label_2be900;
        case 0x2be910u: goto label_2be910;
        case 0x2be920u: goto label_2be920;
        case 0x2be988u: goto label_2be988;
        case 0x2be998u: goto label_2be998;
        case 0x2be9f8u: goto label_2be9f8;
        case 0x2bea14u: goto label_2bea14;
        case 0x2bea24u: goto label_2bea24;
        case 0x2bea34u: goto label_2bea34;
        case 0x2bea44u: goto label_2bea44;
        case 0x2bea54u: goto label_2bea54;
        case 0x2beadcu: goto label_2beadc;
        case 0x2beaecu: goto label_2beaec;
        case 0x2beafcu: goto label_2beafc;
        case 0x2beb58u: goto label_2beb58;
        case 0x2beb84u: goto label_2beb84;
        case 0x2beba0u: goto label_2beba0;
        case 0x2bebbcu: goto label_2bebbc;
        case 0x2bebccu: goto label_2bebcc;
        case 0x2bebdcu: goto label_2bebdc;
        case 0x2bebecu: goto label_2bebec;
        case 0x2bebf8u: goto label_2bebf8;
        case 0x2bec24u: goto label_2bec24;
        case 0x2bec34u: goto label_2bec34;
        case 0x2bec44u: goto label_2bec44;
        case 0x2bec50u: goto label_2bec50;
        case 0x2bec5cu: goto label_2bec5c;
        case 0x2bec70u: goto label_2bec70;
        case 0x2bec7cu: goto label_2bec7c;
        case 0x2bec8cu: goto label_2bec8c;
        case 0x2bec94u: goto label_2bec94;
        case 0x2beca0u: goto label_2beca0;
        case 0x2becb8u: goto label_2becb8;
        default: break;
    }

    ctx->pc = 0x2be338u;

    // 0x2be338: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2be338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2be33c: 0x2405020e  addiu       $a1, $zero, 0x20E
    ctx->pc = 0x2be33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
    // 0x2be340: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2be340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2be344: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2be344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2be348: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be34c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2be34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2be350: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2be350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2be354: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2be354u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2be358: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2be358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2be35c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE35Cu;
    SET_GPR_U32(ctx, 31, 0x2BE364u);
    ctx->pc = 0x2BE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE35Cu;
    // 0x2be360: 0x8e330160  lw          $s3, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE35Cu, 0x2BE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE364u;
label_2be364:
    // 0x2be364: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BE364u;
    {
        const bool branch_taken_0x2be364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE364u;
        // 0x2be368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be364) {
            ctx->pc = 0x2BE39Cu;
            goto label_2be39c;
        }
    }
    ctx->pc = 0x2BE36Cu;
    // 0x2be36c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE36Cu;
    SET_GPR_U32(ctx, 31, 0x2BE374u);
    ctx->pc = 0x2BE370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE36Cu;
    // 0x2be370: 0x2405020f  addiu       $a1, $zero, 0x20F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE36Cu, 0x2BE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE374u;
label_2be374:
    // 0x2be374: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BE374u;
    {
        const bool branch_taken_0x2be374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE374u;
        // 0x2be378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be374) {
            ctx->pc = 0x2BE39Cu;
            goto label_2be39c;
        }
    }
    ctx->pc = 0x2BE37Cu;
    // 0x2be37c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE37Cu;
    SET_GPR_U32(ctx, 31, 0x2BE384u);
    ctx->pc = 0x2BE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE37Cu;
    // 0x2be380: 0x24050210  addiu       $a1, $zero, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE37Cu, 0x2BE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE384u;
label_2be384:
    // 0x2be384: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE384u;
    {
        const bool branch_taken_0x2be384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE384u;
        // 0x2be388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be384) {
            ctx->pc = 0x2BE39Cu;
            goto label_2be39c;
        }
    }
    ctx->pc = 0x2BE38Cu;
    // 0x2be38c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE38Cu;
    SET_GPR_U32(ctx, 31, 0x2BE394u);
    ctx->pc = 0x2BE390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE38Cu;
    // 0x2be390: 0x24050211  addiu       $a1, $zero, 0x211 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE38Cu, 0x2BE394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE394u;
label_2be394:
    // 0x2be394: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BE394u;
    {
        const bool branch_taken_0x2be394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE394u;
        // 0x2be398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be394) {
            ctx->pc = 0x2BE3D4u;
            goto label_2be3d4;
        }
    }
    ctx->pc = 0x2BE39Cu;
label_2be39c:
    // 0x2be39c: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BE39Cu;
    SET_GPR_U32(ctx, 31, 0x2BE3A4u);
    ctx->pc = 0x2BE3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE39Cu;
    // 0x2be3a0: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BE39Cu, 0x2BE3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3A4u;
label_2be3a4:
    // 0x2be3a4: 0x10400246  beqz        $v0, . + 4 + (0x246 << 2)
    ctx->pc = 0x2BE3A4u;
    {
        const bool branch_taken_0x2be3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3A4u;
        // 0x2be3a8: 0x24050206  addiu       $a1, $zero, 0x206 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3a4) {
            ctx->pc = 0x2BECC0u;
            goto label_2becc0;
        }
    }
    ctx->pc = 0x2BE3ACu;
    // 0x2be3ac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2be3acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2be3b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be3b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be3b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2be3bc: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE3BCu;
    SET_GPR_U32(ctx, 31, 0x2BE3C4u);
    ctx->pc = 0x2BE3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE3BCu;
    // 0x2be3c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE3BCu, 0x2BE3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3C4u;
label_2be3c4:
    // 0x2be3c4: 0xe6740b70  swc1        $f20, 0xB70($s3)
    ctx->pc = 0x2be3c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2928), bits); }
    // 0x2be3c8: 0xe6740b68  swc1        $f20, 0xB68($s3)
    ctx->pc = 0x2be3c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2920), bits); }
    // 0x2be3cc: 0x1000023c  b           . + 4 + (0x23C << 2)
    ctx->pc = 0x2BE3CCu;
    {
        const bool branch_taken_0x2be3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3CCu;
        // 0x2be3d0: 0xe6740b6c  swc1        $f20, 0xB6C($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2924), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3cc) {
            ctx->pc = 0x2BECC0u;
            goto label_2becc0;
        }
    }
    ctx->pc = 0x2BE3D4u;
label_2be3d4:
    // 0x2be3d4: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE3D4u;
    SET_GPR_U32(ctx, 31, 0x2BE3DCu);
    ctx->pc = 0x2BE3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE3D4u;
    // 0x2be3d8: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE3D4u, 0x2BE3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3DCu;
label_2be3dc:
    // 0x2be3dc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BE3DCu;
    {
        const bool branch_taken_0x2be3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3DCu;
        // 0x2be3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3dc) {
            ctx->pc = 0x2BE41Cu;
            goto label_2be41c;
        }
    }
    ctx->pc = 0x2BE3E4u;
    // 0x2be3e4: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BE3E4u;
    SET_GPR_U32(ctx, 31, 0x2BE3ECu);
    ctx->pc = 0x2BE3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE3E4u;
    // 0x2be3e8: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BE3E4u, 0x2BE3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3ECu;
label_2be3ec:
    // 0x2be3ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BE3ECu;
    {
        const bool branch_taken_0x2be3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3ECu;
        // 0x2be3f0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3ec) {
            ctx->pc = 0x2BE418u;
            goto label_2be418;
        }
    }
    ctx->pc = 0x2BE3F4u;
    // 0x2be3f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2be3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2be3f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2be3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2be3fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE3FCu;
    {
        const bool branch_taken_0x2be3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3FCu;
        // 0x2be400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3fc) {
            ctx->pc = 0x2BE41Cu;
            goto label_2be41c;
        }
    }
    ctx->pc = 0x2BE404u;
    // 0x2be404: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2be404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2be408: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be40c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2be410: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BE410u;
    {
        const bool branch_taken_0x2be410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE410u;
        // 0x2be414: 0x2405020c  addiu       $a1, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be410) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE418u;
label_2be418:
    // 0x2be418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be41c:
    // 0x2be41c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE41Cu;
    SET_GPR_U32(ctx, 31, 0x2BE424u);
    ctx->pc = 0x2BE420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE41Cu;
    // 0x2be420: 0x24050243  addiu       $a1, $zero, 0x243 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE41Cu, 0x2BE424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE424u;
label_2be424:
    // 0x2be424: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BE424u;
    {
        const bool branch_taken_0x2be424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE424u;
        // 0x2be428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be424) {
            ctx->pc = 0x2BE488u;
            goto label_2be488;
        }
    }
    ctx->pc = 0x2BE42Cu;
    // 0x2be42c: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BE42Cu;
    SET_GPR_U32(ctx, 31, 0x2BE434u);
    ctx->pc = 0x2BE430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE42Cu;
    // 0x2be430: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BE42Cu, 0x2BE434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE434u;
label_2be434:
    // 0x2be434: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BE434u;
    {
        const bool branch_taken_0x2be434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE434u;
        // 0x2be438: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be434) {
            ctx->pc = 0x2BE484u;
            goto label_2be484;
        }
    }
    ctx->pc = 0x2BE43Cu;
    // 0x2be43c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2be43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2be440: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2be440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2be444: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BE444u;
    {
        const bool branch_taken_0x2be444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE444u;
        // 0x2be448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be444) {
            ctx->pc = 0x2BE488u;
            goto label_2be488;
        }
    }
    ctx->pc = 0x2BE44Cu;
    // 0x2be44c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2be44cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2be450: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be454: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2be458: 0x2405020d  addiu       $a1, $zero, 0x20D
    ctx->pc = 0x2be458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
label_2be45c:
    // 0x2be45c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE45Cu;
    SET_GPR_U32(ctx, 31, 0x2BE464u);
    ctx->pc = 0x2BE460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE45Cu;
    // 0x2be460: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE45Cu, 0x2BE464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE464u;
label_2be464:
    // 0x2be464: 0xc6601198  lwc1        $f0, 0x1198($s3)
    ctx->pc = 0x2be464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be468: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2be468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2be46c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2be46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2be470: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x2be470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2be474: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2be474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be478: 0xe4540084  swc1        $f20, 0x84($v0)
    ctx->pc = 0x2be478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2be47c: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x2BE47Cu;
    {
        const bool branch_taken_0x2be47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE47Cu;
        // 0x2be480: 0xe4410078  swc1        $f1, 0x78($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be47c) {
            ctx->pc = 0x2BECC0u;
            goto label_2becc0;
        }
    }
    ctx->pc = 0x2BE484u;
label_2be484:
    // 0x2be484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be488:
    // 0x2be488: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE488u;
    SET_GPR_U32(ctx, 31, 0x2BE490u);
    ctx->pc = 0x2BE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE488u;
    // 0x2be48c: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE488u, 0x2BE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE490u;
label_2be490:
    // 0x2be490: 0x1440020c  bnez        $v0, . + 4 + (0x20C << 2)
    ctx->pc = 0x2BE490u;
    {
        const bool branch_taken_0x2be490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE490u;
        // 0x2be494: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be490) {
            ctx->pc = 0x2BECC4u;
            goto label_2becc4;
        }
    }
    ctx->pc = 0x2BE498u;
    // 0x2be498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be49c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE49Cu;
    SET_GPR_U32(ctx, 31, 0x2BE4A4u);
    ctx->pc = 0x2BE4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE49Cu;
    // 0x2be4a0: 0x24050243  addiu       $a1, $zero, 0x243 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE49Cu, 0x2BE4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4A4u;
label_2be4a4:
    // 0x2be4a4: 0x14400207  bnez        $v0, . + 4 + (0x207 << 2)
    ctx->pc = 0x2BE4A4u;
    {
        const bool branch_taken_0x2be4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4A4u;
        // 0x2be4a8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be4a4) {
            ctx->pc = 0x2BECC4u;
            goto label_2becc4;
        }
    }
    ctx->pc = 0x2BE4ACu;
    // 0x2be4ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4b0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE4B0u;
    SET_GPR_U32(ctx, 31, 0x2BE4B8u);
    ctx->pc = 0x2BE4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4B0u;
    // 0x2be4b4: 0x2405020c  addiu       $a1, $zero, 0x20C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE4B0u, 0x2BE4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4B8u;
label_2be4b8:
    // 0x2be4b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE4B8u;
    {
        const bool branch_taken_0x2be4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4B8u;
        // 0x2be4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be4b8) {
            ctx->pc = 0x2BE4D0u;
            goto label_2be4d0;
        }
    }
    ctx->pc = 0x2BE4C0u;
    // 0x2be4c0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE4C0u;
    SET_GPR_U32(ctx, 31, 0x2BE4C8u);
    ctx->pc = 0x2BE4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4C0u;
    // 0x2be4c4: 0x2405020d  addiu       $a1, $zero, 0x20D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE4C0u, 0x2BE4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4C8u;
label_2be4c8:
    // 0x2be4c8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE4C8u;
    {
        const bool branch_taken_0x2be4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be4c8) {
            ctx->pc = 0x2BE4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE4C8u;
            // 0x2be4cc: 0x8e620a94  lw          $v0, 0xA94($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE4E4u;
            goto label_2be4e4;
        }
    }
    ctx->pc = 0x2BE4D0u;
label_2be4d0:
    // 0x2be4d0: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BE4D0u;
    SET_GPR_U32(ctx, 31, 0x2BE4D8u);
    ctx->pc = 0x2BE4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4D0u;
    // 0x2be4d4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BE4D0u, 0x2BE4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4D8u;
label_2be4d8:
    // 0x2be4d8: 0x104001fa  beqz        $v0, . + 4 + (0x1FA << 2)
    ctx->pc = 0x2BE4D8u;
    {
        const bool branch_taken_0x2be4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4D8u;
        // 0x2be4dc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be4d8) {
            ctx->pc = 0x2BECC4u;
            goto label_2becc4;
        }
    }
    ctx->pc = 0x2BE4E0u;
    // 0x2be4e0: 0x8e620a94  lw          $v0, 0xA94($s3)
    ctx->pc = 0x2be4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2708)));
label_2be4e4:
    // 0x2be4e4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2be4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2be4e8: 0x50400101  beql        $v0, $zero, . + 4 + (0x101 << 2)
    ctx->pc = 0x2BE4E8u;
    {
        const bool branch_taken_0x2be4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be4e8) {
            ctx->pc = 0x2BE4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE4E8u;
            // 0x2be4ec: 0x8e6201b8  lw          $v0, 0x1B8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE8F0u;
            goto label_2be8f0;
        }
    }
    ctx->pc = 0x2BE4F0u;
    // 0x2be4f0: 0xc62c0050  lwc1        $f12, 0x50($s1)
    ctx->pc = 0x2be4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2be4f4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2be4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2be4f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2be4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2be4fc: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2BE4FCu;
    SET_GPR_U32(ctx, 31, 0x2BE504u);
    ctx->pc = 0x2BE500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4FCu;
    // 0x2be500: 0xc62d004c  lwc1        $f13, 0x4C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2BE4FCu, 0x2BE504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE504u;
label_2be504:
    // 0x2be504: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2be504u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2be508: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2be508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x2be50c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be510: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2be510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be514: 0x0  nop
    ctx->pc = 0x2be514u;
    // NOP
    // 0x2be518: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x2BE518u;
    {
        const bool branch_taken_0x2be518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE518u;
        // 0x2be51c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be518) {
            ctx->pc = 0x2BE5E4u;
            goto label_2be5e4;
        }
    }
    ctx->pc = 0x2BE520u;
    // 0x2be520: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE520u;
    SET_GPR_U32(ctx, 31, 0x2BE528u);
    ctx->pc = 0x2BE524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE520u;
    // 0x2be524: 0x24050209  addiu       $a1, $zero, 0x209 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE520u, 0x2BE528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE528u;
label_2be528:
    // 0x2be528: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BE528u;
    {
        const bool branch_taken_0x2be528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE528u;
        // 0x2be52c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be528) {
            ctx->pc = 0x2BE5A0u;
            goto label_2be5a0;
        }
    }
    ctx->pc = 0x2BE530u;
    // 0x2be530: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE530u;
    SET_GPR_U32(ctx, 31, 0x2BE538u);
    ctx->pc = 0x2BE534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE530u;
    // 0x2be534: 0x2405020b  addiu       $a1, $zero, 0x20B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE530u, 0x2BE538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE538u;
label_2be538:
    // 0x2be538: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BE538u;
    {
        const bool branch_taken_0x2be538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE538u;
        // 0x2be53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be538) {
            ctx->pc = 0x2BE5A0u;
            goto label_2be5a0;
        }
    }
    ctx->pc = 0x2BE540u;
    // 0x2be540: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BE540u;
    SET_GPR_U32(ctx, 31, 0x2BE548u);
    ctx->pc = 0x2BE544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE540u;
    // 0x2be544: 0x24050209  addiu       $a1, $zero, 0x209 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BE540u, 0x2BE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE548u;
label_2be548:
    // 0x2be548: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BE548u;
    {
        const bool branch_taken_0x2be548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE548u;
        // 0x2be54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be548) {
            ctx->pc = 0x2BE570u;
            goto label_2be570;
        }
    }
    ctx->pc = 0x2BE550u;
    // 0x2be550: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2be550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2be554: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2be554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2be558: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE558u;
    {
        const bool branch_taken_0x2be558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be558) {
            ctx->pc = 0x2BE570u;
            goto label_2be570;
        }
    }
    ctx->pc = 0x2BE560u;
    // 0x2be560: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BE560u;
    SET_GPR_U32(ctx, 31, 0x2BE568u);
    ctx->pc = 0x2BE564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE560u;
    // 0x2be564: 0x24050209  addiu       $a1, $zero, 0x209 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BE560u, 0x2BE568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE568u;
label_2be568:
    // 0x2be568: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BE568u;
    {
        const bool branch_taken_0x2be568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE568u;
        // 0x2be56c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be568) {
            ctx->pc = 0x2BE5A0u;
            goto label_2be5a0;
        }
    }
    ctx->pc = 0x2BE570u;
label_2be570:
    // 0x2be570: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BE570u;
    SET_GPR_U32(ctx, 31, 0x2BE578u);
    ctx->pc = 0x2BE574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE570u;
    // 0x2be574: 0x2405020b  addiu       $a1, $zero, 0x20B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BE570u, 0x2BE578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE578u;
label_2be578:
    // 0x2be578: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2BE578u;
    {
        const bool branch_taken_0x2be578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE578u;
        // 0x2be57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be578) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE580u;
    // 0x2be580: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2be580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2be584: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2be584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2be588: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x2BE588u;
    {
        const bool branch_taken_0x2be588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be588) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE590u;
    // 0x2be590: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BE590u;
    SET_GPR_U32(ctx, 31, 0x2BE598u);
    ctx->pc = 0x2BE594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE590u;
    // 0x2be594: 0x2405020b  addiu       $a1, $zero, 0x20B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BE590u, 0x2BE598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE598u;
label_2be598:
    // 0x2be598: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2BE598u;
    {
        const bool branch_taken_0x2be598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE598u;
        // 0x2be59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be598) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE5A0u;
label_2be5a0:
    // 0x2be5a0: 0x8e6201b8  lw          $v0, 0x1B8($s3)
    ctx->pc = 0x2be5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x2be5a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE5A4u;
    {
        const bool branch_taken_0x2be5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5A4u;
        // 0x2be5a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be5a4) {
            ctx->pc = 0x2BE5C8u;
            goto label_2be5c8;
        }
    }
    ctx->pc = 0x2BE5ACu;
    // 0x2be5ac: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2be5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2be5b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2be5b4: 0xc78d9068  lwc1        $f13, -0x6F98($gp)
    ctx->pc = 0x2be5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2be5b8: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE5B8u;
    SET_GPR_U32(ctx, 31, 0x2BE5C0u);
    ctx->pc = 0x2BE5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE5B8u;
    // 0x2be5bc: 0x2405020b  addiu       $a1, $zero, 0x20B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE5B8u, 0x2BE5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5C0u;
label_2be5c0:
    // 0x2be5c0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2BE5C0u;
    {
        const bool branch_taken_0x2be5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5C0u;
        // 0x2be5c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be5c0) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE5C8u;
label_2be5c8:
    // 0x2be5c8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2be5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2be5cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2be5d0: 0xc78d906c  lwc1        $f13, -0x6F94($gp)
    ctx->pc = 0x2be5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2be5d4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE5D4u;
    SET_GPR_U32(ctx, 31, 0x2BE5DCu);
    ctx->pc = 0x2BE5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE5D4u;
    // 0x2be5d8: 0x24050209  addiu       $a1, $zero, 0x209 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE5D4u, 0x2BE5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5DCu;
label_2be5dc:
    // 0x2be5dc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2BE5DCu;
    {
        const bool branch_taken_0x2be5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5DCu;
        // 0x2be5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be5dc) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE5E4u;
label_2be5e4:
    // 0x2be5e4: 0x3c01c234  lui         $at, 0xC234
    ctx->pc = 0x2be5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49716 << 16));
    // 0x2be5e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be5ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2be5ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be5f0: 0x0  nop
    ctx->pc = 0x2be5f0u;
    // NOP
    // 0x2be5f4: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x2BE5F4u;
    {
        const bool branch_taken_0x2be5f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be5f4) {
            ctx->pc = 0x2BE5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE5F4u;
            // 0x2be5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE6C0u;
            goto label_2be6c0;
        }
    }
    ctx->pc = 0x2BE5FCu;
    // 0x2be5fc: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE5FCu;
    SET_GPR_U32(ctx, 31, 0x2BE604u);
    ctx->pc = 0x2BE600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE5FCu;
    // 0x2be600: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE5FCu, 0x2BE604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE604u;
label_2be604:
    // 0x2be604: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BE604u;
    {
        const bool branch_taken_0x2be604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE604u;
        // 0x2be608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be604) {
            ctx->pc = 0x2BE67Cu;
            goto label_2be67c;
        }
    }
    ctx->pc = 0x2BE60Cu;
    // 0x2be60c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE60Cu;
    SET_GPR_U32(ctx, 31, 0x2BE614u);
    ctx->pc = 0x2BE610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE60Cu;
    // 0x2be610: 0x2405020a  addiu       $a1, $zero, 0x20A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE60Cu, 0x2BE614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE614u;
label_2be614:
    // 0x2be614: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BE614u;
    {
        const bool branch_taken_0x2be614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE614u;
        // 0x2be618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be614) {
            ctx->pc = 0x2BE67Cu;
            goto label_2be67c;
        }
    }
    ctx->pc = 0x2BE61Cu;
    // 0x2be61c: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BE61Cu;
    SET_GPR_U32(ctx, 31, 0x2BE624u);
    ctx->pc = 0x2BE620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE61Cu;
    // 0x2be620: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BE61Cu, 0x2BE624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE624u;
label_2be624:
    // 0x2be624: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BE624u;
    {
        const bool branch_taken_0x2be624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE624u;
        // 0x2be628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be624) {
            ctx->pc = 0x2BE64Cu;
            goto label_2be64c;
        }
    }
    ctx->pc = 0x2BE62Cu;
    // 0x2be62c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2be62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2be630: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2be630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2be634: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE634u;
    {
        const bool branch_taken_0x2be634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be634) {
            ctx->pc = 0x2BE64Cu;
            goto label_2be64c;
        }
    }
    ctx->pc = 0x2BE63Cu;
    // 0x2be63c: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BE63Cu;
    SET_GPR_U32(ctx, 31, 0x2BE644u);
    ctx->pc = 0x2BE640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE63Cu;
    // 0x2be640: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BE63Cu, 0x2BE644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE644u;
label_2be644:
    // 0x2be644: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BE644u;
    {
        const bool branch_taken_0x2be644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE644u;
        // 0x2be648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be644) {
            ctx->pc = 0x2BE67Cu;
            goto label_2be67c;
        }
    }
    ctx->pc = 0x2BE64Cu;
label_2be64c:
    // 0x2be64c: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BE64Cu;
    SET_GPR_U32(ctx, 31, 0x2BE654u);
    ctx->pc = 0x2BE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE64Cu;
    // 0x2be650: 0x2405020a  addiu       $a1, $zero, 0x20A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BE64Cu, 0x2BE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE654u;
label_2be654:
    // 0x2be654: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2BE654u;
    {
        const bool branch_taken_0x2be654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE654u;
        // 0x2be658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be654) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE65Cu;
    // 0x2be65c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2be65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2be660: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2be660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2be664: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2BE664u;
    {
        const bool branch_taken_0x2be664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be664) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE66Cu;
    // 0x2be66c: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BE66Cu;
    SET_GPR_U32(ctx, 31, 0x2BE674u);
    ctx->pc = 0x2BE670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE66Cu;
    // 0x2be670: 0x2405020a  addiu       $a1, $zero, 0x20A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BE66Cu, 0x2BE674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE674u;
label_2be674:
    // 0x2be674: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2BE674u;
    {
        const bool branch_taken_0x2be674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE674u;
        // 0x2be678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be674) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE67Cu;
label_2be67c:
    // 0x2be67c: 0x8e6201b8  lw          $v0, 0x1B8($s3)
    ctx->pc = 0x2be67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x2be680: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE680u;
    {
        const bool branch_taken_0x2be680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE680u;
        // 0x2be684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be680) {
            ctx->pc = 0x2BE6A4u;
            goto label_2be6a4;
        }
    }
    ctx->pc = 0x2BE688u;
    // 0x2be688: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2be688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2be68c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2be690: 0xc78d9070  lwc1        $f13, -0x6F90($gp)
    ctx->pc = 0x2be690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2be694: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE694u;
    SET_GPR_U32(ctx, 31, 0x2BE69Cu);
    ctx->pc = 0x2BE698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE694u;
    // 0x2be698: 0x2405020a  addiu       $a1, $zero, 0x20A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE694u, 0x2BE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE69Cu;
label_2be69c:
    // 0x2be69c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2BE69Cu;
    {
        const bool branch_taken_0x2be69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE69Cu;
        // 0x2be6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be69c) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE6A4u;
label_2be6a4:
    // 0x2be6a4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2be6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2be6a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2be6ac: 0xc78d9074  lwc1        $f13, -0x6F8C($gp)
    ctx->pc = 0x2be6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2be6b0: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE6B0u;
    SET_GPR_U32(ctx, 31, 0x2BE6B8u);
    ctx->pc = 0x2BE6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6B0u;
    // 0x2be6b4: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE6B0u, 0x2BE6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6B8u;
label_2be6b8:
    // 0x2be6b8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2BE6B8u;
    {
        const bool branch_taken_0x2be6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6B8u;
        // 0x2be6bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be6b8) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE6C0u;
label_2be6c0:
    // 0x2be6c0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE6C0u;
    SET_GPR_U32(ctx, 31, 0x2BE6C8u);
    ctx->pc = 0x2BE6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6C0u;
    // 0x2be6c4: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE6C0u, 0x2BE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6C8u;
label_2be6c8:
    // 0x2be6c8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2BE6C8u;
    {
        const bool branch_taken_0x2be6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6C8u;
        // 0x2be6cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be6c8) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE6D0u;
    // 0x2be6d0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE6D0u;
    SET_GPR_U32(ctx, 31, 0x2BE6D8u);
    ctx->pc = 0x2BE6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6D0u;
    // 0x2be6d4: 0x2405020a  addiu       $a1, $zero, 0x20A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE6D0u, 0x2BE6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6D8u;
label_2be6d8:
    // 0x2be6d8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2BE6D8u;
    {
        const bool branch_taken_0x2be6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6D8u;
        // 0x2be6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be6d8) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE6E0u;
    // 0x2be6e0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE6E0u;
    SET_GPR_U32(ctx, 31, 0x2BE6E8u);
    ctx->pc = 0x2BE6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6E0u;
    // 0x2be6e4: 0x24050209  addiu       $a1, $zero, 0x209 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE6E0u, 0x2BE6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6E8u;
label_2be6e8:
    // 0x2be6e8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2BE6E8u;
    {
        const bool branch_taken_0x2be6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6E8u;
        // 0x2be6ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be6e8) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE6F0u;
    // 0x2be6f0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE6F0u;
    SET_GPR_U32(ctx, 31, 0x2BE6F8u);
    ctx->pc = 0x2BE6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6F0u;
    // 0x2be6f4: 0x2405020b  addiu       $a1, $zero, 0x20B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE6F0u, 0x2BE6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6F8u;
label_2be6f8:
    // 0x2be6f8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BE6F8u;
    {
        const bool branch_taken_0x2be6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6F8u;
        // 0x2be6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be6f8) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE700u;
    // 0x2be700: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2be700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2be704: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2be704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2be708: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2be708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2be70c: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x2be70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be710: 0xc6620b34  lwc1        $f2, 0xB34($s3)
    ctx->pc = 0x2be710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be714: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2be714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2be718: 0xc6610b3c  lwc1        $f1, 0xB3C($s3)
    ctx->pc = 0x2be718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be71c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2be71cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2be720: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2be720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2be724: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2be724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be728: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2BE728u;
    {
        const bool branch_taken_0x2be728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be728) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE730u;
    // 0x2be730: 0x8e6201b8  lw          $v0, 0x1B8($s3)
    ctx->pc = 0x2be730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x2be734: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BE734u;
    {
        const bool branch_taken_0x2be734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be734) {
            ctx->pc = 0x2BE768u;
            goto label_2be768;
        }
    }
    ctx->pc = 0x2BE73Cu;
    // 0x2be73c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE73Cu;
    SET_GPR_U32(ctx, 31, 0x2BE744u);
    ctx->pc = 0x2BE740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE73Cu;
    // 0x2be740: 0x24050207  addiu       $a1, $zero, 0x207 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE73Cu, 0x2BE744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE744u;
label_2be744:
    // 0x2be744: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BE744u;
    {
        const bool branch_taken_0x2be744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE744u;
        // 0x2be748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be744) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE74Cu;
    // 0x2be74c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2be74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2be750: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2be754: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2be754u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2be758: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE758u;
    SET_GPR_U32(ctx, 31, 0x2BE760u);
    ctx->pc = 0x2BE75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE758u;
    // 0x2be75c: 0x24050207  addiu       $a1, $zero, 0x207 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE758u, 0x2BE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE760u;
label_2be760:
    // 0x2be760: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BE760u;
    {
        const bool branch_taken_0x2be760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE760u;
        // 0x2be764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be760) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE768u;
label_2be768:
    // 0x2be768: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE768u;
    SET_GPR_U32(ctx, 31, 0x2BE770u);
    ctx->pc = 0x2BE76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE768u;
    // 0x2be76c: 0x24050206  addiu       $a1, $zero, 0x206 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE768u, 0x2BE770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE770u;
label_2be770:
    // 0x2be770: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE770u;
    {
        const bool branch_taken_0x2be770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE770u;
        // 0x2be774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be770) {
            ctx->pc = 0x2BE790u;
            goto label_2be790;
        }
    }
    ctx->pc = 0x2BE778u;
    // 0x2be778: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2be778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2be77c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2be780: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2be780u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2be784: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE784u;
    SET_GPR_U32(ctx, 31, 0x2BE78Cu);
    ctx->pc = 0x2BE788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE784u;
    // 0x2be788: 0x24050206  addiu       $a1, $zero, 0x206 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE784u, 0x2BE78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE78Cu;
label_2be78c:
    // 0x2be78c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be790:
    // 0x2be790: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BE790u;
    SET_GPR_U32(ctx, 31, 0x2BE798u);
    ctx->pc = 0x2BE794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE790u;
    // 0x2be794: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BE790u, 0x2BE798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE798u;
label_2be798:
    // 0x2be798: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE798u;
    {
        const bool branch_taken_0x2be798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE798u;
        // 0x2be79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be798) {
            ctx->pc = 0x2BE7B0u;
            goto label_2be7b0;
        }
    }
    ctx->pc = 0x2BE7A0u;
    // 0x2be7a0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2be7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2be7a4: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2be7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2be7a8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BE7A8u;
    {
        const bool branch_taken_0x2be7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be7a8) {
            ctx->pc = 0x2BE810u;
            goto label_2be810;
        }
    }
    ctx->pc = 0x2BE7B0u;
label_2be7b0:
    // 0x2be7b0: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BE7B0u;
    SET_GPR_U32(ctx, 31, 0x2BE7B8u);
    ctx->pc = 0x2BE7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7B0u;
    // 0x2be7b4: 0x2405020a  addiu       $a1, $zero, 0x20A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BE7B0u, 0x2BE7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7B8u;
label_2be7b8:
    // 0x2be7b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE7B8u;
    {
        const bool branch_taken_0x2be7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7B8u;
        // 0x2be7bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7b8) {
            ctx->pc = 0x2BE7D0u;
            goto label_2be7d0;
        }
    }
    ctx->pc = 0x2BE7C0u;
    // 0x2be7c0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2be7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2be7c4: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2be7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2be7c8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BE7C8u;
    {
        const bool branch_taken_0x2be7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be7c8) {
            ctx->pc = 0x2BE810u;
            goto label_2be810;
        }
    }
    ctx->pc = 0x2BE7D0u;
label_2be7d0:
    // 0x2be7d0: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BE7D0u;
    SET_GPR_U32(ctx, 31, 0x2BE7D8u);
    ctx->pc = 0x2BE7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7D0u;
    // 0x2be7d4: 0x24050209  addiu       $a1, $zero, 0x209 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BE7D0u, 0x2BE7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7D8u;
label_2be7d8:
    // 0x2be7d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE7D8u;
    {
        const bool branch_taken_0x2be7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7D8u;
        // 0x2be7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7d8) {
            ctx->pc = 0x2BE7F0u;
            goto label_2be7f0;
        }
    }
    ctx->pc = 0x2BE7E0u;
    // 0x2be7e0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2be7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2be7e4: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2be7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2be7e8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BE7E8u;
    {
        const bool branch_taken_0x2be7e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be7e8) {
            ctx->pc = 0x2BE810u;
            goto label_2be810;
        }
    }
    ctx->pc = 0x2BE7F0u;
label_2be7f0:
    // 0x2be7f0: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BE7F0u;
    SET_GPR_U32(ctx, 31, 0x2BE7F8u);
    ctx->pc = 0x2BE7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7F0u;
    // 0x2be7f4: 0x2405020b  addiu       $a1, $zero, 0x20B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BE7F0u, 0x2BE7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7F8u;
label_2be7f8:
    // 0x2be7f8: 0x104000ea  beqz        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x2BE7F8u;
    {
        const bool branch_taken_0x2be7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7F8u;
        // 0x2be7fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7f8) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BE800u;
    // 0x2be800: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2be800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2be804: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2be804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2be808: 0x106000e7  beqz        $v1, . + 4 + (0xE7 << 2)
    ctx->pc = 0x2BE808u;
    {
        const bool branch_taken_0x2be808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE808u;
        // 0x2be80c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be808) {
            ctx->pc = 0x2BEBA8u;
            goto label_2beba8;
        }
    }
    ctx->pc = 0x2BE810u;
label_2be810:
    // 0x2be810: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BE810u;
    SET_GPR_U32(ctx, 31, 0x2BE818u);
    ctx->pc = 0x2BE814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE810u;
    // 0x2be814: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BE810u, 0x2BE818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE818u;
label_2be818:
    // 0x2be818: 0x144000e2  bnez        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x2BE818u;
    {
        const bool branch_taken_0x2be818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE818u;
        // 0x2be81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be818) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BE820u;
    // 0x2be820: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BE820u;
    SET_GPR_U32(ctx, 31, 0x2BE828u);
    ctx->pc = 0x2BE824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE820u;
    // 0x2be824: 0x2405020a  addiu       $a1, $zero, 0x20A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BE820u, 0x2BE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE828u;
label_2be828:
    // 0x2be828: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x2BE828u;
    {
        const bool branch_taken_0x2be828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE828u;
        // 0x2be82c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be828) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BE830u;
    // 0x2be830: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BE830u;
    SET_GPR_U32(ctx, 31, 0x2BE838u);
    ctx->pc = 0x2BE834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE830u;
    // 0x2be834: 0x24050209  addiu       $a1, $zero, 0x209 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BE830u, 0x2BE838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE838u;
label_2be838:
    // 0x2be838: 0x144000da  bnez        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x2BE838u;
    {
        const bool branch_taken_0x2be838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE838u;
        // 0x2be83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be838) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BE840u;
    // 0x2be840: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BE840u;
    SET_GPR_U32(ctx, 31, 0x2BE848u);
    ctx->pc = 0x2BE844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE840u;
    // 0x2be844: 0x2405020b  addiu       $a1, $zero, 0x20B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BE840u, 0x2BE848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE848u;
label_2be848:
    // 0x2be848: 0x144000d6  bnez        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2BE848u;
    {
        const bool branch_taken_0x2be848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE848u;
        // 0x2be84c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be848) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BE850u;
    // 0x2be850: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2be850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2be854: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2be854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2be858: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2be858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2be85c: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x2be85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be860: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2be860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2be864: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2be864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2be868: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2be868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2be86c: 0xc6610b34  lwc1        $f1, 0xB34($s3)
    ctx->pc = 0x2be86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be870: 0xc6620b3c  lwc1        $f2, 0xB3C($s3)
    ctx->pc = 0x2be870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be874: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2be874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2be878: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2be878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2be87c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2be87cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be880: 0x0  nop
    ctx->pc = 0x2be880u;
    // NOP
    // 0x2be884: 0x450000c8  bc1f        . + 4 + (0xC8 << 2)
    ctx->pc = 0x2BE884u;
    {
        const bool branch_taken_0x2be884 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE884u;
        // 0x2be888: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be884) {
            ctx->pc = 0x2BEBA8u;
            goto label_2beba8;
        }
    }
    ctx->pc = 0x2BE88Cu;
    // 0x2be88c: 0x8e6201b8  lw          $v0, 0x1B8($s3)
    ctx->pc = 0x2be88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x2be890: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BE890u;
    {
        const bool branch_taken_0x2be890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be890) {
            ctx->pc = 0x2BE8C4u;
            goto label_2be8c4;
        }
    }
    ctx->pc = 0x2BE898u;
    // 0x2be898: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE898u;
    SET_GPR_U32(ctx, 31, 0x2BE8A0u);
    ctx->pc = 0x2BE89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE898u;
    // 0x2be89c: 0x24050207  addiu       $a1, $zero, 0x207 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE898u, 0x2BE8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8A0u;
label_2be8a0:
    // 0x2be8a0: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2BE8A0u;
    {
        const bool branch_taken_0x2be8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8A0u;
        // 0x2be8a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8a0) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BE8A8u;
    // 0x2be8a8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2be8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2be8ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2be8b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2be8b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2be8b4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE8B4u;
    SET_GPR_U32(ctx, 31, 0x2BE8BCu);
    ctx->pc = 0x2BE8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE8B4u;
    // 0x2be8b8: 0x24050207  addiu       $a1, $zero, 0x207 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE8B4u, 0x2BE8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8BCu;
label_2be8bc:
    // 0x2be8bc: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x2BE8BCu;
    {
        const bool branch_taken_0x2be8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8BCu;
        // 0x2be8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8bc) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BE8C4u;
label_2be8c4:
    // 0x2be8c4: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE8C4u;
    SET_GPR_U32(ctx, 31, 0x2BE8CCu);
    ctx->pc = 0x2BE8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE8C4u;
    // 0x2be8c8: 0x24050206  addiu       $a1, $zero, 0x206 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE8C4u, 0x2BE8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8CCu;
label_2be8cc:
    // 0x2be8cc: 0x144000b5  bnez        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2BE8CCu;
    {
        const bool branch_taken_0x2be8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8CCu;
        // 0x2be8d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8cc) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BE8D4u;
    // 0x2be8d4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2be8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2be8d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be8d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2be8dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2be8dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2be8e0: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE8E0u;
    SET_GPR_U32(ctx, 31, 0x2BE8E8u);
    ctx->pc = 0x2BE8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE8E0u;
    // 0x2be8e4: 0x24050206  addiu       $a1, $zero, 0x206 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE8E0u, 0x2BE8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8E8u;
label_2be8e8:
    // 0x2be8e8: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2BE8E8u;
    {
        const bool branch_taken_0x2be8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8E8u;
        // 0x2be8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8e8) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BE8F0u;
label_2be8f0:
    // 0x2be8f0: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2BE8F0u;
    {
        const bool branch_taken_0x2be8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8F0u;
        // 0x2be8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8f0) {
            ctx->pc = 0x2BEA1Cu;
            goto label_2bea1c;
        }
    }
    ctx->pc = 0x2BE8F8u;
    // 0x2be8f8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE8F8u;
    SET_GPR_U32(ctx, 31, 0x2BE900u);
    ctx->pc = 0x2BE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE8F8u;
    // 0x2be8fc: 0x24050204  addiu       $a1, $zero, 0x204 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE8F8u, 0x2BE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE900u;
label_2be900:
    // 0x2be900: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2BE900u;
    {
        const bool branch_taken_0x2be900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE900u;
        // 0x2be904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be900) {
            ctx->pc = 0x2BE980u;
            goto label_2be980;
        }
    }
    ctx->pc = 0x2BE908u;
    // 0x2be908: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE908u;
    SET_GPR_U32(ctx, 31, 0x2BE910u);
    ctx->pc = 0x2BE90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE908u;
    // 0x2be90c: 0x24050205  addiu       $a1, $zero, 0x205 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE908u, 0x2BE910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE910u;
label_2be910:
    // 0x2be910: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BE910u;
    {
        const bool branch_taken_0x2be910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be910) {
            ctx->pc = 0x2BE980u;
            goto label_2be980;
        }
    }
    ctx->pc = 0x2BE918u;
    // 0x2be918: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BE918u;
    SET_GPR_U32(ctx, 31, 0x2BE920u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BE918u, 0x2BE920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE920u;
label_2be920:
    // 0x2be920: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE920u;
    {
        const bool branch_taken_0x2be920 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BE924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE920u;
        // 0x2be924: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be920) {
            ctx->pc = 0x2BE934u;
            goto label_2be934;
        }
    }
    ctx->pc = 0x2BE928u;
    // 0x2be928: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2be928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2be92c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE92Cu;
    {
        const bool branch_taken_0x2be92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE92Cu;
        // 0x2be930: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be92c) {
            ctx->pc = 0x2BE948u;
            goto label_2be948;
        }
    }
    ctx->pc = 0x2BE934u;
label_2be934:
    // 0x2be934: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2be934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2be938: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2be938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2be93c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2be93cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2be940: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2be940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2be944: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2be944u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2be948:
    // 0x2be948: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2be948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2be94c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be950: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2be950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2be954: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2be954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be958: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2be958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2be95c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2be95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be960: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2be960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2be964: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2be968: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x2BE968u;
    {
        const bool branch_taken_0x2be968 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE968u;
        // 0x2be96c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be968) {
            ctx->pc = 0x2BE9E8u;
            goto label_2be9e8;
        }
    }
    ctx->pc = 0x2BE970u;
    // 0x2be970: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2be970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2be974: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2be978: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2BE978u;
    {
        const bool branch_taken_0x2be978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be978) {
            ctx->pc = 0x2BEA04u;
            goto label_2bea04;
        }
    }
    ctx->pc = 0x2BE980u;
label_2be980:
    // 0x2be980: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BE980u;
    SET_GPR_U32(ctx, 31, 0x2BE988u);
    ctx->pc = 0x2BE984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE980u;
    // 0x2be984: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BE980u, 0x2BE988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE988u;
label_2be988:
    // 0x2be988: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2BE988u;
    {
        const bool branch_taken_0x2be988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE988u;
        // 0x2be98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be988) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BE990u;
    // 0x2be990: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BE990u;
    SET_GPR_U32(ctx, 31, 0x2BE998u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BE990u, 0x2BE998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE998u;
label_2be998:
    // 0x2be998: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE998u;
    {
        const bool branch_taken_0x2be998 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BE99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE998u;
        // 0x2be99c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be998) {
            ctx->pc = 0x2BE9ACu;
            goto label_2be9ac;
        }
    }
    ctx->pc = 0x2BE9A0u;
    // 0x2be9a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2be9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2be9a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE9A4u;
    {
        const bool branch_taken_0x2be9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9A4u;
        // 0x2be9a8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be9a4) {
            ctx->pc = 0x2BE9C0u;
            goto label_2be9c0;
        }
    }
    ctx->pc = 0x2BE9ACu;
label_2be9ac:
    // 0x2be9ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2be9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2be9b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2be9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2be9b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2be9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2be9b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2be9b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2be9bc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2be9bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2be9c0:
    // 0x2be9c0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2be9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2be9c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be9c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2be9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2be9cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2be9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be9d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2be9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2be9d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2be9d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be9d8: 0x0  nop
    ctx->pc = 0x2be9d8u;
    // NOP
    // 0x2be9dc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE9DCu;
    {
        const bool branch_taken_0x2be9dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9DCu;
        // 0x2be9e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be9dc) {
            ctx->pc = 0x2BEA00u;
            goto label_2bea00;
        }
    }
    ctx->pc = 0x2BE9E4u;
    // 0x2be9e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2be9e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2be9e8:
    // 0x2be9e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2be9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2be9ec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2be9f0: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE9F0u;
    SET_GPR_U32(ctx, 31, 0x2BE9F8u);
    ctx->pc = 0x2BE9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9F0u;
    // 0x2be9f4: 0x24050204  addiu       $a1, $zero, 0x204 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE9F0u, 0x2BE9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9F8u;
label_2be9f8:
    // 0x2be9f8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2BE9F8u;
    {
        const bool branch_taken_0x2be9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9F8u;
        // 0x2be9fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be9f8) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BEA00u;
label_2bea00:
    // 0x2bea00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bea00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bea04:
    // 0x2bea04: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2bea04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2bea08: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bea08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bea0c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BEA0Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA14u);
    ctx->pc = 0x2BEA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA0Cu;
    // 0x2bea10: 0x24050205  addiu       $a1, $zero, 0x205 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BEA0Cu, 0x2BEA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA14u;
label_2bea14:
    // 0x2bea14: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2BEA14u;
    {
        const bool branch_taken_0x2bea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA14u;
        // 0x2bea18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea14) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BEA1Cu;
label_2bea1c:
    // 0x2bea1c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEA1Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA24u);
    ctx->pc = 0x2BEA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA1Cu;
    // 0x2bea20: 0x24050201  addiu       $a1, $zero, 0x201 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEA1Cu, 0x2BEA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA24u;
label_2bea24:
    // 0x2bea24: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2BEA24u;
    {
        const bool branch_taken_0x2bea24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA24u;
        // 0x2bea28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea24) {
            ctx->pc = 0x2BEAE4u;
            goto label_2beae4;
        }
    }
    ctx->pc = 0x2BEA2Cu;
    // 0x2bea2c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEA2Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA34u);
    ctx->pc = 0x2BEA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA2Cu;
    // 0x2bea30: 0x24050202  addiu       $a1, $zero, 0x202 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEA2Cu, 0x2BEA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA34u;
label_2bea34:
    // 0x2bea34: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2BEA34u;
    {
        const bool branch_taken_0x2bea34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA34u;
        // 0x2bea38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea34) {
            ctx->pc = 0x2BEAE4u;
            goto label_2beae4;
        }
    }
    ctx->pc = 0x2BEA3Cu;
    // 0x2bea3c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEA3Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA44u);
    ctx->pc = 0x2BEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA3Cu;
    // 0x2bea40: 0x24050203  addiu       $a1, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEA3Cu, 0x2BEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA44u;
label_2bea44:
    // 0x2bea44: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BEA44u;
    {
        const bool branch_taken_0x2bea44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bea44) {
            ctx->pc = 0x2BEAE4u;
            goto label_2beae4;
        }
    }
    ctx->pc = 0x2BEA4Cu;
    // 0x2bea4c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BEA4Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA54u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BEA4Cu, 0x2BEA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA54u;
label_2bea54:
    // 0x2bea54: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEA54u;
    {
        const bool branch_taken_0x2bea54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BEA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA54u;
        // 0x2bea58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea54) {
            ctx->pc = 0x2BEA68u;
            goto label_2bea68;
        }
    }
    ctx->pc = 0x2BEA5Cu;
    // 0x2bea5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bea5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bea60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEA60u;
    {
        const bool branch_taken_0x2bea60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA60u;
        // 0x2bea64: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea60) {
            ctx->pc = 0x2BEA7Cu;
            goto label_2bea7c;
        }
    }
    ctx->pc = 0x2BEA68u;
label_2bea68:
    // 0x2bea68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bea68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bea6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bea6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bea70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bea70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bea74: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bea74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bea78: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bea78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bea7c:
    // 0x2bea7c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2bea7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2bea80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bea80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bea84: 0xc7819078  lwc1        $f1, -0x6F88($gp)
    ctx->pc = 0x2bea84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bea88: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bea88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bea8c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2bea8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bea90: 0x0  nop
    ctx->pc = 0x2bea90u;
    // NOP
    // 0x2bea94: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEA94u;
    {
        const bool branch_taken_0x2bea94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA94u;
        // 0x2bea98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea94) {
            ctx->pc = 0x2BEAACu;
            goto label_2beaac;
        }
    }
    ctx->pc = 0x2BEA9Cu;
    // 0x2bea9c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bea9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2beaa0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2beaa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2beaa4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2BEAA4u;
    {
        const bool branch_taken_0x2beaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beaa4) {
            ctx->pc = 0x2BEB48u;
            goto label_2beb48;
        }
    }
    ctx->pc = 0x2BEAACu;
label_2beaac:
    // 0x2beaac: 0xc780907c  lwc1        $f0, -0x6F84($gp)
    ctx->pc = 0x2beaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beab0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2beab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2beab4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2beab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2beab8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2beab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2beabc: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x2BEABCu;
    {
        const bool branch_taken_0x2beabc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2beabc) {
            ctx->pc = 0x2BEB74u;
            goto label_2beb74;
        }
    }
    ctx->pc = 0x2BEAC4u;
    // 0x2beac4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2beac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2beac8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2beac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2beacc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2beaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2bead0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bead0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bead4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BEAD4u;
    SET_GPR_U32(ctx, 31, 0x2BEADCu);
    ctx->pc = 0x2BEAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEAD4u;
    // 0x2bead8: 0x24050203  addiu       $a1, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BEAD4u, 0x2BEADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEADCu;
label_2beadc:
    // 0x2beadc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2BEADCu;
    {
        const bool branch_taken_0x2beadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEADCu;
        // 0x2beae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beadc) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BEAE4u;
label_2beae4:
    // 0x2beae4: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BEAE4u;
    SET_GPR_U32(ctx, 31, 0x2BEAECu);
    ctx->pc = 0x2BEAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEAE4u;
    // 0x2beae8: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BEAE4u, 0x2BEAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAECu;
label_2beaec:
    // 0x2beaec: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2BEAECu;
    {
        const bool branch_taken_0x2beaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAECu;
        // 0x2beaf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beaec) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BEAF4u;
    // 0x2beaf4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BEAF4u;
    SET_GPR_U32(ctx, 31, 0x2BEAFCu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BEAF4u, 0x2BEAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAFCu;
label_2beafc:
    // 0x2beafc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEAFCu;
    {
        const bool branch_taken_0x2beafc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BEB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAFCu;
        // 0x2beb00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beafc) {
            ctx->pc = 0x2BEB10u;
            goto label_2beb10;
        }
    }
    ctx->pc = 0x2BEB04u;
    // 0x2beb04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2beb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2beb08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEB08u;
    {
        const bool branch_taken_0x2beb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB08u;
        // 0x2beb0c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb08) {
            ctx->pc = 0x2BEB24u;
            goto label_2beb24;
        }
    }
    ctx->pc = 0x2BEB10u;
label_2beb10:
    // 0x2beb10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2beb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2beb14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2beb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2beb18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2beb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2beb1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2beb1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2beb20: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2beb20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2beb24:
    // 0x2beb24: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2beb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2beb28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2beb28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2beb2c: 0xc7819080  lwc1        $f1, -0x6F80($gp)
    ctx->pc = 0x2beb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beb30: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2beb30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2beb34: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2beb34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2beb38: 0x0  nop
    ctx->pc = 0x2beb38u;
    // NOP
    // 0x2beb3c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2BEB3Cu;
    {
        const bool branch_taken_0x2beb3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB3Cu;
        // 0x2beb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb3c) {
            ctx->pc = 0x2BEB60u;
            goto label_2beb60;
        }
    }
    ctx->pc = 0x2BEB44u;
    // 0x2beb44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2beb44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2beb48:
    // 0x2beb48: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2beb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2beb4c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2beb4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2beb50: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BEB50u;
    SET_GPR_U32(ctx, 31, 0x2BEB58u);
    ctx->pc = 0x2BEB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB50u;
    // 0x2beb54: 0x24050201  addiu       $a1, $zero, 0x201 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BEB50u, 0x2BEB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB58u;
label_2beb58:
    // 0x2beb58: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BEB58u;
    {
        const bool branch_taken_0x2beb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB58u;
        // 0x2beb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb58) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BEB60u;
label_2beb60:
    // 0x2beb60: 0xc7809084  lwc1        $f0, -0x6F7C($gp)
    ctx->pc = 0x2beb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beb64: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2beb64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2beb68: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2BEB68u;
    {
        const bool branch_taken_0x2beb68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2beb68) {
            ctx->pc = 0x2BEB8Cu;
            goto label_2beb8c;
        }
    }
    ctx->pc = 0x2BEB70u;
    // 0x2beb70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2beb70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2beb74:
    // 0x2beb74: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2beb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2beb78: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2beb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2beb7c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BEB7Cu;
    SET_GPR_U32(ctx, 31, 0x2BEB84u);
    ctx->pc = 0x2BEB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB7Cu;
    // 0x2beb80: 0x24050202  addiu       $a1, $zero, 0x202 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BEB7Cu, 0x2BEB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB84u;
label_2beb84:
    // 0x2beb84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BEB84u;
    {
        const bool branch_taken_0x2beb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB84u;
        // 0x2beb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb84) {
            ctx->pc = 0x2BEBA4u;
            goto label_2beba4;
        }
    }
    ctx->pc = 0x2BEB8Cu;
label_2beb8c:
    // 0x2beb8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2beb8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2beb90: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2beb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2beb94: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2beb94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2beb98: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BEB98u;
    SET_GPR_U32(ctx, 31, 0x2BEBA0u);
    ctx->pc = 0x2BEB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB98u;
    // 0x2beb9c: 0x24050203  addiu       $a1, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BEB98u, 0x2BEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBA0u;
label_2beba0:
    // 0x2beba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2beba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2beba4:
    // 0x2beba4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2beba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2beba8:
    // 0x2beba8: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2beba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2bebac: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x2bebacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2bebb0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2bebb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bebb4: 0xc085508  jal         func_215420
    ctx->pc = 0x2BEBB4u;
    SET_GPR_U32(ctx, 31, 0x2BEBBCu);
    ctx->pc = 0x2BEBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBB4u;
    // 0x2bebb8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215420u, 0x2BEBB4u, 0x2BEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBBCu;
label_2bebbc:
    // 0x2bebbc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2bebbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bebc0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2bebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bebc4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BEBC4u;
    SET_GPR_U32(ctx, 31, 0x2BEBCCu);
    ctx->pc = 0x2BEBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBC4u;
    // 0x2bebc8: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BEBC4u, 0x2BEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBCCu;
label_2bebcc:
    // 0x2bebcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bebccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bebd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bebd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bebd4: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BEBD4u;
    SET_GPR_U32(ctx, 31, 0x2BEBDCu);
    ctx->pc = 0x2BEBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBD4u;
    // 0x2bebd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BEBD4u, 0x2BEBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBDCu;
label_2bebdc:
    // 0x2bebdc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEBDCu;
    {
        const bool branch_taken_0x2bebdc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBDCu;
        // 0x2bebe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bebdc) {
            ctx->pc = 0x2BEBF0u;
            goto label_2bebf0;
        }
    }
    ctx->pc = 0x2BEBE4u;
    // 0x2bebe4: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BEBE4u;
    SET_GPR_U32(ctx, 31, 0x2BEBECu);
    ctx->pc = 0x2BEBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBE4u;
    // 0x2bebe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BEBE4u, 0x2BEBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBECu;
label_2bebec:
    // 0x2bebec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bebecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bebf0:
    // 0x2bebf0: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2BEBF0u;
    SET_GPR_U32(ctx, 31, 0x2BEBF8u);
    ctx->pc = 0x2BEBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBF0u;
    // 0x2bebf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2BEBF0u, 0x2BEBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBF8u;
label_2bebf8:
    // 0x2bebf8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bebf8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2bebfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bebfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bec00: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2bec00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bec04: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x2BEC04u;
    {
        const bool branch_taken_0x2bec04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bec04) {
            ctx->pc = 0x2BECA8u;
            goto label_2beca8;
        }
    }
    ctx->pc = 0x2BEC0Cu;
    // 0x2bec0c: 0xc66c0b3c  lwc1        $f12, 0xB3C($s3)
    ctx->pc = 0x2bec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bec10: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2bec10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bec14: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x2BEC14u;
    {
        const bool branch_taken_0x2bec14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bec14) {
            ctx->pc = 0x2BECA8u;
            goto label_2beca8;
        }
    }
    ctx->pc = 0x2BEC1Cu;
    // 0x2bec1c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BEC1Cu;
    SET_GPR_U32(ctx, 31, 0x2BEC24u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BEC1Cu, 0x2BEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC24u;
label_2bec24:
    // 0x2bec24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bec24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bec28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec2c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BEC2Cu;
    SET_GPR_U32(ctx, 31, 0x2BEC34u);
    ctx->pc = 0x2BEC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC2Cu;
    // 0x2bec30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BEC2Cu, 0x2BEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC34u;
label_2bec34:
    // 0x2bec34: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEC34u;
    {
        const bool branch_taken_0x2bec34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BEC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC34u;
        // 0x2bec38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec34) {
            ctx->pc = 0x2BEC48u;
            goto label_2bec48;
        }
    }
    ctx->pc = 0x2BEC3Cu;
    // 0x2bec3c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BEC3Cu;
    SET_GPR_U32(ctx, 31, 0x2BEC44u);
    ctx->pc = 0x2BEC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC3Cu;
    // 0x2bec40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BEC3Cu, 0x2BEC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC44u;
label_2bec44:
    // 0x2bec44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bec44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bec48:
    // 0x2bec48: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BEC48u;
    SET_GPR_U32(ctx, 31, 0x2BEC50u);
    ctx->pc = 0x2BEC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC48u;
    // 0x2bec4c: 0xc7ac0008  lwc1        $f12, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BEC48u, 0x2BEC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC50u;
label_2bec50:
    // 0x2bec50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bec50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec54: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2BEC54u;
    SET_GPR_U32(ctx, 31, 0x2BEC5Cu);
    ctx->pc = 0x2BEC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC54u;
    // 0x2bec58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2BEC54u, 0x2BEC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC5Cu;
label_2bec5c:
    // 0x2bec5c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2bec5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2bec60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bec60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bec64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bec64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec68: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BEC68u;
    SET_GPR_U32(ctx, 31, 0x2BEC70u);
    ctx->pc = 0x2BEC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC68u;
    // 0x2bec6c: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BEC68u, 0x2BEC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC70u;
label_2bec70:
    // 0x2bec70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bec70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec74: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2BEC74u;
    SET_GPR_U32(ctx, 31, 0x2BEC7Cu);
    ctx->pc = 0x2BEC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC74u;
    // 0x2bec78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2BEC74u, 0x2BEC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC7Cu;
label_2bec7c:
    // 0x2bec7c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2bec7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2bec80: 0xdc259cf8  ld          $a1, -0x6308($at)
    ctx->pc = 0x2bec80u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9CF8u));
    // 0x2bec84: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2BEC84u;
    SET_GPR_U32(ctx, 31, 0x2BEC8Cu);
    ctx->pc = 0x2BEC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC84u;
    // 0x2bec88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2BEC84u, 0x2BEC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC8Cu;
label_2bec8c:
    // 0x2bec8c: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2BEC8Cu;
    SET_GPR_U32(ctx, 31, 0x2BEC94u);
    ctx->pc = 0x2BEC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC8Cu;
    // 0x2bec90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2BEC8Cu, 0x2BEC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC94u;
label_2bec94:
    // 0x2bec94: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2bec94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bec98: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x2BEC98u;
    SET_GPR_U32(ctx, 31, 0x2BECA0u);
    ctx->pc = 0x2BEC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC98u;
    // 0x2bec9c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x2BEC98u, 0x2BECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BECA0u;
label_2beca0:
    // 0x2beca0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BECA0u;
    {
        const bool branch_taken_0x2beca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECA0u;
        // 0x2beca4: 0x8e620a94  lw          $v0, 0xA94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beca0) {
            ctx->pc = 0x2BECBCu;
            goto label_2becbc;
        }
    }
    ctx->pc = 0x2BECA8u;
label_2beca8:
    // 0x2beca8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2beca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2becac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2becacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2becb0: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x2BECB0u;
    SET_GPR_U32(ctx, 31, 0x2BECB8u);
    ctx->pc = 0x2BECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BECB0u;
    // 0x2becb4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x2BECB0u, 0x2BECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BECB8u;
label_2becb8:
    // 0x2becb8: 0x8e620a94  lw          $v0, 0xA94($s3)
    ctx->pc = 0x2becb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2708)));
label_2becbc:
    // 0x2becbc: 0xae620a98  sw          $v0, 0xA98($s3)
    ctx->pc = 0x2becbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2712), GPR_U32(ctx, 2));
label_2becc0:
    // 0x2becc0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2becc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2becc4:
    // 0x2becc4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2becc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2becc8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2becc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2beccc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2becccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2becd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2becd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2becd4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2becd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2becd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BECD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECD8u;
        // 0x2becdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BECD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BECE0u;
}
