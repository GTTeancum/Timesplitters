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

// Function: particleStreamGfx
// Address: 0x2a02d0 - 0x2a0724
void particleStreamGfx_0x2a02d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleStreamGfx_0x2a02d0");
#endif

    switch (ctx->pc) {
        case 0x2a0360u: goto label_2a0360;
        case 0x2a0368u: goto label_2a0368;
        case 0x2a0378u: goto label_2a0378;
        case 0x2a0490u: goto label_2a0490;
        case 0x2a06d8u: goto label_2a06d8;
        default: break;
    }

    ctx->pc = 0x2a02d0u;

    // 0x2a02d0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2a02d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2a02d4: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x2a02d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a02d8: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2a02d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2a02dc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a02e0: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x2a02e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x2a02e4: 0x244298c0  addiu       $v0, $v0, -0x6740
    ctx->pc = 0x2a02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940864));
    // 0x2a02e8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2a02e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2a02ec: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x2a02ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x2a02f0: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2a02f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2a02f4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2a02f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02f8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2a02f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2a02fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a02fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0300: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x2a0300u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2a0304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a0304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0308: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2a0308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2a030c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2a030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2a0310: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x2a0310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2a0314: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x2a0314u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2a0318: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2a0318u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a031c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2a031cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a0320: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x2a0320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2a0324: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a0324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a0328: 0xc4c10104  lwc1        $f1, 0x104($a2)
    ctx->pc = 0x2a0328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a032c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2a032cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a0330: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2a0330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2a0334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a0334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0338: 0x26a39810  addiu       $v1, $s5, -0x67F0
    ctx->pc = 0x2a0338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940688));
    // 0x2a033c: 0x0  nop
    ctx->pc = 0x2a033cu;
    // NOP
    // 0x2a0340: 0x0  nop
    ctx->pc = 0x2a0340u;
    // NOP
    // 0x2a0344: 0x460105c3  div.s       $f23, $f0, $f1
    ctx->pc = 0x2a0344u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[23] = ctx->f[0] / ctx->f[1];
    // 0x2a0348: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2a0348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a034c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a0350: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a0350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a0354: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a0354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a0358: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A0358u;
    SET_GPR_U32(ctx, 31, 0x2A0360u);
    ctx->pc = 0x2A035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0358u;
    // 0x2a035c: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A0358u, 0x2A0360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0360u;
label_2a0360:
    // 0x2a0360: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A0360u;
    SET_GPR_U32(ctx, 31, 0x2A0368u);
    ctx->pc = 0x2A0364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0360u;
    // 0x2a0364: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A0360u, 0x2A0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0368u;
