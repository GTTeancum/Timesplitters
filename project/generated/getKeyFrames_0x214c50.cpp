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

// Function: getKeyFrames
// Address: 0x214c50 - 0x214d64
void getKeyFrames_0x214c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getKeyFrames_0x214c50");
#endif

    switch (ctx->pc) {
        case 0x214cb8u: goto label_214cb8;
        case 0x214d10u: goto label_214d10;
        default: break;
    }

    ctx->pc = 0x214c50u;

    // 0x214c50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x214c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214c54: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x214c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x214c58: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x214c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214c5c: 0x2463ab60  addiu       $v1, $v1, -0x54A0
    ctx->pc = 0x214c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945632));
    // 0x214c60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x214c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214c64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x214c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x214c68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x214c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214c6c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x214c6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214c70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x214c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214c74: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x214C74u;
    {
        const bool branch_taken_0x214c74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x214C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C74u;
        // 0x214c78: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c74) {
            ctx->pc = 0x214C8Cu;
            goto label_214c8c;
        }
    }
    ctx->pc = 0x214C7Cu;
    // 0x214c7c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x214c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x214c80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214c84: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214C84u;
    {
        const bool branch_taken_0x214c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214c84) {
            ctx->pc = 0x214C98u;
            goto label_214c98;
        }
    }
    ctx->pc = 0x214C8Cu;
label_214c8c:
    // 0x214c8c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x214c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x214c90: 0x3e00008  jr          $ra
    ctx->pc = 0x214C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C90u;
        // 0x214c94: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214C98u;
label_214c98:
    // 0x214c98: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x214c98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214c9c: 0x0  nop
    ctx->pc = 0x214c9cu;
    // NOP
    // 0x214ca0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x214CA0u;
    {
        const bool branch_taken_0x214ca0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x214ca0) {
            ctx->pc = 0x214CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214CA0u;
            // 0x214ca4: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214CC4u;
            goto label_214cc4;
        }
    }
    ctx->pc = 0x214CA8u;
    // 0x214ca8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x214ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x214cac: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x214cacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x214cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x214CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CB0u;
        // 0x214cb4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214CB8u;
label_214cb8:
    // 0x214cb8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x214cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x214cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x214CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CBCu;
        // 0x214cc0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214CC4u;
label_214cc4:
    // 0x214cc4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x214cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x214cc8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x214cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x214ccc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x214cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x214cd0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x214cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x214cd4: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x214cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x214cd8: 0x4800020  bltz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x214CD8u;
    {
        const bool branch_taken_0x214cd8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x214CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CD8u;
        // 0x214cdc: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cd8) {
            ctx->pc = 0x214D5Cu;
            goto label_214d5c;
        }
    }
    ctx->pc = 0x214CE0u;
    // 0x214ce0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x214ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x214ce4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x214ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x214ce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214cec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x214cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214cf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x214cf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x214cf4: 0x0  nop
    ctx->pc = 0x214cf4u;
    // NOP
    // 0x214cf8: 0x0  nop
    ctx->pc = 0x214cf8u;
    // NOP
    // 0x214cfc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x214cfcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x214d00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x214d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214d04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x214D04u;
    {
        const bool branch_taken_0x214d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214d04) {
            ctx->pc = 0x214D3Cu;
            goto label_214d3c;
        }
    }
    ctx->pc = 0x214D0Cu;
    // 0x214d0c: 0x0  nop
    ctx->pc = 0x214d0cu;
    // NOP
label_214d10:
    // 0x214d10: 0x4800012  bltz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x214D10u;
    {
        const bool branch_taken_0x214d10 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x214D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D10u;
        // 0x214d14: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d10) {
            ctx->pc = 0x214D5Cu;
            goto label_214d5c;
        }
    }
    ctx->pc = 0x214D18u;
    // 0x214d18: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x214d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x214d1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214d20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x214d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x214d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x214d28: 0x0  nop
    ctx->pc = 0x214d28u;
    // NOP
    // 0x214d2c: 0x0  nop
    ctx->pc = 0x214d2cu;
    // NOP
    // 0x214d30: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x214d30u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x214d34: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x214d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214d38: 0x0  nop
    ctx->pc = 0x214d38u;
    // NOP
label_214d3c:
    // 0x214d3c: 0x4503ffde  bc1tl       . + 4 + (-0x22 << 2)
    ctx->pc = 0x214D3Cu;
    {
        const bool branch_taken_0x214d3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x214d3c) {
            ctx->pc = 0x214D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214D3Cu;
            // 0x214d40: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214cb8;
        }
    }
    ctx->pc = 0x214D44u;
    // 0x214d44: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x214d44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214d48: 0x0  nop
    ctx->pc = 0x214d48u;
    // NOP
    // 0x214d4c: 0x4502fff0  bc1fl       . + 4 + (-0x10 << 2)
    ctx->pc = 0x214D4Cu;
    {
        const bool branch_taken_0x214d4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x214d4c) {
            ctx->pc = 0x214D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214D4Cu;
            // 0x214d50: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214d10;
        }
    }
    ctx->pc = 0x214D54u;
    // 0x214d54: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x214d54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x214d58: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x214d58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_214d5c:
    // 0x214d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x214D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214D64u;
}
