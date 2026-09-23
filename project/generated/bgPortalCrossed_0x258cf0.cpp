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

// Function: bgPortalCrossed
// Address: 0x258cf0 - 0x259038
void bgPortalCrossed_0x258cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalCrossed_0x258cf0");
#endif

    switch (ctx->pc) {
        case 0x258d98u: goto label_258d98;
        case 0x258dd4u: goto label_258dd4;
        case 0x258ef0u: goto label_258ef0;
        default: break;
    }

    ctx->pc = 0x258cf0u;

    // 0x258cf0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x258cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x258cf4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x258cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x258cf8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x258cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x258cfc: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x258cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x258d00: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x258d00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d04: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x258d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x258d08: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x258d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x258d0c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x258d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x258d10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x258d10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d14: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x258d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x258d18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x258d18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d1c: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x258d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x258d20: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x258d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x258d24: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x258d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x258d28: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x258d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x258d2c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x258d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x258d30: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x258d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x258d34: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x258d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258d38: 0x8f83a240  lw          $v1, -0x5DC0($gp)
    ctx->pc = 0x258d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x258d3c: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x258d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x258d40: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x258d40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258d44: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x258d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x258d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x258d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258d4c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x258D4Cu;
    {
        const bool branch_taken_0x258d4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x258D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D4Cu;
        // 0x258d50: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d4c) {
            ctx->pc = 0x258D84u;
            goto label_258d84;
        }
    }
    ctx->pc = 0x258D54u;
    // 0x258d54: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x258d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258d58: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x258d58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258d5c: 0x0  nop
    ctx->pc = 0x258d5cu;
    // NOP
    // 0x258d60: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x258D60u;
    {
        const bool branch_taken_0x258d60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x258d60) {
            ctx->pc = 0x258D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258D60u;
            // 0x258d64: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258D88u;
            goto label_258d88;
        }
    }
    ctx->pc = 0x258D68u;
    // 0x258d68: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x258d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258d6c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x258d6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258d70: 0x0  nop
    ctx->pc = 0x258d70u;
    // NOP
    // 0x258d74: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x258D74u;
    {
        const bool branch_taken_0x258d74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x258d74) {
            ctx->pc = 0x258D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258D74u;
            // 0x258d78: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258D88u;
            goto label_258d88;
        }
    }
    ctx->pc = 0x258D7Cu;
    // 0x258d7c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x258D7Cu;
    {
        const bool branch_taken_0x258d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D7Cu;
        // 0x258d80: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d7c) {
            ctx->pc = 0x259008u;
            goto label_259008;
        }
    }
    ctx->pc = 0x258D84u;
label_258d84:
    // 0x258d84: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x258d84u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_258d88:
    // 0x258d88: 0x1ae0009e  blez        $s7, . + 4 + (0x9E << 2)
    ctx->pc = 0x258D88u;
    {
        const bool branch_taken_0x258d88 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x258D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D88u;
        // 0x258d8c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d88) {
            ctx->pc = 0x259004u;
            goto label_259004;
        }
    }
    ctx->pc = 0x258D90u;
    // 0x258d90: 0x24550004  addiu       $s5, $v0, 0x4
    ctx->pc = 0x258d90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x258d94: 0x241e000c  addiu       $fp, $zero, 0xC
    ctx->pc = 0x258d94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_258d98:
    // 0x258d98: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x258d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x258d9c: 0x8f83a244  lw          $v1, -0x5DBC($gp)
    ctx->pc = 0x258d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x258da0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x258da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x258da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x258da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258da8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x258da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258dac: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x258dacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x258db0: 0x52340001  beql        $s1, $s4, . + 4 + (0x1 << 2)
    ctx->pc = 0x258DB0u;
    {
        const bool branch_taken_0x258db0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x258db0) {
            ctx->pc = 0x258DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258DB0u;
            // 0x258db4: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258DB8u;
            goto label_258db8;
        }
    }
    ctx->pc = 0x258DB8u;
label_258db8:
    // 0x258db8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x258db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x258dbc: 0x5222008e  beql        $s1, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x258DBCu;
    {
        const bool branch_taken_0x258dbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x258dbc) {
            ctx->pc = 0x258DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258DBCu;
            // 0x258dc0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258FF8u;
            goto label_258ff8;
        }
    }
    ctx->pc = 0x258DC4u;
    // 0x258dc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x258dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258dc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x258dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258dcc: 0xc095e18  jal         func_257860
    ctx->pc = 0x258DCCu;
    SET_GPR_U32(ctx, 31, 0x258DD4u);
    ctx->pc = 0x258DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DCCu;
    // 0x258dd0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257860u, 0x258DCCu, 0x258DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DD4u;
