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

// Function: particleBurstGfx
// Address: 0x29fe20 - 0x2a02cc
void particleBurstGfx_0x29fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleBurstGfx_0x29fe20");
#endif

    switch (ctx->pc) {
        case 0x29fec0u: goto label_29fec0;
        case 0x29fec8u: goto label_29fec8;
        case 0x29fef8u: goto label_29fef8;
        case 0x29ffc4u: goto label_29ffc4;
        case 0x2a0038u: goto label_2a0038;
        case 0x2a026cu: goto label_2a026c;
        default: break;
    }

    ctx->pc = 0x29fe20u;

    // 0x29fe20: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x29fe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x29fe24: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x29fe24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29fe28: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x29fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x29fe2c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x29fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x29fe30: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x29fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x29fe34: 0x246398c0  addiu       $v1, $v1, -0x6740
    ctx->pc = 0x29fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940864));
    // 0x29fe38: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x29fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x29fe3c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x29fe40: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x29fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x29fe44: 0x24539810  addiu       $s3, $v0, -0x67F0
    ctx->pc = 0x29fe44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940688));
    // 0x29fe48: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x29fe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x29fe4c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x29fe4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe50: 0xe7b90128  swc1        $f25, 0x128($sp)
    ctx->pc = 0x29fe50u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x29fe54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29fe54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe58: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x29fe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x29fe5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29fe5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe60: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x29fe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x29fe64: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x29fe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x29fe68: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x29fe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x29fe6c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x29fe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x29fe70: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x29fe70u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x29fe74: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x29fe74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x29fe78: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x29fe78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x29fe7c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x29fe7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x29fe80: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x29fe80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x29fe84: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x29fe84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29fe88: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29fe8c: 0xc4c10104  lwc1        $f1, 0x104($a2)
    ctx->pc = 0x29fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fe90: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x29fe90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x29fe94: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29fe94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x29fe98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29fe98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fe9c: 0x0  nop
    ctx->pc = 0x29fe9cu;
    // NOP
    // 0x29fea0: 0x0  nop
    ctx->pc = 0x29fea0u;
    // NOP
    // 0x29fea4: 0x46010643  div.s       $f25, $f0, $f1
    ctx->pc = 0x29fea4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[25] = ctx->f[0] / ctx->f[1];
    // 0x29fea8: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x29fea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29feac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29feacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29feb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29feb4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x29feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x29feb8: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x29FEB8u;
    SET_GPR_U32(ctx, 31, 0x29FEC0u);
    ctx->pc = 0x29FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FEB8u;
    // 0x29febc: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x29FEB8u, 0x29FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FEC0u;
label_29fec0:
    // 0x29fec0: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x29FEC0u;
    SET_GPR_U32(ctx, 31, 0x29FEC8u);
    ctx->pc = 0x29FEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FEC0u;
    // 0x29fec4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x29FEC0u, 0x29FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FEC8u;
label_29fec8:
    // 0x29fec8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x29fec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29fecc: 0x188000ed  blez        $a0, . + 4 + (0xED << 2)
    ctx->pc = 0x29FECCu;
    {
        const bool branch_taken_0x29fecc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x29FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FECCu;
        // 0x29fed0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fecc) {
            ctx->pc = 0x2A0284u;
            goto label_2a0284;
        }
    }
    ctx->pc = 0x29FED4u;
    // 0x29fed4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x29fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x29fed8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29fed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29fedc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x29fedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x29fee0: 0x245599f0  addiu       $s5, $v0, -0x6610
    ctx->pc = 0x29fee0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x29fee4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29fee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29fee8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x29fee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x29feec: 0x247e5c60  addiu       $fp, $v1, 0x5C60
    ctx->pc = 0x29feecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x29fef0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29fef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fef4: 0x261403a0  addiu       $s4, $s0, 0x3A0
    ctx->pc = 0x29fef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
