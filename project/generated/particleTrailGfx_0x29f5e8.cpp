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

// Function: particleTrailGfx
// Address: 0x29f5e8 - 0x29fe20
void particleTrailGfx_0x29f5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleTrailGfx_0x29f5e8");
#endif

    switch (ctx->pc) {
        case 0x29f6b4u: goto label_29f6b4;
        case 0x29f6bcu: goto label_29f6bc;
        case 0x29f6e8u: goto label_29f6e8;
        case 0x29f858u: goto label_29f858;
        case 0x29fa78u: goto label_29fa78;
        case 0x29fa84u: goto label_29fa84;
        case 0x29fa94u: goto label_29fa94;
        case 0x29faa0u: goto label_29faa0;
        case 0x29fab0u: goto label_29fab0;
        case 0x29fac0u: goto label_29fac0;
        case 0x29faccu: goto label_29facc;
        case 0x29fadcu: goto label_29fadc;
        case 0x29fae8u: goto label_29fae8;
        case 0x29faf0u: goto label_29faf0;
        case 0x29fafcu: goto label_29fafc;
        default: break;
    }

    ctx->pc = 0x29f5e8u;

    // 0x29f5e8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x29f5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x29f5ec: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x29f5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29f5f0: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x29f5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x29f5f4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x29f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x29f5f8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x29f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x29f5fc: 0x246398c0  addiu       $v1, $v1, -0x6740
    ctx->pc = 0x29f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940864));
    // 0x29f600: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x29f600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x29f604: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29f604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x29f608: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x29f608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x29f60c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29f60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f610: 0xe7bc0150  swc1        $f28, 0x150($sp)
    ctx->pc = 0x29f610u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x29f614: 0x24509810  addiu       $s0, $v0, -0x67F0
    ctx->pc = 0x29f614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940688));
    // 0x29f618: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x29f618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x29f61c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29f61cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f620: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x29f620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x29f624: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x29f624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x29f628: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x29f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x29f62c: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x29f62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x29f630: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x29f630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x29f634: 0xe7bb0148  swc1        $f27, 0x148($sp)
    ctx->pc = 0x29f634u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x29f638: 0xe7ba0140  swc1        $f26, 0x140($sp)
    ctx->pc = 0x29f638u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x29f63c: 0xe7b90138  swc1        $f25, 0x138($sp)
    ctx->pc = 0x29f63cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x29f640: 0xe7b80130  swc1        $f24, 0x130($sp)
    ctx->pc = 0x29f640u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x29f644: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x29f644u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x29f648: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x29f648u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x29f64c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x29f64cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x29f650: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x29f650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x29f654: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x29f654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29f658: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x29f658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29f65c: 0xc4c10104  lwc1        $f1, 0x104($a2)
    ctx->pc = 0x29f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f660: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x29f660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x29f664: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x29f664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x29f668: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29f668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x29f66c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29f66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f670: 0x0  nop
    ctx->pc = 0x29f670u;
    // NOP
    // 0x29f674: 0x0  nop
    ctx->pc = 0x29f674u;
    // NOP
    // 0x29f678: 0x46010703  div.s       $f28, $f0, $f1
    ctx->pc = 0x29f678u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[28] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[28] = ctx->f[0] / ctx->f[1];
    // 0x29f67c: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x29f67cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29f680: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x29f680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29f684: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x29f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x29f688: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29f688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f68c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x29f68cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f690: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x29f690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x29f694: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x29f694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29f698: 0xc4b8000c  lwc1        $f24, 0xC($a1)
    ctx->pc = 0x29f698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x29f69c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29f6a0: 0xc4d70018  lwc1        $f23, 0x18($a2)
    ctx->pc = 0x29f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29f6a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x29f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29f6a8: 0xc479001c  lwc1        $f25, 0x1C($v1)
    ctx->pc = 0x29f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x29f6ac: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x29F6ACu;
    SET_GPR_U32(ctx, 31, 0x29F6B4u);
    ctx->pc = 0x29F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6ACu;
    // 0x29f6b0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x29F6ACu, 0x29F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6B4u;
label_29f6b4:
    // 0x29f6b4: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x29F6B4u;
    SET_GPR_U32(ctx, 31, 0x29F6BCu);
    ctx->pc = 0x29F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6B4u;
    // 0x29f6b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x29F6B4u, 0x29F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6BCu;
