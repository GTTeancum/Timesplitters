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

// Function: particleExplosionGfx
// Address: 0x29d558 - 0x29dc3c
void particleExplosionGfx_0x29d558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleExplosionGfx_0x29d558");
#endif

    switch (ctx->pc) {
        case 0x29d5d0u: goto label_29d5d0;
        case 0x29d678u: goto label_29d678;
        case 0x29d708u: goto label_29d708;
        case 0x29d868u: goto label_29d868;
        default: break;
    }

    ctx->pc = 0x29d558u;

    // 0x29d558: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x29d558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x29d55c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x29d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29d560: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x29d560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x29d564: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x29d564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x29d568: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x29d568u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d56c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x29d56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x29d570: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x29d570u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d574: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x29d574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x29d578: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29d578u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d57c: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x29d57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x29d580: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29d580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d584: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x29d584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x29d588: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29d588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d58c: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x29d58cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x29d590: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x29d590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x29d594: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x29d594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x29d598: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x29d598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x29d59c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x29d59cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x29d5a0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x29d5a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x29d5a4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29d5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x29d5a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29d5a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29d5ac: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x29d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d5b0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x29d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29d5b4: 0x0  nop
    ctx->pc = 0x29d5b4u;
    // NOP
    // 0x29d5b8: 0x0  nop
    ctx->pc = 0x29d5b8u;
    // NOP
    // 0x29d5bc: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x29d5bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
    // 0x29d5c0: 0x18800169  blez        $a0, . + 4 + (0x169 << 2)
    ctx->pc = 0x29D5C0u;
    {
        const bool branch_taken_0x29d5c0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x29D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5C0u;
        // 0x29d5c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5c0) {
            ctx->pc = 0x29DB68u;
            goto label_29db68;
        }
    }
    ctx->pc = 0x29D5C8u;
    // 0x29d5c8: 0x26350704  addiu       $s5, $s1, 0x704
    ctx->pc = 0x29d5c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1796));
    // 0x29d5cc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x29d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_29d5d0:
    // 0x29d5d0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x29d5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d5d4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x29d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x29d5d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x29d5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29d5dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d5e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29d5e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29d5e4: 0x46010d40  add.s       $f21, $f1, $f1
    ctx->pc = 0x29d5e4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x29d5e8: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x29d5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d5ec: 0x0  nop
    ctx->pc = 0x29d5ecu;
    // NOP
    // 0x29d5f0: 0x4502015a  bc1fl       . + 4 + (0x15A << 2)
    ctx->pc = 0x29D5F0u;
    {
        const bool branch_taken_0x29d5f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d5f0) {
            ctx->pc = 0x29D5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D5F0u;
            // 0x29d5f4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DB5Cu;
            goto label_29db5c;
        }
    }
    ctx->pc = 0x29D5F8u;
    // 0x29d5f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29d5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29d5fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29d5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29d600: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x29d600u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d604: 0x0  nop
    ctx->pc = 0x29d604u;
    // NOP
    // 0x29d608: 0x45020154  bc1fl       . + 4 + (0x154 << 2)
    ctx->pc = 0x29D608u;
    {
        const bool branch_taken_0x29d608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d608) {
            ctx->pc = 0x29D60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D608u;
            // 0x29d60c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DB5Cu;
            goto label_29db5c;
        }
    }
    ctx->pc = 0x29D610u;
    // 0x29d610: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29d610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29d614: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29d614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d618: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x29d618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d61c: 0x0  nop
    ctx->pc = 0x29d61cu;
    // NOP
    // 0x29d620: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29D620u;
    {
        const bool branch_taken_0x29d620 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D620u;
        // 0x29d624: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d620) {
            ctx->pc = 0x29D630u;
            goto label_29d630;
        }
    }
    ctx->pc = 0x29D628u;
    // 0x29d628: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x29d628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x29d62c: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x29d62cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29d630:
    // 0x29d630: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29d634: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x29d634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x29d638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29d638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d63c: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x29d63cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29d640: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29d640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d644: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x29d644u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x29d648: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29d648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d64c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x29d64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29d650: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x29d650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29d654: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x29d654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d658: 0xc4e203d0  lwc1        $f2, 0x3D0($a3)
    ctx->pc = 0x29d658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29d65c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x29d65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d660: 0xc46003c8  lwc1        $f0, 0x3C8($v1)
    ctx->pc = 0x29d660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d664: 0xc44103cc  lwc1        $f1, 0x3CC($v0)
    ctx->pc = 0x29d664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d668: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x29d668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29d66c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x29d66cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29d670: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29D670u;
    SET_GPR_U32(ctx, 31, 0x29D678u);
    ctx->pc = 0x29D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D670u;
    // 0x29d674: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29D670u, 0x29D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D678u;
