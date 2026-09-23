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

// Function: propCalculateCentrePos
// Address: 0x267f08 - 0x2682cc
void propCalculateCentrePos_0x267f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propCalculateCentrePos_0x267f08");
#endif

    switch (ctx->pc) {
        case 0x267f80u: goto label_267f80;
        case 0x267fb0u: goto label_267fb0;
        case 0x267fd8u: goto label_267fd8;
        case 0x267ff0u: goto label_267ff0;
        case 0x2680a8u: goto label_2680a8;
        case 0x2680d0u: goto label_2680d0;
        case 0x2680e8u: goto label_2680e8;
        case 0x26821cu: goto label_26821c;
        case 0x268228u: goto label_268228;
        default: break;
    }

    ctx->pc = 0x267f08u;

    // 0x267f08: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x267f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x267f0c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x267f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x267f10: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x267f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x267f14: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x267f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x267f18: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x267f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x267f1c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x267f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x267f20: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x267f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x267f24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x267f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f28: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x267f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x267f2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x267f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f30: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x267f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x267f34: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x267f34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x267f38: 0xc440f908  lwc1        $f0, -0x6F8($v0)
    ctx->pc = 0x267f38u;
    { uint32_t bits = FAST_READ32(0x3AF908u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267f3c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x267f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x267f40: 0xc4a1f90c  lwc1        $f1, -0x6F4($a1)
    ctx->pc = 0x267f40u;
    { uint32_t bits = FAST_READ32(0x3AF90Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267f44: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x267f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x267f48: 0x8cd80000  lw          $t8, 0x0($a2)
    ctx->pc = 0x267f48u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x267f4c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x267f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x267f50: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x267f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x267f54: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x267f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x267f58: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x267f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x267f5c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x267f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x267f60: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x267f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x267f64: 0xc39823  subu        $s3, $a2, $v1
    ctx->pc = 0x267f64u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x267f68: 0x1b000082  blez        $t8, . + 4 + (0x82 << 2)
    ctx->pc = 0x267F68u;
    {
        const bool branch_taken_0x267f68 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x267F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F68u;
        // 0x267f6c: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f68) {
            ctx->pc = 0x268174u;
            goto label_268174;
        }
    }
    ctx->pc = 0x267F70u;
    // 0x267f70: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x267f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x267f74: 0x3c1201fd  lui         $s2, 0x1FD
    ctx->pc = 0x267f74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)509 << 16));
    // 0x267f78: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x267f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x267f7c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x267f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_267f80:
    // 0x267f80: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x267f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x267f84: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x267f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x267f88: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x267f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x267f8c: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x267F8Cu;
    {
        const bool branch_taken_0x267f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x267F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F8Cu;
        // 0x267f90: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f8c) {
            ctx->pc = 0x26806Cu;
            goto label_26806c;
        }
    }
    ctx->pc = 0x267F94u;
    // 0x267f94: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x267f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x267f98: 0x4400038  bltz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x267F98u;
    {
        const bool branch_taken_0x267f98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x267F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F98u;
        // 0x267f9c: 0x246d002c  addiu       $t5, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f98) {
            ctx->pc = 0x26807Cu;
            goto label_26807c;
        }
    }
    ctx->pc = 0x267FA0u;
    // 0x267fa0: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x267fa0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x267fa4: 0x8c6c000c  lw          $t4, 0xC($v1)
    ctx->pc = 0x267fa4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x267fa8: 0x24ef0001  addiu       $t7, $a3, 0x1
    ctx->pc = 0x267fa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x267fac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x267facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_267fb0:
    // 0x267fb0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x267fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x267fb4: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x267fb4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x267fb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fbc: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x267fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x267fc0: 0x19600023  blez        $t3, . + 4 + (0x23 << 2)
    ctx->pc = 0x267FC0u;
    {
        const bool branch_taken_0x267fc0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x267FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FC0u;
        // 0x267fc4: 0xce1821  addu        $v1, $a2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fc0) {
            ctx->pc = 0x268050u;
            goto label_268050;
        }
    }
    ctx->pc = 0x267FC8u;
    // 0x267fc8: 0x24870018  addiu       $a3, $a0, 0x18
    ctx->pc = 0x267fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x267fcc: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x267fccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x267fd0: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x267fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x267fd4: 0x0  nop
    ctx->pc = 0x267fd4u;
    // NOP