label_2a0368:
    // 0x2a0368: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2a0368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a036c: 0x186000df  blez        $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x2A036Cu;
    {
        const bool branch_taken_0x2a036c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2A0370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A036Cu;
        // 0x2a0370: 0x26140d04  addiu       $s4, $s0, 0xD04 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 3332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a036c) {
            ctx->pc = 0x2A06ECu;
            goto label_2a06ec;
        }
    }
    ctx->pc = 0x2A0374u;
    // 0x2a0374: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2a0374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2a0378:
    // 0x2a0378: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2a0378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a037c: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x2a037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2a0380: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a0380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0384: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a0384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0388: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x2a0388u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a038c: 0x46060836  c.le.s      $f1, $f6
    ctx->pc = 0x2a038cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0390: 0x0  nop
    ctx->pc = 0x2a0390u;
    // NOP
    // 0x2a0394: 0x450200d2  bc1fl       . + 4 + (0xD2 << 2)
    ctx->pc = 0x2A0394u;
    {
        const bool branch_taken_0x2a0394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0394) {
            ctx->pc = 0x2A0398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0394u;
            // 0x2a0398: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A06E0u;
            goto label_2a06e0;
        }
    }
    ctx->pc = 0x2A039Cu;
    // 0x2a039c: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x2a039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a03a0: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x2a03a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a03a4: 0x0  nop
    ctx->pc = 0x2a03a4u;
    // NOP
    // 0x2a03a8: 0x450000cc  bc1f        . + 4 + (0xCC << 2)
    ctx->pc = 0x2A03A8u;
    {
        const bool branch_taken_0x2a03a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03A8u;
        // 0x2a03ac: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a03a8) {
            ctx->pc = 0x2A06DCu;
            goto label_2a06dc;
        }
    }
    ctx->pc = 0x2A03B0u;
    // 0x2a03b0: 0xc7828d84  lwc1        $f2, -0x727C($gp)
    ctx->pc = 0x2a03b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a03b4: 0xc4400e94  lwc1        $f0, 0xE94($v0)
    ctx->pc = 0x2a03b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a03b8: 0x0  nop
    ctx->pc = 0x2a03b8u;
    // NOP
    // 0x2a03bc: 0x0  nop
    ctx->pc = 0x2a03bcu;
    // NOP
    // 0x2a03c0: 0x46033503  div.s       $f20, $f6, $f3
    ctx->pc = 0x2a03c0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[20] = ctx->f[6] / ctx->f[3];
    // 0x2a03c4: 0xc6240018  lwc1        $f4, 0x18($s1)
    ctx->pc = 0x2a03c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a03c8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a03c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2a03cc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2a03ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2a03d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a03d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a03d4: 0x46043034  c.lt.s      $f6, $f4
    ctx->pc = 0x2a03d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a03d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a03d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a03dc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2a03dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2a03e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a03e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a03e4: 0x0  nop
    ctx->pc = 0x2a03e4u;
    // NOP
    // 0x2a03e8: 0x0  nop
    ctx->pc = 0x2a03e8u;
    // NOP
    // 0x2a03ec: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x2a03ecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[1];
    // 0x2a03f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A03F0u;
    {
        const bool branch_taken_0x2a03f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03F0u;
        // 0x2a03f4: 0x8e330020  lw          $s3, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a03f0) {
            ctx->pc = 0x2A040Cu;
            goto label_2a040c;
        }
    }
    ctx->pc = 0x2A03F8u;
    // 0x2a03f8: 0x0  nop
    ctx->pc = 0x2a03f8u;
    // NOP
    // 0x2a03fc: 0x0  nop
    ctx->pc = 0x2a03fcu;
    // NOP
    // 0x2a0400: 0x46043583  div.s       $f22, $f6, $f4
    ctx->pc = 0x2a0400u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[22] = ctx->f[6] / ctx->f[4];
    // 0x2a0404: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A0404u;
    {
        const bool branch_taken_0x2a0404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0404u;
        // 0x2a0408: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0404) {
            ctx->pc = 0x2A0434u;
            goto label_2a0434;
        }
    }
    ctx->pc = 0x2A040Cu;
label_2a040c:
    // 0x2a040c: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x2a040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0410: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x2a0410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2a0414: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2a0414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0418: 0x0  nop
    ctx->pc = 0x2a0418u;
    // NOP
    // 0x2a041c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A041Cu;
    {
        const bool branch_taken_0x2a041c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A041Cu;
        // 0x2a0420: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a041c) {
            ctx->pc = 0x2A0434u;
            goto label_2a0434;
        }
    }
    ctx->pc = 0x2A0424u;
    // 0x2a0424: 0x46061801  sub.s       $f0, $f3, $f6
    ctx->pc = 0x2a0424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2a0428: 0x0  nop
    ctx->pc = 0x2a0428u;
    // NOP
    // 0x2a042c: 0x0  nop
    ctx->pc = 0x2a042cu;
    // NOP
    // 0x2a0430: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x2a0430u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[22] = ctx->f[0] / ctx->f[1];
