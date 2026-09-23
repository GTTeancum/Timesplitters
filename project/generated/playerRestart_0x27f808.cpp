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

// Function: playerRestart
// Address: 0x27f808 - 0x27ff80
void playerRestart_0x27f808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerRestart_0x27f808");
#endif

    switch (ctx->pc) {
        case 0x27f840u: goto label_27f840;
        case 0x27f860u: goto label_27f860;
        case 0x27f914u: goto label_27f914;
        case 0x27f930u: goto label_27f930;
        case 0x27f94cu: goto label_27f94c;
        case 0x27f954u: goto label_27f954;
        case 0x27f974u: goto label_27f974;
        case 0x27f9d8u: goto label_27f9d8;
        case 0x27fa20u: goto label_27fa20;
        case 0x27fa64u: goto label_27fa64;
        case 0x27fa80u: goto label_27fa80;
        case 0x27fac0u: goto label_27fac0;
        case 0x27fae8u: goto label_27fae8;
        case 0x27fb0cu: goto label_27fb0c;
        case 0x27fc68u: goto label_27fc68;
        case 0x27fd6cu: goto label_27fd6c;
        case 0x27feb8u: goto label_27feb8;
        case 0x27fefcu: goto label_27fefc;
        case 0x27ff0cu: goto label_27ff0c;
        case 0x27ff24u: goto label_27ff24;
        case 0x27ff2cu: goto label_27ff2c;
        default: break;
    }

    ctx->pc = 0x27f808u;

    // 0x27f808: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27f808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27f80c: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x27f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x27f810: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27f810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27f814: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27f814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27f818: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27f818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f81c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x27f81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27f820: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27f820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27f824: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27f828: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27f828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27f82c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27f82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27f830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27f830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27f834: 0x184001c5  blez        $v0, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x27F834u;
    {
        const bool branch_taken_0x27f834 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F834u;
        // 0x27f838: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f834) {
            ctx->pc = 0x27FF4Cu;
            goto label_27ff4c;
        }
    }
    ctx->pc = 0x27F83Cu;
    // 0x27f83c: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x27f83cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
label_27f840:
    // 0x27f840: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x27f840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x27f844: 0x8f83b230  lw          $v1, -0x4DD0($gp)
    ctx->pc = 0x27f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x27f848: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x27f848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27f84c: 0xaf80b234  sw          $zero, -0x4DCC($gp)
    ctx->pc = 0x27f84cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947380), GPR_U32(ctx, 0));
    // 0x27f850: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x27f850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27f854: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x27f854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x27f858: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x27F858u;
    SET_GPR_U32(ctx, 31, 0x27F860u);
    ctx->pc = 0x27F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F858u;
    // 0x27f85c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x27F858u, 0x27F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F860u;
label_27f860:
    // 0x27f860: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x27f860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x27f864: 0x2442ff9b  addiu       $v0, $v0, -0x65
    ctx->pc = 0x27f864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967195));
    // 0x27f868: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x27f868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27f86c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x27F86Cu;
    {
        const bool branch_taken_0x27f86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F86Cu;
        // 0x27f870: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f86c) {
            ctx->pc = 0x27F8F0u;
            goto label_27f8f0;
        }
    }
    ctx->pc = 0x27F874u;
    // 0x27f874: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x27f874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x27f878: 0xae400180  sw          $zero, 0x180($s2)
    ctx->pc = 0x27f878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 0));
    // 0x27f87c: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x27f87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f880: 0xae400184  sw          $zero, 0x184($s2)
    ctx->pc = 0x27f880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 0));
    // 0x27f884: 0xe640016c  swc1        $f0, 0x16C($s2)
    ctx->pc = 0x27f884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 364), bits); }
    // 0x27f888: 0xae4001a4  sw          $zero, 0x1A4($s2)
    ctx->pc = 0x27f888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 0));
    // 0x27f88c: 0xae400224  sw          $zero, 0x224($s2)
    ctx->pc = 0x27f88cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 548), GPR_U32(ctx, 0));
    // 0x27f890: 0xae400228  sw          $zero, 0x228($s2)
    ctx->pc = 0x27f890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
    // 0x27f894: 0xae400264  sw          $zero, 0x264($s2)
    ctx->pc = 0x27f894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 0));
    // 0x27f898: 0xae4002e4  sw          $zero, 0x2E4($s2)
    ctx->pc = 0x27f898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 740), GPR_U32(ctx, 0));
    // 0x27f89c: 0xae4002e8  sw          $zero, 0x2E8($s2)
    ctx->pc = 0x27f89cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 744), GPR_U32(ctx, 0));
    // 0x27f8a0: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x27f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
    // 0x27f8a4: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x27f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x27f8a8: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x27f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x27f8ac: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x27f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x27f8b0: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x27f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
    // 0x27f8b4: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x27f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
    // 0x27f8b8: 0xae400088  sw          $zero, 0x88($s2)
    ctx->pc = 0x27f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
    // 0x27f8bc: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x27f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x27f8c0: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x27f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    // 0x27f8c4: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x27f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
    // 0x27f8c8: 0xe6400098  swc1        $f0, 0x98($s2)
    ctx->pc = 0x27f8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x27f8cc: 0xe640009c  swc1        $f0, 0x9C($s2)
    ctx->pc = 0x27f8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 156), bits); }
    // 0x27f8d0: 0xe64000a0  swc1        $f0, 0xA0($s2)
    ctx->pc = 0x27f8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
    // 0x27f8d4: 0xe6400158  swc1        $f0, 0x158($s2)
    ctx->pc = 0x27f8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 344), bits); }
    // 0x27f8d8: 0xe640015c  swc1        $f0, 0x15C($s2)
    ctx->pc = 0x27f8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 348), bits); }
    // 0x27f8dc: 0xe6400160  swc1        $f0, 0x160($s2)
    ctx->pc = 0x27f8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 352), bits); }
    // 0x27f8e0: 0xe6400164  swc1        $f0, 0x164($s2)
    ctx->pc = 0x27f8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 356), bits); }
    // 0x27f8e4: 0xe6400168  swc1        $f0, 0x168($s2)
    ctx->pc = 0x27f8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 360), bits); }
    // 0x27f8e8: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x27F8E8u;
    {
        const bool branch_taken_0x27f8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8E8u;
        // 0x27f8ec: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8e8) {
            ctx->pc = 0x27FD90u;
            goto label_27fd90;
        }
    }
    ctx->pc = 0x27F8F0u;