label_258dd4:
    // 0x258dd4: 0x54400088  bnel        $v0, $zero, . + 4 + (0x88 << 2)
    ctx->pc = 0x258DD4u;
    {
        const bool branch_taken_0x258dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258dd4) {
            ctx->pc = 0x258DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258DD4u;
            // 0x258dd8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258FF8u;
            goto label_258ff8;
        }
    }
    ctx->pc = 0x258DDCu;
    // 0x258ddc: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x258ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x258de0: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x258de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x258de4: 0xc4470004  lwc1        $f7, 0x4($v0)
    ctx->pc = 0x258de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x258de8: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x258de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x258dec: 0xc64e0004  lwc1        $f14, 0x4($s2)
    ctx->pc = 0x258decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x258df0: 0x460d30c2  mul.s       $f3, $f6, $f13
    ctx->pc = 0x258df0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
    // 0x258df4: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x258df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x258df8: 0x460e3902  mul.s       $f4, $f7, $f14
    ctx->pc = 0x258df8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[14]);
    // 0x258dfc: 0xc64b0008  lwc1        $f11, 0x8($s2)
    ctx->pc = 0x258dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x258e00: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x258e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258e04: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x258e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258e08: 0x460b4142  mul.s       $f5, $f8, $f11
    ctx->pc = 0x258e08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x258e0c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x258e0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x258e10: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x258e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258e14: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x258e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x258e18: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x258e18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x258e1c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x258e1cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x258e20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x258e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x258e24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x258e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x258e28: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x258e28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x258e2c: 0x460c1832  c.eq.s      $f3, $f12
    ctx->pc = 0x258e2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258e30: 0x0  nop
    ctx->pc = 0x258e30u;
    // NOP
    // 0x258e34: 0x4501006f  bc1t        . + 4 + (0x6F << 2)
    ctx->pc = 0x258E34u;
    {
        const bool branch_taken_0x258e34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x258E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E34u;
        // 0x258e38: 0x46020100  add.s       $f4, $f0, $f2 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e34) {
            ctx->pc = 0x258FF4u;
            goto label_258ff4;
        }
    }
    ctx->pc = 0x258E3Cu;
    // 0x258e3c: 0xc6690000  lwc1        $f9, 0x0($s3)
    ctx->pc = 0x258e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x258e40: 0xc66a0004  lwc1        $f10, 0x4($s3)
    ctx->pc = 0x258e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x258e44: 0x46093002  mul.s       $f0, $f6, $f9
    ctx->pc = 0x258e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x258e48: 0xc6650008  lwc1        $f5, 0x8($s3)
    ctx->pc = 0x258e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x258e4c: 0x460a3842  mul.s       $f1, $f7, $f10
    ctx->pc = 0x258e4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x258e50: 0x46054082  mul.s       $f2, $f8, $f5
    ctx->pc = 0x258e50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x258e54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x258e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x258e58: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x258e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x258e5c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x258e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x258e60: 0x0  nop
    ctx->pc = 0x258e60u;
    // NOP
    // 0x258e64: 0x0  nop
    ctx->pc = 0x258e64u;
    // NOP
    // 0x258e68: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x258e68u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[3];
    // 0x258e6c: 0x460c1836  c.le.s      $f3, $f12
    ctx->pc = 0x258e6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258e70: 0x0  nop
    ctx->pc = 0x258e70u;
    // NOP
    // 0x258e74: 0x45030060  bc1tl       . + 4 + (0x60 << 2)
    ctx->pc = 0x258E74u;
    {
        const bool branch_taken_0x258e74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x258e74) {
            ctx->pc = 0x258E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258E74u;
            // 0x258e78: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258FF8u;
            goto label_258ff8;
        }
    }
    ctx->pc = 0x258E7Cu;
    // 0x258e7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x258e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x258e80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x258e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258e84: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x258e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258e88: 0x0  nop
    ctx->pc = 0x258e88u;
    // NOP
    // 0x258e8c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x258E8Cu;
    {
        const bool branch_taken_0x258e8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x258E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E8Cu;
        // 0x258e90: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e8c) {
            ctx->pc = 0x258E9Cu;
            goto label_258e9c;
        }
    }
    ctx->pc = 0x258E94u;
    // 0x258e94: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x258E94u;
    {
        const bool branch_taken_0x258e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258e94) {
            ctx->pc = 0x258E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258E94u;
            // 0x258e98: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258FF8u;
            goto label_258ff8;
        }
    }
    ctx->pc = 0x258E9Cu;