label_2a0434:
    // 0x2a0434: 0xc6250038  lwc1        $f5, 0x38($s1)
    ctx->pc = 0x2a0434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a0438: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2a0438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a043c: 0xc623003c  lwc1        $f3, 0x3C($s1)
    ctx->pc = 0x2a043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a0440: 0xc6240040  lwc1        $f4, 0x40($s1)
    ctx->pc = 0x2a0440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a0444: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2a0444u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2a0448: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2a0448u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2a044c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a044cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0450: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2a0450u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2a0454: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a0454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0458: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x2a0458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a045c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a045cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0460: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2a0460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0464: 0xc4e003ac  lwc1        $f0, 0x3AC($a3)
    ctx->pc = 0x2a0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0468: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a0468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a046c: 0xc46103a4  lwc1        $f1, 0x3A4($v1)
    ctx->pc = 0x2a046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0470: 0xc44203a8  lwc1        $f2, 0x3A8($v0)
    ctx->pc = 0x2a0470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0474: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2a0474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2a0478: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2a0478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2a047c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2a047cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2a0480: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2a0480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a0484: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a0484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a0488: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x2A0488u;
    SET_GPR_U32(ctx, 31, 0x2A0490u);
    ctx->pc = 0x2A048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0488u;
    // 0x2a048c: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x2A0488u, 0x2A0490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0490u;