label_27f8f0:
    // 0x27f8f0: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x27f8f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x27f8f4: 0x2683c4a8  addiu       $v1, $s4, -0x3B58
    ctx->pc = 0x27f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952104));
    // 0x27f8f8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x27f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x27f8fc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x27f8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x27f900: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27F900u;
    {
        const bool branch_taken_0x27f900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F900u;
        // 0x27f904: 0x3c1101ff  lui         $s1, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f900) {
            ctx->pc = 0x27F944u;
            goto label_27f944;
        }
    }
    ctx->pc = 0x27F908u;
    // 0x27f908: 0x26309950  addiu       $s0, $s1, -0x66B0
    ctx->pc = 0x27f908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941008));
    // 0x27f90c: 0xc087efc  jal         func_21FBF0
    ctx->pc = 0x27F90Cu;
    SET_GPR_U32(ctx, 31, 0x27F914u);
    ctx->pc = 0x27F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F90Cu;
    // 0x27f910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FBF0u, 0x27F90Cu, 0x27F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F914u;
label_27f914:
    // 0x27f914: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x27f914u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27f918: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27f91c: 0xa6239950  sh          $v1, -0x66B0($s1)
    ctx->pc = 0x27f91cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294941008), (uint16_t)GPR_U32(ctx, 3));
    // 0x27f920: 0x3042ffaf  andi        $v0, $v0, 0xFFAF
    ctx->pc = 0x27f920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65455);
    // 0x27f924: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x27f924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    // 0x27f928: 0xc0895e2  jal         func_225788
    ctx->pc = 0x27F928u;
    SET_GPR_U32(ctx, 31, 0x27F930u);
    ctx->pc = 0x27F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F928u;
    // 0x27f92c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225788u, 0x27F928u, 0x27F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F930u;
label_27f930:
    // 0x27f930: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x27f930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x27f934: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x27f934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x27f938: 0x90430015  lbu         $v1, 0x15($v0)
    ctx->pc = 0x27f938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x27f93c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27F93Cu;
    {
        const bool branch_taken_0x27f93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F93Cu;
        // 0x27f940: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f93c) {
            ctx->pc = 0x27F96Cu;
            goto label_27f96c;
        }
    }
    ctx->pc = 0x27F944u;
label_27f944:
    // 0x27f944: 0xc08828c  jal         func_220A30
    ctx->pc = 0x27F944u;
    SET_GPR_U32(ctx, 31, 0x27F94Cu);
    ctx->pc = 0x27F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F944u;
    // 0x27f948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x27F944u, 0x27F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F94Cu;
label_27f94c:
    // 0x27f94c: 0xc08828c  jal         func_220A30
    ctx->pc = 0x27F94Cu;
    SET_GPR_U32(ctx, 31, 0x27F954u);
    ctx->pc = 0x27F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F94Cu;
    // 0x27f950: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x27F94Cu, 0x27F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F954u;
label_27f954:
    // 0x27f954: 0x24040b78  addiu       $a0, $zero, 0xB78
    ctx->pc = 0x27f954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x27f958: 0x8f839dd8  lw          $v1, -0x6228($gp)
    ctx->pc = 0x27f958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x27f95c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x27f95cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27f960: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27f960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27f964: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f968: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x27f968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_27f96c:
    // 0x27f96c: 0xc09fd6a  jal         func_27F5A8
    ctx->pc = 0x27F96Cu;
    SET_GPR_U32(ctx, 31, 0x27F974u);
    ctx->pc = 0x27F970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F96Cu;
    // 0x27f970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F5A8u, 0x27F96Cu, 0x27F974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F974u;
label_27f974:
    // 0x27f974: 0x2684c4a8  addiu       $a0, $s4, -0x3B58
    ctx->pc = 0x27f974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952104));
    // 0x27f978: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x27f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x27f97c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x27f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x27f980: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F980u;
    {
        const bool branch_taken_0x27f980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f980) {
            ctx->pc = 0x27F984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F980u;
            // 0x27f984: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F990u;
            goto label_27f990;
        }
    }
    ctx->pc = 0x27F988u;
    // 0x27f988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F988u;
    {
        const bool branch_taken_0x27f988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F988u;
        // 0x27f98c: 0x90840015  lbu         $a0, 0x15($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f988) {
            ctx->pc = 0x27F994u;
            goto label_27f994;
        }
    }
    ctx->pc = 0x27F990u;
label_27f990:
    // 0x27f990: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x27f990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_27f994:
    // 0x27f994: 0x2410002c  addiu       $s0, $zero, 0x2C
    ctx->pc = 0x27f994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x27f998: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x27f998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27f99c: 0x908018  mult        $s0, $a0, $s0
    ctx->pc = 0x27f99cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x27f9a0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x27f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x27f9a4: 0x244250e0  addiu       $v0, $v0, 0x50E0
    ctx->pc = 0x27f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20704));
    // 0x27f9a8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27f9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27f9ac: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x27f9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x27f9b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27f9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f9b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27f9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f9b8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27f9b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f9bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27f9bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27f9c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x27f9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27f9c4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x27f9c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x27f9c8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x27f9c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x27f9cc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x27f9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27f9d0: 0xc0a1f30  jal         func_287CC0
    ctx->pc = 0x27F9D0u;
    SET_GPR_U32(ctx, 31, 0x27F9D8u);
    ctx->pc = 0x27F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F9D0u;
    // 0x27f9d4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287CC0u, 0x27F9D0u, 0x27F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9D8u;