label_29f6bc:
    // 0x29f6bc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x29f6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29f6c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29f6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6c4: 0x18a001c1  blez        $a1, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x29F6C4u;
    {
        const bool branch_taken_0x29f6c4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x29F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F6C4u;
        // 0x29f6c8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f6c4) {
            ctx->pc = 0x29FDCCu;
            goto label_29fdcc;
        }
    }
    ctx->pc = 0x29F6CCu;
    // 0x29f6cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29f6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29f6d0: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x29f6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x29f6d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29f6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29f6d8: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x29f6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x29f6dc: 0x245e99f0  addiu       $fp, $v0, -0x6610
    ctx->pc = 0x29f6dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x29f6e0: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x29f6e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29f6e4: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x29f6e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_29f6e8:
    // 0x29f6e8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x29f6e8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f6ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29f6ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29f6f0: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x29f6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29f6f4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x29f6f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29f6f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29f6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29f6fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x29f6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29f700: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x29f700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x29f704: 0x0  nop
    ctx->pc = 0x29f704u;
    // NOP
    // 0x29f708: 0x0  nop
    ctx->pc = 0x29f708u;
    // NOP
    // 0x29f70c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29f70cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29f710: 0x46001a01  sub.s       $f8, $f3, $f0
    ctx->pc = 0x29f710u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x29f714: 0x46081036  c.le.s      $f2, $f8
    ctx->pc = 0x29f714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f718: 0x0  nop
    ctx->pc = 0x29f718u;
    // NOP
    // 0x29f71c: 0x450201a7  bc1fl       . + 4 + (0x1A7 << 2)
    ctx->pc = 0x29F71Cu;
    {
        const bool branch_taken_0x29f71c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f71c) {
            ctx->pc = 0x29F720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F71Cu;
            // 0x29f720: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FDBCu;
            goto label_29fdbc;
        }
    }
    ctx->pc = 0x29F724u;
    // 0x29f724: 0x46184034  c.lt.s      $f8, $f24
    ctx->pc = 0x29f724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f728: 0x0  nop
    ctx->pc = 0x29f728u;
    // NOP
    // 0x29f72c: 0x450001a2  bc1f        . + 4 + (0x1A2 << 2)
    ctx->pc = 0x29F72Cu;
    {
        const bool branch_taken_0x29f72c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F72Cu;
        // 0x29f730: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f72c) {
            ctx->pc = 0x29FDB8u;
            goto label_29fdb8;
        }
    }
    ctx->pc = 0x29F734u;
    // 0x29f734: 0xc7828d6c  lwc1        $f2, -0x7294($gp)
    ctx->pc = 0x29f734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29f738: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29f738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29f73c: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x29f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f740: 0xc4400850  lwc1        $f0, 0x850($v0)
    ctx->pc = 0x29f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f744: 0x46174034  c.lt.s      $f8, $f23
    ctx->pc = 0x29f744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f748: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x29f748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x29f74c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29f74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29f750: 0x0  nop
    ctx->pc = 0x29f750u;
    // NOP
    // 0x29f754: 0x0  nop
    ctx->pc = 0x29f754u;
    // NOP
    // 0x29f758: 0x46014503  div.s       $f20, $f8, $f1
    ctx->pc = 0x29f758u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[20] = ctx->f[8] / ctx->f[1];
    // 0x29f75c: 0x46080142  mul.s       $f5, $f0, $f8
    ctx->pc = 0x29f75cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x29f760: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29f760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29f764: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x29f764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x29f768: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x29f768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x29f76c: 0x0  nop
    ctx->pc = 0x29f76cu;
    // NOP
    // 0x29f770: 0x0  nop
    ctx->pc = 0x29f770u;
    // NOP
    // 0x29f774: 0x46031543  div.s       $f21, $f2, $f3
    ctx->pc = 0x29f774u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[21] = ctx->f[2] / ctx->f[3];
    // 0x29f778: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29F778u;
    {
        const bool branch_taken_0x29f778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F778u;
        // 0x29f77c: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f778) {
            ctx->pc = 0x29F794u;
            goto label_29f794;
        }
    }
    ctx->pc = 0x29F780u;
    // 0x29f780: 0x0  nop
    ctx->pc = 0x29f780u;
    // NOP
    // 0x29f784: 0x0  nop
    ctx->pc = 0x29f784u;
    // NOP
    // 0x29f788: 0x46174583  div.s       $f22, $f8, $f23
    ctx->pc = 0x29f788u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[22] = ctx->f[8] / ctx->f[23];
    // 0x29f78c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29F78Cu;
    {
        const bool branch_taken_0x29f78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f78c) {
            ctx->pc = 0x29F7B4u;
            goto label_29f7b4;
        }
    }
    ctx->pc = 0x29F794u;