label_29fef8:
    // 0x29fef8: 0xc606000c  lwc1        $f6, 0xC($s0)
    ctx->pc = 0x29fef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29fefc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29fefcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff00: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x29ff00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ff04: 0x0  nop
    ctx->pc = 0x29ff04u;
    // NOP
    // 0x29ff08: 0x450200da  bc1fl       . + 4 + (0xDA << 2)
    ctx->pc = 0x29FF08u;
    {
        const bool branch_taken_0x29ff08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ff08) {
            ctx->pc = 0x29FF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FF08u;
            // 0x29ff0c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0274u;
            goto label_2a0274;
        }
    }
    ctx->pc = 0x29FF10u;
    // 0x29ff10: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x29ff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29ff14: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x29ff14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ff18: 0x0  nop
    ctx->pc = 0x29ff18u;
    // NOP
    // 0x29ff1c: 0x450000d4  bc1f        . + 4 + (0xD4 << 2)
    ctx->pc = 0x29FF1Cu;
    {
        const bool branch_taken_0x29ff1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF1Cu;
        // 0x29ff20: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff1c) {
            ctx->pc = 0x2A0270u;
            goto label_2a0270;
        }
    }
    ctx->pc = 0x29FF24u;
    // 0x29ff24: 0xc7828d78  lwc1        $f2, -0x7288($gp)
    ctx->pc = 0x29ff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29ff28: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x29ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29ff2c: 0xc6240018  lwc1        $f4, 0x18($s1)
    ctx->pc = 0x29ff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29ff30: 0xc4400e90  lwc1        $f0, 0xE90($v0)
    ctx->pc = 0x29ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ff34: 0x0  nop
    ctx->pc = 0x29ff34u;
    // NOP
    // 0x29ff38: 0x0  nop
    ctx->pc = 0x29ff38u;
    // NOP
    // 0x29ff3c: 0x46033503  div.s       $f20, $f6, $f3
    ctx->pc = 0x29ff3cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[20] = ctx->f[6] / ctx->f[3];
    // 0x29ff40: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x29ff40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x29ff44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29ff44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ff48: 0x46043034  c.lt.s      $f6, $f4
    ctx->pc = 0x29ff48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ff4c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x29ff4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x29ff50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29ff50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29ff54: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x29ff54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x29ff58: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29ff58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29ff5c: 0x0  nop
    ctx->pc = 0x29ff5cu;
    // NOP
    // 0x29ff60: 0x0  nop
    ctx->pc = 0x29ff60u;
    // NOP
    // 0x29ff64: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x29ff64u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[1];
    // 0x29ff68: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29FF68u;
    {
        const bool branch_taken_0x29ff68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF68u;
        // 0x29ff6c: 0x8e360020  lw          $s6, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff68) {
            ctx->pc = 0x29FF84u;
            goto label_29ff84;
        }
    }
    ctx->pc = 0x29FF70u;
    // 0x29ff70: 0x0  nop
    ctx->pc = 0x29ff70u;
    // NOP
    // 0x29ff74: 0x0  nop
    ctx->pc = 0x29ff74u;
    // NOP
    // 0x29ff78: 0x46043583  div.s       $f22, $f6, $f4
    ctx->pc = 0x29ff78u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[22] = ctx->f[6] / ctx->f[4];
    // 0x29ff7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29FF7Cu;
    {
        const bool branch_taken_0x29ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF7Cu;
        // 0x29ff80: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff7c) {
            ctx->pc = 0x29FFACu;
            goto label_29ffac;
        }
    }
    ctx->pc = 0x29FF84u;
label_29ff84:
    // 0x29ff84: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x29ff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ff88: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x29ff88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x29ff8c: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x29ff8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ff90: 0x0  nop
    ctx->pc = 0x29ff90u;
    // NOP
    // 0x29ff94: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29FF94u;
    {
        const bool branch_taken_0x29ff94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF94u;
        // 0x29ff98: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff94) {
            ctx->pc = 0x29FFACu;
            goto label_29ffac;
        }
    }
    ctx->pc = 0x29FF9Cu;
    // 0x29ff9c: 0x46061801  sub.s       $f0, $f3, $f6
    ctx->pc = 0x29ff9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x29ffa0: 0x0  nop
    ctx->pc = 0x29ffa0u;
    // NOP
    // 0x29ffa4: 0x0  nop
    ctx->pc = 0x29ffa4u;
    // NOP
    // 0x29ffa8: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x29ffa8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[22] = ctx->f[0] / ctx->f[1];
label_29ffac:
    // 0x29ffac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29ffacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29ffb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29FFB0u;
    {
        const bool branch_taken_0x29ffb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFB0u;
        // 0x29ffb4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ffb0) {
            ctx->pc = 0x29FFCCu;
            goto label_29ffcc;
        }
    }
    ctx->pc = 0x29FFB8u;
    // 0x29ffb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29ffb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffbc: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29FFBCu;
    SET_GPR_U32(ctx, 31, 0x29FFC4u);
    ctx->pc = 0x29FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FFBCu;
    // 0x29ffc0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29FFBCu, 0x29FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FFC4u;