label_27f9d8:
    // 0x27f9d8: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x27f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x27f9dc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x27f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x27f9e0: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x27f9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x27f9e4: 0x3c070f00  lui         $a3, 0xF00
    ctx->pc = 0x27f9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3840 << 16));
    // 0x27f9e8: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x27f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x27f9ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f9f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27f9f4: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x27f9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x27f9f8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x27f9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x27f9fc: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x27f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x27fa00: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x27fa00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x27fa04: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x27fa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x27fa08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27fa08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fa0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27fa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27fa10: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x27fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x27fa14: 0xae420180  sw          $v0, 0x180($s2)
    ctx->pc = 0x27fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 2));
    // 0x27fa18: 0xc09829e  jal         func_260A78
    ctx->pc = 0x27FA18u;
    SET_GPR_U32(ctx, 31, 0x27FA20u);
    ctx->pc = 0x27FA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA18u;
    // 0x27fa1c: 0xac520164  sw          $s2, 0x164($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x27FA18u, 0x27FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA20u;
label_27fa20:
    // 0x27fa20: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x27fa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fa24: 0xe6410068  swc1        $f1, 0x68($s2)
    ctx->pc = 0x27fa24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x27fa28: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x27fa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fa2c: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x27fa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x27fa30: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x27fa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27fa34: 0xe654007c  swc1        $f20, 0x7C($s2)
    ctx->pc = 0x27fa34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x27fa38: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x27fa38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27fa3c: 0xe6420070  swc1        $f2, 0x70($s2)
    ctx->pc = 0x27fa3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x27fa40: 0xe6410078  swc1        $f1, 0x78($s2)
    ctx->pc = 0x27fa40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x27fa44: 0xe6410074  swc1        $f1, 0x74($s2)
    ctx->pc = 0x27fa44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x27fa48: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x27fa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fa4c: 0xe6400084  swc1        $f0, 0x84($s2)
    ctx->pc = 0x27fa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x27fa50: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x27fa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fa54: 0xe65406f0  swc1        $f20, 0x6F0($s2)
    ctx->pc = 0x27fa54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1776), bits); }
    // 0x27fa58: 0xe65406f4  swc1        $f20, 0x6F4($s2)
    ctx->pc = 0x27fa58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1780), bits); }
    // 0x27fa5c: 0xc08969c  jal         func_225A70
    ctx->pc = 0x27FA5Cu;
    SET_GPR_U32(ctx, 31, 0x27FA64u);
    ctx->pc = 0x27FA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA5Cu;
    // 0x27fa60: 0xe6410088  swc1        $f1, 0x88($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x225A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225A70u, 0x27FA5Cu, 0x27FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA64u;
label_27fa64:
    // 0x27fa64: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27FA64u;
    {
        const bool branch_taken_0x27fa64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA64u;
        // 0x27fa68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa64) {
            ctx->pc = 0x27FAA4u;
            goto label_27faa4;
        }
    }
    ctx->pc = 0x27FA6Cu;
    // 0x27fa6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27fa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa70: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x27fa70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x27fa74: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x27fa74u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x27fa78: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x27FA78u;
    SET_GPR_U32(ctx, 31, 0x27FA80u);
    ctx->pc = 0x27FA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA78u;
    // 0x27fa7c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x27FA78u, 0x27FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA80u;
label_27fa80:
    // 0x27fa80: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x27fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27fa84: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x27fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x27fa88: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x27fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x27fa8c: 0x246300cd  addiu       $v1, $v1, 0xCD
    ctx->pc = 0x27fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 205));
    // 0x27fa90: 0xae420184  sw          $v0, 0x184($s2)
    ctx->pc = 0x27fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
    // 0x27fa94: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x27fa94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x27fa98: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x27fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x27fa9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27FA9Cu;
    {
        const bool branch_taken_0x27fa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA9Cu;
        // 0x27faa0: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa9c) {
            ctx->pc = 0x27FAA8u;
            goto label_27faa8;
        }
    }
    ctx->pc = 0x27FAA4u;
label_27faa4:
    // 0x27faa4: 0xae400184  sw          $zero, 0x184($s2)
    ctx->pc = 0x27faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 0));
label_27faa8:
    // 0x27faa8: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x27faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x27faac: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x27faacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27fab0: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x27fab0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x27fab4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x27fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27fab8: 0x8c500160  lw          $s0, 0x160($v0)
    ctx->pc = 0x27fab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x27fabc: 0x26020268  addiu       $v0, $s0, 0x268
    ctx->pc = 0x27fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
label_27fac0:
    // 0x27fac0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x27fac4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27fac8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x27fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x27facc: 0x0  nop
    ctx->pc = 0x27faccu;
    // NOP
    // 0x27fad0: 0x0  nop
    ctx->pc = 0x27fad0u;
    // NOP
    // 0x27fad4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27FAD4u;
    {
        const bool branch_taken_0x27fad4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27fad4) {
            ctx->pc = 0x27FAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27fac0;
        }
    }
    ctx->pc = 0x27FADCu;
    // 0x27fadc: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x27fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x27fae0: 0xc0a2246  jal         func_288918
    ctx->pc = 0x27FAE0u;
    SET_GPR_U32(ctx, 31, 0x27FAE8u);
    ctx->pc = 0x27FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FAE0u;
    // 0x27fae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288918u, 0x27FAE0u, 0x27FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FAE8u;
label_27fae8:
    // 0x27fae8: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x27fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x27faec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27faecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27faf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27faf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27faf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27faf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27faf8: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x27faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x27fafc: 0xe4400208  swc1        $f0, 0x208($v0)
    ctx->pc = 0x27fafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 520), bits); }
    // 0x27fb00: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x27fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x27fb04: 0xc08828c  jal         func_220A30
    ctx->pc = 0x27FB04u;
    SET_GPR_U32(ctx, 31, 0x27FB0Cu);
    ctx->pc = 0x27FB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB04u;
    // 0x27fb08: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x27FB04u, 0x27FB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB0Cu;