label_29f794:
    // 0x29f794: 0x4619c001  sub.s       $f0, $f24, $f25
    ctx->pc = 0x29f794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[25]);
    // 0x29f798: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x29f798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f79c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29F79Cu;
    {
        const bool branch_taken_0x29f79c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f79c) {
            ctx->pc = 0x29F7B4u;
            goto label_29f7b4;
        }
    }
    ctx->pc = 0x29F7A4u;
    // 0x29f7a4: 0x4608c001  sub.s       $f0, $f24, $f8
    ctx->pc = 0x29f7a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[8]);
    // 0x29f7a8: 0x0  nop
    ctx->pc = 0x29f7a8u;
    // NOP
    // 0x29f7ac: 0x0  nop
    ctx->pc = 0x29f7acu;
    // NOP
    // 0x29f7b0: 0x46190583  div.s       $f22, $f0, $f25
    ctx->pc = 0x29f7b0u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[22] = ctx->f[0] / ctx->f[25];
label_29f7b4:
    // 0x29f7b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29f7b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f7b8: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x29f7b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f7bc: 0x0  nop
    ctx->pc = 0x29f7bcu;
    // NOP
    // 0x29f7c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x29F7C0u;
    {
        const bool branch_taken_0x29f7c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f7c0) {
            ctx->pc = 0x29F7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F7C0u;
            // 0x29f7c4: 0x46002847  neg.s       $f1, $f5 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F7C8u;
            goto label_29f7c8;
        }
    }
    ctx->pc = 0x29F7C8u;
label_29f7c8:
    // 0x29f7c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29f7cc: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x29f7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f7d0: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x29f7d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29f7d4: 0xc6460054  lwc1        $f6, 0x54($s2)
    ctx->pc = 0x29f7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29f7d8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x29f7d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x29f7dc: 0xc6470058  lwc1        $f7, 0x58($s2)
    ctx->pc = 0x29f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29f7e0: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x29f7e0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x29f7e4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x29f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29f7e8: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x29f7e8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x29f7ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29f7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f7f0: 0x2225021  addu        $t2, $s1, $v0
    ctx->pc = 0x29f7f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29f7f4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x29f7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29f7f8: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x29f7f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f7fc: 0xc46403a0  lwc1        $f4, 0x3A0($v1)
    ctx->pc = 0x29f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29f800: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x29f800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f804: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x29f804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f808: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x29f808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f80c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x29f80cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x29f810: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x29f810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f814: 0xc4e509e0  lwc1        $f5, 0x9E0($a3)
    ctx->pc = 0x29f814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 2528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29f818: 0xc50303a4  lwc1        $f3, 0x3A4($t0)
    ctx->pc = 0x29f818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29f81c: 0xc52209e4  lwc1        $f2, 0x9E4($t1)
    ctx->pc = 0x29f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 2532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29f820: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x29f820u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x29f824: 0xc44103a8  lwc1        $f1, 0x3A8($v0)
    ctx->pc = 0x29f824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f828: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x29f828u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x29f82c: 0xc54009e8  lwc1        $f0, 0x9E8($t2)
    ctx->pc = 0x29f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 2536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f830: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x29f830u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x29f834: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x29f834u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x29f838: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x29f838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x29f83c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x29f83cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x29f840: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x29f840u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x29f844: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29f844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29f848: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x29f848u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29f84c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x29f84cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29f850: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29F850u;
    SET_GPR_U32(ctx, 31, 0x29F858u);
    ctx->pc = 0x29F854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F850u;
    // 0x29f854: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29F850u, 0x29F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F858u;
