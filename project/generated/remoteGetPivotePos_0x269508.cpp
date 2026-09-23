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

// Function: remoteGetPivotePos
// Address: 0x269508 - 0x2695c0
void remoteGetPivotePos_0x269508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("remoteGetPivotePos_0x269508");
#endif

    switch (ctx->pc) {
        case 0x269528u: goto label_269528;
        case 0x26956cu: goto label_26956c;
        case 0x269578u: goto label_269578;
        default: break;
    }

    ctx->pc = 0x269508u;

    // 0x269508: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x269508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26950c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x26950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x269510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x269510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269514: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x269514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x269518: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x269518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x26951c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x26951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x269520: 0xc09a530  jal         func_2694C0
    ctx->pc = 0x269520u;
    SET_GPR_U32(ctx, 31, 0x269528u);
    ctx->pc = 0x269524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269520u;
    // 0x269524: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2694C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2694C0u, 0x269520u, 0x269528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269528u;
label_269528:
    // 0x269528: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x269528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26952c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x26952cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x269530: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x269530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269538: 0xc78183e0  lwc1        $f1, -0x7C20($gp)
    ctx->pc = 0x269538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26953c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x26953cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x269540: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x269540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269544: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x269544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x269548: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x269548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26954c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269550: 0x0  nop
    ctx->pc = 0x269550u;
    // NOP
    // 0x269554: 0x0  nop
    ctx->pc = 0x269554u;
    // NOP
    // 0x269558: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x269558u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x26955c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26955cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x269560: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x269560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269564: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x269564u;
    SET_GPR_U32(ctx, 31, 0x26956Cu);
    ctx->pc = 0x269568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269564u;
    // 0x269568: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x269564u, 0x26956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26956Cu;
label_26956c:
    // 0x26956c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26956cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269570: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x269570u;
    SET_GPR_U32(ctx, 31, 0x269578u);
    ctx->pc = 0x269574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269570u;
    // 0x269574: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x269570u, 0x269578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269578u;
label_269578:
    // 0x269578: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x269578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26957c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x26957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269580: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x269580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269584: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x269584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x269588: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x269588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26958c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26958cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x269590: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x269590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x269594: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x269594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x269598: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x269598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26959c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x26959cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2695a0: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2695a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2695a4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2695a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2695a8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2695a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2695ac: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2695acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2695b0: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x2695b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2695b4: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2695b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2695b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2695B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2695BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695B8u;
        // 0x2695bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2695B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2695C0u;
}