label_267fd8:
    // 0x267fd8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x267fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x267fdc: 0x246a000c  addiu       $t2, $v1, 0xC
    ctx->pc = 0x267fdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x267fe0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x267fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fe4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x267fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fe8: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x267fe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x267fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_267ff0:
    // 0x267ff0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x267ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267ff4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x267ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267ff8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x267ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267ffc: 0x0  nop
    ctx->pc = 0x267ffcu;
    // NOP
    // 0x268000: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x268000u;
    {
        const bool branch_taken_0x268000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268000) {
            ctx->pc = 0x268004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268000u;
            // 0x268004: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x268014u;
            goto label_268014;
        }
    }
    ctx->pc = 0x268008u;
    // 0x268008: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x268008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26800c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x26800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268010: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x268010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268014:
    // 0x268014: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x268014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268018: 0x0  nop
    ctx->pc = 0x268018u;
    // NOP
    // 0x26801c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26801Cu;
    {
        const bool branch_taken_0x26801c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26801c) {
            ctx->pc = 0x268020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26801Cu;
            // 0x268020: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x268024u;
            goto label_268024;
        }
    }
    ctx->pc = 0x268024u;
label_268024:
    // 0x268024: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x268024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x268028: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x268028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x26802c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x26802cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x268030: 0x4c1ffef  bgez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x268030u;
    {
        const bool branch_taken_0x268030 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x268034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268030u;
        // 0x268034: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268030) {
            ctx->pc = 0x267FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267ff0;
        }
    }
    ctx->pc = 0x268038u;
    // 0x268038: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x268038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26803c: 0xab102a  slt         $v0, $a1, $t3
    ctx->pc = 0x26803cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x268040: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x268040u;
    {
        const bool branch_taken_0x268040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268040u;
        // 0x268044: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268040) {
            ctx->pc = 0x267FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267fd8;
        }
    }
    ctx->pc = 0x268048u;
    // 0x268048: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x268048u;
    {
        const bool branch_taken_0x268048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268048u;
        // 0x26804c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268048) {
            ctx->pc = 0x268058u;
            goto label_268058;
        }
    }
    ctx->pc = 0x268050u;
label_268050:
    // 0x268050: 0x24870018  addiu       $a3, $a0, 0x18
    ctx->pc = 0x268050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x268054: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x268054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_268058:
    // 0x268058: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x268058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x26805c: 0x443ffd4  bgezl       $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x26805Cu;
    {
        const bool branch_taken_0x26805c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26805c) {
            ctx->pc = 0x268060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26805Cu;
            // 0x268060: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267fb0;
        }
    }
    ctx->pc = 0x268064u;
    // 0x268064: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x268064u;
    {
        const bool branch_taken_0x268064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268064u;
        // 0x268068: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268064) {
            ctx->pc = 0x268088u;
            goto label_268088;
        }
    }
    ctx->pc = 0x26806Cu;
label_26806c:
    // 0x26806c: 0x246d002c  addiu       $t5, $v1, 0x2C
    ctx->pc = 0x26806cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x268070: 0x24ef0001  addiu       $t7, $a3, 0x1
    ctx->pc = 0x268070u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x268074: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x268074u;
    {
        const bool branch_taken_0x268074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268074u;
        // 0x268078: 0x8c6c000c  lw          $t4, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268074) {
            ctx->pc = 0x268084u;
            goto label_268084;
        }
    }
    ctx->pc = 0x26807Cu;
label_26807c:
    // 0x26807c: 0x8c6c000c  lw          $t4, 0xC($v1)
    ctx->pc = 0x26807cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x268080: 0x24ef0001  addiu       $t7, $a3, 0x1
    ctx->pc = 0x268080u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_268084:
    // 0x268084: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x268084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_268088:
    // 0x268088: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x268088u;
    {
        const bool branch_taken_0x268088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268088u;
        // 0x26808c: 0x1e0382d  daddu       $a3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268088) {
            ctx->pc = 0x268160u;
            goto label_268160;
        }
    }
    ctx->pc = 0x268090u;
    // 0x268090: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x268090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x268094: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x268094u;
    {
        const bool branch_taken_0x268094 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x268098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268094u;
        // 0x268098: 0xf8102a  slt         $v0, $a3, $t8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268094) {
            ctx->pc = 0x268164u;
            goto label_268164;
        }
    }
    ctx->pc = 0x26809Cu;
    // 0x26809c: 0x8dae0004  lw          $t6, 0x4($t5)
    ctx->pc = 0x26809cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2680a0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2680a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2680a4: 0x0  nop
    ctx->pc = 0x2680a4u;
    // NOP