label_29f858:
    // 0x29f858: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x29f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f85c: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x29f85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29f860: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x29f860u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x29f864: 0x46080836  c.le.s      $f1, $f8
    ctx->pc = 0x29f864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f868: 0x0  nop
    ctx->pc = 0x29f868u;
    // NOP
    // 0x29f86c: 0x45020152  bc1fl       . + 4 + (0x152 << 2)
    ctx->pc = 0x29F86Cu;
    {
        const bool branch_taken_0x29f86c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f86c) {
            ctx->pc = 0x29F870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F86Cu;
            // 0x29f870: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FDB8u;
            goto label_29fdb8;
        }
    }
    ctx->pc = 0x29F874u;
    // 0x29f874: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x29f874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f878: 0x0  nop
    ctx->pc = 0x29f878u;
    // NOP
    // 0x29f87c: 0x4500014d  bc1f        . + 4 + (0x14D << 2)
    ctx->pc = 0x29F87Cu;
    {
        const bool branch_taken_0x29f87c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F87Cu;
        // 0x29f880: 0xc7a50014  lwc1        $f5, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f87c) {
            ctx->pc = 0x29FDB4u;
            goto label_29fdb4;
        }
    }
    ctx->pc = 0x29F884u;
    // 0x29f884: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x29f884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f888: 0x0  nop
    ctx->pc = 0x29f888u;
    // NOP
    // 0x29f88c: 0x4502014a  bc1fl       . + 4 + (0x14A << 2)
    ctx->pc = 0x29F88Cu;
    {
        const bool branch_taken_0x29f88c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f88c) {
            ctx->pc = 0x29F890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F88Cu;
            // 0x29f890: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FDB8u;
            goto label_29fdb8;
        }
    }
    ctx->pc = 0x29F894u;
    // 0x29f894: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x29f894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f898: 0x0  nop
    ctx->pc = 0x29f898u;
    // NOP
    // 0x29f89c: 0x45000145  bc1f        . + 4 + (0x145 << 2)
    ctx->pc = 0x29F89Cu;
    {
        const bool branch_taken_0x29f89c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F89Cu;
        // 0x29f8a0: 0xc7a30018  lwc1        $f3, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f89c) {
            ctx->pc = 0x29FDB4u;
            goto label_29fdb4;
        }
    }
    ctx->pc = 0x29F8A4u;
    // 0x29f8a4: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x29f8a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f8a8: 0x0  nop
    ctx->pc = 0x29f8a8u;
    // NOP
    // 0x29f8ac: 0x45020142  bc1fl       . + 4 + (0x142 << 2)
    ctx->pc = 0x29F8ACu;
    {
        const bool branch_taken_0x29f8ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f8ac) {
            ctx->pc = 0x29F8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F8ACu;
            // 0x29f8b0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FDB8u;
            goto label_29fdb8;
        }
    }
    ctx->pc = 0x29F8B4u;
    // 0x29f8b4: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x29f8b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f8b8: 0x0  nop
    ctx->pc = 0x29f8b8u;
    // NOP
    // 0x29f8bc: 0x4500013d  bc1f        . + 4 + (0x13D << 2)
    ctx->pc = 0x29F8BCu;
    {
        const bool branch_taken_0x29f8bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8BCu;
        // 0x29f8c0: 0x3c090037  lui         $t1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f8bc) {
            ctx->pc = 0x29FDB4u;
            goto label_29fdb4;
        }
    }
    ctx->pc = 0x29F8C4u;
    // 0x29f8c4: 0x0  nop
    ctx->pc = 0x29f8c4u;
    // NOP
    // 0x29f8c8: 0x0  nop
    ctx->pc = 0x29f8c8u;
    // NOP
    // 0x29f8cc: 0x4600d183  div.s       $f6, $f26, $f0
    ctx->pc = 0x29f8ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[6] = ctx->f[26] / ctx->f[0];
    // 0x29f8d0: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x29f8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29f8d4: 0xc7808d70  lwc1        $f0, -0x7290($gp)
    ctx->pc = 0x29f8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f8d8: 0xc7ca0010  lwc1        $f10, 0x10($fp)
    ctx->pc = 0x29f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x29f8dc: 0x468052a0  cvt.s.w     $f10, $f10
    ctx->pc = 0x29f8dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[10], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x29f8e0: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x29f8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f8e4: 0xc7c90008  lwc1        $f9, 0x8($fp)
    ctx->pc = 0x29f8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x29f8e8: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x29f8e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x29f8ec: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x29f8ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29f8f0: 0xc644002c  lwc1        $f4, 0x2C($s2)
    ctx->pc = 0x29f8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29f8f4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x29f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29f8f8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x29f8f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x29f8fc: 0x8fc50024  lw          $a1, 0x24($fp)
    ctx->pc = 0x29f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x29f900: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x29f900u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x29f904: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x29f904u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x29f908: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29f908u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29f90c: 0x461b0000  add.s       $f0, $f0, $f27
    ctx->pc = 0x29f90cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
    // 0x29f910: 0x46064202  mul.s       $f8, $f8, $f6
    ctx->pc = 0x29f910u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x29f914: 0x25295c60  addiu       $t1, $t1, 0x5C60
    ctx->pc = 0x29f914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23648));
    // 0x29f918: 0x0  nop
    ctx->pc = 0x29f918u;
    // NOP
    // 0x29f91c: 0x0  nop
    ctx->pc = 0x29f91cu;
    // NOP
    // 0x29f920: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x29f920u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x29f924: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x29f924u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29f928: 0x46062982  mul.s       $f6, $f5, $f6
    ctx->pc = 0x29f928u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x29f92c: 0x52823  negu        $a1, $a1
    ctx->pc = 0x29f92cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x29f930: 0x46000164  .word       0x46000164                   # cvt.w.s     $f5, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f930u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x29f934: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x29f934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29f938: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x29f938u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x29f93c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x29f93cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x29f940: 0x461a0840  add.s       $f1, $f1, $f26
    ctx->pc = 0x29f940u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[26]);
    // 0x29f944: 0x24c69818  addiu       $a2, $a2, -0x67E8
    ctx->pc = 0x29f944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940696));
    // 0x29f948: 0x461a2100  add.s       $f4, $f4, $f26
    ctx->pc = 0x29f948u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[26]);
    // 0x29f94c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x29f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x29f950: 0x44853800  mtc1        $a1, $f7
    ctx->pc = 0x29f950u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x29f954: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x29f954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x29f958: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x29f958u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29f95c: 0x461c1082  mul.s       $f2, $f2, $f28
    ctx->pc = 0x29f95cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[28]);
    // 0x29f960: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x29f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x29f964: 0x24e79810  addiu       $a3, $a3, -0x67F0
    ctx->pc = 0x29f964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940688));
    // 0x29f968: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x29f968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x29f96c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x29f96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x29f970: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29f970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29f974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29f974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29f978: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x29f978u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x29f97c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x29f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29f980: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x29f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29f984: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29f984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29f988: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29f98c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x29f98cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x29f990: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x29f990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x29f994: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f998: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x29f998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x29f99c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f99cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29f9a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29f9a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29f9a4: 0x8c940004  lw          $s4, 0x4($a0)
    ctx->pc = 0x29f9a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29f9a8: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x29f9a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x29f9ac: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x29f9acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x29f9b0: 0xe7a80010  swc1        $f8, 0x10($sp)
    ctx->pc = 0x29f9b0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29f9b4: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x29f9b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29f9b8: 0x46085282  mul.s       $f10, $f10, $f8
    ctx->pc = 0x29f9b8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x29f9bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29f9bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29f9c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29f9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29f9c4: 0xc78c8d74  lwc1        $f12, -0x728C($gp)
    ctx->pc = 0x29f9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f9c8: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x29f9c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x29f9cc: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x29f9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x29f9d0: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x29f9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x29f9d4: 0x460639c2  mul.s       $f7, $f7, $f6
    ctx->pc = 0x29f9d4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x29f9d8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x29f9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x29f9dc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x29f9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x29f9e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29f9e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29f9e4: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x29f9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x29f9e8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x29f9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29f9ec: 0xc7c0001c  lwc1        $f0, 0x1C($fp)
    ctx->pc = 0x29f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f9f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29f9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29f9f4: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x29f9f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x29f9f8: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x29f9f8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x29f9fc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x29f9fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x29fa00: 0x461b2882  mul.s       $f2, $f5, $f27
    ctx->pc = 0x29fa00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[27]);
    // 0x29fa04: 0x461b0a82  mul.s       $f10, $f1, $f27
    ctx->pc = 0x29fa04u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[27]);
    // 0x29fa08: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x29fa08u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29fa0c: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x29fa0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x29fa10: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x29fa10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29fa14: 0x46014901  sub.s       $f4, $f9, $f1
    ctx->pc = 0x29fa14u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x29fa18: 0x46020181  sub.s       $f6, $f0, $f2
    ctx->pc = 0x29fa18u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x29fa1c: 0x460549c1  sub.s       $f7, $f9, $f5
    ctx->pc = 0x29fa1cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
    // 0x29fa20: 0x460a0200  add.s       $f8, $f0, $f10
    ctx->pc = 0x29fa20u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x29fa24: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x29fa24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29fa28: 0x46014840  add.s       $f1, $f9, $f1
    ctx->pc = 0x29fa28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x29fa2c: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x29fa2cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29fa30: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x29fa30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29fa34: 0xe7a70040  swc1        $f7, 0x40($sp)
    ctx->pc = 0x29fa34u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29fa38: 0x460e18c0  add.s       $f3, $f3, $f14
    ctx->pc = 0x29fa38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[14]);
    // 0x29fa3c: 0xe7a80044  swc1        $f8, 0x44($sp)
    ctx->pc = 0x29fa3cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29fa40: 0x460db502  mul.s       $f20, $f22, $f13
    ctx->pc = 0x29fa40u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[13]);
    // 0x29fa44: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x29fa44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29fa48: 0x46054a40  add.s       $f9, $f9, $f5
    ctx->pc = 0x29fa48u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x29fa4c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x29fa4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29fa50: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x29fa50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x29fa54: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x29fa54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29fa58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29fa58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29fa5c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x29fa5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29fa60: 0xe7a90030  swc1        $f9, 0x30($sp)
    ctx->pc = 0x29fa60u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29fa64: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x29fa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29fa68: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x29fa68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29fa6c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x29fa6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29fa70: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x29FA70u;
    SET_GPR_U32(ctx, 31, 0x29FA78u);
    ctx->pc = 0x29FA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA70u;
    // 0x29fa74: 0xe7a30048  swc1        $f3, 0x48($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x29FA70u, 0x29FA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA78u;