label_27fb0c:
    // 0x27fb0c: 0x24040b78  addiu       $a0, $zero, 0xB78
    ctx->pc = 0x27fb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x27fb10: 0xae0011b0  sw          $zero, 0x11B0($s0)
    ctx->pc = 0x27fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4528), GPR_U32(ctx, 0));
    // 0x27fb14: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x27fb14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27fb18: 0x2683c4a8  addiu       $v1, $s4, -0x3B58
    ctx->pc = 0x27fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952104));
    // 0x27fb1c: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x27fb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x27fb20: 0x8f849dd8  lw          $a0, -0x6228($gp)
    ctx->pc = 0x27fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x27fb24: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x27fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x27fb28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27fb2c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x27fb2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x27fb30: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x27FB30u;
    {
        const bool branch_taken_0x27fb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB30u;
        // 0x27fb34: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb30) {
            ctx->pc = 0x27FBE4u;
            goto label_27fbe4;
        }
    }
    ctx->pc = 0x27FB38u;
    // 0x27fb38: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27fb3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27fb40: 0x244287f0  addiu       $v0, $v0, -0x7810
    ctx->pc = 0x27fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936560));
    // 0x27fb44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27fb48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27fb4c: 0x800008  jr          $a0
    ctx->pc = 0x27FB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27FB54u: goto label_27fb54;
            case 0x27FB6Cu: goto label_27fb6c;
            case 0x27FB90u: goto label_27fb90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FB4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27FB54u;
label_27fb54:
    // 0x27fb54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fb58: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x27fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x27fb5c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x27fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x27fb60: 0x8c83c384  lw          $v1, -0x3C7C($a0)
    ctx->pc = 0x27fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C384u));
    // 0x27fb64: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x27FB64u;
    {
        const bool branch_taken_0x27fb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB64u;
        // 0x27fb68: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb64) {
            ctx->pc = 0x27FBE4u;
            goto label_27fbe4;
        }
    }
    ctx->pc = 0x27FB6Cu;
label_27fb6c:
    // 0x27fb6c: 0x2683c4a8  addiu       $v1, $s4, -0x3B58
    ctx->pc = 0x27fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952104));
    // 0x27fb70: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x27fb70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x27fb74: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x27fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x27fb78: 0x24a5c378  addiu       $a1, $a1, -0x3C88
    ctx->pc = 0x27fb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951800));
    // 0x27fb7c: 0x90640023  lbu         $a0, 0x23($v1)
    ctx->pc = 0x27fb7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x27fb80: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x27fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x27fb84: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x27fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x27fb88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27FB88u;
    {
        const bool branch_taken_0x27fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB88u;
        // 0x27fb8c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb88) {
            ctx->pc = 0x27FBBCu;
            goto label_27fbbc;
        }
    }
    ctx->pc = 0x27FB90u;
label_27fb90:
    // 0x27fb90: 0x2683c4a8  addiu       $v1, $s4, -0x3B58
    ctx->pc = 0x27fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952104));
    // 0x27fb94: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x27fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x27fb98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27fb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27fb9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27FB9Cu;
    {
        const bool branch_taken_0x27fb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB9Cu;
        // 0x27fba0: 0x731021  addu        $v0, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb9c) {
            ctx->pc = 0x27FBC8u;
            goto label_27fbc8;
        }
    }
    ctx->pc = 0x27FBA4u;
    // 0x27fba4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x27fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x27fba8: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x27fba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x27fbac: 0x2484c378  addiu       $a0, $a0, -0x3C88
    ctx->pc = 0x27fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951800));
    // 0x27fbb0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x27fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x27fbb4: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x27fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x27fbb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_27fbbc:
    // 0x27fbbc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x27fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27fbc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27FBC0u;
    {
        const bool branch_taken_0x27fbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBC0u;
        // 0x27fbc4: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbc0) {
            ctx->pc = 0x27FBE4u;
            goto label_27fbe4;
        }
    }
    ctx->pc = 0x27FBC8u;
label_27fbc8:
    // 0x27fbc8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x27fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x27fbcc: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x27fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x27fbd0: 0x2442c408  addiu       $v0, $v0, -0x3BF8
    ctx->pc = 0x27fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951944));
    // 0x27fbd4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x27fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x27fbd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27fbdc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27fbe0: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x27fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_27fbe4:
    // 0x27fbe4: 0x2683c4a8  addiu       $v1, $s4, -0x3B58
    ctx->pc = 0x27fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952104));
    // 0x27fbe8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x27fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x27fbec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27fbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27fbf0: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x27FBF0u;
    {
        const bool branch_taken_0x27fbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBF0u;
        // 0x27fbf4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbf0) {
            ctx->pc = 0x27FCFCu;
            goto label_27fcfc;
        }
    }
    ctx->pc = 0x27FBF8u;
    // 0x27fbf8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x27fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27fbfc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27FBFCu;
    {
        const bool branch_taken_0x27fbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBFCu;
        // 0x27fc00: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbfc) {
            ctx->pc = 0x27FC3Cu;
            goto label_27fc3c;
        }
    }
    ctx->pc = 0x27FC04u;
    // 0x27fc04: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x27fc04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27fc08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FC08u;
    {
        const bool branch_taken_0x27fc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC08u;
        // 0x27fc0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc08) {
            ctx->pc = 0x27FC20u;
            goto label_27fc20;
        }
    }
    ctx->pc = 0x27FC10u;
    // 0x27fc10: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27FC10u;
    {
        const bool branch_taken_0x27fc10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27fc10) {
            ctx->pc = 0x27FC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FC10u;
            // 0x27fc14: 0x240401ab  addiu       $a0, $zero, 0x1AB (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 427));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FC48u;
            goto label_27fc48;
        }
    }
    ctx->pc = 0x27FC18u;
    // 0x27fc18: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27FC18u;
    {
        const bool branch_taken_0x27fc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC18u;
        // 0x27fc1c: 0x8e420180  lw          $v0, 0x180($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc18) {
            ctx->pc = 0x27FC4Cu;
            goto label_27fc4c;
        }
    }
    ctx->pc = 0x27FC20u;
