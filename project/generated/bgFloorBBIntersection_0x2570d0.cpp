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

// Function: bgFloorBBIntersection
// Address: 0x2570d0 - 0x2571c8
void bgFloorBBIntersection_0x2570d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgFloorBBIntersection_0x2570d0");
#endif

    switch (ctx->pc) {
        case 0x2570f0u: goto label_2570f0;
        default: break;
    }

    ctx->pc = 0x2570d0u;

    // 0x2570d0: 0x8f89a264  lw          $t1, -0x5D9C($gp)
    ctx->pc = 0x2570d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2570d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2570d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2570d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570dc: 0x19200038  blez        $t1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2570DCu;
    {
        const bool branch_taken_0x2570dc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2570E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570DCu;
        // 0x2570e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570dc) {
            ctx->pc = 0x2571C0u;
            goto label_2571c0;
        }
    }
    ctx->pc = 0x2570E4u;
    // 0x2570e4: 0x8f8aa234  lw          $t2, -0x5DCC($gp)
    ctx->pc = 0x2570e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943284)));
    // 0x2570e8: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x2570e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2570ec: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2570ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2570f0:
    // 0x2570f0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2570f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2570f4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2570f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2570f8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2570f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2570fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2570fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257100: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x257100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257104: 0x0  nop
    ctx->pc = 0x257104u;
    // NOP
    // 0x257108: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x257108u;
    {
        const bool branch_taken_0x257108 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257108u;
        // 0x25710c: 0x24670001  addiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257108) {
            ctx->pc = 0x2571A8u;
            goto label_2571a8;
        }
    }
    ctx->pc = 0x257110u;
    // 0x257110: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x257110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257114: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x257114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25711c: 0x0  nop
    ctx->pc = 0x25711cu;
    // NOP
    // 0x257120: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
    ctx->pc = 0x257120u;
    {
        const bool branch_taken_0x257120 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257120) {
            ctx->pc = 0x257124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257120u;
            // 0x257124: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2571ACu;
            goto label_2571ac;
        }
    }
    ctx->pc = 0x257128u;
    // 0x257128: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x257128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25712c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x25712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257130: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257134: 0x0  nop
    ctx->pc = 0x257134u;
    // NOP
    // 0x257138: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
    ctx->pc = 0x257138u;
    {
        const bool branch_taken_0x257138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257138) {
            ctx->pc = 0x25713Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257138u;
            // 0x25713c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2571ACu;
            goto label_2571ac;
        }
    }
    ctx->pc = 0x257140u;
    // 0x257140: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x257140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257144: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257148: 0x0  nop
    ctx->pc = 0x257148u;
    // NOP
    // 0x25714c: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x25714Cu;
    {
        const bool branch_taken_0x25714c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25714c) {
            ctx->pc = 0x257150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25714Cu;
            // 0x257150: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2571ACu;
            goto label_2571ac;
        }
    }
    ctx->pc = 0x257154u;
    // 0x257154: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x257154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257158: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x257158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25715c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25715cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257160: 0x0  nop
    ctx->pc = 0x257160u;
    // NOP
    // 0x257164: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x257164u;
    {
        const bool branch_taken_0x257164 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257164) {
            ctx->pc = 0x257168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257164u;
            // 0x257168: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2571ACu;
            goto label_2571ac;
        }
    }
    ctx->pc = 0x25716Cu;
    // 0x25716c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x25716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257170: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x257170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257178: 0x0  nop
    ctx->pc = 0x257178u;
    // NOP
    // 0x25717c: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x25717Cu;
    {
        const bool branch_taken_0x25717c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25717c) {
            ctx->pc = 0x257180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25717Cu;
            // 0x257180: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2571ACu;
            goto label_2571ac;
        }
    }
    ctx->pc = 0x257184u;
    // 0x257184: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x257184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x257188: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x257188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25718c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x257190: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x257190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x257194: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x257194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x257198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x257198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25719c: 0x1061026  xor         $v0, $t0, $a2
    ctx->pc = 0x25719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 6));
    // 0x2571a0: 0x62580a  movz        $t3, $v1, $v0
    ctx->pc = 0x2571a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 3));
    // 0x2571a4: 0x8f89a264  lw          $t1, -0x5D9C($gp)
    ctx->pc = 0x2571a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
label_2571a8:
    // 0x2571a8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2571a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2571ac:
    // 0x2571ac: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x2571acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2571b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2571B0u;
    {
        const bool branch_taken_0x2571b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2571b0) {
            ctx->pc = 0x2571C0u;
            goto label_2571c0;
        }
    }
    ctx->pc = 0x2571B8u;
    // 0x2571b8: 0x1160ffcd  beqz        $t3, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2571B8u;
    {
        const bool branch_taken_0x2571b8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2571BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571B8u;
        // 0x2571bc: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571b8) {
            ctx->pc = 0x2570F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2570f0;
        }
    }
    ctx->pc = 0x2571C0u;
label_2571c0:
    // 0x2571c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2571C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2571C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571C0u;
        // 0x2571c4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2571C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2571C8u;
}