label_29fa78:
    // 0x29fa78: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x29fa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29fa7c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x29FA7Cu;
    SET_GPR_U32(ctx, 31, 0x29FA84u);
    ctx->pc = 0x29FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA7Cu;
    // 0x29fa80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x29FA7Cu, 0x29FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA84u;
label_29fa84:
    // 0x29fa84: 0x3405fc00  ori         $a1, $zero, 0xFC00
    ctx->pc = 0x29fa84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x29fa88: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x29fa88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x29fa8c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x29FA8Cu;
    SET_GPR_U32(ctx, 31, 0x29FA94u);
    ctx->pc = 0x29FA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA8Cu;
    // 0x29fa90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x29FA8Cu, 0x29FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA94u;
label_29fa94:
    // 0x29fa94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa98: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x29FA98u;
    SET_GPR_U32(ctx, 31, 0x29FAA0u);
    ctx->pc = 0x29FA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA98u;
    // 0x29fa9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x29FA98u, 0x29FAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAA0u;
label_29faa0:
    // 0x29faa0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x29faa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x29faa4: 0xdc259050  ld          $a1, -0x6FB0($at)
    ctx->pc = 0x29faa4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9050u));
    // 0x29faa8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x29FAA8u;
    SET_GPR_U32(ctx, 31, 0x29FAB0u);
    ctx->pc = 0x29FAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FAA8u;
    // 0x29faac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x29FAA8u, 0x29FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAB0u;