label_29ffc4:
    // 0x29ffc4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x29FFC4u;
    {
        const bool branch_taken_0x29ffc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFC4u;
        // 0x29ffc8: 0xc7a0001c  lwc1        $f0, 0x1C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ffc4) {
            ctx->pc = 0x2A003Cu;
            goto label_2a003c;
        }
    }
    ctx->pc = 0x29FFCCu;
label_29ffcc:
    // 0x29ffcc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29ffd0: 0x2132021  addu        $a0, $s0, $s3
    ctx->pc = 0x29ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x29ffd4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x29ffd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29ffd8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x29ffd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffdc: 0xc46503a4  lwc1        $f5, 0x3A4($v1)
    ctx->pc = 0x29ffdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29ffe0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x29ffe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffe4: 0xc48403a0  lwc1        $f4, 0x3A0($a0)
    ctx->pc = 0x29ffe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29ffe8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x29ffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29ffec: 0xc4a303a8  lwc1        $f3, 0x3A8($a1)
    ctx->pc = 0x29ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29fff0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29fff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fff4: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x29fff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29fff8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29fff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fffc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x29fffcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0000: 0xc4e009e8  lwc1        $f0, 0x9E8($a3)
    ctx->pc = 0x2a0000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 2536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0004: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a0004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0008: 0xc46109e0  lwc1        $f1, 0x9E0($v1)
    ctx->pc = 0x2a0008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a000c: 0xc44209e4  lwc1        $f2, 0x9E4($v0)
    ctx->pc = 0x2a000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0010: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a0010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2a0014: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2a0014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2a0018: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2a0018u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2a001c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a001cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a0020: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2a0020u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2a0024: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2a0024u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2a0028: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2a0028u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a002c: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2a002cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a0030: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x2A0030u;
    SET_GPR_U32(ctx, 31, 0x2A0038u);
    ctx->pc = 0x2A0034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0030u;
    // 0x2a0034: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x2A0030u, 0x2A0038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0038u;