label_2a0490:
    // 0x2a0490: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2a0490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0494: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2a0494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a0498: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2a0498u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x2a049c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2a049cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a04a0: 0x0  nop
    ctx->pc = 0x2a04a0u;
    // NOP
    // 0x2a04a4: 0x4502008d  bc1fl       . + 4 + (0x8D << 2)
    ctx->pc = 0x2A04A4u;
    {
        const bool branch_taken_0x2a04a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a04a4) {
            ctx->pc = 0x2A04A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A04A4u;
            // 0x2a04a8: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A06DCu;
            goto label_2a06dc;
        }
    }
    ctx->pc = 0x2A04ACu;
    // 0x2a04ac: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x2a04acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a04b0: 0x0  nop
    ctx->pc = 0x2a04b0u;
    // NOP
    // 0x2a04b4: 0x45000088  bc1f        . + 4 + (0x88 << 2)
    ctx->pc = 0x2A04B4u;
    {
        const bool branch_taken_0x2a04b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04B4u;
        // 0x2a04b8: 0xc7a70014  lwc1        $f7, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a04b4) {
            ctx->pc = 0x2A06D8u;
            goto label_2a06d8;
        }
    }
    ctx->pc = 0x2A04BCu;
    // 0x2a04bc: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x2a04bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a04c0: 0x0  nop
    ctx->pc = 0x2a04c0u;
    // NOP
    // 0x2a04c4: 0x45020085  bc1fl       . + 4 + (0x85 << 2)
    ctx->pc = 0x2A04C4u;
    {
        const bool branch_taken_0x2a04c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a04c4) {
            ctx->pc = 0x2A04C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A04C4u;
            // 0x2a04c8: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A06DCu;
            goto label_2a06dc;
        }
    }
    ctx->pc = 0x2A04CCu;
    // 0x2a04cc: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x2a04ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a04d0: 0x0  nop
    ctx->pc = 0x2a04d0u;
    // NOP
    // 0x2a04d4: 0x45000080  bc1f        . + 4 + (0x80 << 2)
    ctx->pc = 0x2A04D4u;
    {
        const bool branch_taken_0x2a04d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04D4u;
        // 0x2a04d8: 0xc7a40018  lwc1        $f4, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a04d4) {
            ctx->pc = 0x2A06D8u;
            goto label_2a06d8;
        }
    }
    ctx->pc = 0x2A04DCu;
    // 0x2a04dc: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x2a04dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a04e0: 0x0  nop
    ctx->pc = 0x2a04e0u;
    // NOP
    // 0x2a04e4: 0x4502007d  bc1fl       . + 4 + (0x7D << 2)
    ctx->pc = 0x2A04E4u;
    {
        const bool branch_taken_0x2a04e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a04e4) {
            ctx->pc = 0x2A04E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A04E4u;
            // 0x2a04e8: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A06DCu;
            goto label_2a06dc;
        }
    }
    ctx->pc = 0x2A04ECu;
    // 0x2a04ec: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x2a04ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a04f0: 0x0  nop
    ctx->pc = 0x2a04f0u;
    // NOP
    // 0x2a04f4: 0x45000078  bc1f        . + 4 + (0x78 << 2)
    ctx->pc = 0x2A04F4u;
    {
        const bool branch_taken_0x2a04f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04F4u;
        // 0x2a04f8: 0x3c0b0033  lui         $t3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a04f4) {
            ctx->pc = 0x2A06D8u;
            goto label_2a06d8;
        }
    }
    ctx->pc = 0x2A04FCu;
    // 0x2a04fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a04fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0500: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a0500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a0504: 0xc7808d88  lwc1        $f0, -0x7278($gp)
    ctx->pc = 0x2a0504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0508: 0x256b99f0  addiu       $t3, $t3, -0x6610
    ctx->pc = 0x2a0508u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941168));
    // 0x2a050c: 0x0  nop
    ctx->pc = 0x2a050cu;
    // NOP
    // 0x2a0510: 0x0  nop
    ctx->pc = 0x2a0510u;
    // NOP
    // 0x2a0514: 0x46011983  div.s       $f6, $f3, $f1
    ctx->pc = 0x2a0514u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[6] = ctx->f[3] / ctx->f[1];
    // 0x2a0518: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x2a0518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a051c: 0xc625002c  lwc1        $f5, 0x2C($s1)
    ctx->pc = 0x2a051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a0520: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2a0520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2a0524: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2a0524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0528: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2a0528u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2a052c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a052cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a0530: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2a0530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2a0534: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x2a0534u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x2a0538: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2a0538u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2a053c: 0x8d620024  lw          $v0, 0x24($t3)
    ctx->pc = 0x2a053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
    // 0x2a0540: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2a0540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2a0544: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a0544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a0548: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2a0548u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2a054c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2a054cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2a0550: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x2a0550u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2a0554: 0x24c65c60  addiu       $a2, $a2, 0x5C60
    ctx->pc = 0x2a0554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23648));
    // 0x2a0558: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2a0558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2a055c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a055cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a0560: 0x0  nop
    ctx->pc = 0x2a0560u;
    // NOP
    // 0x2a0564: 0x0  nop
    ctx->pc = 0x2a0564u;
    // NOP
    // 0x2a0568: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2a0568u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x2a056c: 0xc78d8d8c  lwc1        $f13, -0x7274($gp)
    ctx->pc = 0x2a056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a0570: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0570u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2a0574: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x2a0574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a0578: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2a0578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2a057c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2a057cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2a0580: 0x46066302  mul.s       $f12, $f12, $f6
    ctx->pc = 0x2a0580u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x2a0584: 0x26a59810  addiu       $a1, $s5, -0x67F0
    ctx->pc = 0x2a0584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940688));
    // 0x2a0588: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x2a0588u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x2a058c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x2a058cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x2a0590: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a0590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2a0594: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x2a0594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2a0598: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x2a0598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x2a059c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a059cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2a05a0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2a05a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2a05a4: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x2a05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2a05a8: 0xc5630010  lwc1        $f3, 0x10($t3)
    ctx->pc = 0x2a05a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a05ac: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a05acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a05b0: 0x46171082  mul.s       $f2, $f2, $f23
    ctx->pc = 0x2a05b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x2a05b4: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2a05b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2a05b8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2a05b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2a05bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a05bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a05c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a05c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2a05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a05c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2a05c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a05cc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a05d0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2a05d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2a05d4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a05d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a05d8: 0xc44a0000  lwc1        $f10, 0x0($v0)
    ctx->pc = 0x2a05d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a05dc: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x2a05dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x2a05e0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2a05e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a05e4: 0x46000964  .word       0x46000964                   # cvt.w.s     $f5, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a05e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x2a05e8: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x2a05e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a05ec: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a05ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a05f0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a05f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a05f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a05f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a05f8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2a05f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a05fc: 0x460639c2  mul.s       $f7, $f7, $f6
    ctx->pc = 0x2a05fcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x2a0600: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x2a0600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2a0604: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x2a0604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x2a0608: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2a0608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a060c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x2a060cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a0610: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a0610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a0614: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x2a0614u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a0618: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2a0618u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a061c: 0x460bb2c2  mul.s       $f11, $f22, $f11
    ctx->pc = 0x2a061cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[22], ctx->f[11]);
    // 0x2a0620: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2a0620u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a0624: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x2a0624u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2a0628: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2a0628u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2a062c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a062cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0630: 0xc5610008  lwc1        $f1, 0x8($t3)
    ctx->pc = 0x2a0630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0634: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a0634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a0638: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2a0638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a063c: 0xc560001c  lwc1        $f0, 0x1C($t3)
    ctx->pc = 0x2a063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0640: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a0640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a0644: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2a0644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a0648: 0x46091282  mul.s       $f10, $f2, $f9
    ctx->pc = 0x2a0648u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x2a064c: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2a064cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0650: 0x460d2102  mul.s       $f4, $f4, $f13
    ctx->pc = 0x2a0650u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x2a0654: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2a0654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2a0658: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2a0658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2a065c: 0x46094242  mul.s       $f9, $f8, $f9
    ctx->pc = 0x2a065cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x2a0660: 0x460058e4  .word       0x460058E4                   # cvt.w.s     $f3, $f11 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0660u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[11]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2a0664: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x2a0664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a0668: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a0668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a066c: 0x460e2100  add.s       $f4, $f4, $f14
    ctx->pc = 0x2a066cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[14]);
    // 0x2a0670: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a0670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a0674: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x2a0674u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2a0678: 0x46090141  sub.s       $f5, $f0, $f9
    ctx->pc = 0x2a0678u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x2a067c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2a067cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2a0680: 0x46080981  sub.s       $f6, $f1, $f8
    ctx->pc = 0x2a0680u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x2a0684: 0x2663025  or          $a2, $s3, $a2
    ctx->pc = 0x2a0684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) | GPR_U64(ctx, 6));
    // 0x2a0688: 0x460a01c0  add.s       $f7, $f0, $f10
    ctx->pc = 0x2a0688u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2a068c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x2a068cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a0690: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x2a0690u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a0694: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x2a0694u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2a0698: 0x46090240  add.s       $f9, $f0, $f9
    ctx->pc = 0x2a0698u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2a069c: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x2a069cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a06a0: 0x460f2100  add.s       $f4, $f4, $f15
    ctx->pc = 0x2a06a0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[15]);
    // 0x2a06a4: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x2a06a4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a06a8: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x2a06a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x2a06ac: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2a06acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a06b0: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x2a06b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x2a06b4: 0xe7a90024  swc1        $f9, 0x24($sp)
    ctx->pc = 0x2a06b4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a06b8: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x2a06b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a06bc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2a06bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a06c0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a06c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a06c4: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x2a06c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a06c8: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x2a06c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a06cc: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x2a06ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a06d0: 0xc0a83da  jal         func_2A0F68
    ctx->pc = 0x2A06D0u;
    SET_GPR_U32(ctx, 31, 0x2A06D8u);
    ctx->pc = 0x2A06D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A06D0u;
    // 0x2a06d4: 0xe7a40048  swc1        $f4, 0x48($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0F68u, 0x2A06D0u, 0x2A06D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A06D8u;
label_2a06d8:
    // 0x2a06d8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2a06d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2a06dc:
    // 0x2a06dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a06dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2a06e0:
    // 0x2a06e0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2a06e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a06e4: 0x1440ff24  bnez        $v0, . + 4 + (-0xDC << 2)
    ctx->pc = 0x2A06E4u;
    {
        const bool branch_taken_0x2a06e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06E4u;
        // 0x2a06e8: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a06e4) {
            ctx->pc = 0x2A0378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0378;
        }
    }
    ctx->pc = 0x2A06ECu;
label_2a06ec:
    // 0x2a06ec: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2a06ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a06f0: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2a06f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a06f4: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x2a06f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a06f8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2a06f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a06fc: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x2a06fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a0700: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2a0700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a0704: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2a0704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0708: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2a0708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a070c: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x2a070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a0710: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x2a0710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a0714: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2a0714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a0718: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2a0718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a071c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A071Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A071Cu;
        // 0x2a0720: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A071Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0724u;
}