label_29d678:
    // 0x29d678: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x29d678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29d67c: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x29d67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29d680: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x29d680u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x29d684: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x29d684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d688: 0x0  nop
    ctx->pc = 0x29d688u;
    // NOP
    // 0x29d68c: 0x45020132  bc1fl       . + 4 + (0x132 << 2)
    ctx->pc = 0x29D68Cu;
    {
        const bool branch_taken_0x29d68c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d68c) {
            ctx->pc = 0x29D690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D68Cu;
            // 0x29d690: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DB58u;
            goto label_29db58;
        }
    }
    ctx->pc = 0x29D694u;
    // 0x29d694: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x29d694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d698: 0x0  nop
    ctx->pc = 0x29d698u;
    // NOP
    // 0x29d69c: 0x4500012d  bc1f        . + 4 + (0x12D << 2)
    ctx->pc = 0x29D69Cu;
    {
        const bool branch_taken_0x29d69c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D69Cu;
        // 0x29d6a0: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d69c) {
            ctx->pc = 0x29DB54u;
            goto label_29db54;
        }
    }
    ctx->pc = 0x29D6A4u;
    // 0x29d6a4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x29d6a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d6a8: 0x0  nop
    ctx->pc = 0x29d6a8u;
    // NOP
    // 0x29d6ac: 0x4502012a  bc1fl       . + 4 + (0x12A << 2)
    ctx->pc = 0x29D6ACu;
    {
        const bool branch_taken_0x29d6ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d6ac) {
            ctx->pc = 0x29D6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D6ACu;
            // 0x29d6b0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DB58u;
            goto label_29db58;
        }
    }
    ctx->pc = 0x29D6B4u;
    // 0x29d6b4: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x29d6b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d6b8: 0x0  nop
    ctx->pc = 0x29d6b8u;
    // NOP
    // 0x29d6bc: 0x45000125  bc1f        . + 4 + (0x125 << 2)
    ctx->pc = 0x29D6BCu;
    {
        const bool branch_taken_0x29d6bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6BCu;
        // 0x29d6c0: 0xc7a90018  lwc1        $f9, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d6bc) {
            ctx->pc = 0x29DB54u;
            goto label_29db54;
        }
    }
    ctx->pc = 0x29D6C4u;
    // 0x29d6c4: 0x46090036  c.le.s      $f0, $f9
    ctx->pc = 0x29d6c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d6c8: 0x0  nop
    ctx->pc = 0x29d6c8u;
    // NOP
    // 0x29d6cc: 0x45020122  bc1fl       . + 4 + (0x122 << 2)
    ctx->pc = 0x29D6CCu;
    {
        const bool branch_taken_0x29d6cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d6cc) {
            ctx->pc = 0x29D6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D6CCu;
            // 0x29d6d0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DB58u;
            goto label_29db58;
        }
    }
    ctx->pc = 0x29D6D4u;
    // 0x29d6d4: 0x46034836  c.le.s      $f9, $f3
    ctx->pc = 0x29d6d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d6d8: 0x0  nop
    ctx->pc = 0x29d6d8u;
    // NOP
    // 0x29d6dc: 0x4502011e  bc1fl       . + 4 + (0x11E << 2)
    ctx->pc = 0x29D6DCu;
    {
        const bool branch_taken_0x29d6dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d6dc) {
            ctx->pc = 0x29D6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D6DCu;
            // 0x29d6e0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DB58u;
            goto label_29db58;
        }
    }
    ctx->pc = 0x29D6E4u;
    // 0x29d6e4: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x29d6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x29d6e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29d6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d6ec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x29d6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x29d6f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d6f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29d6f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x29d6f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29d6f8: 0x16600011  bnez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x29D6F8u;
    {
        const bool branch_taken_0x29d6f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6F8u;
        // 0x29d6fc: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d6f8) {
            ctx->pc = 0x29D740u;
            goto label_29d740;
        }
    }
    ctx->pc = 0x29D700u;
    // 0x29d700: 0xc0807de  jal         func_201F78
    ctx->pc = 0x29D700u;
    SET_GPR_U32(ctx, 31, 0x29D708u);
    ctx->pc = 0x29D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D700u;
    // 0x29d704: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x29D700u, 0x29D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D708u;
