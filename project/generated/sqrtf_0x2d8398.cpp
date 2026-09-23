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

// Function: sqrtf
// Address: 0x2d8398 - 0x2d84ac
void sqrtf_0x2d8398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sqrtf_0x2d8398");
#endif

    switch (ctx->pc) {
        case 0x2d83bcu: goto label_2d83bc;
        case 0x2d83d4u: goto label_2d83d4;
        case 0x2d840cu: goto label_2d840c;
        case 0x2d8448u: goto label_2d8448;
        case 0x2d8458u: goto label_2d8458;
        case 0x2d8474u: goto label_2d8474;
        case 0x2d8484u: goto label_2d8484;
        default: break;
    }

    ctx->pc = 0x2d8398u;

    // 0x2d8398: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d8398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d839c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2d839cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d83a0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2d83a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d83a4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2d83a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2d83a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d83a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d83ac: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2d83acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d83b0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d83b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d83b4: 0xc0b6bd0  jal         func_2DAF40
    ctx->pc = 0x2D83B4u;
    SET_GPR_U32(ctx, 31, 0x2D83BCu);
    ctx->pc = 0x2D83B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D83B4u;
    // 0x2d83b8: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAF40u, 0x2D83B4u, 0x2D83BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D83BCu;
label_2d83bc:
    // 0x2d83bc: 0x8e30b118  lw          $s0, -0x4EE8($s1)
    ctx->pc = 0x2d83bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947096)));
    // 0x2d83c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d83c4: 0x12020031  beq         $s0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D83C4u;
    {
        const bool branch_taken_0x2d83c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83C4u;
        // 0x2d83c8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d83c4) {
            ctx->pc = 0x2D848Cu;
            goto label_2d848c;
        }
    }
    ctx->pc = 0x2D83CCu;
    // 0x2d83cc: 0xc0b717a  jal         func_2DC5E8
    ctx->pc = 0x2D83CCu;
    SET_GPR_U32(ctx, 31, 0x2D83D4u);
    ctx->pc = 0x2D83D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D83CCu;
    // 0x2d83d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5E8u, 0x2D83CCu, 0x2D83D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D83D4u;
label_2d83d4:
    // 0x2d83d4: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D83D4u;
    {
        const bool branch_taken_0x2d83d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83D4u;
        // 0x2d83d8: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d83d4) {
            ctx->pc = 0x2D8490u;
            goto label_2d8490;
        }
    }
    ctx->pc = 0x2D83DCu;
    // 0x2d83dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d83dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d83e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2d83e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d83e4: 0x0  nop
    ctx->pc = 0x2d83e4u;
    // NOP
    // 0x2d83e8: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x2D83E8u;
    {
        const bool branch_taken_0x2d83e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83E8u;
        // 0x2d83ec: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d83e8) {
            ctx->pc = 0x2D848Cu;
            goto label_2d848c;
        }
    }
    ctx->pc = 0x2D83F0u;
    // 0x2d83f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d83f4: 0x2442a8c0  addiu       $v0, $v0, -0x5740
    ctx->pc = 0x2d83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
    // 0x2d83f8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d83f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d83fc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d83fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d8400: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d8400u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d8404: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D8404u;
    SET_GPR_U32(ctx, 31, 0x2D840Cu);
    ctx->pc = 0x2D8408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8404u;
    // 0x2d8408: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D8404u, 0x2D840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D840Cu;
label_2d840c:
    // 0x2d840c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2d840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2d8410: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8410u;
    {
        const bool branch_taken_0x2d8410 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8410u;
        // 0x2d8414: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8410) {
            ctx->pc = 0x2D8424u;
            goto label_2d8424;
        }
    }
    ctx->pc = 0x2D8418u;
    // 0x2d8418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d841c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D841Cu;
    {
        const bool branch_taken_0x2d841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D841Cu;
        // 0x2d8420: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d841c) {
            ctx->pc = 0x2D8430u;
            goto label_2d8430;
        }
    }
    ctx->pc = 0x2D8424u;
label_2d8424:
    // 0x2d8424: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d8424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d8428: 0xdc43a8c8  ld          $v1, -0x5738($v0)
    ctx->pc = 0x2d8428u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3AA8C8u));
    // 0x2d842c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2d842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2d8430:
    // 0x2d8430: 0x8e23b118  lw          $v1, -0x4EE8($s1)
    ctx->pc = 0x2d8430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947096)));
    // 0x2d8434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d8434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8438: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8438u;
    {
        const bool branch_taken_0x2d8438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d8438) {
            ctx->pc = 0x2D8450u;
            goto label_2d8450;
        }
    }
    ctx->pc = 0x2D8440u;
    // 0x2d8440: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D8440u;
    SET_GPR_U32(ctx, 31, 0x2D8448u);
    ctx->pc = 0x2D8444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8440u;
    // 0x2d8444: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D8440u, 0x2D8448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8448u;
label_2d8448:
    // 0x2d8448: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8448u;
    {
        const bool branch_taken_0x2d8448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8448u;
        // 0x2d844c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8448) {
            ctx->pc = 0x2D8464u;
            goto label_2d8464;
        }
    }
    ctx->pc = 0x2D8450u;
label_2d8450:
    // 0x2d8450: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D8450u;
    SET_GPR_U32(ctx, 31, 0x2D8458u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D8450u, 0x2D8458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8458u;
label_2d8458:
    // 0x2d8458: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2d8458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d845c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d845cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d8460: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d8460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8464:
    // 0x2d8464: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8464u;
    {
        const bool branch_taken_0x2d8464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8464) {
            ctx->pc = 0x2D847Cu;
            goto label_2d847c;
        }
    }
    ctx->pc = 0x2D846Cu;
    // 0x2d846c: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D846Cu;
    SET_GPR_U32(ctx, 31, 0x2D8474u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D846Cu, 0x2D8474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8474u;
label_2d8474:
    // 0x2d8474: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d8474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8478: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d8478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2d847c:
    // 0x2d847c: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2D847Cu;
    SET_GPR_U32(ctx, 31, 0x2D8484u);
    ctx->pc = 0x2D8480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D847Cu;
    // 0x2d8480: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2D847Cu, 0x2D8484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8484u;
label_2d8484:
    // 0x2d8484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8484u;
    {
        const bool branch_taken_0x2d8484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8484u;
        // 0x2d8488: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8484) {
            ctx->pc = 0x2D8494u;
            goto label_2d8494;
        }
    }
    ctx->pc = 0x2D848Cu;
label_2d848c:
    // 0x2d848c: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x2d848cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_2d8490:
    // 0x2d8490: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d8490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d8494:
    // 0x2d8494: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2d8494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8498: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d8498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d849c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2d849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d84a0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2d84a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d84a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D84A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D84A4u;
        // 0x2d84a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D84A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D84ACu;
}
