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

// Function: bgFloorBBIntersectionXZ
// Address: 0x2571c8 - 0x2572ac
void bgFloorBBIntersectionXZ_0x2571c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgFloorBBIntersectionXZ_0x2571c8");
#endif

    switch (ctx->pc) {
        case 0x2571e8u: goto label_2571e8;
        default: break;
    }

    ctx->pc = 0x2571c8u;

    // 0x2571c8: 0x8f89a264  lw          $t1, -0x5D9C($gp)
    ctx->pc = 0x2571c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2571cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2571ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2571d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2571d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2571d4: 0x19200033  blez        $t1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2571D4u;
    {
        const bool branch_taken_0x2571d4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2571D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571D4u;
        // 0x2571d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571d4) {
            ctx->pc = 0x2572A4u;
            goto label_2572a4;
        }
    }
    ctx->pc = 0x2571DCu;
    // 0x2571dc: 0x8f8aa234  lw          $t2, -0x5DCC($gp)
    ctx->pc = 0x2571dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943284)));
    // 0x2571e0: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x2571e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2571e4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2571e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2571e8:
    // 0x2571e8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2571e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2571ec: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2571ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2571f0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2571f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2571f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2571f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2571f8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2571f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2571fc: 0x0  nop
    ctx->pc = 0x2571fcu;
    // NOP
    // 0x257200: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x257200u;
    {
        const bool branch_taken_0x257200 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x257204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257200u;
        // 0x257204: 0x24670001  addiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257200) {
            ctx->pc = 0x25728Cu;
            goto label_25728c;
        }
    }
    ctx->pc = 0x257208u;
    // 0x257208: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x257208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25720c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257210: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257214: 0x0  nop
    ctx->pc = 0x257214u;
    // NOP
    // 0x257218: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x257218u;
    {
        const bool branch_taken_0x257218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257218) {
            ctx->pc = 0x25721Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257218u;
            // 0x25721c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x257220u;
    // 0x257220: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x257220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257224: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x257224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257228: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25722c: 0x0  nop
    ctx->pc = 0x25722cu;
    // NOP
    // 0x257230: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x257230u;
    {
        const bool branch_taken_0x257230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257230) {
            ctx->pc = 0x257234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257230u;
            // 0x257234: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x257238u;
    // 0x257238: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x257238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25723c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x25723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257240: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257244: 0x0  nop
    ctx->pc = 0x257244u;
    // NOP
    // 0x257248: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x257248u;
    {
        const bool branch_taken_0x257248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257248) {
            ctx->pc = 0x25724Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257248u;
            // 0x25724c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x257250u;
    // 0x257250: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x257250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257254: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x257254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257258: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25725c: 0x0  nop
    ctx->pc = 0x25725cu;
    // NOP
    // 0x257260: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x257260u;
    {
        const bool branch_taken_0x257260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257260) {
            ctx->pc = 0x257264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257260u;
            // 0x257264: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x257268u;
    // 0x257268: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x257268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x25726c: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x25726cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257270: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x257270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x257274: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x257274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x257278: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x257278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x25727c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25727cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257280: 0x1061026  xor         $v0, $t0, $a2
    ctx->pc = 0x257280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 6));
    // 0x257284: 0x62580a  movz        $t3, $v1, $v0
    ctx->pc = 0x257284u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 3));
    // 0x257288: 0x8f89a264  lw          $t1, -0x5D9C($gp)
    ctx->pc = 0x257288u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
label_25728c:
    // 0x25728c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x25728cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_257290:
    // 0x257290: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x257290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x257294: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257294u;
    {
        const bool branch_taken_0x257294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257294) {
            ctx->pc = 0x2572A4u;
            goto label_2572a4;
        }
    }
    ctx->pc = 0x25729Cu;
    // 0x25729c: 0x1160ffd2  beqz        $t3, . + 4 + (-0x2E << 2)
    ctx->pc = 0x25729Cu;
    {
        const bool branch_taken_0x25729c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2572A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25729Cu;
        // 0x2572a0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25729c) {
            ctx->pc = 0x2571E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2571e8;
        }
    }
    ctx->pc = 0x2572A4u;
label_2572a4:
    // 0x2572a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2572A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2572A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572A4u;
        // 0x2572a8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2572A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2572ACu;
}