label_258e9c:
    // 0x258e9c: 0x460b1882  mul.s       $f2, $f3, $f11
    ctx->pc = 0x258e9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x258ea0: 0x96070014  lhu         $a3, 0x14($s0)
    ctx->pc = 0x258ea0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x258ea4: 0x460d1842  mul.s       $f1, $f3, $f13
    ctx->pc = 0x258ea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x258ea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258eac: 0x460e1802  mul.s       $f0, $f3, $f14
    ctx->pc = 0x258eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x258eb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x258eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258eb4: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x258eb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x258eb8: 0x46014980  add.s       $f6, $f9, $f1
    ctx->pc = 0x258eb8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x258ebc: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x258ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x258ec0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x258ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x258ec4: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x258ec4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x258ec8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x258ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x258ecc: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x258eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x258ed0: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x258ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x258ed4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x258ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x258ed8: 0x18600044  blez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x258ED8u;
    {
        const bool branch_taken_0x258ed8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x258EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258ED8u;
        // 0x258edc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ed8) {
            ctx->pc = 0x258FECu;
            goto label_258fec;
        }
    }
    ctx->pc = 0x258EE0u;
    // 0x258ee0: 0x46003286  mov.s       $f10, $f6
    ctx->pc = 0x258ee0u;
    ctx->f[10] = FPU_MOV_S(ctx->f[6]);
    // 0x258ee4: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x258ee4u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x258ee8: 0x46001206  mov.s       $f8, $f2
    ctx->pc = 0x258ee8u;
    ctx->f[8] = FPU_MOV_S(ctx->f[2]);
    // 0x258eec: 0xbe1018  mult        $v0, $a1, $fp
    ctx->pc = 0x258eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_258ef0:
    // 0x258ef0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x258ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258ef4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x258ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x258ef8: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x258ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x258efc: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x258efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x258f00: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x258f00u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x258f04: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x258f04u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x258f08: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x258f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258f0c: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x258f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x258f10: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x258f10u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x258f14: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x258f14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x258f18: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x258f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258f1c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x258f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258f20: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x258f20u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x258f24: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x258f24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x258f28: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x258f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258f2c: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x258f2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x258f30: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x258f30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x258f34: 0x460229c2  mul.s       $f7, $f5, $f2
    ctx->pc = 0x258f34u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x258f38: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x258f38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x258f3c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x258f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258f40: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x258f40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x258f44: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x258f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x258f48: 0x46003102  mul.s       $f4, $f6, $f0
    ctx->pc = 0x258f48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x258f4c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x258f4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x258f50: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x258f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258f54: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x258f54u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x258f58: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x258f58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x258f5c: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x258f5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x258f60: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x258f60u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x258f64: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x258f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x258f68: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x258f68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x258f6c: 0x46061181  sub.s       $f6, $f2, $f6
    ctx->pc = 0x258f6cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x258f70: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x258f70u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x258f74: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x258f74u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x258f78: 0x18a0000e  blez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x258F78u;
    {
        const bool branch_taken_0x258f78 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x258F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F78u;
        // 0x258f7c: 0xe7a50040  swc1        $f5, 0x40($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f78) {
            ctx->pc = 0x258FB4u;
            goto label_258fb4;
        }
    }
    ctx->pc = 0x258F80u;
    // 0x258f80: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x258f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258f84: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x258f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258f88: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x258f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x258f8c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x258f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258f90: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x258f90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x258f94: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x258f94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x258f98: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x258f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x258f9c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x258f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x258fa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x258fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x258fa4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x258fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258fa8: 0x0  nop
    ctx->pc = 0x258fa8u;
    // NOP
    // 0x258fac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x258FACu;
    {
        const bool branch_taken_0x258fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x258fac) {
            ctx->pc = 0x258FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258FACu;
            // 0x258fb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258FB4u;
            goto label_258fb4;
        }
    }
    ctx->pc = 0x258FB4u;
label_258fb4:
    // 0x258fb4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x258fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258fb8: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x258fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x258fbc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x258fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258fc0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x258fc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x258fc4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x258fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258fc8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x258fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x258fcc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x258fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x258fd0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x258fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258fd4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x258fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x258fd8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x258fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258fdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258FDCu;
    {
        const bool branch_taken_0x258fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FDCu;
        // 0x258fe0: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fdc) {
            ctx->pc = 0x258FECu;
            goto label_258fec;
        }
    }
    ctx->pc = 0x258FE4u;
    // 0x258fe4: 0x10c0ffc2  beqz        $a2, . + 4 + (-0x3E << 2)
    ctx->pc = 0x258FE4u;
    {
        const bool branch_taken_0x258fe4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FE4u;
        // 0x258fe8: 0xbe1018  mult        $v0, $a1, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fe4) {
            ctx->pc = 0x258EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258ef0;
        }
    }
    ctx->pc = 0x258FECu;
label_258fec:
    // 0x258fec: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x258FECu;
    {
        const bool branch_taken_0x258fec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FECu;
        // 0x258ff0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fec) {
            ctx->pc = 0x259008u;
            goto label_259008;
        }
    }
    ctx->pc = 0x258FF4u;
label_258ff4:
    // 0x258ff4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x258ff4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_258ff8:
    // 0x258ff8: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x258ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x258ffc: 0x1440ff66  bnez        $v0, . + 4 + (-0x9A << 2)
    ctx->pc = 0x258FFCu;
    {
        const bool branch_taken_0x258ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FFCu;
        // 0x259000: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ffc) {
            ctx->pc = 0x258D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258d98;
        }
    }
    ctx->pc = 0x259004u;
label_259004:
    // 0x259004: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x259004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_259008:
    // 0x259008: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x259008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25900c: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x25900cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x259010: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x259010u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x259014: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x259014u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259018: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x259018u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25901c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x25901cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x259020: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x259020u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x259024: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x259024u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259028: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x259028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25902c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x25902cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259030: 0x3e00008  jr          $ra
    ctx->pc = 0x259030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259030u;
        // 0x259034: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259038u;
}