label_2a0038:
    // 0x2a0038: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2a0038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a003c:
    // 0x2a003c: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x2a003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a0040: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a0040u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a0044: 0x46070836  c.le.s      $f1, $f7
    ctx->pc = 0x2a0044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0048: 0x0  nop
    ctx->pc = 0x2a0048u;
    // NOP
    // 0x2a004c: 0x45020088  bc1fl       . + 4 + (0x88 << 2)
    ctx->pc = 0x2A004Cu;
    {
        const bool branch_taken_0x2a004c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a004c) {
            ctx->pc = 0x2A0050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A004Cu;
            // 0x2a0050: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0270u;
            goto label_2a0270;
        }
    }
    ctx->pc = 0x2A0054u;
    // 0x2a0054: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x2a0054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0058: 0x0  nop
    ctx->pc = 0x2a0058u;
    // NOP
    // 0x2a005c: 0x45000083  bc1f        . + 4 + (0x83 << 2)
    ctx->pc = 0x2A005Cu;
    {
        const bool branch_taken_0x2a005c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A005Cu;
        // 0x2a0060: 0xc7a60014  lwc1        $f6, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a005c) {
            ctx->pc = 0x2A026Cu;
            goto label_2a026c;
        }
    }
    ctx->pc = 0x2A0064u;
    // 0x2a0064: 0x46060836  c.le.s      $f1, $f6
    ctx->pc = 0x2a0064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0068: 0x0  nop
    ctx->pc = 0x2a0068u;
    // NOP
    // 0x2a006c: 0x45020080  bc1fl       . + 4 + (0x80 << 2)
    ctx->pc = 0x2A006Cu;
    {
        const bool branch_taken_0x2a006c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a006c) {
            ctx->pc = 0x2A0070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A006Cu;
            // 0x2a0070: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0270u;
            goto label_2a0270;
        }
    }
    ctx->pc = 0x2A0074u;
    // 0x2a0074: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x2a0074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0078: 0x0  nop
    ctx->pc = 0x2a0078u;
    // NOP
    // 0x2a007c: 0x4500007b  bc1f        . + 4 + (0x7B << 2)
    ctx->pc = 0x2A007Cu;
    {
        const bool branch_taken_0x2a007c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A007Cu;
        // 0x2a0080: 0xc7a30018  lwc1        $f3, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a007c) {
            ctx->pc = 0x2A026Cu;
            goto label_2a026c;
        }
    }
    ctx->pc = 0x2A0084u;
    // 0x2a0084: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x2a0084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0088: 0x0  nop
    ctx->pc = 0x2a0088u;
    // NOP
    // 0x2a008c: 0x45020078  bc1fl       . + 4 + (0x78 << 2)
    ctx->pc = 0x2A008Cu;
    {
        const bool branch_taken_0x2a008c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a008c) {
            ctx->pc = 0x2A0090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A008Cu;
            // 0x2a0090: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0270u;
            goto label_2a0270;
        }
    }
    ctx->pc = 0x2A0094u;
    // 0x2a0094: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2a0094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0098: 0x0  nop
    ctx->pc = 0x2a0098u;
    // NOP
    // 0x2a009c: 0x45000073  bc1f        . + 4 + (0x73 << 2)
    ctx->pc = 0x2A009Cu;
    {
        const bool branch_taken_0x2a009c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A009Cu;
        // 0x2a00a0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a009c) {
            ctx->pc = 0x2A026Cu;
            goto label_2a026c;
        }
    }
    ctx->pc = 0x2A00A4u;
    // 0x2a00a4: 0x0  nop
    ctx->pc = 0x2a00a4u;
    // NOP
    // 0x2a00a8: 0x0  nop
    ctx->pc = 0x2a00a8u;
    // NOP
    // 0x2a00ac: 0x4600c143  div.s       $f5, $f24, $f0
    ctx->pc = 0x2a00acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[24] * 0.0f); } else ctx->f[5] = ctx->f[24] / ctx->f[0];
    // 0x2a00b0: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x2a00b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a00b4: 0xc7808d7c  lwc1        $f0, -0x7284($gp)
    ctx->pc = 0x2a00b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a00b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a00bc: 0x24639818  addiu       $v1, $v1, -0x67E8
    ctx->pc = 0x2a00bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940696));
    // 0x2a00c0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2a00c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2a00c4: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2a00c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a00c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a00cc: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x2a00ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x2a00d0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2a00d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a00d4: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x2a00d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a00d8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2a00d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2a00dc: 0x42023  negu        $a0, $a0
    ctx->pc = 0x2a00dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2a00e0: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x2a00e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x2a00e4: 0xc78c8d80  lwc1        $f12, -0x7280($gp)
    ctx->pc = 0x2a00e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a00e8: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x2a00e8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x2a00ec: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2a00ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2a00f0: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2a00f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2a00f4: 0x0  nop
    ctx->pc = 0x2a00f4u;
    // NOP
    // 0x2a00f8: 0x0  nop
    ctx->pc = 0x2a00f8u;
    // NOP
    // 0x2a00fc: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x2a00fcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x2a0100: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x2a0100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x2a0104: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a0104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0108: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x2a0108u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x2a010c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a010cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0110: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a0110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2a0114: 0x460001a4  .word       0x460001A4                   # cvt.w.s     $f6, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x2a0118: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x2a0118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a011c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a011cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0120: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2a0120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2a0124: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a0124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a0128: 0x24a59810  addiu       $a1, $a1, -0x67F0
    ctx->pc = 0x2a0128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940688));
    // 0x2a012c: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x2a012cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2a0130: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2a0130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2a0134: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2a0134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a0138: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x2a0138u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x2a013c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2a013cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a0140: 0x46191082  mul.s       $f2, $f2, $f25
    ctx->pc = 0x2a0140u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[25]);
    // 0x2a0144: 0x46180840  add.s       $f1, $f1, $f24
    ctx->pc = 0x2a0144u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x2a0148: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x2a0148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2a014c: 0x46182100  add.s       $f4, $f4, $f24
    ctx->pc = 0x2a014cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[24]);
    // 0x2a0150: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2a0150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2a0154: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a0154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a0158: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2a0158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2a015c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2a015cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a0160: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x2a0160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2a0164: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a0164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0168: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2a0168u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2a016c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2a016cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a0170: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a0170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a0174: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2a0178: 0x44062000  mfc1        $a2, $f4
    ctx->pc = 0x2a0178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a017c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2a017cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2a0180: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2a0180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a0184: 0xc6aa0010  lwc1        $f10, 0x10($s5)
    ctx->pc = 0x2a0184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a0188: 0x468052a0  cvt.s.w     $f10, $f10
    ctx->pc = 0x2a0188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[10], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x2a018c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a018cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a0190: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a0190u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a0194: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2a0194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a0198: 0x44864000  mtc1        $a2, $f8
    ctx->pc = 0x2a0198u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2a019c: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x2a019cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x2a01a0: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2a01a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a01a4: 0xc6a90008  lwc1        $f9, 0x8($s5)
    ctx->pc = 0x2a01a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a01a8: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x2a01a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x2a01ac: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2a01acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a01b0: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x2a01b0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a01b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a01b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a01b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a01b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a01bc: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x2a01bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a01c0: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x2a01c0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2a01c4: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2a01c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a01c8: 0x46075282  mul.s       $f10, $f10, $f7
    ctx->pc = 0x2a01c8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x2a01cc: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x2a01ccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x2a01d0: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x2a01d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a01d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a01d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a01d8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2a01d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2a01dc: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x2a01dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x2a01e0: 0x460bb2c2  mul.s       $f11, $f22, $f11
    ctx->pc = 0x2a01e0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[22], ctx->f[11]);
    // 0x2a01e4: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x2a01e4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x2a01e8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2a01e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2a01ec: 0x46174082  mul.s       $f2, $f8, $f23
    ctx->pc = 0x2a01ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[23]);
    // 0x2a01f0: 0x46170a82  mul.s       $f10, $f1, $f23
    ctx->pc = 0x2a01f0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x2a01f4: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x2a01f4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a01f8: 0x46005924  .word       0x46005924                   # cvt.w.s     $f4, $f11 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a01f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[11]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2a01fc: 0x44062000  mfc1        $a2, $f4
    ctx->pc = 0x2a01fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a0200: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a0200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a0204: 0x460d18c0  add.s       $f3, $f3, $f13
    ctx->pc = 0x2a0204u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x2a0208: 0x46014901  sub.s       $f4, $f9, $f1
    ctx->pc = 0x2a0208u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x2a020c: 0x46020141  sub.s       $f5, $f0, $f2
    ctx->pc = 0x2a020cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a0210: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2a0210u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2a0214: 0x46084981  sub.s       $f6, $f9, $f8
    ctx->pc = 0x2a0214u;
    ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
    // 0x2a0218: 0x2c63025  or          $a2, $s6, $a2
    ctx->pc = 0x2a0218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) | GPR_U64(ctx, 6));
    // 0x2a021c: 0x460a01c0  add.s       $f7, $f0, $f10
    ctx->pc = 0x2a021cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2a0220: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x2a0220u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a0224: 0x46014840  add.s       $f1, $f9, $f1
    ctx->pc = 0x2a0224u;
    ctx->f[1] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x2a0228: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x2a0228u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2a022c: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2a022cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a0230: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x2a0230u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a0234: 0x460e18c0  add.s       $f3, $f3, $f14
    ctx->pc = 0x2a0234u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[14]);
    // 0x2a0238: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x2a0238u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a023c: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x2a023cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x2a0240: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2a0240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a0244: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x2a0244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x2a0248: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2a0248u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a024c: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x2a024cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a0250: 0xe7a90030  swc1        $f9, 0x30($sp)
    ctx->pc = 0x2a0250u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a0254: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a0254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a0258: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2a0258u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a025c: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x2a025cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a0260: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2a0260u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a0264: 0xc0a83da  jal         func_2A0F68
    ctx->pc = 0x2A0264u;
    SET_GPR_U32(ctx, 31, 0x2A026Cu);
    ctx->pc = 0x2A0268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0264u;
    // 0x2a0268: 0xe7a30048  swc1        $f3, 0x48($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0F68u, 0x2A0264u, 0x2A026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A026Cu;
label_2a026c:
    // 0x2a026c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2a026cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2a0270:
    // 0x2a0270: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a0270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2a0274:
    // 0x2a0274: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2a0274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2a0278: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x2a0278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a027c: 0x1440ff1e  bnez        $v0, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x2A027Cu;
    {
        const bool branch_taken_0x2a027c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A027Cu;
        // 0x2a0280: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a027c) {
            ctx->pc = 0x29FEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fef8;
        }
    }
    ctx->pc = 0x2A0284u;
label_2a0284:
    // 0x2a0284: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2a0284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a0288: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x2a0288u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a028c: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x2a028cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a0290: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2a0290u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a0294: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x2a0294u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a0298: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2a0298u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a029c: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x2a029cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a02a0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2a02a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a02a4: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2a02a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a02a8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2a02a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a02ac: 0xc7b90128  lwc1        $f25, 0x128($sp)
    ctx->pc = 0x2a02acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a02b0: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x2a02b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a02b4: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x2a02b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a02b8: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x2a02b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a02bc: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2a02bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a02c0: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2a02c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a02c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A02C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A02C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02C4u;
        // 0x2a02c8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A02C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A02CCu;
}