label_29d708:
    // 0x29d708: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x29d708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29d70c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x29d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29d710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d714: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29d714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d718: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x29d718u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x29d71c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x29d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29d720: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x29d720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29d724: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x29d724u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x29d728: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x29d728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29d72c: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x29d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x29d730: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x29d730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x29d734: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x29d734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29d738: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x29d738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29d73c: 0xc7a90018  lwc1        $f9, 0x18($sp)
    ctx->pc = 0x29d73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_29d740:
    // 0x29d740: 0x8e2303a0  lw          $v1, 0x3A0($s1)
    ctx->pc = 0x29d740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 928)));
    // 0x29d744: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29d744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x29d748: 0x2442a1c8  addiu       $v0, $v0, -0x5E38
    ctx->pc = 0x29d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943176));
    // 0x29d74c: 0x4616a942  mul.s       $f5, $f21, $f22
    ctx->pc = 0x29d74cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x29d750: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x29d750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29d754: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29d754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29d758: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29d758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d75c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d760: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x29d760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x29d764: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x29d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d768: 0x0  nop
    ctx->pc = 0x29d768u;
    // NOP
    // 0x29d76c: 0x0  nop
    ctx->pc = 0x29d76cu;
    // NOP
    // 0x29d770: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x29d770u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x29d774: 0x24a599f0  addiu       $a1, $a1, -0x6610
    ctx->pc = 0x29d774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x29d778: 0xc7878d38  lwc1        $f7, -0x72C8($gp)
    ctx->pc = 0x29d778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29d77c: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x29d77cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x29d780: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x29d780u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x329A14u));
    // 0x29d784: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x29d784u;
    { uint32_t bits = FAST_READ32(0x329A00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29d788: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x29d788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x29d78c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x29d78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x29d790: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x29d790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x29d794: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x29d794u;
    { uint32_t bits = FAST_READ32(0x3299F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29d798: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x29d798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x29d79c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x29d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x29d7a0: 0x0  nop
    ctx->pc = 0x29d7a0u;
    // NOP
    // 0x29d7a4: 0x0  nop
    ctx->pc = 0x29d7a4u;
    // NOP
    // 0x29d7a8: 0x46092943  div.s       $f5, $f5, $f9
    ctx->pc = 0x29d7a8u;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[9];
    // 0x29d7ac: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x29d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x29d7b0: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x29d7b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x29d7b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29d7b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29d7b8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x29d7b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29d7bc: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x29d7bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x29d7c0: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x29d7c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x29d7c4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x29d7c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29d7c8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x29d7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29d7cc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x29d7ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x29d7d0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x29d7d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29d7d4: 0x46002864  .word       0x46002864                   # cvt.w.s     $f1, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d7d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29d7d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29d7d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29d7dc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x29d7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29d7e0: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x29d7e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x29d7e4: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x29d7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d7e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29d7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29d7ec: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x29d7ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x29d7f0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29d7f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29d7f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x29d7f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29d7fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29d7fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29d800: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29d800u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29d804: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x29d804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x29d808: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x29d808u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x29d80c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x29d80cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29d810: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x29d810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x29d814: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x29d814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x29d818: 0x46021900  add.s       $f4, $f3, $f2
    ctx->pc = 0x29d818u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x29d81c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x29d81cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29d820: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x29d820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x29d824: 0x46050980  add.s       $f6, $f1, $f5
    ctx->pc = 0x29d824u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x29d828: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x29d828u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x29d82c: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x29d82cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29d830: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x29d830u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x29d834: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x29d834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29d838: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x29d838u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29d83c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x29d83cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29d840: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x29d840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29d844: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x29d844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29d848: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x29d848u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29d84c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x29d84cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29d850: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x29d850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29d854: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x29d854u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29d858: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x29d858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29d85c: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x29d85cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29d860: 0xc0807de  jal         func_201F78
    ctx->pc = 0x29D860u;
    SET_GPR_U32(ctx, 31, 0x29D868u);
    ctx->pc = 0x29D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D860u;
    // 0x29d864: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x29D860u, 0x29D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D868u;
label_29d868:
    // 0x29d868: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x29d868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29d86c: 0x121e00  sll         $v1, $s2, 24
    ctx->pc = 0x29d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x29d870: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x29d870u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29d874: 0x2c31825  or          $v1, $s6, $v1
    ctx->pc = 0x29d874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x29d878: 0xa08e0003  sb          $t6, 0x3($a0)
    ctx->pc = 0x29d878u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 14));
    // 0x29d87c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x29d87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x29d880: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29d880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29d884: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x29d884u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d888: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x29d888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29d88c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x29d88cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d890: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x29d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d894: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x29d894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29d898: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x29d898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x29d89c: 0x3c0a0400  lui         $t2, 0x400
    ctx->pc = 0x29d89cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1024 << 16));
    // 0x29d8a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d8a4: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d8a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29d8a8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29d8a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29d8ac: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x29d8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d8b0: 0x240b0800  addiu       $t3, $zero, 0x800
    ctx->pc = 0x29d8b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29d8b4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29d8b8: 0x24cd0010  addiu       $t5, $a2, 0x10
    ctx->pc = 0x29d8b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x29d8bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d8c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d8c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29d8c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29d8c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29d8c8: 0xac4f0000  sw          $t7, 0x0($v0)
    ctx->pc = 0x29d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 15));
    // 0x29d8cc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29d8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29d8d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d8d4: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29d8d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d8dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29d8e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d8e4: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29d8e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d8ec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29d8f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d8f4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29d8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29d8f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d8fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29d8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29d900: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d904: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29d904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29d908: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29d908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29d90c: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x29d90cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29d910: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d914: 0xaf8d93a0  sw          $t5, -0x6C60($gp)
    ctx->pc = 0x29d914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 13));
    // 0x29d918: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x29d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29d91c: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x29d91cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x29d920: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d924: 0x34e70800  ori         $a3, $a3, 0x800
    ctx->pc = 0x29d924u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2048);
    // 0x29d928: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d92c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x29d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d930: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29d930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29d934: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d938: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x29d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d93c: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d93cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x29d940: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x29d940u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29d944: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x29d944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29d948: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d94c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29d950: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d950u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29d954: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29d954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29d958: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d95c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d95cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29d960: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29d960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29d964: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d968: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d96c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29d970: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29d970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29d974: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29d974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29d978: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d97c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29d980: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d984: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29d984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29d988: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d98c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29d990: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29d990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29d994: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29d994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29d998: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d99c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29d99cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29d9a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d9a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d9a8: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x29d9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x29d9ac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29d9b0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x29d9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x29d9b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d9b8: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d9b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29d9bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29d9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29d9c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d9c4: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29d9c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d9cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d9d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d9d4: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x29d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29d9d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d9dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d9e0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x29d9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d9e4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d9e8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x29d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d9ec: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d9ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29d9f0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29d9f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29d9f4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29d9f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d9f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29d9fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29d9fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29da00: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29da04: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29da04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29da08: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29da08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29da0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29da10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29da10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29da14: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29da14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29da18: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29da18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29da1c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29da1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29da20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29da20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29da24: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x29da24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29da28: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x29da28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29da2c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29da2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29da30: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29da30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29da34: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29da34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29da38: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x29da38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29da3c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29da3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x29da40: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x29da40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29da44: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x29da44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29da48: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29da48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29da4c: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x29da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x29da50: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29da50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29da54: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x29da54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29da58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29da5c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29da5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29da60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29da60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29da64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29da64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29da68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29da68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29da6c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29da70: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29da70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29da74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29da74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29da78: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29da78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29da7c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29da80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29da80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29da84: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29da84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29da88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29da8c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29da90: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29da90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29da94: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29da94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29da98: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29da98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29da9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29da9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29daa0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29daa4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29daa8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29daac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29dab0: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29dab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29dab4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29dab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29dab8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29dabc: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x29dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x29dac0: 0x16650024  bne         $s3, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x29DAC0u;
    {
        const bool branch_taken_0x29dac0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 5));
        ctx->pc = 0x29DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAC0u;
        // 0x29dac4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dac0) {
            ctx->pc = 0x29DB54u;
            goto label_29db54;
        }
    }
    ctx->pc = 0x29DAC8u;
    // 0x29dac8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29dacc: 0x3c026cd0  lui         $v0, 0x6CD0
    ctx->pc = 0x29daccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27856 << 16));
    // 0x29dad0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29dad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29dad4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29dad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29dad8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29dadc: 0x34068017  ori         $a2, $zero, 0x8017
    ctx->pc = 0x29dadcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32791);
    // 0x29dae0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29dae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29dae4: 0x3c0490ae  lui         $a0, 0x90AE
    ctx->pc = 0x29dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37038 << 16));
    // 0x29dae8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29daec: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x29daecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x29daf0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29daf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29daf4: 0x3c03eeee  lui         $v1, 0xEEEE
    ctx->pc = 0x29daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61166 << 16));
    // 0x29daf8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29dafc: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x29dafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x29db00: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29db00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29db04: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x29db04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29db08: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x29db08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x29db0c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29db10: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29db10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29db14: 0x24a59700  addiu       $a1, $a1, -0x6900
    ctx->pc = 0x29db14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940416));
    // 0x29db18: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x29db18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x29db1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29db1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db20: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29db20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29db24: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29db24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x29db28: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29db28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29db2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29db30: 0xa1ae0003  sb          $t6, 0x3($t5)
    ctx->pc = 0x29db30u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 14));
    // 0x29db34: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29db34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29db38: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x29db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29db3c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x29db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29db40: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x29db40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29db44: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x29db44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x29db48: 0xa44f0000  sh          $t7, 0x0($v0)
    ctx->pc = 0x29db48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x29db4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29DB4Cu;
    {
        const bool branch_taken_0x29db4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB4Cu;
        // 0x29db50: 0xaf8393a0  sw          $v1, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db4c) {
            ctx->pc = 0x29DB58u;
            goto label_29db58;
        }
    }
    ctx->pc = 0x29DB54u;
