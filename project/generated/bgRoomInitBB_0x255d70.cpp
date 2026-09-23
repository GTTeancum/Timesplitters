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

// Function: bgRoomInitBB
// Address: 0x255d70 - 0x2560a0
void bgRoomInitBB_0x255d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgRoomInitBB_0x255d70");
#endif

    switch (ctx->pc) {
        case 0x255d88u: goto label_255d88;
        case 0x255de0u: goto label_255de0;
        case 0x255e18u: goto label_255e18;
        case 0x255e38u: goto label_255e38;
        case 0x255f30u: goto label_255f30;
        default: break;
    }

    ctx->pc = 0x255d70u;

    // 0x255d70: 0x8f8fa264  lw          $t7, -0x5D9C($gp)
    ctx->pc = 0x255d70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x255d74: 0x19e000c8  blez        $t7, . + 4 + (0xC8 << 2)
    ctx->pc = 0x255D74u;
    {
        const bool branch_taken_0x255d74 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x255D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D74u;
        // 0x255d78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d74) {
            ctx->pc = 0x256098u;
            goto label_256098;
        }
    }
    ctx->pc = 0x255D7Cu;
    // 0x255d7c: 0x8f8ea240  lw          $t6, -0x5DC0($gp)
    ctx->pc = 0x255d7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x255d80: 0x8f8da234  lw          $t5, -0x5DCC($gp)
    ctx->pc = 0x255d80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943284)));
    // 0x255d84: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x255d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_255d88:
    // 0x255d88: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x255d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x255d8c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x255d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x255d90: 0x70c42018  mult1       $a0, $a2, $a0
    ctx->pc = 0x255d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x255d94: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x255d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x255d98: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x255d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x255d9c: 0xc4a0ea40  lwc1        $f0, -0x15C0($a1)
    ctx->pc = 0x255d9cu;
    { uint32_t bits = FAST_READ32(0x3AEA40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255da0: 0x24cc0001  addiu       $t4, $a2, 0x1
    ctx->pc = 0x255da0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x255da4: 0xc461ea3c  lwc1        $f1, -0x15C4($v1)
    ctx->pc = 0x255da4u;
    { uint32_t bits = FAST_READ32(0x3AEA3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255da8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x255da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255dac: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x255dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x255db0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x255db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x255db4: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x255db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x255db8: 0x1a42821  addu        $a1, $t5, $a0
    ctx->pc = 0x255db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x255dbc: 0x8c4a000c  lw          $t2, 0xC($v0)
    ctx->pc = 0x255dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x255dc0: 0x24a60024  addiu       $a2, $a1, 0x24
    ctx->pc = 0x255dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x255dc4: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x255dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x255dc8: 0x24a40018  addiu       $a0, $a1, 0x18
    ctx->pc = 0x255dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x255dcc: 0x8d4b0000  lw          $t3, 0x0($t2)
    ctx->pc = 0x255dccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x255dd0: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x255dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x255dd4: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x255dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x255dd8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x255dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ddc: 0x0  nop
    ctx->pc = 0x255ddcu;
    // NOP
label_255de0:
    // 0x255de0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x255de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x255de4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x255de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x255de8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x255de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x255dec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x255decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x255df0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x255df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x255df4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x255df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x255df8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x255df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x255dfc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x255dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x255e00: 0x4e1fff7  bgez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x255E00u;
    {
        const bool branch_taken_0x255e00 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x255E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E00u;
        // 0x255e04: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e00) {
            ctx->pc = 0x255DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255de0;
        }
    }
    ctx->pc = 0x255E08u;
    // 0x255e08: 0x11000045  beqz        $t0, . + 4 + (0x45 << 2)
    ctx->pc = 0x255E08u;
    {
        const bool branch_taken_0x255e08 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x255E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E08u;
        // 0x255e0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e08) {
            ctx->pc = 0x255F20u;
            goto label_255f20;
        }
    }
    ctx->pc = 0x255E10u;
    // 0x255e10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x255e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e14: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x255e14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_255e18:
    // 0x255e18: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x255e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x255e1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255e20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x255e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255e24: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x255E24u;
    {
        const bool branch_taken_0x255e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x255E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E24u;
        // 0x255e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e24) {
            ctx->pc = 0x255F04u;
            goto label_255f04;
        }
    }
    ctx->pc = 0x255E2Cu;
    // 0x255e2c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x255e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x255e30: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x255e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x255e34: 0x0  nop
    ctx->pc = 0x255e34u;
    // NOP
label_255e38:
    // 0x255e38: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x255e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x255e3c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x255e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x255e40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x255e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255e44: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x255e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255e48: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x255e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x255e4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x255e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255e50: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x255e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255e54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255e58: 0x0  nop
    ctx->pc = 0x255e58u;
    // NOP
    // 0x255e5c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255E5Cu;
    {
        const bool branch_taken_0x255e5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255e5c) {
            ctx->pc = 0x255E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255E5Cu;
            // 0x255e60: 0xc4a0000c  lwc1        $f0, 0xC($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255E70u;
            goto label_255e70;
        }
    }
    ctx->pc = 0x255E64u;
    // 0x255e64: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x255e64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x255e68: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x255e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255e6c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x255e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255e70:
    // 0x255e70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x255e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255e74: 0x0  nop
    ctx->pc = 0x255e74u;
    // NOP
    // 0x255e78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x255E78u;
    {
        const bool branch_taken_0x255e78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255e78) {
            ctx->pc = 0x255E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255E78u;
            // 0x255e7c: 0xe4a1000c  swc1        $f1, 0xC($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255E80u;
            goto label_255e80;
        }
    }
    ctx->pc = 0x255E80u;