label_2680a8:
    // 0x2680a8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2680a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2680ac: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x2680acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2680b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2680b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680b4: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x2680b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2680b8: 0x19600023  blez        $t3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2680B8u;
    {
        const bool branch_taken_0x2680b8 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x2680BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680B8u;
        // 0x2680bc: 0xce1821  addu        $v1, $a2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680b8) {
            ctx->pc = 0x268148u;
            goto label_268148;
        }
    }
    ctx->pc = 0x2680C0u;
    // 0x2680c0: 0x24870018  addiu       $a3, $a0, 0x18
    ctx->pc = 0x2680c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2680c4: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x2680c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2680c8: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2680c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2680cc: 0x0  nop
    ctx->pc = 0x2680ccu;
    // NOP
label_2680d0:
    // 0x2680d0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2680d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2680d4: 0x246a000c  addiu       $t2, $v1, 0xC
    ctx->pc = 0x2680d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2680d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2680d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680dc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2680dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680e0: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2680e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2680e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2680e8:
    // 0x2680e8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2680e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2680ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2680ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2680f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2680f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2680f4: 0x0  nop
    ctx->pc = 0x2680f4u;
    // NOP
    // 0x2680f8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2680F8u;
    {
        const bool branch_taken_0x2680f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2680f8) {
            ctx->pc = 0x2680FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2680F8u;
            // 0x2680fc: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26810Cu;
            goto label_26810c;
        }
    }
    ctx->pc = 0x268100u;
    // 0x268100: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x268100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x268104: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x268104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268108: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x268108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26810c:
    // 0x26810c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26810cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268110: 0x0  nop
    ctx->pc = 0x268110u;
    // NOP
    // 0x268114: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x268114u;
    {
        const bool branch_taken_0x268114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x268114) {
            ctx->pc = 0x268118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268114u;
            // 0x268118: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26811Cu;
            goto label_26811c;
        }
    }
    ctx->pc = 0x26811Cu;
label_26811c:
    // 0x26811c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x26811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x268120: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x268120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x268124: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x268124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x268128: 0x4c1ffef  bgez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x268128u;
    {
        const bool branch_taken_0x268128 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x26812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268128u;
        // 0x26812c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268128) {
            ctx->pc = 0x2680E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2680e8;
        }
    }
    ctx->pc = 0x268130u;
    // 0x268130: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x268130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268134: 0xab102a  slt         $v0, $a1, $t3
    ctx->pc = 0x268134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x268138: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x268138u;
    {
        const bool branch_taken_0x268138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268138u;
        // 0x26813c: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268138) {
            ctx->pc = 0x2680D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2680d0;
        }
    }
    ctx->pc = 0x268140u;
    // 0x268140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x268140u;
    {
        const bool branch_taken_0x268140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268140u;
        // 0x268144: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268140) {
            ctx->pc = 0x268150u;
            goto label_268150;
        }
    }
    ctx->pc = 0x268148u;
label_268148:
    // 0x268148: 0x24870018  addiu       $a3, $a0, 0x18
    ctx->pc = 0x268148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x26814c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x26814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_268150:
    // 0x268150: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x268150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x268154: 0x443ffd4  bgezl       $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x268154u;
    {
        const bool branch_taken_0x268154 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x268154) {
            ctx->pc = 0x268158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268154u;
            // 0x268158: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2680A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2680a8;
        }
    }
    ctx->pc = 0x26815Cu;
    // 0x26815c: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x26815cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_268160:
    // 0x268160: 0xf8102a  slt         $v0, $a3, $t8
    ctx->pc = 0x268160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
label_268164:
    // 0x268164: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x268164u;
    {
        const bool branch_taken_0x268164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268164u;
        // 0x268168: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268164) {
            ctx->pc = 0x267F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267f80;
        }
    }
    ctx->pc = 0x26816Cu;
    // 0x26816c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26816Cu;
    {
        const bool branch_taken_0x26816c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26816Cu;
        // 0x268170: 0xc7a50050  lwc1        $f5, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26816c) {
            ctx->pc = 0x268184u;
            goto label_268184;
        }
    }
    ctx->pc = 0x268174u;
