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

// Function: sceVu0NormalLightMatrix
// Address: 0x2d6548 - 0x2d6608
void sceVu0NormalLightMatrix_0x2d6548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0NormalLightMatrix_0x2d6548");
#endif

    switch (ctx->pc) {
        case 0x2d6580u: goto label_2d6580;
        case 0x2d658cu: goto label_2d658c;
        case 0x2d659cu: goto label_2d659c;
        case 0x2d65a8u: goto label_2d65a8;
        case 0x2d65b8u: goto label_2d65b8;
        case 0x2d65c4u: goto label_2d65c4;
        case 0x2d65ecu: goto label_2d65ec;
        default: break;
    }

    ctx->pc = 0x2d6548u;

    // 0x2d6548: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d6548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d654c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d654cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d6550: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d6550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d6554: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d6554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d6558: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d6558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d655c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d655cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6560: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d6560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d6564: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2d6564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2d6568: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d6568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d656c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d656cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6570: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d6570u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d6574: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d6574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d6578: 0xc0b5832  jal         func_2D60C8
    ctx->pc = 0x2D6578u;
    SET_GPR_U32(ctx, 31, 0x2D6580u);
    ctx->pc = 0x2D657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6578u;
    // 0x2d657c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D60C8u, 0x2D6578u, 0x2D6580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6580u;
label_2d6580:
    // 0x2d6580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6584: 0xc0b57ca  jal         func_2D5F28
    ctx->pc = 0x2D6584u;
    SET_GPR_U32(ctx, 31, 0x2D658Cu);
    ctx->pc = 0x2D6588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6584u;
    // 0x2d6588: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5F28u, 0x2D6584u, 0x2D658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D658Cu;
label_2d658c:
    // 0x2d658c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d658cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6590: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d6590u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d6594: 0xc0b5832  jal         func_2D60C8
    ctx->pc = 0x2D6594u;
    SET_GPR_U32(ctx, 31, 0x2D659Cu);
    ctx->pc = 0x2D6598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6594u;
    // 0x2d6598: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D60C8u, 0x2D6594u, 0x2D659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D659Cu;
label_2d659c:
    // 0x2d659c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2d659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2d65a0: 0xc0b57ca  jal         func_2D5F28
    ctx->pc = 0x2D65A0u;
    SET_GPR_U32(ctx, 31, 0x2D65A8u);
    ctx->pc = 0x2D65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65A0u;
    // 0x2d65a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5F28u, 0x2D65A0u, 0x2D65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65A8u;
label_2d65a8:
    // 0x2d65a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d65a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d65acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d65b0: 0xc0b5832  jal         func_2D60C8
    ctx->pc = 0x2D65B0u;
    SET_GPR_U32(ctx, 31, 0x2D65B8u);
    ctx->pc = 0x2D65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65B0u;
    // 0x2d65b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D60C8u, 0x2D65B0u, 0x2D65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65B8u;
label_2d65b8:
    // 0x2d65b8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2d65b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2d65bc: 0xc0b57ca  jal         func_2D5F28
    ctx->pc = 0x2D65BCu;
    SET_GPR_U32(ctx, 31, 0x2D65C4u);
    ctx->pc = 0x2D65C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65BCu;
    // 0x2d65c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5F28u, 0x2D65BCu, 0x2D65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65C4u;
label_2d65c4:
    // 0x2d65c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d65c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d65c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d65c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d65ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d65d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d65d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d65d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d65d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65d8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2d65d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2d65dc: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x2d65dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2d65e0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2d65e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2d65e4: 0xc0b57d8  jal         func_2D5F60
    ctx->pc = 0x2D65E4u;
    SET_GPR_U32(ctx, 31, 0x2D65ECu);
    ctx->pc = 0x2D65E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65E4u;
    // 0x2d65e8: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5F60u, 0x2D65E4u, 0x2D65ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65ECu;
label_2d65ec:
    // 0x2d65ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d65ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d65f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d65f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d65f4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2d65f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d65f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d65f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d65fc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d65fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d6600: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6600u;
        // 0x2d6604: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6608u;
}