label_255e80:
    // 0x255e80: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x255e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255e84: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x255e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255e88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255e8c: 0x0  nop
    ctx->pc = 0x255e8cu;
    // NOP
    // 0x255e90: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255E90u;
    {
        const bool branch_taken_0x255e90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255e90) {
            ctx->pc = 0x255E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255E90u;
            // 0x255e94: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255EA4u;
            goto label_255ea4;
        }
    }
    ctx->pc = 0x255E98u;
    // 0x255e98: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x255e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x255e9c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x255e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255ea0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x255ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255ea4:
    // 0x255ea4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x255ea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255ea8: 0x0  nop
    ctx->pc = 0x255ea8u;
    // NOP
    // 0x255eac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x255EACu;
    {
        const bool branch_taken_0x255eac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255eac) {
            ctx->pc = 0x255EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255EACu;
            // 0x255eb0: 0xe4a10010  swc1        $f1, 0x10($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255EB4u;
            goto label_255eb4;
        }
    }
    ctx->pc = 0x255EB4u;
label_255eb4:
    // 0x255eb4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x255eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255eb8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x255eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255ebc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255ec0: 0x0  nop
    ctx->pc = 0x255ec0u;
    // NOP
    // 0x255ec4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255EC4u;
    {
        const bool branch_taken_0x255ec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255ec4) {
            ctx->pc = 0x255EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255EC4u;
            // 0x255ec8: 0xc4a00014  lwc1        $f0, 0x14($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255ED8u;
            goto label_255ed8;
        }
    }
    ctx->pc = 0x255ECCu;
    // 0x255ecc: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x255eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x255ed0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x255ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255ed4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x255ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255ed8:
    // 0x255ed8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x255ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255edc: 0x0  nop
    ctx->pc = 0x255edcu;
    // NOP
    // 0x255ee0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x255EE0u;
    {
        const bool branch_taken_0x255ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255ee0) {
            ctx->pc = 0x255EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255EE0u;
            // 0x255ee4: 0xe4a10014  swc1        $f1, 0x14($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255EE8u;
            goto label_255ee8;
        }
    }
    ctx->pc = 0x255EE8u;
