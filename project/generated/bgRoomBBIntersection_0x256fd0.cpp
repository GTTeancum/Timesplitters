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

// Function: bgRoomBBIntersection
// Address: 0x256fd0 - 0x2570cc
void bgRoomBBIntersection_0x256fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgRoomBBIntersection_0x256fd0");
#endif

    switch (ctx->pc) {
        case 0x256ff0u: goto label_256ff0;
        default: break;
    }

    ctx->pc = 0x256fd0u;

    // 0x256fd0: 0x8f89a264  lw          $t1, -0x5D9C($gp)
    ctx->pc = 0x256fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x256fd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x256fd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256fd8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x256fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256fdc: 0x19200039  blez        $t1, . + 4 + (0x39 << 2)
    ctx->pc = 0x256FDCu;
    {
        const bool branch_taken_0x256fdc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x256FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FDCu;
        // 0x256fe0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fdc) {
            ctx->pc = 0x2570C4u;
            goto label_2570c4;
        }
    }
    ctx->pc = 0x256FE4u;
    // 0x256fe4: 0x8f8aa240  lw          $t2, -0x5DC0($gp)
    ctx->pc = 0x256fe4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x256fe8: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x256fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256fec: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x256fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_256ff0:
    // 0x256ff0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x256ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x256ff4: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x256ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x256ff8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x256ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x256ffc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x256ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257000: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x257000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257004: 0x0  nop
    ctx->pc = 0x257004u;
    // NOP
    // 0x257008: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x257008u;
    {
        const bool branch_taken_0x257008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257008u;
        // 0x25700c: 0x24670001  addiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257008) {
            ctx->pc = 0x2570ACu;
            goto label_2570ac;
        }
    }
    ctx->pc = 0x257010u;
    // 0x257010: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x257010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257014: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x257014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257018: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25701c: 0x0  nop
    ctx->pc = 0x25701cu;
    // NOP
    // 0x257020: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
    ctx->pc = 0x257020u;
    {
        const bool branch_taken_0x257020 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257020) {
            ctx->pc = 0x257024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257020u;
            // 0x257024: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x257028u;
    // 0x257028: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x257028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25702c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x25702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257030: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257034: 0x0  nop
    ctx->pc = 0x257034u;
    // NOP
    // 0x257038: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x257038u;
    {
        const bool branch_taken_0x257038 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257038) {
            ctx->pc = 0x25703Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257038u;
            // 0x25703c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x257040u;
    // 0x257040: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x257040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257044: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x257044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257048: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25704c: 0x0  nop
    ctx->pc = 0x25704cu;
    // NOP
    // 0x257050: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x257050u;
    {
        const bool branch_taken_0x257050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257050) {
            ctx->pc = 0x257054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257050u;
            // 0x257054: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x257058u;
    // 0x257058: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x257058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25705c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x25705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257060: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257064: 0x0  nop
    ctx->pc = 0x257064u;
    // NOP
    // 0x257068: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x257068u;
    {
        const bool branch_taken_0x257068 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257068) {
            ctx->pc = 0x25706Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257068u;
            // 0x25706c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x257070u;
    // 0x257070: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x257070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257074: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x257074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257078: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25707c: 0x0  nop
    ctx->pc = 0x25707cu;
    // NOP
    // 0x257080: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x257080u;
    {
        const bool branch_taken_0x257080 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257080) {
            ctx->pc = 0x257084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257080u;
            // 0x257084: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x257088u;
    // 0x257088: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x257088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x25708c: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x25708cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257090: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x257090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x257094: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x257094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x257098: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x257098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x25709c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25709cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2570a0: 0x1061026  xor         $v0, $t0, $a2
    ctx->pc = 0x2570a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 6));
    // 0x2570a4: 0x62580a  movz        $t3, $v1, $v0
    ctx->pc = 0x2570a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 3));
    // 0x2570a8: 0x8f89a264  lw          $t1, -0x5D9C($gp)
    ctx->pc = 0x2570a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
label_2570ac:
    // 0x2570ac: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2570acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2570b0:
    // 0x2570b0: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x2570b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2570b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2570B4u;
    {
        const bool branch_taken_0x2570b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2570b4) {
            ctx->pc = 0x2570C4u;
            goto label_2570c4;
        }
    }
    ctx->pc = 0x2570BCu;
    // 0x2570bc: 0x1160ffcc  beqz        $t3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2570BCu;
    {
        const bool branch_taken_0x2570bc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2570C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570BCu;
        // 0x2570c0: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570bc) {
            ctx->pc = 0x256FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256ff0;
        }
    }
    ctx->pc = 0x2570C4u;
label_2570c4:
    // 0x2570c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2570C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2570C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570C4u;
        // 0x2570c8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2570C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2570CCu;
}
