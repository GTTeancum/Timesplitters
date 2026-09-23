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

// Function: checkProgress
// Address: 0x2bfc98 - 0x2bfd74
void checkProgress_0x2bfc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkProgress_0x2bfc98");
#endif

    ctx->pc = 0x2bfc98u;

    // 0x2bfc98: 0x8c850160  lw          $a1, 0x160($a0)
    ctx->pc = 0x2bfc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2bfc9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2bfc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2bfca0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2bfca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2bfca4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bfca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bfca8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2bfca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2bfcac: 0xc4a00b50  lwc1        $f0, 0xB50($a1)
    ctx->pc = 0x2bfcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfcb0: 0x8ca30a90  lw          $v1, 0xA90($a1)
    ctx->pc = 0x2bfcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2704)));
    // 0x2bfcb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bfcb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfcb8: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x2bfcb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bfcbc: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x2BFCBCu;
    {
        const bool branch_taken_0x2bfcbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFCBCu;
        // 0x2bfcc0: 0xaca60a90  sw          $a2, 0xA90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2704), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfcbc) {
            ctx->pc = 0x2BFD6Cu;
            goto label_2bfd6c;
        }
    }
    ctx->pc = 0x2BFCC4u;
    // 0x2bfcc4: 0xc4a30bac  lwc1        $f3, 0xBAC($a1)
    ctx->pc = 0x2bfcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bfcc8: 0xc4a40bb0  lwc1        $f4, 0xBB0($a1)
    ctx->pc = 0x2bfcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bfccc: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2bfcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfcd0: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x2bfcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bfcd4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bfcd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bfcd8: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x2bfcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfcdc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2bfcdcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2bfce0: 0xc4a30bb4  lwc1        $f3, 0xBB4($a1)
    ctx->pc = 0x2bfce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bfce4: 0xc784909c  lwc1        $f4, -0x6F64($gp)
    ctx->pc = 0x2bfce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bfce8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2bfce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bfcec: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2bfcecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2bfcf0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2bfcf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2bfcf4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2bfcf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bfcf8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bfcf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bfcfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bfcfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bfd00: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2bfd00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfd04: 0x0  nop
    ctx->pc = 0x2bfd04u;
    // NOP
    // 0x2bfd08: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x2BFD08u;
    {
        const bool branch_taken_0x2bfd08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfd08) {
            ctx->pc = 0x2BFD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFD08u;
            // 0x2bfd0c: 0xaca00b50  sw          $zero, 0xB50($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2896), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFD54u;
            goto label_2bfd54;
        }
    }
    ctx->pc = 0x2BFD10u;
    // 0x2bfd10: 0x8ca20a94  lw          $v0, 0xA94($a1)
    ctx->pc = 0x2bfd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2708)));
    // 0x2bfd14: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2bfd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2bfd18: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2BFD18u;
    {
        const bool branch_taken_0x2bfd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfd18) {
            ctx->pc = 0x2BFD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFD18u;
            // 0x2bfd1c: 0xaca00b50  sw          $zero, 0xB50($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2896), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFD54u;
            goto label_2bfd54;
        }
    }
    ctx->pc = 0x2BFD20u;
    // 0x2bfd20: 0x8ca30a9c  lw          $v1, 0xA9C($a1)
    ctx->pc = 0x2bfd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2716)));
    // 0x2bfd24: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2bfd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2bfd28: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFD28u;
    {
        const bool branch_taken_0x2bfd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD28u;
        // 0x2bfd2c: 0x34c20001  ori         $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd28) {
            ctx->pc = 0x2BFD3Cu;
            goto label_2bfd3c;
        }
    }
    ctx->pc = 0x2BFD30u;
    // 0x2bfd30: 0xaca00bb8  sw          $zero, 0xBB8($a1)
    ctx->pc = 0x2bfd30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3000), GPR_U32(ctx, 0));
    // 0x2bfd34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFD34u;
    {
        const bool branch_taken_0x2bfd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD34u;
        // 0x2bfd38: 0xaca20a90  sw          $v0, 0xA90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd34) {
            ctx->pc = 0x2BFD50u;
            goto label_2bfd50;
        }
    }
    ctx->pc = 0x2BFD3Cu;
label_2bfd3c:
    // 0x2bfd3c: 0x8ca20bb8  lw          $v0, 0xBB8($a1)
    ctx->pc = 0x2bfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3000)));
    // 0x2bfd40: 0x34c30001  ori         $v1, $a2, 0x1
    ctx->pc = 0x2bfd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x2bfd44: 0xaca30a90  sw          $v1, 0xA90($a1)
    ctx->pc = 0x2bfd44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2704), GPR_U32(ctx, 3));
    // 0x2bfd48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bfd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bfd4c: 0xaca20bb8  sw          $v0, 0xBB8($a1)
    ctx->pc = 0x2bfd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3000), GPR_U32(ctx, 2));
label_2bfd50:
    // 0x2bfd50: 0xaca00b50  sw          $zero, 0xB50($a1)
    ctx->pc = 0x2bfd50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2896), GPR_U32(ctx, 0));
label_2bfd54:
    // 0x2bfd54: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2bfd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfd58: 0xe4a00bac  swc1        $f0, 0xBAC($a1)
    ctx->pc = 0x2bfd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2988), bits); }
    // 0x2bfd5c: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x2bfd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfd60: 0xe4a10bb0  swc1        $f1, 0xBB0($a1)
    ctx->pc = 0x2bfd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2992), bits); }
    // 0x2bfd64: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x2bfd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfd68: 0xe4a00bb4  swc1        $f0, 0xBB4($a1)
    ctx->pc = 0x2bfd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2996), bits); }
label_2bfd6c:
    // 0x2bfd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFD74u;
}
