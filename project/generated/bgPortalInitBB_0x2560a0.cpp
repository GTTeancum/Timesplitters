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

// Function: bgPortalInitBB
// Address: 0x2560a0 - 0x2561e8
void bgPortalInitBB_0x2560a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalInitBB_0x2560a0");
#endif

    switch (ctx->pc) {
        case 0x2560b8u: goto label_2560b8;
        case 0x2560f8u: goto label_2560f8;
        case 0x256128u: goto label_256128;
        default: break;
    }

    ctx->pc = 0x2560a0u;

    // 0x2560a0: 0x8f8ba268  lw          $t3, -0x5D98($gp)
    ctx->pc = 0x2560a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
    // 0x2560a4: 0x1960004e  blez        $t3, . + 4 + (0x4E << 2)
    ctx->pc = 0x2560A4u;
    {
        const bool branch_taken_0x2560a4 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x2560A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560A4u;
        // 0x2560a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560a4) {
            ctx->pc = 0x2561E0u;
            goto label_2561e0;
        }
    }
    ctx->pc = 0x2560ACu;
    // 0x2560ac: 0x8f8aa244  lw          $t2, -0x5DBC($gp)
    ctx->pc = 0x2560acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x2560b0: 0x8f89a230  lw          $t1, -0x5DD0($gp)
    ctx->pc = 0x2560b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943280)));
    // 0x2560b4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2560b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2560b8:
    // 0x2560b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2560b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2560bc: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x2560bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2560c0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2560c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2560c4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2560c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2560c8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2560c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2560cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2560ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2560d0: 0xc461ea44  lwc1        $f1, -0x15BC($v1)
    ctx->pc = 0x2560d0u;
    { uint32_t bits = FAST_READ32(0x3AEA44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2560d4: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x2560d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2560d8: 0xc440ea48  lwc1        $f0, -0x15B8($v0)
    ctx->pc = 0x2560d8u;
    { uint32_t bits = FAST_READ32(0x3AEA48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2560dc: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2560dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2560e0: 0x94c70014  lhu         $a3, 0x14($a2)
    ctx->pc = 0x2560e0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2560e4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2560e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2560e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2560e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2560ec: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x2560ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2560f0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2560f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560f4: 0x0  nop
    ctx->pc = 0x2560f4u;
    // NOP
label_2560f8:
    // 0x2560f8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2560f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2560fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2560fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256100: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x256100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x256104: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x256104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x256108: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x256108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x25610c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25610Cu;
    {
        const bool branch_taken_0x25610c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x25610c) {
            ctx->pc = 0x2560F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2560f8;
        }
    }
    ctx->pc = 0x256114u;
    // 0x256114: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x256114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x256118: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x256118u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25611c: 0x5840002d  blezl       $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x25611Cu;
    {
        const bool branch_taken_0x25611c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25611c) {
            ctx->pc = 0x256120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25611Cu;
            // 0x256120: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2561D4u;
            goto label_2561d4;
        }
    }
    ctx->pc = 0x256124u;
    // 0x256124: 0x24c30018  addiu       $v1, $a2, 0x18
    ctx->pc = 0x256124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_256128:
    // 0x256128: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x256128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25612c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256130: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x256130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256134: 0x0  nop
    ctx->pc = 0x256134u;
    // NOP
    // 0x256138: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x256138u;
    {
        const bool branch_taken_0x256138 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x256138) {
            ctx->pc = 0x25613Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256138u;
            // 0x25613c: 0xc480000c  lwc1        $f0, 0xC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25614Cu;
            goto label_25614c;
        }
    }
    ctx->pc = 0x256140u;
    // 0x256140: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x256140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x256144: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x256144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256148: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x256148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25614c:
    // 0x25614c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25614cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256150: 0x0  nop
    ctx->pc = 0x256150u;
    // NOP
    // 0x256154: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x256154u;
    {
        const bool branch_taken_0x256154 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x256154) {
            ctx->pc = 0x256158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256154u;
            // 0x256158: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25615Cu;
            goto label_25615c;
        }
    }
    ctx->pc = 0x25615Cu;
label_25615c:
    // 0x25615c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x25615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256160: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x256160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256164: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x256164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256168: 0x0  nop
    ctx->pc = 0x256168u;
    // NOP
    // 0x25616c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25616Cu;
    {
        const bool branch_taken_0x25616c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25616c) {
            ctx->pc = 0x256170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25616Cu;
            // 0x256170: 0xc4800010  lwc1        $f0, 0x10($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x256180u;
            goto label_256180;
        }
    }
    ctx->pc = 0x256174u;
    // 0x256174: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x256174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x256178: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x256178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25617c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x25617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_256180:
    // 0x256180: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x256180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256184: 0x0  nop
    ctx->pc = 0x256184u;
    // NOP
    // 0x256188: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x256188u;
    {
        const bool branch_taken_0x256188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x256188) {
            ctx->pc = 0x25618Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256188u;
            // 0x25618c: 0xe4810010  swc1        $f1, 0x10($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x256190u;
            goto label_256190;
        }
    }
    ctx->pc = 0x256190u;
label_256190:
    // 0x256190: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x256190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256194: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x256194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x256198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25619c: 0x0  nop
    ctx->pc = 0x25619cu;
    // NOP
    // 0x2561a0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2561A0u;
    {
        const bool branch_taken_0x2561a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2561a0) {
            ctx->pc = 0x2561A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2561A0u;
            // 0x2561a4: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2561B4u;
            goto label_2561b4;
        }
    }
    ctx->pc = 0x2561A8u;
    // 0x2561a8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2561a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2561ac: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2561acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2561b0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2561b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2561b4:
    // 0x2561b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2561b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2561b8: 0x0  nop
    ctx->pc = 0x2561b8u;
    // NOP
    // 0x2561bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2561BCu;
    {
        const bool branch_taken_0x2561bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2561bc) {
            ctx->pc = 0x2561C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2561BCu;
            // 0x2561c0: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2561C4u;
            goto label_2561c4;
        }
    }
    ctx->pc = 0x2561C4u;
label_2561c4:
    // 0x2561c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2561c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2561c8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2561C8u;
    {
        const bool branch_taken_0x2561c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2561CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561C8u;
        // 0x2561cc: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561c8) {
            ctx->pc = 0x256128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256128;
        }
    }
    ctx->pc = 0x2561D0u;
    // 0x2561d0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2561d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2561d4:
    // 0x2561d4: 0xab102a  slt         $v0, $a1, $t3
    ctx->pc = 0x2561d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2561d8: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2561D8u;
    {
        const bool branch_taken_0x2561d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2561DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561D8u;
        // 0x2561dc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561d8) {
            ctx->pc = 0x2560B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2560b8;
        }
    }
    ctx->pc = 0x2561E0u;
label_2561e0:
    // 0x2561e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2561E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2561E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2561E8u;
}