label_27fc20:
    // 0x27fc20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27fc24: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27FC24u;
    {
        const bool branch_taken_0x27fc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC24u;
        // 0x27fc28: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc24) {
            ctx->pc = 0x27FC44u;
            goto label_27fc44;
        }
    }
    ctx->pc = 0x27FC2Cu;
    // 0x27fc2c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FC2Cu;
    {
        const bool branch_taken_0x27fc2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27fc2c) {
            ctx->pc = 0x27FC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FC2Cu;
            // 0x27fc30: 0x240401ae  addiu       $a0, $zero, 0x1AE (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FC48u;
            goto label_27fc48;
        }
    }
    ctx->pc = 0x27FC34u;
    // 0x27fc34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27FC34u;
    {
        const bool branch_taken_0x27fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC34u;
        // 0x27fc38: 0x8e420180  lw          $v0, 0x180($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc34) {
            ctx->pc = 0x27FC4Cu;
            goto label_27fc4c;
        }
    }
    ctx->pc = 0x27FC3Cu;
label_27fc3c:
    // 0x27fc3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27FC3Cu;
    {
        const bool branch_taken_0x27fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC3Cu;
        // 0x27fc40: 0x240401ad  addiu       $a0, $zero, 0x1AD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc3c) {
            ctx->pc = 0x27FC48u;
            goto label_27fc48;
        }
    }
    ctx->pc = 0x27FC44u;
label_27fc44:
    // 0x27fc44: 0x240401ac  addiu       $a0, $zero, 0x1AC
    ctx->pc = 0x27fc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
label_27fc48:
    // 0x27fc48: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x27fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
label_27fc4c:
    // 0x27fc4c: 0xc78087ec  lwc1        $f0, -0x7814($gp)
    ctx->pc = 0x27fc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fc50: 0xc44d0034  lwc1        $f13, 0x34($v0)
    ctx->pc = 0x27fc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27fc54: 0xc44e0038  lwc1        $f14, 0x38($v0)
    ctx->pc = 0x27fc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x27fc58: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x27fc58u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x27fc5c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x27fc5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x27fc60: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x27FC60u;
    SET_GPR_U32(ctx, 31, 0x27FC68u);
    ctx->pc = 0x27FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC60u;
    // 0x27fc64: 0xc44c0030  lwc1        $f12, 0x30($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x27FC60u, 0x27FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC68u;
label_27fc68:
    // 0x27fc68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27fc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fc70: 0x12620010  beq         $s3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27FC70u;
    {
        const bool branch_taken_0x27fc70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC70u;
        // 0x27fc74: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc70) {
            ctx->pc = 0x27FCB4u;
            goto label_27fcb4;
        }
    }
    ctx->pc = 0x27FC78u;
    // 0x27fc78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FC78u;
    {
        const bool branch_taken_0x27fc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC78u;
        // 0x27fc7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc78) {
            ctx->pc = 0x27FC90u;
            goto label_27fc90;
        }
    }
    ctx->pc = 0x27FC80u;
    // 0x27fc80: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x27FC80u;
    {
        const bool branch_taken_0x27fc80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fc80) {
            ctx->pc = 0x27FCA8u;
            goto label_27fca8;
        }
    }
    ctx->pc = 0x27FC88u;
    // 0x27fc88: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27FC88u;
    {
        const bool branch_taken_0x27fc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC88u;
        // 0x27fc8c: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc88) {
            ctx->pc = 0x27FCE0u;
            goto label_27fce0;
        }
    }
    ctx->pc = 0x27FC90u;
label_27fc90:
    // 0x27fc90: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27FC90u;
    {
        const bool branch_taken_0x27fc90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC90u;
        // 0x27fc94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc90) {
            ctx->pc = 0x27FCC0u;
            goto label_27fcc0;
        }
    }
    ctx->pc = 0x27FC98u;
    // 0x27fc98: 0x5262000c  beql        $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27FC98u;
    {
        const bool branch_taken_0x27fc98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x27fc98) {
            ctx->pc = 0x27FC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FC98u;
            // 0x27fc9c: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FCCCu;
            goto label_27fccc;
        }
    }
    ctx->pc = 0x27FCA0u;
    // 0x27fca0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27FCA0u;
    {
        const bool branch_taken_0x27fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCA0u;
        // 0x27fca4: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fca0) {
            ctx->pc = 0x27FCE0u;
            goto label_27fce0;
        }
    }
    ctx->pc = 0x27FCA8u;
label_27fca8:
    // 0x27fca8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x27fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x27fcac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27FCACu;
    {
        const bool branch_taken_0x27fcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCACu;
        // 0x27fcb0: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcac) {
            ctx->pc = 0x27FCD0u;
            goto label_27fcd0;
        }
    }
    ctx->pc = 0x27FCB4u;
label_27fcb4:
    // 0x27fcb4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x27fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x27fcb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27FCB8u;
    {
        const bool branch_taken_0x27fcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCB8u;
        // 0x27fcbc: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcb8) {
            ctx->pc = 0x27FCD0u;
            goto label_27fcd0;
        }
    }
    ctx->pc = 0x27FCC0u;
label_27fcc0:
    // 0x27fcc0: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x27fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x27fcc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27FCC4u;
    {
        const bool branch_taken_0x27fcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCC4u;
        // 0x27fcc8: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcc4) {
            ctx->pc = 0x27FCD0u;
            goto label_27fcd0;
        }
    }
    ctx->pc = 0x27FCCCu;
