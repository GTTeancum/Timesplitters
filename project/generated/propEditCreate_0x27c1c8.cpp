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

// Function: propEditCreate
// Address: 0x27c1c8 - 0x27c2b0
void propEditCreate_0x27c1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propEditCreate_0x27c1c8");
#endif

    switch (ctx->pc) {
        case 0x27c23cu: goto label_27c23c;
        case 0x27c274u: goto label_27c274;
        case 0x27c294u: goto label_27c294;
        default: break;
    }

    ctx->pc = 0x27c1c8u;

    // 0x27c1c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27c1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27c1cc: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x27c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x27c1d0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x27c1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27c1d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27c1d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x27c1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27c1dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27c1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27c1e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27c1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27c1e4: 0xc4410340  lwc1        $f1, 0x340($v0)
    ctx->pc = 0x27c1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c1e8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x27c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x27c1ec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x27c1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27c1f0: 0xc4400344  lwc1        $f0, 0x344($v0)
    ctx->pc = 0x27c1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c1f4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x27c1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x27c1f8: 0xc4410348  lwc1        $f1, 0x348($v0)
    ctx->pc = 0x27c1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c1fc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x27c1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27c200: 0xc4410350  lwc1        $f1, 0x350($v0)
    ctx->pc = 0x27c200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c204: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x27c204u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c208: 0x0  nop
    ctx->pc = 0x27c208u;
    // NOP
    // 0x27c20c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x27C20Cu;
    {
        const bool branch_taken_0x27c20c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C20Cu;
        // 0x27c210: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c20c) {
            ctx->pc = 0x27C22Cu;
            goto label_27c22c;
        }
    }
    ctx->pc = 0x27C214u;
    // 0x27c214: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x27c214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x27c218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27c218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c21c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x27c21cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c220: 0x0  nop
    ctx->pc = 0x27c220u;
    // NOP
    // 0x27c224: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x27C224u;
    {
        const bool branch_taken_0x27c224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c224) {
            ctx->pc = 0x27C228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C224u;
            // 0x27c228: 0xc44d0354  lwc1        $f13, 0x354($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C234u;
            goto label_27c234;
        }
    }
    ctx->pc = 0x27C22Cu;
label_27c22c:
    // 0x27c22c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27C22Cu;
    {
        const bool branch_taken_0x27c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C22Cu;
        // 0x27c230: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c22c) {
            ctx->pc = 0x27C25Cu;
            goto label_27c25c;
        }
    }
    ctx->pc = 0x27C234u;
label_27c234:
    // 0x27c234: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x27C234u;
    SET_GPR_U32(ctx, 31, 0x27C23Cu);
    ctx->pc = 0x27C238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C234u;
    // 0x27c238: 0xc44c034c  lwc1        $f12, 0x34C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x27C234u, 0x27C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C23Cu;
label_27c23c:
    // 0x27c23c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27c23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27c240: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27c240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27c244: 0xc78287b0  lwc1        $f2, -0x7850($gp)
    ctx->pc = 0x27c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27c248: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27c248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27c24c: 0x0  nop
    ctx->pc = 0x27c24cu;
    // NOP
    // 0x27c250: 0x0  nop
    ctx->pc = 0x27c250u;
    // NOP
    // 0x27c254: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x27c254u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x27c258: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x27c258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_27c25c:
    // 0x27c25c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x27c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27c260: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x27c260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27c264: 0xc7ad000c  lwc1        $f13, 0xC($sp)
    ctx->pc = 0x27c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27c268: 0xc7ae0010  lwc1        $f14, 0x10($sp)
    ctx->pc = 0x27c268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x27c26c: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x27C26Cu;
    SET_GPR_U32(ctx, 31, 0x27C274u);
    ctx->pc = 0x27C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C26Cu;
    // 0x27c270: 0xc7af0014  lwc1        $f15, 0x14($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x27C26Cu, 0x27C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C274u;
label_27c274:
    // 0x27c274: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27c274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c278: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27c27c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C27Cu;
    {
        const bool branch_taken_0x27c27c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c27c) {
            ctx->pc = 0x27C28Cu;
            goto label_27c28c;
        }
    }
    ctx->pc = 0x27C284u;
    // 0x27c284: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27C284u;
    {
        const bool branch_taken_0x27c284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C284u;
        // 0x27c288: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c284) {
            ctx->pc = 0x27C298u;
            goto label_27c298;
        }
    }
    ctx->pc = 0x27C28Cu;
label_27c28c:
    // 0x27c28c: 0xc09a4bc  jal         func_2692F0
    ctx->pc = 0x27C28Cu;
    SET_GPR_U32(ctx, 31, 0x27C294u);
    ctx->pc = 0x2692F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2692F0u, 0x27C28Cu, 0x27C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C294u;
label_27c294:
    // 0x27c294: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27c294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_27c298:
    // 0x27c298: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27c298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c29c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27c29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27c2a0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x27c2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c2a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x27c2a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x27C2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2A8u;
        // 0x27c2ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C2B0u;
}