label_29db54:
    // 0x29db54: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x29db54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_29db58:
    // 0x29db58: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x29db58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_29db5c:
    // 0x29db5c: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x29db5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29db60: 0x1440fe9b  bnez        $v0, . + 4 + (-0x165 << 2)
    ctx->pc = 0x29DB60u;
    {
        const bool branch_taken_0x29db60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB60u;
        // 0x29db64: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db60) {
            ctx->pc = 0x29D5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d5d0;
        }
    }
    ctx->pc = 0x29DB68u;
label_29db68:
    // 0x29db68: 0x12600026  beqz        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x29DB68u;
    {
        const bool branch_taken_0x29db68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB68u;
        // 0x29db6c: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db68) {
            ctx->pc = 0x29DC04u;
            goto label_29dc04;
        }
    }
    ctx->pc = 0x29DB70u;
    // 0x29db70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29db70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29db74: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29db74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29db78: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x29db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29db7c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29db80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29db80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29db84: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29db84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29db88: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x29db88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x29db8c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29db8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29db90: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29db90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29db94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x29db94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x29db98: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29db98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29db9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29db9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29dba0: 0x36658000  ori         $a1, $s3, 0x8000
    ctx->pc = 0x29dba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32768);
    // 0x29dba4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29dba8: 0x3c0390ae  lui         $v1, 0x90AE
    ctx->pc = 0x29dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37038 << 16));
    // 0x29dbac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29dbacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29dbb0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x29dbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x29dbb4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x29dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x29dbb8: 0x3c04eeee  lui         $a0, 0xEEEE
    ctx->pc = 0x29dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61166 << 16));
    // 0x29dbbc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29dbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29dbc0: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x29dbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29dbc4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29dbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x29dbc8: 0x3484eeee  ori         $a0, $a0, 0xEEEE
    ctx->pc = 0x29dbc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61166);
    // 0x29dbcc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29dbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29dbd0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x29dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29dbd4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29dbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x29dbd8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x29dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29dbdc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x29dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x29dbe0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x29dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x29dbe4: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x29dbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x29dbe8: 0x24639700  addiu       $v1, $v1, -0x6900
    ctx->pc = 0x29dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940416));
    // 0x29dbec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29dbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29dbf0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x29dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29dbf4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x29dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29dbf8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x29dbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x29dbfc: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x29dbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x29dc00: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x29dc00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
label_29dc04:
    // 0x29dc04: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x29dc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29dc08: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x29dc08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29dc0c: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x29dc0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29dc10: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x29dc10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29dc14: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x29dc14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29dc18: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x29dc18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29dc1c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x29dc1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29dc20: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x29dc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29dc24: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x29dc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29dc28: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x29dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29dc2c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x29dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29dc30: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x29dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29dc34: 0x3e00008  jr          $ra
    ctx->pc = 0x29DC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC34u;
        // 0x29dc38: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DC3Cu;
}