label_29fab0:
    // 0x29fab0: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29FAB0u;
    {
        const bool branch_taken_0x29fab0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x29FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FAB0u;
        // 0x29fab4: 0x2410007f  addiu       $s0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fab0) {
            ctx->pc = 0x29FAF4u;
            goto label_29faf4;
        }
    }
    ctx->pc = 0x29FAB8u;
    // 0x29fab8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x29FAB8u;
    SET_GPR_U32(ctx, 31, 0x29FAC0u);
    ctx->pc = 0x29FABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FAB8u;
    // 0x29fabc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x29FAB8u, 0x29FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAC0u;
label_29fac0:
    // 0x29fac0: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x29fac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29fac4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x29FAC4u;
    SET_GPR_U32(ctx, 31, 0x29FACCu);
    ctx->pc = 0x29FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FAC4u;
    // 0x29fac8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x29FAC4u, 0x29FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FACCu;
label_29facc:
    // 0x29facc: 0x3405fc00  ori         $a1, $zero, 0xFC00
    ctx->pc = 0x29faccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x29fad0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x29fad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x29fad4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x29FAD4u;
    SET_GPR_U32(ctx, 31, 0x29FADCu);
    ctx->pc = 0x29FAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FAD4u;
    // 0x29fad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x29FAD4u, 0x29FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FADCu;