label_27fccc:
    // 0x27fccc: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x27fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_27fcd0:
    // 0x27fcd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27fcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27fcd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27fcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27fcd8: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x27fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x27fcdc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x27fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_27fce0:
    // 0x27fce0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x27fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x27fce4: 0x8e440180  lw          $a0, 0x180($s2)
    ctx->pc = 0x27fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x27fce8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27fce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27fcec: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x27fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x27fcf0: 0xac850218  sw          $a1, 0x218($a0)
    ctx->pc = 0x27fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 5));
    // 0x27fcf4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x27fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x27fcf8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x27fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_27fcfc:
    // 0x27fcfc: 0x24020160  addiu       $v0, $zero, 0x160
    ctx->pc = 0x27fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x27fd00: 0x26a5f838  addiu       $a1, $s5, -0x7C8
    ctx->pc = 0x27fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965304));
    // 0x27fd04: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x27fd04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27fd08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27fd0c: 0xae4001a4  sw          $zero, 0x1A4($s2)
    ctx->pc = 0x27fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 0));
    // 0x27fd10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27fd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd14: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x27fd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x27fd18: 0xae400224  sw          $zero, 0x224($s2)
    ctx->pc = 0x27fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 548), GPR_U32(ctx, 0));
    // 0x27fd1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27fd20: 0xae400228  sw          $zero, 0x228($s2)
    ctx->pc = 0x27fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
    // 0x27fd24: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x27fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x27fd28: 0xac40010c  sw          $zero, 0x10C($v0)
    ctx->pc = 0x27fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 0));
    // 0x27fd2c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x27fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x27fd30: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x27fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
    // 0x27fd34: 0xae4301a0  sw          $v1, 0x1A0($s2)
    ctx->pc = 0x27fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 3));
    // 0x27fd38: 0xae400198  sw          $zero, 0x198($s2)
    ctx->pc = 0x27fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 0));
    // 0x27fd3c: 0xae40022c  sw          $zero, 0x22C($s2)
    ctx->pc = 0x27fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 556), GPR_U32(ctx, 0));
    // 0x27fd40: 0xae400264  sw          $zero, 0x264($s2)
    ctx->pc = 0x27fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 0));
    // 0x27fd44: 0xae030178  sw          $v1, 0x178($s0)
    ctx->pc = 0x27fd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 3));
    // 0x27fd48: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x27fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x27fd4c: 0xae40019c  sw          $zero, 0x19C($s2)
    ctx->pc = 0x27fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 0));
    // 0x27fd50: 0xae400258  sw          $zero, 0x258($s2)
    ctx->pc = 0x27fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 0));
    // 0x27fd54: 0xae40025c  sw          $zero, 0x25C($s2)
    ctx->pc = 0x27fd54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 604), GPR_U32(ctx, 0));
    // 0x27fd58: 0xae4002ec  sw          $zero, 0x2EC($s2)
    ctx->pc = 0x27fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 748), GPR_U32(ctx, 0));
    // 0x27fd5c: 0xae4002e4  sw          $zero, 0x2E4($s2)
    ctx->pc = 0x27fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 740), GPR_U32(ctx, 0));
    // 0x27fd60: 0xae4002e8  sw          $zero, 0x2E8($s2)
    ctx->pc = 0x27fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 744), GPR_U32(ctx, 0));
    // 0x27fd64: 0xc0a0006  jal         func_280018
    ctx->pc = 0x27FD64u;
    SET_GPR_U32(ctx, 31, 0x27FD6Cu);
    ctx->pc = 0x27FD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD64u;
    // 0x27fd68: 0xae430260  sw          $v1, 0x260($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280018u, 0x27FD64u, 0x27FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD6Cu;
label_27fd6c:
    // 0x27fd6c: 0xae400318  sw          $zero, 0x318($s2)
    ctx->pc = 0x27fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 792), GPR_U32(ctx, 0));
    // 0x27fd70: 0xae40038c  sw          $zero, 0x38C($s2)
    ctx->pc = 0x27fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 908), GPR_U32(ctx, 0));
    // 0x27fd74: 0xae0011a8  sw          $zero, 0x11A8($s0)
    ctx->pc = 0x27fd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4520), GPR_U32(ctx, 0));
    // 0x27fd78: 0xae400324  sw          $zero, 0x324($s2)
    ctx->pc = 0x27fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 0));
    // 0x27fd7c: 0xae400328  sw          $zero, 0x328($s2)
    ctx->pc = 0x27fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 0));
    // 0x27fd80: 0xae40032c  sw          $zero, 0x32C($s2)
    ctx->pc = 0x27fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 812), GPR_U32(ctx, 0));
    // 0x27fd84: 0xae400330  sw          $zero, 0x330($s2)
    ctx->pc = 0x27fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 0));
    // 0x27fd88: 0xae0011a4  sw          $zero, 0x11A4($s0)
    ctx->pc = 0x27fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4516), GPR_U32(ctx, 0));
    // 0x27fd8c: 0xae0011ac  sw          $zero, 0x11AC($s0)
    ctx->pc = 0x27fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4524), GPR_U32(ctx, 0));
