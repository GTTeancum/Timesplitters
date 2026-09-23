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

// Function: bgWallBBIntersection
// Address: 0x2572b0 - 0x2573ac
void bgWallBBIntersection_0x2572b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgWallBBIntersection_0x2572b0");
#endif

    switch (ctx->pc) {
        case 0x2572d0u: goto label_2572d0;
        default: break;
    }

    ctx->pc = 0x2572b0u;

    // 0x2572b0: 0x8f89a264  lw          $t1, -0x5D9C($gp)
    ctx->pc = 0x2572b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2572b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2572b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2572b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2572b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2572bc: 0x19200039  blez        $t1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2572BCu;
    {
        const bool branch_taken_0x2572bc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2572C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572BCu;
        // 0x2572c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2572bc) {
            ctx->pc = 0x2573A4u;
            goto label_2573a4;
        }
    }
    ctx->pc = 0x2572C4u;
    // 0x2572c4: 0x8f8aa234  lw          $t2, -0x5DCC($gp)
    ctx->pc = 0x2572c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943284)));
    // 0x2572c8: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x2572c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2572cc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2572ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2572d0:
    // 0x2572d0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2572d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2572d4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2572d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2572d8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2572d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2572dc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2572dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2572e0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2572e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2572e4: 0x0  nop
    ctx->pc = 0x2572e4u;
    // NOP
    // 0x2572e8: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x2572E8u;
    {
        const bool branch_taken_0x2572e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2572ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572E8u;
        // 0x2572ec: 0x24670001  addiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2572e8) {
            ctx->pc = 0x25738Cu;
            goto label_25738c;
        }
    }
    ctx->pc = 0x2572F0u;
    // 0x2572f0: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2572f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2572f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2572f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2572f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2572f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2572fc: 0x0  nop
    ctx->pc = 0x2572fcu;
    // NOP
    // 0x257300: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
    ctx->pc = 0x257300u;
    {
        const bool branch_taken_0x257300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257300) {
            ctx->pc = 0x257304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257300u;
            // 0x257304: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257390u;
            goto label_257390;
        }
    }
    ctx->pc = 0x257308u;
    // 0x257308: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x257308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25730c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x25730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257310: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257314: 0x0  nop
    ctx->pc = 0x257314u;
    // NOP
    // 0x257318: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x257318u;
    {
        const bool branch_taken_0x257318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257318) {
            ctx->pc = 0x25731Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257318u;
            // 0x25731c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257390u;
            goto label_257390;
        }
    }
    ctx->pc = 0x257320u;
    // 0x257320: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x257320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257324: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x257324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25732c: 0x0  nop
    ctx->pc = 0x25732cu;
    // NOP
    // 0x257330: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x257330u;
    {
        const bool branch_taken_0x257330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257330) {
            ctx->pc = 0x257334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257330u;
            // 0x257334: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257390u;
            goto label_257390;
        }
    }
    ctx->pc = 0x257338u;
    // 0x257338: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x257338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25733c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x25733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257340: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257344: 0x0  nop
    ctx->pc = 0x257344u;
    // NOP
    // 0x257348: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x257348u;
    {
        const bool branch_taken_0x257348 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257348) {
            ctx->pc = 0x25734Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257348u;
            // 0x25734c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257390u;
            goto label_257390;
        }
    }
    ctx->pc = 0x257350u;
    // 0x257350: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x257350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257354: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x257354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25735c: 0x0  nop
    ctx->pc = 0x25735cu;
    // NOP
    // 0x257360: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x257360u;
    {
        const bool branch_taken_0x257360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257360) {
            ctx->pc = 0x257364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257360u;
            // 0x257364: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257390u;
            goto label_257390;
        }
    }
    ctx->pc = 0x257368u;
    // 0x257368: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x257368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x25736c: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x25736cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257370: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x257370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x257374: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x257374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x257378: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x257378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x25737c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25737cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257380: 0x1061026  xor         $v0, $t0, $a2
    ctx->pc = 0x257380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 6));
    // 0x257384: 0x62580a  movz        $t3, $v1, $v0
    ctx->pc = 0x257384u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 3));
    // 0x257388: 0x8f89a264  lw          $t1, -0x5D9C($gp)
    ctx->pc = 0x257388u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
label_25738c:
    // 0x25738c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x25738cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_257390:
    // 0x257390: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x257390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x257394: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257394u;
    {
        const bool branch_taken_0x257394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257394) {
            ctx->pc = 0x2573A4u;
            goto label_2573a4;
        }
    }
    ctx->pc = 0x25739Cu;
    // 0x25739c: 0x1160ffcc  beqz        $t3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x25739Cu;
    {
        const bool branch_taken_0x25739c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2573A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25739Cu;
        // 0x2573a0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25739c) {
            ctx->pc = 0x2572D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2572d0;
        }
    }
    ctx->pc = 0x2573A4u;
label_2573a4:
    // 0x2573a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2573A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2573A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573A4u;
        // 0x2573a8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2573A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2573ACu;
}
