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

// Function: StatsGetAverage
// Address: 0x2213d8 - 0x221468
void StatsGetAverage_0x2213d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsGetAverage_0x2213d8");
#endif

    switch (ctx->pc) {
        case 0x221410u: goto label_221410;
        case 0x22141cu: goto label_22141c;
        default: break;
    }

    ctx->pc = 0x2213d8u;

    // 0x2213d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2213d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2213dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2213dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2213e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2213e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2213e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2213e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2213e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2213ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2213ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213f0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2213f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2213f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2213f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2213f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2213fc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2213fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x221400: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x221400u;
    {
        const bool branch_taken_0x221400 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x221404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221400u;
        // 0x221404: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221400) {
            ctx->pc = 0x221434u;
            goto label_221434;
        }
    }
    ctx->pc = 0x221408u;
    // 0x221408: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x221408u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22140c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x22140cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_221410:
    // 0x221410: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221414: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221414u;
    SET_GPR_U32(ctx, 31, 0x22141Cu);
    ctx->pc = 0x221418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221414u;
    // 0x221418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221414u, 0x22141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22141Cu;
label_22141c:
    // 0x22141c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22141cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x221420: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x221420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x221424: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x221424u;
    {
        const bool branch_taken_0x221424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221424u;
        // 0x221428: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221424) {
            ctx->pc = 0x221410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221410;
        }
    }
    ctx->pc = 0x22142Cu;
    // 0x22142c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22142Cu;
    {
        const bool branch_taken_0x22142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22142c) {
            ctx->pc = 0x22143Cu;
            goto label_22143c;
        }
    }
    ctx->pc = 0x221434u;
label_221434:
    // 0x221434: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x221434u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x221438: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x221438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_22143c:
    // 0x22143c: 0x0  nop
    ctx->pc = 0x22143cu;
    // NOP
    // 0x221440: 0x0  nop
    ctx->pc = 0x221440u;
    // NOP
    // 0x221444: 0x4614a803  div.s       $f0, $f21, $f20
    ctx->pc = 0x221444u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[20];
    // 0x221448: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x221448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22144c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22144cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221450: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x221450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221458: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x221458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22145c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x22145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x221460: 0x3e00008  jr          $ra
    ctx->pc = 0x221460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221460u;
        // 0x221464: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221468u;
}
