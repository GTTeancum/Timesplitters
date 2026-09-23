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

// Function: particleNewBurst
// Address: 0x2983e0 - 0x298778
void particleNewBurst_0x2983e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewBurst_0x2983e0");
#endif

    switch (ctx->pc) {
        case 0x298438u: goto label_298438;
        case 0x298474u: goto label_298474;
        case 0x298518u: goto label_298518;
        case 0x298548u: goto label_298548;
        case 0x2985c4u: goto label_2985c4;
        case 0x298640u: goto label_298640;
        case 0x2986bcu: goto label_2986bc;
        default: break;
    }

    ctx->pc = 0x2983e0u;

    // 0x2983e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2983e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2983e4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2983e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2983e8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2983e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2983ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2983ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983f0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2983f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2983f4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2983f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983f8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2983f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2983fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2983fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298400: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x298400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x298404: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x298404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298408: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x298408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x29840c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x29840cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x298410: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x298410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x298414: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x298414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298418: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x298418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x29841c: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x29841cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x298420: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x298420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x298424: 0x24130068  addiu       $s3, $zero, 0x68
    ctx->pc = 0x298424u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x298428: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x298428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x29842c: 0x26f098c0  addiu       $s0, $s7, -0x6740
    ctx->pc = 0x29842cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940864));
    // 0x298430: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x298430u;
    SET_GPR_U32(ctx, 31, 0x298438u);
    ctx->pc = 0x298434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298430u;
    // 0x298434: 0xffbe00b0  sd          $fp, 0xB0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x298430u, 0x298438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298438u;
label_298438:
    // 0x298438: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x298438u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29843c: 0x11882b  sltu        $s1, $zero, $s1
    ctx->pc = 0x29843cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x298440: 0x2531018  mult        $v0, $s2, $s3
    ctx->pc = 0x298440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x298444: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x298444u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x298448: 0xaeb10008  sw          $s1, 0x8($s5)
    ctx->pc = 0x298448u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 17));
    // 0x29844c: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x29844cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
    // 0x298450: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x298450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298454: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x298454u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
    // 0x298458: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x298458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29845c: 0xaeb40014  sw          $s4, 0x14($s5)
    ctx->pc = 0x29845cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 20));
    // 0x298460: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x298460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298464: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x298464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298468: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x298468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29846c: 0xc0a5a28  jal         func_2968A0
    ctx->pc = 0x29846Cu;
    SET_GPR_U32(ctx, 31, 0x298474u);
    ctx->pc = 0x298470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29846Cu;
    // 0x298470: 0xe6a00010  swc1        $f0, 0x10($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2968A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968A0u, 0x29846Cu, 0x298474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298474u;