label_268174:
    // 0x268174: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x268174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x268178: 0x3c1201fd  lui         $s2, 0x1FD
    ctx->pc = 0x268178u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)509 << 16));
    // 0x26817c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x26817cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x268180: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x268180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_268184:
    // 0x268184: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x268184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x268188: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x268188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26818c: 0x3221018  mult        $v0, $t9, $v0
    ctx->pc = 0x26818cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x268190: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x268190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x268194: 0x26430df0  addiu       $v1, $s2, 0xDF0
    ctx->pc = 0x268194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3568));
    // 0x268198: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x268198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26819c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x26819cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2681a0: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x2681a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2681a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2681a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2681a8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2681a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2681ac: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2681acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2681b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2681b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2681b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2681b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2681b8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2681b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2681bc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2681bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2681c0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2681c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2681c4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2681c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2681c8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2681c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2681cc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2681ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2681d0: 0xc78683dc  lwc1        $f6, -0x7C24($gp)
    ctx->pc = 0x2681d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2681d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2681d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2681d8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2681d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2681dc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2681dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2681e0: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2681e0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2681e4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2681e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2681e8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2681e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2681ec: 0xe4c50000  swc1        $f5, 0x0($a2)
    ctx->pc = 0x2681ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2681f0: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x2681f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2681f4: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x2681f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2681f8: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x2681f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2681fc: 0xc60c004c  lwc1        $f12, 0x4C($s0)
    ctx->pc = 0x2681fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268200: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x268200u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x268204: 0x46066302  mul.s       $f12, $f12, $f6
    ctx->pc = 0x268204u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x268208: 0x0  nop
    ctx->pc = 0x268208u;
    // NOP
    // 0x26820c: 0x0  nop
    ctx->pc = 0x26820cu;
    // NOP
    // 0x268210: 0x46076303  div.s       $f12, $f12, $f7
    ctx->pc = 0x268210u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[7];
    // 0x268214: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x268214u;
    SET_GPR_U32(ctx, 31, 0x26821Cu);
    ctx->pc = 0x268218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268214u;
    // 0x268218: 0xe7a30048  swc1        $f3, 0x48($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x268214u, 0x26821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26821Cu;
label_26821c:
    // 0x26821c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26821cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268220: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x268220u;
    SET_GPR_U32(ctx, 31, 0x268228u);
    ctx->pc = 0x268224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268220u;
    // 0x268224: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x268220u, 0x268228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268228u;
label_268228:
    // 0x268228: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x268228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26822c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x26822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268230: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x268230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268234: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x268234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x268238: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x268238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26823c: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x26823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x268240: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x268240u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x268244: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x268244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268248: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x268248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x26824c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x26824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268250: 0xe60401fc  swc1        $f4, 0x1FC($s0)
    ctx->pc = 0x268250u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
    // 0x268254: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x268254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x268258: 0xe6050200  swc1        $f5, 0x200($s0)
    ctx->pc = 0x268258u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x26825c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26825cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268260: 0x0  nop
    ctx->pc = 0x268260u;
    // NOP
    // 0x268264: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x268264u;
    {
        const bool branch_taken_0x268264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268264u;
        // 0x268268: 0xe6020204  swc1        $f2, 0x204($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 516), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x268264) {
            ctx->pc = 0x268274u;
            goto label_268274;
        }
    }
    ctx->pc = 0x26826Cu;
    // 0x26826c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26826Cu;
    {
        const bool branch_taken_0x26826c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26826Cu;
        // 0x268270: 0xe6000210  swc1        $f0, 0x210($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26826c) {
            ctx->pc = 0x268278u;
            goto label_268278;
        }
    }
    ctx->pc = 0x268274u;
label_268274:
    // 0x268274: 0xe6010210  swc1        $f1, 0x210($s0)
    ctx->pc = 0x268274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
label_268278:
    // 0x268278: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x268278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26827c: 0x24030136  addiu       $v1, $zero, 0x136
    ctx->pc = 0x26827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x268280: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x268280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268284: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x268284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x268288: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x268288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26828c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26828cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x268290: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x268290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x268294: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x268294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x268298: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x268298u;
    {
        const bool branch_taken_0x268298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268298u;
        // 0x26829c: 0xe600020c  swc1        $f0, 0x20C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x268298) {
            ctx->pc = 0x2682ACu;
            goto label_2682ac;
        }
    }
    ctx->pc = 0x2682A0u;
    // 0x2682a0: 0xc6000210  lwc1        $f0, 0x210($s0)
    ctx->pc = 0x2682a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2682a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2682a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2682a8: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x2682a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
label_2682ac:
    // 0x2682ac: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2682acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2682b0: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x2682b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2682b4: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2682b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2682b8: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x2682b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2682bc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2682bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2682c0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2682c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2682c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2682C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2682C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682C4u;
        // 0x2682c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2682C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2682CCu;
}