label_29fadc:
    // 0x29fadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fae0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x29FAE0u;
    SET_GPR_U32(ctx, 31, 0x29FAE8u);
    ctx->pc = 0x29FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FAE0u;
    // 0x29fae4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x29FAE0u, 0x29FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAE8u;
label_29fae8:
    // 0x29fae8: 0xc0b8e42  jal         func_2E3908
    ctx->pc = 0x29FAE8u;
    SET_GPR_U32(ctx, 31, 0x29FAF0u);
    ctx->pc = 0x29FAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FAE8u;
    // 0x29faec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3908u, 0x29FAE8u, 0x29FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAF0u;
label_29faf0:
    // 0x29faf0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x29faf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29faf4:
    // 0x29faf4: 0xc0807de  jal         func_201F78
    ctx->pc = 0x29FAF4u;
    SET_GPR_U32(ctx, 31, 0x29FAFCu);
    ctx->pc = 0x29FAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FAF4u;
    // 0x29faf8: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x29FAF4u, 0x29FAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAFCu;
label_29fafc:
    // 0x29fafc: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x29fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29fb00: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x29fb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29fb04: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x29fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
    // 0x29fb08: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x29fb08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29fb0c: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x29fb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fb10: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29fb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29fb14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29fb18: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x29fb18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x29fb1c: 0x8f8a93a0  lw          $t2, -0x6C60($gp)
    ctx->pc = 0x29fb1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29fb20: 0x3c0390ae  lui         $v1, 0x90AE
    ctx->pc = 0x29fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37038 << 16));
    // 0x29fb24: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x29fb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x29fb28: 0x3c04eeee  lui         $a0, 0xEEEE
    ctx->pc = 0x29fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61166 << 16));
    // 0x29fb2c: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x29fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x29fb30: 0x3484eeee  ori         $a0, $a0, 0xEEEE
    ctx->pc = 0x29fb30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61166);
    // 0x29fb34: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fb38: 0x103600  sll         $a2, $s0, 24
    ctx->pc = 0x29fb38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x29fb3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29fb40: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x29fb40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x29fb44: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x29fb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x29fb48: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fb4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29fb50: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x29fb50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fb54: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fb58: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x29fb58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x29fb5c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29fb60: 0x155d00  sll         $t3, $s5, 20
    ctx->pc = 0x29fb60u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 21), 20));
    // 0x29fb64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fb68: 0x254c0010  addiu       $t4, $t2, 0x10
    ctx->pc = 0x29fb68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x29fb6c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x29fb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fb70: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29fb74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fb78: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x29fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x29fb7c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x29fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fb80: 0x143900  sll         $a3, $s4, 4
    ctx->pc = 0x29fb80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x29fb84: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29fb88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fb8c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fb8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29fb90: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x29fb90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x29fb94: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29fb98: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fb98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29fb9c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29fb9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29fba0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fba4: 0xeb4025  or          $t0, $a3, $t3
    ctx->pc = 0x29fba4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x29fba8: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29fbac: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29fbacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29fbb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fbb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29fbb8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fbbc: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x29fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x29fbc0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fbc4: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29fbc8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fbcc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29fbd0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fbd4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x29fbd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x29fbd8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fbdc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x29fbdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x29fbe0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fbe4: 0x3c061400  lui         $a2, 0x1400
    ctx->pc = 0x29fbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5120 << 16));
    // 0x29fbe8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x29fbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29fbec: 0x34c607fc  ori         $a2, $a2, 0x7FC
    ctx->pc = 0x29fbecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2044);
    // 0x29fbf0: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x29fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x29fbf4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fbf8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x29fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fbfc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fc00: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fc04: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fc04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x29fc08: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x29fc08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29fc0c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x29fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fc10: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29fc14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fc14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29fc18: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29fc18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29fc1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fc20: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fc20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29fc24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29fc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29fc28: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29fc2c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x29fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fc30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fc34: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x29fc34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x29fc38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29fc3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fc40: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29fc44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fc48: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29fc4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fc50: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29fc54: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x29fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29fc58: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29fc58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29fc5c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fc60: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29fc60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29fc64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fc68: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x29fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29fc6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fc70: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x29fc70u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29fc74: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x29fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x29fc78: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x29fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x29fc7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fc80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fc84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fc88: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29fc8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fc90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fc90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29fc94: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29fc94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29fc98: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x29fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fc9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fca0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x29fca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x29fca4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fca8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29fcac: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29fcacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29fcb0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x29fcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fcb4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fcb8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fcbc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fcbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29fcc0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29fcc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29fcc4: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29fcc8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29fccc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fcd0: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29fcd4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fcd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29fcdc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fce0: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29fce4: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x29fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x29fce8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29fcec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fcf0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29fcf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29fcf4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fcf8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29fcf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29fcfc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fd00: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29fd04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fd08: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x29fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fd0c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x29fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fd10: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fd10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29fd14: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x29fd14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29fd18: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x29fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29fd1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fd20: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x29fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x29fd24: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fd24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29fd28: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x29fd28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29fd2c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fd2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29fd30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29fd30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29fd34: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fd38: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x29fd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fd3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fd40: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29fd44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fd48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29fd4c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29fd50: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29fd54: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fd58: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29fd5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fd60: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29fd64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fd68: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29fd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29fd6c: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x29fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x29fd70: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29fd70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29fd74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fd78: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fd7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fd80: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29fd84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fd88: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fd88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29fd8c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29fd8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29fd90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fd94: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x29fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x29fd98: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fd9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fda0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fda4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29fda8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29fdac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29fdb0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_29fdb4:
    // 0x29fdb4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x29fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_29fdb8:
    // 0x29fdb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29fdb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_29fdbc:
    // 0x29fdbc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29fdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fdc0: 0x265102a  slt         $v0, $s3, $a1
    ctx->pc = 0x29fdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29fdc4: 0x1440fe48  bnez        $v0, . + 4 + (-0x1B8 << 2)
    ctx->pc = 0x29FDC4u;
    {
        const bool branch_taken_0x29fdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fdc4) {
            ctx->pc = 0x29F6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f6e8;
        }
    }
    ctx->pc = 0x29FDCCu;
label_29fdcc:
    // 0x29fdcc: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x29fdccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29fdd0: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x29fdd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29fdd4: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x29fdd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29fdd8: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x29fdd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29fddc: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x29fddcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29fde0: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x29fde0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29fde4: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x29fde4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29fde8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x29fde8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29fdec: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x29fdecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29fdf0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x29fdf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29fdf4: 0xc7bc0150  lwc1        $f28, 0x150($sp)
    ctx->pc = 0x29fdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x29fdf8: 0xc7bb0148  lwc1        $f27, 0x148($sp)
    ctx->pc = 0x29fdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x29fdfc: 0xc7ba0140  lwc1        $f26, 0x140($sp)
    ctx->pc = 0x29fdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x29fe00: 0xc7b90138  lwc1        $f25, 0x138($sp)
    ctx->pc = 0x29fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x29fe04: 0xc7b80130  lwc1        $f24, 0x130($sp)
    ctx->pc = 0x29fe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x29fe08: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x29fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29fe0c: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x29fe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29fe10: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x29fe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29fe14: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x29fe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29fe18: 0x3e00008  jr          $ra
    ctx->pc = 0x29FE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE18u;
        // 0x29fe1c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FE20u;
}
