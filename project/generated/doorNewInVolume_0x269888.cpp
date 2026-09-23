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

// Function: doorNewInVolume
// Address: 0x269888 - 0x26995c
void doorNewInVolume_0x269888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("doorNewInVolume_0x269888");
#endif

    switch (ctx->pc) {
        case 0x2698b4u: goto label_2698b4;
        case 0x2698e0u: goto label_2698e0;
        case 0x2698fcu: goto label_2698fc;
        case 0x269908u: goto label_269908;
        case 0x269910u: goto label_269910;
        case 0x269920u: goto label_269920;
        case 0x26992cu: goto label_26992c;
        case 0x269934u: goto label_269934;
        default: break;
    }

    ctx->pc = 0x269888u;

    // 0x269888: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x269888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26988c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26988cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x269890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x269890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269894: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x269894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x269898: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x269898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26989c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2698a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2698a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2698a4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2698a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2698a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2698a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2698ac: 0xc095d8e  jal         func_257638
    ctx->pc = 0x2698ACu;
    SET_GPR_U32(ctx, 31, 0x2698B4u);
    ctx->pc = 0x2698B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2698ACu;
    // 0x2698b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257638u, 0x2698ACu, 0x2698B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2698B4u;
label_2698b4:
    // 0x2698b4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2698b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2698b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2698b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2698bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2698bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2698c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2698c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2698c4: 0xc60d000c  lwc1        $f13, 0xC($s0)
    ctx->pc = 0x2698c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2698c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2698c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2698cc: 0xc60e0010  lwc1        $f14, 0x10($s0)
    ctx->pc = 0x2698ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2698d0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x2698d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x2698d4: 0xdc337c00  ld          $s3, 0x7C00($at)
    ctx->pc = 0x2698d4u;
    SET_GPR_U64(ctx, 19, FAST_READ64(0x3A7C00u));
    // 0x2698d8: 0xc09a65c  jal         func_269970
    ctx->pc = 0x2698D8u;
    SET_GPR_U32(ctx, 31, 0x2698E0u);
    ctx->pc = 0x2698DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2698D8u;
    // 0x2698dc: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x269970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269970u, 0x2698D8u, 0x2698E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2698E0u;
label_2698e0:
    // 0x2698e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2698e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2698e4: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2698e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x2698e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2698e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2698ec: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x2698ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    // 0x2698f0: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x2698f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2698f4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2698F4u;
    SET_GPR_U32(ctx, 31, 0x2698FCu);
    ctx->pc = 0x2698F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2698F4u;
    // 0x2698f8: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2698F4u, 0x2698FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2698FCu;
label_2698fc:
    // 0x2698fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2698fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269900: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x269900u;
    SET_GPR_U32(ctx, 31, 0x269908u);
    ctx->pc = 0x269904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269900u;
    // 0x269904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x269900u, 0x269908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269908u;
label_269908:
    // 0x269908: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x269908u;
    SET_GPR_U32(ctx, 31, 0x269910u);
    ctx->pc = 0x26990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269908u;
    // 0x26990c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x269908u, 0x269910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269910u;
label_269910:
    // 0x269910: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x269910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x269914: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x269914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269918: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x269918u;
    SET_GPR_U32(ctx, 31, 0x269920u);
    ctx->pc = 0x26991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269918u;
    // 0x26991c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x269918u, 0x269920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269920u;
label_269920:
    // 0x269920: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x269920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269924: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x269924u;
    SET_GPR_U32(ctx, 31, 0x26992Cu);
    ctx->pc = 0x269928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269924u;
    // 0x269928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x269924u, 0x26992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26992Cu;
label_26992c:
    // 0x26992c: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x26992Cu;
    SET_GPR_U32(ctx, 31, 0x269934u);
    ctx->pc = 0x269930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26992Cu;
    // 0x269930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x26992Cu, 0x269934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269934u;
label_269934:
    // 0x269934: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x269934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x269938: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x269938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26993c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26993cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269940: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x269940u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269944: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x269944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269948: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x269948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26994c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26994cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269950: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x269950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x269954: 0x3e00008  jr          $ra
    ctx->pc = 0x269954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269954u;
        // 0x269958: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26995Cu;
}