label_298474:
    // 0x298474: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x298474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x298478: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x298478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29847c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29847cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x298480: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x298480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x298484: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x298484u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x298488: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x298488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29848c: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x29848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298490: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x298490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298498: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x298498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29849c: 0xe6a10034  swc1        $f1, 0x34($s5)
    ctx->pc = 0x29849cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x2984a0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2984a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2984a4: 0xe6a0001c  swc1        $f0, 0x1C($s5)
    ctx->pc = 0x2984a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x2984a8: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x2984a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2984ac: 0xe6a10020  swc1        $f1, 0x20($s5)
    ctx->pc = 0x2984acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x2984b0: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2984b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2984b4: 0xe6b40028  swc1        $f20, 0x28($s5)
    ctx->pc = 0x2984b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x2984b8: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x2984b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x2984bc: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x2984bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2984c0: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2984c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2984c4: 0xc4c5004c  lwc1        $f5, 0x4C($a2)
    ctx->pc = 0x2984c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2984c8: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x2984c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2984cc: 0x46020102  mul.s       $f4, $f0, $f2
    ctx->pc = 0x2984ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2984d0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2984d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2984d4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2984d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2984d8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2984d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2984dc: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2984dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2984e0: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x2984e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2984e4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2984e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2984e8: 0x18400095  blez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2984E8u;
    {
        const bool branch_taken_0x2984e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2984ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984E8u;
        // 0x2984ec: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984e8) {
            ctx->pc = 0x298740u;
            goto label_298740;
        }
    }
    ctx->pc = 0x2984F0u;
    // 0x2984f0: 0x26a203a0  addiu       $v0, $s5, 0x3A0
    ctx->pc = 0x2984f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 928));
    // 0x2984f4: 0x26a403a4  addiu       $a0, $s5, 0x3A4
    ctx->pc = 0x2984f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 932));
    // 0x2984f8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2984f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2984fc: 0x26be03a8  addiu       $fp, $s5, 0x3A8
    ctx->pc = 0x2984fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 936));
    // 0x298500: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x298500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x298504: 0x26b409e0  addiu       $s4, $s5, 0x9E0
    ctx->pc = 0x298504u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 2528));
    // 0x298508: 0x26b309e4  addiu       $s3, $s5, 0x9E4
    ctx->pc = 0x298508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 2532));
    // 0x29850c: 0x26b209e8  addiu       $s2, $s5, 0x9E8
    ctx->pc = 0x29850cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 2536));
    // 0x298510: 0x26b00e90  addiu       $s0, $s5, 0xE90
    ctx->pc = 0x298510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 3728));
    // 0x298514: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x298514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_298518:
    // 0x298518: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x298518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x29851c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x29851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298520: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x298520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298524: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x298524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x298528: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x298528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29852c: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x29852cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x298530: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x298530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298534: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x298534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x298538: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x298538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29853c: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x29853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298540: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x298540u;
    SET_GPR_U32(ctx, 31, 0x298548u);
    ctx->pc = 0x298544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298540u;
    // 0x298544: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x298540u, 0x298548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298548u;
label_298548:
    // 0x298548: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29854c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x29854cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x298550: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x298550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x298554: 0x26e398c0  addiu       $v1, $s7, -0x6740
    ctx->pc = 0x298554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940864));
    // 0x298558: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x298558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x29855c: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x29855cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x298560: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x298560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x298564: 0x2223818  mult        $a3, $s1, $v0
    ctx->pc = 0x298564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x298568: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x298568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29856c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29856Cu;
    {
        const bool branch_taken_0x29856c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x298570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29856Cu;
        // 0x298570: 0xf43021  addu        $a2, $a3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29856c) {
            ctx->pc = 0x298580u;
            goto label_298580;
        }
    }
    ctx->pc = 0x298574u;
    // 0x298574: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x298574u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298578: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x298578u;
    {
        const bool branch_taken_0x298578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298578u;
        // 0x29857c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x298578) {
            ctx->pc = 0x298598u;
            goto label_298598;
        }
    }
    ctx->pc = 0x298580u;
label_298580:
    // 0x298580: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x298580u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x298584: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x298584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x298588: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x298588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29858c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29858cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298590: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x298590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x298594: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x298594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_298598:
    // 0x298598: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x298598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29859c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29859cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2985a0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2985a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2985a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2985a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2985a8: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2985a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2985ac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2985acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2985b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2985b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2985b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2985b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2985b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2985b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2985bc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2985BCu;
    SET_GPR_U32(ctx, 31, 0x2985C4u);
    ctx->pc = 0x2985C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985BCu;
    // 0x2985c0: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2985BCu, 0x2985C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985C4u;
label_2985c4:
    // 0x2985c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2985c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985c8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2985c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2985cc: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2985ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2985d0: 0x26e398c0  addiu       $v1, $s7, -0x6740
    ctx->pc = 0x2985d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940864));
    // 0x2985d4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2985d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2985d8: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x2985d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2985dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2985dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2985e0: 0x2223818  mult        $a3, $s1, $v0
    ctx->pc = 0x2985e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2985e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2985e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2985e8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2985E8u;
    {
        const bool branch_taken_0x2985e8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2985ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985E8u;
        // 0x2985ec: 0xf33021  addu        $a2, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985e8) {
            ctx->pc = 0x2985FCu;
            goto label_2985fc;
        }
    }
    ctx->pc = 0x2985F0u;
    // 0x2985f0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2985f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2985f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2985F4u;
    {
        const bool branch_taken_0x2985f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2985F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985F4u;
        // 0x2985f8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985f4) {
            ctx->pc = 0x298614u;
            goto label_298614;
        }
    }
    ctx->pc = 0x2985FCu;