label_255ee8:
    // 0x255ee8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x255ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255eec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x255eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x255ef0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x255ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x255ef4: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x255EF4u;
    {
        const bool branch_taken_0x255ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EF4u;
        // 0x255ef8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ef4) {
            ctx->pc = 0x255E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255e38;
        }
    }
    ctx->pc = 0x255EFCu;
    // 0x255efc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x255EFCu;
    {
        const bool branch_taken_0x255efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EFCu;
        // 0x255f00: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255efc) {
            ctx->pc = 0x255F0Cu;
            goto label_255f0c;
        }
    }
    ctx->pc = 0x255F04u;
label_255f04:
    // 0x255f04: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x255f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x255f08: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x255f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_255f0c:
    // 0x255f0c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x255f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x255f10: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x255f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x255f14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255f18: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x255F18u;
    {
        const bool branch_taken_0x255f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x255F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F18u;
        // 0x255f1c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f18) {
            ctx->pc = 0x255E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255e18;
        }
    }
    ctx->pc = 0x255F20u;
label_255f20:
    // 0x255f20: 0x11600059  beqz        $t3, . + 4 + (0x59 << 2)
    ctx->pc = 0x255F20u;
    {
        const bool branch_taken_0x255f20 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F20u;
        // 0x255f24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f20) {
            ctx->pc = 0x256088u;
            goto label_256088;
        }
    }
    ctx->pc = 0x255F28u;
    // 0x255f28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x255f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f2c: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x255f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_255f30:
    // 0x255f30: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x255f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255f34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255f38: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x255f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255f3c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x255f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255f40: 0x0  nop
    ctx->pc = 0x255f40u;
    // NOP
    // 0x255f44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x255F44u;
    {
        const bool branch_taken_0x255f44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F44u;
        // 0x255f48: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f44) {
            ctx->pc = 0x255F58u;
            goto label_255f58;
        }
    }
    ctx->pc = 0x255F4Cu;
    // 0x255f4c: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x255f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x255f50: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x255f50u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x255f54: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x255f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255f58:
    // 0x255f58: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x255f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255f5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255f60: 0x0  nop
    ctx->pc = 0x255f60u;
    // NOP
    // 0x255f64: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255F64u;
    {
        const bool branch_taken_0x255f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255f64) {
            ctx->pc = 0x255F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255F64u;
            // 0x255f68: 0xc4400014  lwc1        $f0, 0x14($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255F78u;
            goto label_255f78;
        }
    }
    ctx->pc = 0x255F6Cu;
    // 0x255f6c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x255f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x255f70: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255f70u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x255f74: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x255f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255f78:
    // 0x255f78: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x255f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255f7c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x255F7Cu;
    {
        const bool branch_taken_0x255f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255f7c) {
            ctx->pc = 0x255F8Cu;
            goto label_255f8c;
        }
    }
    ctx->pc = 0x255F84u;
    // 0x255f84: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x255f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x255f88: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x255f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255f8c:
    // 0x255f8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255f90: 0x0  nop
    ctx->pc = 0x255f90u;
    // NOP
    // 0x255f94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x255F94u;
    {
        const bool branch_taken_0x255f94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255f94) {
            ctx->pc = 0x255F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255F94u;
            // 0x255f98: 0xe4a00024  swc1        $f0, 0x24($a1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255F9Cu;
            goto label_255f9c;
        }
    }
    ctx->pc = 0x255F9Cu;
label_255f9c:
    // 0x255f9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x255f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255fa0: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x255fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255fa4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x255fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255fa8: 0x0  nop
    ctx->pc = 0x255fa8u;
    // NOP
    // 0x255fac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255FACu;
    {
        const bool branch_taken_0x255fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255fac) {
            ctx->pc = 0x255FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255FACu;
            // 0x255fb0: 0xc4400010  lwc1        $f0, 0x10($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255FC0u;
            goto label_255fc0;
        }
    }
    ctx->pc = 0x255FB4u;
    // 0x255fb4: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x255fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x255fb8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x255fb8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x255fbc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x255fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255fc0:
    // 0x255fc0: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x255fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255fc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255fc8: 0x0  nop
    ctx->pc = 0x255fc8u;
    // NOP
    // 0x255fcc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255FCCu;
    {
        const bool branch_taken_0x255fcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255fcc) {
            ctx->pc = 0x255FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255FCCu;
            // 0x255fd0: 0xc4400018  lwc1        $f0, 0x18($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255FE0u;
            goto label_255fe0;
        }
    }
    ctx->pc = 0x255FD4u;
    // 0x255fd4: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x255fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x255fd8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255fd8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x255fdc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x255fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255fe0:
    // 0x255fe0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x255fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255fe4: 0x0  nop
    ctx->pc = 0x255fe4u;
    // NOP
    // 0x255fe8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x255FE8u;
    {
        const bool branch_taken_0x255fe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255fe8) {
            ctx->pc = 0x255FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255FE8u;
            // 0x255fec: 0xe4a0001c  swc1        $f0, 0x1C($a1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255FF0u;
            goto label_255ff0;
        }
    }
    ctx->pc = 0x255FF0u;