label_27fd90:
    // 0x27fd90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27fd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27fd94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27fd94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27fd98: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x27fd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x27fd9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27fd9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fda0: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x27fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x27fda4: 0xe6400110  swc1        $f0, 0x110($s2)
    ctx->pc = 0x27fda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 272), bits); }
    // 0x27fda8: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x27fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
    // 0x27fdac: 0xae40018c  sw          $zero, 0x18C($s2)
    ctx->pc = 0x27fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 0));
    // 0x27fdb0: 0xae400190  sw          $zero, 0x190($s2)
    ctx->pc = 0x27fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 0));
    // 0x27fdb4: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x27fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
    // 0x27fdb8: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x27fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x27fdbc: 0xe64100a8  swc1        $f1, 0xA8($s2)
    ctx->pc = 0x27fdbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
    // 0x27fdc0: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x27fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
    // 0x27fdc4: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x27fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
    // 0x27fdc8: 0xe64100e8  swc1        $f1, 0xE8($s2)
    ctx->pc = 0x27fdc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x27fdcc: 0xae4000ec  sw          $zero, 0xEC($s2)
    ctx->pc = 0x27fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
    // 0x27fdd0: 0xe64100f0  swc1        $f1, 0xF0($s2)
    ctx->pc = 0x27fdd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x27fdd4: 0xae4000f4  sw          $zero, 0xF4($s2)
    ctx->pc = 0x27fdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
    // 0x27fdd8: 0xae4000f8  sw          $zero, 0xF8($s2)
    ctx->pc = 0x27fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
    // 0x27fddc: 0xe64100fc  swc1        $f1, 0xFC($s2)
    ctx->pc = 0x27fddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
    // 0x27fde0: 0xe6410100  swc1        $f1, 0x100($s2)
    ctx->pc = 0x27fde0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x27fde4: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x27fde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x27fde8: 0xe6400108  swc1        $f0, 0x108($s2)
    ctx->pc = 0x27fde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 264), bits); }
    // 0x27fdec: 0xe640010c  swc1        $f0, 0x10C($s2)
    ctx->pc = 0x27fdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 268), bits); }
    // 0x27fdf0: 0xae400114  sw          $zero, 0x114($s2)
    ctx->pc = 0x27fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
    // 0x27fdf4: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x27fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x27fdf8: 0xae40011c  sw          $zero, 0x11C($s2)
    ctx->pc = 0x27fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 0));
    // 0x27fdfc: 0xae400120  sw          $zero, 0x120($s2)
    ctx->pc = 0x27fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
    // 0x27fe00: 0xae400128  sw          $zero, 0x128($s2)
    ctx->pc = 0x27fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 0));
    // 0x27fe04: 0xae40012c  sw          $zero, 0x12C($s2)
    ctx->pc = 0x27fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 0));
    // 0x27fe08: 0xae400130  sw          $zero, 0x130($s2)
    ctx->pc = 0x27fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 0));
    // 0x27fe0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FE0Cu;
    {
        const bool branch_taken_0x27fe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE0Cu;
        // 0x27fe10: 0xae400134  sw          $zero, 0x134($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe0c) {
            ctx->pc = 0x27FE24u;
            goto label_27fe24;
        }
    }
    ctx->pc = 0x27FE14u;
    // 0x27fe14: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x27fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x27fe18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27fe1c: 0xac6202a8  sw          $v0, 0x2A8($v1)
    ctx->pc = 0x27fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 680), GPR_U32(ctx, 2));
    // 0x27fe20: 0xac600b30  sw          $zero, 0xB30($v1)
    ctx->pc = 0x27fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2864), GPR_U32(ctx, 0));
label_27fe24:
    // 0x27fe24: 0xc78087f0  lwc1        $f0, -0x7810($gp)
    ctx->pc = 0x27fe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fe28: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x27fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x27fe2c: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x27fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x27fe30: 0xe640013c  swc1        $f0, 0x13C($s2)
    ctx->pc = 0x27fe30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 316), bits); }
    // 0x27fe34: 0xe6410350  swc1        $f1, 0x350($s2)
    ctx->pc = 0x27fe34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 848), bits); }
    // 0x27fe38: 0x24420504  addiu       $v0, $v0, 0x504
    ctx->pc = 0x27fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1284));
    // 0x27fe3c: 0xe6410140  swc1        $f1, 0x140($s2)
    ctx->pc = 0x27fe3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 320), bits); }
    // 0x27fe40: 0xe6410138  swc1        $f1, 0x138($s2)
    ctx->pc = 0x27fe40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 312), bits); }
    // 0x27fe44: 0xe64100b8  swc1        $f1, 0xB8($s2)
    ctx->pc = 0x27fe44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
    // 0x27fe48: 0xe64100c4  swc1        $f1, 0xC4($s2)
    ctx->pc = 0x27fe48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x27fe4c: 0xe64100d0  swc1        $f1, 0xD0($s2)
    ctx->pc = 0x27fe4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x27fe50: 0xe64100dc  swc1        $f1, 0xDC($s2)
    ctx->pc = 0x27fe50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
    // 0x27fe54: 0xae40014c  sw          $zero, 0x14C($s2)
    ctx->pc = 0x27fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 0));
    // 0x27fe58: 0xae400150  sw          $zero, 0x150($s2)
    ctx->pc = 0x27fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
    // 0x27fe5c: 0xae400144  sw          $zero, 0x144($s2)
    ctx->pc = 0x27fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 0));
    // 0x27fe60: 0xae400148  sw          $zero, 0x148($s2)
    ctx->pc = 0x27fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 0));
    // 0x27fe64: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x27fe64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x27fe68: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x27fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x27fe6c: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x27fe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x27fe70: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x27fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x27fe74: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x27fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x27fe78: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x27fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x27fe7c: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x27fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x27fe80: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x27fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x27fe84: 0xae4006f8  sw          $zero, 0x6F8($s2)
    ctx->pc = 0x27fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1784), GPR_U32(ctx, 0));
    // 0x27fe88: 0xae4006fc  sw          $zero, 0x6FC($s2)
    ctx->pc = 0x27fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1788), GPR_U32(ctx, 0));
    // 0x27fe8c: 0xae40033c  sw          $zero, 0x33C($s2)
    ctx->pc = 0x27fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 828), GPR_U32(ctx, 0));
    // 0x27fe90: 0xae400340  sw          $zero, 0x340($s2)
    ctx->pc = 0x27fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 832), GPR_U32(ctx, 0));
    // 0x27fe94: 0xae400344  sw          $zero, 0x344($s2)
    ctx->pc = 0x27fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 836), GPR_U32(ctx, 0));
    // 0x27fe98: 0xae400348  sw          $zero, 0x348($s2)
    ctx->pc = 0x27fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 840), GPR_U32(ctx, 0));
    // 0x27fe9c: 0xae40034c  sw          $zero, 0x34C($s2)
    ctx->pc = 0x27fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 844), GPR_U32(ctx, 0));
    // 0x27fea0: 0xae400354  sw          $zero, 0x354($s2)
    ctx->pc = 0x27fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 852), GPR_U32(ctx, 0));
    // 0x27fea4: 0xae400338  sw          $zero, 0x338($s2)
    ctx->pc = 0x27fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 824), GPR_U32(ctx, 0));
    // 0x27fea8: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x27fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27feac: 0xc641009c  lwc1        $f1, 0x9C($s2)
    ctx->pc = 0x27feacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27feb0: 0xc64200a0  lwc1        $f2, 0xA0($s2)
    ctx->pc = 0x27feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27feb4: 0x0  nop
    ctx->pc = 0x27feb4u;
    // NOP