label_2985fc:
    // 0x2985fc: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x2985fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x298600: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x298600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x298604: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x298604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x298608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x298608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29860c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29860cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x298610: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x298610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_298614:
    // 0x298614: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x298614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x298618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x298618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29861c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x29861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298620: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x298620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x298624: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x298624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298628: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x298628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29862c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x29862cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x298630: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x298630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x298634: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x298634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x298638: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x298638u;
    SET_GPR_U32(ctx, 31, 0x298640u);
    ctx->pc = 0x29863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298638u;
    // 0x29863c: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x298638u, 0x298640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298640u;
label_298640:
    // 0x298640: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298644: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x298644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x298648: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x298648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29864c: 0x26e398c0  addiu       $v1, $s7, -0x6740
    ctx->pc = 0x29864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940864));
    // 0x298650: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x298650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x298654: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x298654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x298658: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x298658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29865c: 0x2223818  mult        $a3, $s1, $v0
    ctx->pc = 0x29865cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x298660: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x298660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x298664: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x298664u;
    {
        const bool branch_taken_0x298664 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x298668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298664u;
        // 0x298668: 0xf23021  addu        $a2, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298664) {
            ctx->pc = 0x298678u;
            goto label_298678;
        }
    }
    ctx->pc = 0x29866Cu;
    // 0x29866c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x29866cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298670: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x298670u;
    {
        const bool branch_taken_0x298670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298670u;
        // 0x298674: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x298670) {
            ctx->pc = 0x298690u;
            goto label_298690;
        }
    }
    ctx->pc = 0x298678u;
label_298678:
    // 0x298678: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x298678u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x29867c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x29867cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x298680: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x298680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x298684: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x298684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298688: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x298688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29868c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29868cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_298690:
    // 0x298690: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x298690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x298694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x298694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298698: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x298698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29869c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29869cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2986a0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2986a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2986a4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2986a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2986a8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2986a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2986ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2986acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2986b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2986b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2986b4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2986B4u;
    SET_GPR_U32(ctx, 31, 0x2986BCu);
    ctx->pc = 0x2986B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986B4u;
    // 0x2986b8: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2986B4u, 0x2986BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986BCu;
label_2986bc:
    // 0x2986bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2986bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986c0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2986c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2986c4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2986C4u;
    {
        const bool branch_taken_0x2986c4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2986C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986C4u;
        // 0x2986c8: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986c4) {
            ctx->pc = 0x2986DCu;
            goto label_2986dc;
        }
    }
    ctx->pc = 0x2986CCu;
    // 0x2986cc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2986ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2986d0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2986d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2986d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2986D4u;
    {
        const bool branch_taken_0x2986d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986D4u;
        // 0x2986d8: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986d4) {
            ctx->pc = 0x2986F8u;
            goto label_2986f8;
        }
    }
    ctx->pc = 0x2986DCu;
label_2986dc:
    // 0x2986dc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2986dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2986e0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2986e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2986e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2986e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2986e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2986e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2986ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2986ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2986f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2986f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2986f4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2986f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2986f8:
    // 0x2986f8: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x2986f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2986fc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2986fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x298700: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x298700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298704: 0x26e298c0  addiu       $v0, $s7, -0x6740
    ctx->pc = 0x298704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940864));
    // 0x298708: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x298708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29870c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29870cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x298710: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x298710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298714: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x298714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x298718: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x298718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29871c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29871cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298724: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x298724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298728: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x298728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29872c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x29872cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x298730: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x298730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x298734: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x298734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x298738: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
    ctx->pc = 0x298738u;
    {
        const bool branch_taken_0x298738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298738u;
        // 0x29873c: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298738) {
            ctx->pc = 0x298518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298518;
        }
    }
    ctx->pc = 0x298740u;
label_298740:
    // 0x298740: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x298740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298744: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x298744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x298748: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x298748u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29874c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x29874cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x298750: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x298750u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x298754: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x298754u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298758: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x298758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29875c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x29875cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298760: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x298760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298764: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x298764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298768: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x298768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29876c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x29876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x298770: 0x3e00008  jr          $ra
    ctx->pc = 0x298770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298770u;
        // 0x298774: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298778u;
}