label_255ff0:
    // 0x255ff0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x255ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255ff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255ff8: 0x0  nop
    ctx->pc = 0x255ff8u;
    // NOP
    // 0x255ffc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x255FFCu;
    {
        const bool branch_taken_0x255ffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255ffc) {
            ctx->pc = 0x256000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255FFCu;
            // 0x256000: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x256004u;
            goto label_256004;
        }
    }
    ctx->pc = 0x256004u;
label_256004:
    // 0x256004: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x256004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256008: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x256008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25600c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x25600cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256010: 0x0  nop
    ctx->pc = 0x256010u;
    // NOP
    // 0x256014: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x256014u;
    {
        const bool branch_taken_0x256014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x256018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256014u;
        // 0x256018: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256014) {
            ctx->pc = 0x256028u;
            goto label_256028;
        }
    }
    ctx->pc = 0x25601Cu;
    // 0x25601c: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x25601cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x256020: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x256020u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x256024: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x256024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_256028:
    // 0x256028: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x256028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25602c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25602cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256030: 0x0  nop
    ctx->pc = 0x256030u;
    // NOP
    // 0x256034: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x256034u;
    {
        const bool branch_taken_0x256034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x256034) {
            ctx->pc = 0x256038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256034u;
            // 0x256038: 0xc440001c  lwc1        $f0, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x256048u;
            goto label_256048;
        }
    }
    ctx->pc = 0x25603Cu;
    // 0x25603c: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x25603cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x256040: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x256040u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x256044: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x256044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_256048:
    // 0x256048: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x256048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25604c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25604Cu;
    {
        const bool branch_taken_0x25604c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25604c) {
            ctx->pc = 0x25605Cu;
            goto label_25605c;
        }
    }
    ctx->pc = 0x256054u;
    // 0x256054: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x256054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x256058: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x256058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25605c:
    // 0x25605c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25605cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256060: 0x0  nop
    ctx->pc = 0x256060u;
    // NOP
    // 0x256064: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x256064u;
    {
        const bool branch_taken_0x256064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x256064) {
            ctx->pc = 0x256068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256064u;
            // 0x256068: 0xe4a0002c  swc1        $f0, 0x2C($a1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25606Cu;
            goto label_25606c;
        }
    }
    ctx->pc = 0x25606Cu;
label_25606c:
    // 0x25606c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x25606cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x256070: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x256070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x256074: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x256074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256078: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x256078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x25607c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256080: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x256080u;
    {
        const bool branch_taken_0x256080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256080u;
        // 0x256084: 0x8a1021  addu        $v0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256080) {
            ctx->pc = 0x255F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255f30;
        }
    }
    ctx->pc = 0x256088u;
label_256088:
    // 0x256088: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x256088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25608c: 0xcf102a  slt         $v0, $a2, $t7
    ctx->pc = 0x25608cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x256090: 0x1440ff3d  bnez        $v0, . + 4 + (-0xC3 << 2)
    ctx->pc = 0x256090u;
    {
        const bool branch_taken_0x256090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256090u;
        // 0x256094: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256090) {
            ctx->pc = 0x255D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255d88;
        }
    }
    ctx->pc = 0x256098u;
label_256098:
    // 0x256098: 0x3e00008  jr          $ra
    ctx->pc = 0x256098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2560A0u;
}