label_27feb8:
    // 0x27feb8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27feb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x27febc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27febcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27fec0: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x27fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x27fec4: 0x0  nop
    ctx->pc = 0x27fec4u;
    // NOP
    // 0x27fec8: 0x0  nop
    ctx->pc = 0x27fec8u;
    // NOP
    // 0x27fecc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27FECCu;
    {
        const bool branch_taken_0x27fecc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27fecc) {
            ctx->pc = 0x27FEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27feb8;
        }
    }
    ctx->pc = 0x27FED4u;
    // 0x27fed4: 0x8e42031c  lw          $v0, 0x31C($s2)
    ctx->pc = 0x27fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
    // 0x27fed8: 0x26c487e0  addiu       $a0, $s6, -0x7820
    ctx->pc = 0x27fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936544));
    // 0x27fedc: 0xae400388  sw          $zero, 0x388($s2)
    ctx->pc = 0x27fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 904), GPR_U32(ctx, 0));
    // 0x27fee0: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x27fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
    // 0x27fee4: 0xe6400374  swc1        $f0, 0x374($s2)
    ctx->pc = 0x27fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 884), bits); }
    // 0x27fee8: 0xe6410378  swc1        $f1, 0x378($s2)
    ctx->pc = 0x27fee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
    // 0x27feec: 0xe642037c  swc1        $f2, 0x37C($s2)
    ctx->pc = 0x27feecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 892), bits); }
    // 0x27fef0: 0xae420384  sw          $v0, 0x384($s2)
    ctx->pc = 0x27fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 900), GPR_U32(ctx, 2));
    // 0x27fef4: 0xc080030  jal         func_2000C0
    ctx->pc = 0x27FEF4u;
    SET_GPR_U32(ctx, 31, 0x27FEFCu);
    ctx->pc = 0x27FEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FEF4u;
    // 0x27fef8: 0xae420380  sw          $v0, 0x380($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 896), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2000C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2000C0u, 0x27FEF4u, 0x27FEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FEFCu;
label_27fefc:
    // 0x27fefc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FEFCu;
    {
        const bool branch_taken_0x27fefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEFCu;
        // 0x27ff00: 0x8f849398  lw          $a0, -0x6C68($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fefc) {
            ctx->pc = 0x27FF14u;
            goto label_27ff14;
        }
    }
    ctx->pc = 0x27FF04u;
    // 0x27ff04: 0xc09f8c4  jal         func_27E310
    ctx->pc = 0x27FF04u;
    SET_GPR_U32(ctx, 31, 0x27FF0Cu);
    ctx->pc = 0x27FF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF04u;
    // 0x27ff08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E310u, 0x27FF04u, 0x27FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF0Cu;
label_27ff0c:
    // 0x27ff0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27FF0Cu;
    {
        const bool branch_taken_0x27ff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF0Cu;
        // 0x27ff10: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff0c) {
            ctx->pc = 0x27FF34u;
            goto label_27ff34;
        }
    }
    ctx->pc = 0x27FF14u;
label_27ff14:
    // 0x27ff14: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27FF14u;
    {
        const bool branch_taken_0x27ff14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF14u;
        // 0x27ff18: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff14) {
            ctx->pc = 0x27FF34u;
            goto label_27ff34;
        }
    }
    ctx->pc = 0x27FF1Cu;
    // 0x27ff1c: 0xc09f8c4  jal         func_27E310
    ctx->pc = 0x27FF1Cu;
    SET_GPR_U32(ctx, 31, 0x27FF24u);
    ctx->pc = 0x27E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E310u, 0x27FF1Cu, 0x27FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF24u;
label_27ff24:
    // 0x27ff24: 0xc09c0fe  jal         func_2703F8
    ctx->pc = 0x27FF24u;
    SET_GPR_U32(ctx, 31, 0x27FF2Cu);
    ctx->pc = 0x27FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF24u;
    // 0x27ff28: 0x8f84939c  lw          $a0, -0x6C64($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2703F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2703F8u, 0x27FF24u, 0x27FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF2Cu;
label_27ff2c:
    // 0x27ff2c: 0xae420388  sw          $v0, 0x388($s2)
    ctx->pc = 0x27ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 904), GPR_U32(ctx, 2));
    // 0x27ff30: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x27ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_27ff34:
    // 0x27ff34: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x27ff34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff38: 0xae4006e8  sw          $zero, 0x6E8($s2)
    ctx->pc = 0x27ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1768), GPR_U32(ctx, 0));
    // 0x27ff3c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x27ff3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27ff40: 0xae4006e0  sw          $zero, 0x6E0($s2)
    ctx->pc = 0x27ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1760), GPR_U32(ctx, 0));
    // 0x27ff44: 0x1440fe3e  bnez        $v0, . + 4 + (-0x1C2 << 2)
    ctx->pc = 0x27FF44u;
    {
        const bool branch_taken_0x27ff44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF44u;
        // 0x27ff48: 0xae4006e4  sw          $zero, 0x6E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1764), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff44) {
            ctx->pc = 0x27F840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f840;
        }
    }
    ctx->pc = 0x27FF4Cu;
label_27ff4c:
    // 0x27ff4c: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x27ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x27ff50: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27ff50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27ff54: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x27ff54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27ff58: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x27ff58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27ff5c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27ff5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ff60: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27ff60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ff64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27ff64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ff68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27ff68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ff6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27ff6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ff70: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x27ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ff74: 0xaf82b234  sw          $v0, -0x4DCC($gp)
    ctx->pc = 0x27ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947380), GPR_U32(ctx, 2));
    // 0x27ff78: 0x80a01dc  j           func_280770
    ctx->pc = 0x27FF78u;
    ctx->pc = 0x27FF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF78u;
    // 0x27ff7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280770u;
    playerAutoAimRestart_0x280770(rdram, ctx, runtime); return;
    ctx->pc = 0x27FF80u;
}
