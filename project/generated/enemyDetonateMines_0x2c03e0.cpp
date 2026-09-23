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

// Function: enemyDetonateMines
// Address: 0x2c03e0 - 0x2c0510
void enemyDetonateMines_0x2c03e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyDetonateMines_0x2c03e0");
#endif

    switch (ctx->pc) {
        case 0x2c0438u: goto label_2c0438;
        case 0x2c04d8u: goto label_2c04d8;
        default: break;
    }

    ctx->pc = 0x2c03e0u;

    // 0x2c03e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c03e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c03e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c03e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c03e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c03e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c03ec: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x2c03ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c03f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c03f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c03f4: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2c03f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c03f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c03f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c03fc: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2c03fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c0400: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2c0400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c0404: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c0404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c0408: 0xc79690b0  lwc1        $f22, -0x6F50($gp)
    ctx->pc = 0x2c0408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c040c: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x2c040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2c0410: 0xc6060030  lwc1        $f6, 0x30($s0)
    ctx->pc = 0x2c0410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c0414: 0xc6050034  lwc1        $f5, 0x34($s0)
    ctx->pc = 0x2c0414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c0418: 0x245111c0  addiu       $s1, $v0, 0x11C0
    ctx->pc = 0x2c0418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4544));
    // 0x2c041c: 0xc6040038  lwc1        $f4, 0x38($s0)
    ctx->pc = 0x2c041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c0420: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x2c0420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x2c0424: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c0424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c0428: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2c0428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2c042c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c042cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c0430: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c0430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c0434: 0x0  nop
    ctx->pc = 0x2c0434u;
    // NOP
label_2c0438:
    // 0x2c0438: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2c0438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2c043c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C043Cu;
    {
        const bool branch_taken_0x2c043c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C043Cu;
        // 0x2c0440: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c043c) {
            ctx->pc = 0x2C04E4u;
            goto label_2c04e4;
        }
    }
    ctx->pc = 0x2C0444u;
    // 0x2c0444: 0xc4430048  lwc1        $f3, 0x48($v0)
    ctx->pc = 0x2c0444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0448: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c0448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c044c: 0x4603b034  c.lt.s      $f22, $f3
    ctx->pc = 0x2c044cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0450: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x2C0450u;
    {
        const bool branch_taken_0x2c0450 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0450) {
            ctx->pc = 0x2C04E4u;
            goto label_2c04e4;
        }
    }
    ctx->pc = 0x2C0458u;
    // 0x2c0458: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c0458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c045c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c045cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0460: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x2C0460u;
    {
        const bool branch_taken_0x2c0460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0460) {
            ctx->pc = 0x2C04E4u;
            goto label_2c04e4;
        }
    }
    ctx->pc = 0x2C0468u;
    // 0x2c0468: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2c0468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c046c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c046cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0470: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2C0470u;
    {
        const bool branch_taken_0x2c0470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0470) {
            ctx->pc = 0x2C04E4u;
            goto label_2c04e4;
        }
    }
    ctx->pc = 0x2C0478u;
    // 0x2c0478: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2c0478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c047c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c047cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0480: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2C0480u;
    {
        const bool branch_taken_0x2c0480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0480) {
            ctx->pc = 0x2C04E4u;
            goto label_2c04e4;
        }
    }
    ctx->pc = 0x2C0488u;
    // 0x2c0488: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2c0488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c048c: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x2c048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0490: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2c0490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2c0494: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2c0494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0498: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c0498u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c049c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2c049cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c04a0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c04a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c04a4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c04a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c04a8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c04a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c04ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c04acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c04b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c04b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c04b4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2c04b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c04b8: 0x0  nop
    ctx->pc = 0x2c04b8u;
    // NOP
    // 0x2c04bc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C04BCu;
    {
        const bool branch_taken_0x2c04bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04BCu;
        // 0x2c04c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c04bc) {
            ctx->pc = 0x2C04D0u;
            goto label_2c04d0;
        }
    }
    ctx->pc = 0x2C04C4u;
    // 0x2c04c4: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x2c04c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c04c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C04C8u;
    {
        const bool branch_taken_0x2c04c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c04c8) {
            ctx->pc = 0x2C04E4u;
            goto label_2c04e4;
        }
    }
    ctx->pc = 0x2C04D0u;
label_2c04d0:
    // 0x2c04d0: 0xc0a29cc  jal         func_28A730
    ctx->pc = 0x2C04D0u;
    SET_GPR_U32(ctx, 31, 0x2C04D8u);
    ctx->pc = 0x28A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A730u, 0x2C04D0u, 0x2C04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C04D8u;
label_2c04d8:
    // 0x2c04d8: 0xc6060030  lwc1        $f6, 0x30($s0)
    ctx->pc = 0x2c04d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c04dc: 0xc6050034  lwc1        $f5, 0x34($s0)
    ctx->pc = 0x2c04dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c04e0: 0xc6040038  lwc1        $f4, 0x38($s0)
    ctx->pc = 0x2c04e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2c04e4:
    // 0x2c04e4: 0x643ffd4  bgezl       $s2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2C04E4u;
    {
        const bool branch_taken_0x2c04e4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2c04e4) {
            ctx->pc = 0x2C04E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C04E4u;
            // 0x2c04e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0438;
        }
    }
    ctx->pc = 0x2C04ECu;
    // 0x2c04ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c04ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c04f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c04f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c04f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c04f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c04f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c04f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c04fc: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2c04fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c0500: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2c0500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c0504: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2c0504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c0508: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0508u;
        // 0x2c050c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0510u;
}
