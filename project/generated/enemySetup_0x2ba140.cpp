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

// Function: enemySetup
// Address: 0x2ba140 - 0x2ba9c4
void enemySetup_0x2ba140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemySetup_0x2ba140");
#endif

    switch (ctx->pc) {
        case 0x2ba17cu: goto label_2ba17c;
        case 0x2ba1e0u: goto label_2ba1e0;
        case 0x2ba208u: goto label_2ba208;
        case 0x2ba220u: goto label_2ba220;
        case 0x2ba254u: goto label_2ba254;
        case 0x2ba268u: goto label_2ba268;
        case 0x2ba29cu: goto label_2ba29c;
        case 0x2ba2c4u: goto label_2ba2c4;
        case 0x2ba308u: goto label_2ba308;
        case 0x2ba344u: goto label_2ba344;
        case 0x2ba35cu: goto label_2ba35c;
        case 0x2ba370u: goto label_2ba370;
        case 0x2ba3b0u: goto label_2ba3b0;
        case 0x2ba3c4u: goto label_2ba3c4;
        case 0x2ba3dcu: goto label_2ba3dc;
        case 0x2ba480u: goto label_2ba480;
        case 0x2ba4e8u: goto label_2ba4e8;
        case 0x2ba51cu: goto label_2ba51c;
        case 0x2ba538u: goto label_2ba538;
        case 0x2ba56cu: goto label_2ba56c;
        case 0x2ba574u: goto label_2ba574;
        case 0x2ba57cu: goto label_2ba57c;
        case 0x2ba584u: goto label_2ba584;
        case 0x2ba58cu: goto label_2ba58c;
        case 0x2ba594u: goto label_2ba594;
        case 0x2ba59cu: goto label_2ba59c;
        case 0x2ba5a4u: goto label_2ba5a4;
        case 0x2ba5b4u: goto label_2ba5b4;
        case 0x2ba5bcu: goto label_2ba5bc;
        case 0x2ba5c4u: goto label_2ba5c4;
        case 0x2ba5ccu: goto label_2ba5cc;
        case 0x2ba5d4u: goto label_2ba5d4;
        case 0x2ba5dcu: goto label_2ba5dc;
        case 0x2ba5e4u: goto label_2ba5e4;
        case 0x2ba5ecu: goto label_2ba5ec;
        case 0x2ba5f4u: goto label_2ba5f4;
        case 0x2ba5fcu: goto label_2ba5fc;
        case 0x2ba604u: goto label_2ba604;
        case 0x2ba60cu: goto label_2ba60c;
        case 0x2ba614u: goto label_2ba614;
        case 0x2ba61cu: goto label_2ba61c;
        case 0x2ba624u: goto label_2ba624;
        case 0x2ba62cu: goto label_2ba62c;
        case 0x2ba648u: goto label_2ba648;
        case 0x2ba650u: goto label_2ba650;
        case 0x2ba658u: goto label_2ba658;
        case 0x2ba660u: goto label_2ba660;
        case 0x2ba668u: goto label_2ba668;
        case 0x2ba670u: goto label_2ba670;
        case 0x2ba678u: goto label_2ba678;
        case 0x2ba680u: goto label_2ba680;
        case 0x2ba688u: goto label_2ba688;
        case 0x2ba690u: goto label_2ba690;
        case 0x2ba698u: goto label_2ba698;
        case 0x2ba6a0u: goto label_2ba6a0;
        case 0x2ba6a8u: goto label_2ba6a8;
        case 0x2ba6b0u: goto label_2ba6b0;
        case 0x2ba6b8u: goto label_2ba6b8;
        case 0x2ba6c0u: goto label_2ba6c0;
        case 0x2ba6c8u: goto label_2ba6c8;
        case 0x2ba6d0u: goto label_2ba6d0;
        case 0x2ba6d8u: goto label_2ba6d8;
        case 0x2ba6e0u: goto label_2ba6e0;
        case 0x2ba6e8u: goto label_2ba6e8;
        case 0x2ba6f0u: goto label_2ba6f0;
        case 0x2ba6f8u: goto label_2ba6f8;
        case 0x2ba700u: goto label_2ba700;
        case 0x2ba708u: goto label_2ba708;
        case 0x2ba710u: goto label_2ba710;
        case 0x2ba718u: goto label_2ba718;
        case 0x2ba720u: goto label_2ba720;
        case 0x2ba72cu: goto label_2ba72c;
        case 0x2ba734u: goto label_2ba734;
        case 0x2ba740u: goto label_2ba740;
        case 0x2ba748u: goto label_2ba748;
        case 0x2ba754u: goto label_2ba754;
        case 0x2ba75cu: goto label_2ba75c;
        case 0x2ba768u: goto label_2ba768;
        case 0x2ba770u: goto label_2ba770;
        case 0x2ba77cu: goto label_2ba77c;
        case 0x2ba784u: goto label_2ba784;
        case 0x2ba790u: goto label_2ba790;
        case 0x2ba798u: goto label_2ba798;
        case 0x2ba7a4u: goto label_2ba7a4;
        case 0x2ba7acu: goto label_2ba7ac;
        case 0x2ba7b8u: goto label_2ba7b8;
        case 0x2ba7c0u: goto label_2ba7c0;
        case 0x2ba7ccu: goto label_2ba7cc;
        case 0x2ba7d4u: goto label_2ba7d4;
        case 0x2ba7e0u: goto label_2ba7e0;
        case 0x2ba7e8u: goto label_2ba7e8;
        case 0x2ba7f4u: goto label_2ba7f4;
        case 0x2ba7fcu: goto label_2ba7fc;
        case 0x2ba808u: goto label_2ba808;
        case 0x2ba810u: goto label_2ba810;
        case 0x2ba81cu: goto label_2ba81c;
        case 0x2ba824u: goto label_2ba824;
        case 0x2ba830u: goto label_2ba830;
        case 0x2ba838u: goto label_2ba838;
        case 0x2ba844u: goto label_2ba844;
        case 0x2ba850u: goto label_2ba850;
        case 0x2ba85cu: goto label_2ba85c;
        case 0x2ba868u: goto label_2ba868;
        case 0x2ba870u: goto label_2ba870;
        case 0x2ba878u: goto label_2ba878;
        case 0x2ba880u: goto label_2ba880;
        case 0x2ba88cu: goto label_2ba88c;
        case 0x2ba898u: goto label_2ba898;
        case 0x2ba8a4u: goto label_2ba8a4;
        case 0x2ba8b0u: goto label_2ba8b0;
        case 0x2ba8bcu: goto label_2ba8bc;
        case 0x2ba8c4u: goto label_2ba8c4;
        case 0x2ba990u: goto label_2ba990;
        default: break;
    }

    ctx->pc = 0x2ba140u;

    // 0x2ba140: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ba140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2ba144: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2ba144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2ba148: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2ba148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2ba14c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ba14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2ba150: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x2ba150u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x2ba154: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2ba154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2ba158: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2ba158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2ba15c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2ba15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2ba160: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2ba160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2ba164: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2ba164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ba168: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ba168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ba16c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ba16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ba170: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ba170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ba174: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x2BA174u;
    SET_GPR_U32(ctx, 31, 0x2BA17Cu);
    ctx->pc = 0x2BA178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA174u;
    // 0x2ba178: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B90u, 0x2BA174u, 0x2BA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA17Cu;
label_2ba17c:
    // 0x2ba17c: 0x27c3c4a8  addiu       $v1, $fp, -0x3B58
    ctx->pc = 0x2ba17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x2ba180: 0xaf82b4fc  sw          $v0, -0x4B04($gp)
    ctx->pc = 0x2ba180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948092), GPR_U32(ctx, 2));
    // 0x2ba184: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x2ba184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2ba188: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ba188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ba18c: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA18Cu;
    {
        const bool branch_taken_0x2ba18c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA18Cu;
        // 0x2ba190: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba18c) {
            ctx->pc = 0x2BA1B4u;
            goto label_2ba1b4;
        }
    }
    ctx->pc = 0x2BA194u;
    // 0x2ba194: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ba194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2ba198: 0x24421ff8  addiu       $v0, $v0, 0x1FF8
    ctx->pc = 0x2ba198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8184));
    // 0x2ba19c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ba19cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x381FFCu));
    // 0x2ba1a0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ba1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x382000u));
    // 0x2ba1a4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2ba1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2ba1a8: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x2ba1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x2ba1ac: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2ba1acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x381FFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x381FFCu, _value); } while (0);
    // 0x2ba1b0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2ba1b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x382000u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382000u, _value); } while (0);
label_2ba1b4:
    // 0x2ba1b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2ba1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ba1b8: 0x14a2004a  bne         $a1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2BA1B8u;
    {
        const bool branch_taken_0x2ba1b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1B8u;
        // 0x2ba1bc: 0x8f86b59c  lw          $a2, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1b8) {
            ctx->pc = 0x2BA2E4u;
            goto label_2ba2e4;
        }
    }
    ctx->pc = 0x2BA1C0u;
    // 0x2ba1c0: 0x8f83b4fc  lw          $v1, -0x4B04($gp)
    ctx->pc = 0x2ba1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
    // 0x2ba1c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ba1c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba1c8: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x2ba1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2ba1cc: 0x18c000b9  blez        $a2, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2BA1CCu;
    {
        const bool branch_taken_0x2ba1cc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2BA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1CCu;
        // 0x2ba1d0: 0xaf86b59c  sw          $a2, -0x4A64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948252), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1cc) {
            ctx->pc = 0x2BA4B4u;
            goto label_2ba4b4;
        }
    }
    ctx->pc = 0x2BA1D4u;
    // 0x2ba1d4: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x2ba1d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2ba1d8: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x2ba1d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x2ba1dc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2ba1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2ba1e0:
    // 0x2ba1e0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x2ba1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2ba1e4: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x2ba1e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ba1e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ba1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba1ec: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ba1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba1f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ba1f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ba1f4: 0x13a880  sll         $s5, $s3, 2
    ctx->pc = 0x2ba1f4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2ba1f8: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x2ba1f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ba1fc: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2ba1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2ba200: 0xc089d92  jal         func_227648
    ctx->pc = 0x2BA200u;
    SET_GPR_U32(ctx, 31, 0x2BA208u);
    ctx->pc = 0x2BA204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA200u;
    // 0x2ba204: 0x3084000f  andi        $a0, $a0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227648u, 0x2BA200u, 0x2BA208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA208u;
label_2ba208:
    // 0x2ba208: 0x8f909f74  lw          $s0, -0x608C($gp)
    ctx->pc = 0x2ba208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2ba20c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2ba20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ba210: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x2ba210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2ba214: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x2ba214u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba218: 0xc099380  jal         func_264E00
    ctx->pc = 0x2BA218u;
    SET_GPR_U32(ctx, 31, 0x2BA220u);
    ctx->pc = 0x2BA21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA218u;
    // 0x2ba21c: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2BA218u, 0x2BA220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA220u;
label_2ba220:
    // 0x2ba220: 0x3c01c100  lui         $at, 0xC100
    ctx->pc = 0x2ba220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49408 << 16));
    // 0x2ba224: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ba224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ba228: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ba228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba22c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ba22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ba230: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ba230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ba234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ba234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba238: 0xc78e8fe4  lwc1        $f14, -0x701C($gp)
    ctx->pc = 0x2ba238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ba23c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ba23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba240: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2ba240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ba244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba248: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2ba248u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2ba24c: 0xc0a1f30  jal         func_287CC0
    ctx->pc = 0x2BA24Cu;
    SET_GPR_U32(ctx, 31, 0x2BA254u);
    ctx->pc = 0x2BA250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA24Cu;
    // 0x2ba250: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287CC0u, 0x2BA24Cu, 0x2BA254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA254u;
label_2ba254:
    // 0x2ba254: 0x26e32058  addiu       $v1, $s7, 0x2058
    ctx->pc = 0x2ba254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8280));
    // 0x2ba258: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x2ba258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2ba25c: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x2ba25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2ba260: 0xc0a21c4  jal         func_288710
    ctx->pc = 0x2BA260u;
    SET_GPR_U32(ctx, 31, 0x2BA268u);
    ctx->pc = 0x2BA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA260u;
    // 0x2ba264: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288710u, 0x2BA260u, 0x2BA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA268u;
label_2ba268:
    // 0x2ba268: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2ba268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ba26c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2ba26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2ba270: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BA270u;
    {
        const bool branch_taken_0x2ba270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA270u;
        // 0x2ba274: 0x26e32058  addiu       $v1, $s7, 0x2058 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba270) {
            ctx->pc = 0x2BA2A8u;
            goto label_2ba2a8;
        }
    }
    ctx->pc = 0x2BA278u;
    // 0x2ba278: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2ba278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2ba27c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2ba27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x2ba280: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ba280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ba284: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA284u;
    {
        const bool branch_taken_0x2ba284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA284u;
        // 0x2ba288: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba284) {
            ctx->pc = 0x2BA2A4u;
            goto label_2ba2a4;
        }
    }
    ctx->pc = 0x2BA28Cu;
    // 0x2ba28c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ba28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba290: 0x240501dc  addiu       $a1, $zero, 0x1DC
    ctx->pc = 0x2ba290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
    // 0x2ba294: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2BA294u;
    SET_GPR_U32(ctx, 31, 0x2BA29Cu);
    ctx->pc = 0x2BA298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA294u;
    // 0x2ba298: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2BA294u, 0x2BA29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA29Cu;
label_2ba29c:
    // 0x2ba29c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BA29Cu;
    {
        const bool branch_taken_0x2ba29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA29Cu;
        // 0x2ba2a0: 0x8f83b4fc  lw          $v1, -0x4B04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba29c) {
            ctx->pc = 0x2BA2C8u;
            goto label_2ba2c8;
        }
    }
    ctx->pc = 0x2BA2A4u;
label_2ba2a4:
    // 0x2ba2a4: 0x26e32058  addiu       $v1, $s7, 0x2058
    ctx->pc = 0x2ba2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8280));
label_2ba2a8:
    // 0x2ba2a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ba2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ba2ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ba2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ba2b0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2ba2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2ba2b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ba2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ba2b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ba2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ba2bc: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2BA2BCu;
    SET_GPR_U32(ctx, 31, 0x2BA2C4u);
    ctx->pc = 0x2BA2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA2BCu;
    // 0x2ba2c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2BA2BCu, 0x2BA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA2C4u;
label_2ba2c4:
    // 0x2ba2c4: 0x8f83b4fc  lw          $v1, -0x4B04($gp)
    ctx->pc = 0x2ba2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
label_2ba2c8:
    // 0x2ba2c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ba2c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ba2cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ba2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2ba2d0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2ba2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ba2d4: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2BA2D4u;
    {
        const bool branch_taken_0x2ba2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2D4u;
        // 0x2ba2d8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2d4) {
            ctx->pc = 0x2BA1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba1e0;
        }
    }
    ctx->pc = 0x2BA2DCu;
    // 0x2ba2dc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2BA2DCu;
    {
        const bool branch_taken_0x2ba2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2DCu;
        // 0x2ba2e0: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2dc) {
            ctx->pc = 0x2BA4B8u;
            goto label_2ba4b8;
        }
    }
    ctx->pc = 0x2BA2E4u;
label_2ba2e4:
    // 0x2ba2e4: 0x18c00073  blez        $a2, . + 4 + (0x73 << 2)
    ctx->pc = 0x2BA2E4u;
    {
        const bool branch_taken_0x2ba2e4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2BA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2E4u;
        // 0x2ba2e8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2e4) {
            ctx->pc = 0x2BA4B4u;
            goto label_2ba4b4;
        }
    }
    ctx->pc = 0x2BA2ECu;
    // 0x2ba2ec: 0x10e20072  beq         $a3, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2BA2ECu;
    {
        const bool branch_taken_0x2ba2ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2ECu;
        // 0x2ba2f0: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2ec) {
            ctx->pc = 0x2BA4B8u;
            goto label_2ba4b8;
        }
    }
    ctx->pc = 0x2BA2F4u;
    // 0x2ba2f4: 0x18c00070  blez        $a2, . + 4 + (0x70 << 2)
    ctx->pc = 0x2BA2F4u;
    {
        const bool branch_taken_0x2ba2f4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2BA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2F4u;
        // 0x2ba2f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2f4) {
            ctx->pc = 0x2BA4B8u;
            goto label_2ba4b8;
        }
    }
    ctx->pc = 0x2BA2FCu;
    // 0x2ba2fc: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x2ba2fcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x2ba300: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2ba300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2ba304: 0x0  nop
    ctx->pc = 0x2ba304u;
    // NOP
label_2ba308:
    // 0x2ba308: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2ba308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2ba30c: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BA30Cu;
    {
        const bool branch_taken_0x2ba30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA30Cu;
        // 0x2ba310: 0x8f879f74  lw          $a3, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba30c) {
            ctx->pc = 0x2BA378u;
            goto label_2ba378;
        }
    }
    ctx->pc = 0x2BA314u;
    // 0x2ba314: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ba314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ba318: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x2ba318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2ba31c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x2ba31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2ba320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ba320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba324: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ba324u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ba328: 0x2673821  addu        $a3, $s3, $a3
    ctx->pc = 0x2ba328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2ba32c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2ba32cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2ba330: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2ba330u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x2ba334: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2ba334u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2ba338: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2ba338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ba33c: 0xc0a1f30  jal         func_287CC0
    ctx->pc = 0x2BA33Cu;
    SET_GPR_U32(ctx, 31, 0x2BA344u);
    ctx->pc = 0x2BA340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA33Cu;
    // 0x2ba340: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287CC0u, 0x2BA33Cu, 0x2BA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA344u;
label_2ba344:
    // 0x2ba344: 0x26e32058  addiu       $v1, $s7, 0x2058
    ctx->pc = 0x2ba344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8280));
    // 0x2ba348: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x2ba348u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2ba34c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2ba34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ba350: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x2ba350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2ba354: 0xc0a21c4  jal         func_288710
    ctx->pc = 0x2BA354u;
    SET_GPR_U32(ctx, 31, 0x2BA35Cu);
    ctx->pc = 0x2BA358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA354u;
    // 0x2ba358: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288710u, 0x2BA354u, 0x2BA35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA35Cu;
label_2ba35c:
    // 0x2ba35c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ba35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba360: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ba360u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ba364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ba364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba368: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2BA368u;
    SET_GPR_U32(ctx, 31, 0x2BA370u);
    ctx->pc = 0x2BA36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA368u;
    // 0x2ba36c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2BA368u, 0x2BA370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA370u;
label_2ba370:
    // 0x2ba370: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2BA370u;
    {
        const bool branch_taken_0x2ba370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA370u;
        // 0x2ba374: 0x8f86b59c  lw          $a2, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba370) {
            ctx->pc = 0x2BA4A4u;
            goto label_2ba4a4;
        }
    }
    ctx->pc = 0x2BA378u;
label_2ba378:
    // 0x2ba378: 0x27d0c4a8  addiu       $s0, $fp, -0x3B58
    ctx->pc = 0x2ba378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x2ba37c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ba37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ba380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ba380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba384: 0x2673821  addu        $a3, $s3, $a3
    ctx->pc = 0x2ba384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2ba388: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2ba388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ba38c: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x2ba38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2ba390: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ba390u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ba394: 0x90440015  lbu         $a0, 0x15($v0)
    ctx->pc = 0x2ba394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x2ba398: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2ba398u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2ba39c: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x2ba39cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x2ba3a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2ba3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba3a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ba3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba3a8: 0xc0a1f30  jal         func_287CC0
    ctx->pc = 0x2BA3A8u;
    SET_GPR_U32(ctx, 31, 0x2BA3B0u);
    ctx->pc = 0x2BA3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA3A8u;
    // 0x2ba3ac: 0x139080  sll         $s2, $s3, 2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287CC0u, 0x2BA3A8u, 0x2BA3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3B0u;
label_2ba3b0:
    // 0x2ba3b0: 0x26e32058  addiu       $v1, $s7, 0x2058
    ctx->pc = 0x2ba3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8280));
    // 0x2ba3b4: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x2ba3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2ba3b8: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x2ba3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2ba3bc: 0xc0a21c4  jal         func_288710
    ctx->pc = 0x2BA3BCu;
    SET_GPR_U32(ctx, 31, 0x2BA3C4u);
    ctx->pc = 0x2BA3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA3BCu;
    // 0x2ba3c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288710u, 0x2BA3BCu, 0x2BA3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3C4u;
label_2ba3c4:
    // 0x2ba3c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ba3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba3c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ba3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ba3cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ba3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ba3d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ba3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ba3d4: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2BA3D4u;
    SET_GPR_U32(ctx, 31, 0x2BA3DCu);
    ctx->pc = 0x2BA3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA3D4u;
    // 0x2ba3d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2BA3D4u, 0x2BA3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3DCu;
label_2ba3dc:
    // 0x2ba3dc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2ba3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2ba3e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ba3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ba3e4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2BA3E4u;
    {
        const bool branch_taken_0x2ba3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3E4u;
        // 0x2ba3e8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3e4) {
            ctx->pc = 0x2BA4A0u;
            goto label_2ba4a0;
        }
    }
    ctx->pc = 0x2BA3ECu;
    // 0x2ba3ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ba3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba3f0: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x2ba3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2ba3f4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x2ba3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2ba3f8: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BA3F8u;
    {
        const bool branch_taken_0x2ba3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3F8u;
        // 0x2ba3fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3f8) {
            ctx->pc = 0x2BA440u;
            goto label_2ba440;
        }
    }
    ctx->pc = 0x2BA400u;
    // 0x2ba400: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2ba400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ba404: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA404u;
    {
        const bool branch_taken_0x2ba404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA404u;
        // 0x2ba408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba404) {
            ctx->pc = 0x2BA41Cu;
            goto label_2ba41c;
        }
    }
    ctx->pc = 0x2BA40Cu;
    // 0x2ba40c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BA40Cu;
    {
        const bool branch_taken_0x2ba40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA40Cu;
        // 0x2ba410: 0x26f02058  addiu       $s0, $s7, 0x2058 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 8280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba40c) {
            ctx->pc = 0x2BA438u;
            goto label_2ba438;
        }
    }
    ctx->pc = 0x2BA414u;
    // 0x2ba414: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BA414u;
    {
        const bool branch_taken_0x2ba414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba414) {
            ctx->pc = 0x2BA458u;
            goto label_2ba458;
        }
    }
    ctx->pc = 0x2BA41Cu;
label_2ba41c:
    // 0x2ba41c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ba41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ba420: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA420u;
    {
        const bool branch_taken_0x2ba420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA420u;
        // 0x2ba424: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba420) {
            ctx->pc = 0x2BA448u;
            goto label_2ba448;
        }
    }
    ctx->pc = 0x2BA428u;
    // 0x2ba428: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA428u;
    {
        const bool branch_taken_0x2ba428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA428u;
        // 0x2ba42c: 0x26f02058  addiu       $s0, $s7, 0x2058 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 8280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba428) {
            ctx->pc = 0x2BA450u;
            goto label_2ba450;
        }
    }
    ctx->pc = 0x2BA430u;
    // 0x2ba430: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA430u;
    {
        const bool branch_taken_0x2ba430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba430) {
            ctx->pc = 0x2BA458u;
            goto label_2ba458;
        }
    }
    ctx->pc = 0x2BA438u;
label_2ba438:
    // 0x2ba438: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA438u;
    {
        const bool branch_taken_0x2ba438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA438u;
        // 0x2ba43c: 0x240501ab  addiu       $a1, $zero, 0x1AB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 427));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba438) {
            ctx->pc = 0x2BA454u;
            goto label_2ba454;
        }
    }
    ctx->pc = 0x2BA440u;
label_2ba440:
    // 0x2ba440: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA440u;
    {
        const bool branch_taken_0x2ba440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA440u;
        // 0x2ba444: 0x240501ad  addiu       $a1, $zero, 0x1AD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba440) {
            ctx->pc = 0x2BA454u;
            goto label_2ba454;
        }
    }
    ctx->pc = 0x2BA448u;
label_2ba448:
    // 0x2ba448: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA448u;
    {
        const bool branch_taken_0x2ba448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA448u;
        // 0x2ba44c: 0x240501ac  addiu       $a1, $zero, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba448) {
            ctx->pc = 0x2BA454u;
            goto label_2ba454;
        }
    }
    ctx->pc = 0x2BA450u;
label_2ba450:
    // 0x2ba450: 0x240501ae  addiu       $a1, $zero, 0x1AE
    ctx->pc = 0x2ba450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
label_2ba454:
    // 0x2ba454: 0x26f02058  addiu       $s0, $s7, 0x2058
    ctx->pc = 0x2ba454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 8280));
label_2ba458:
    // 0x2ba458: 0xc7808fe8  lwc1        $f0, -0x7018($gp)
    ctx->pc = 0x2ba458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba45c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x2ba45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2ba460: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ba460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ba464: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ba464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba468: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba46c: 0xc44d0034  lwc1        $f13, 0x34($v0)
    ctx->pc = 0x2ba46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ba470: 0xc44e0038  lwc1        $f14, 0x38($v0)
    ctx->pc = 0x2ba470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ba474: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x2ba474u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x2ba478: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x2BA478u;
    SET_GPR_U32(ctx, 31, 0x2BA480u);
    ctx->pc = 0x2BA47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA478u;
    // 0x2ba47c: 0xc44c0030  lwc1        $f12, 0x30($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x2BA478u, 0x2BA480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA480u;
label_2ba480:
    // 0x2ba480: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2ba480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ba484: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2ba484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x2ba488: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ba488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba48c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ba48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ba490: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2ba490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2ba494: 0xac820218  sw          $v0, 0x218($a0)
    ctx->pc = 0x2ba494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 2));
    // 0x2ba498: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ba498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ba49c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2ba49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_2ba4a0:
    // 0x2ba4a0: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x2ba4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_2ba4a4:
    // 0x2ba4a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ba4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ba4a8: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x2ba4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ba4ac: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x2BA4ACu;
    {
        const bool branch_taken_0x2ba4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4ACu;
        // 0x2ba4b0: 0x8f839f70  lw          $v1, -0x6090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4ac) {
            ctx->pc = 0x2BA308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba308;
        }
    }
    ctx->pc = 0x2BA4B4u;
label_2ba4b4:
    // 0x2ba4b4: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x2ba4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
label_2ba4b8:
    // 0x2ba4b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ba4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ba4bc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2ba4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ba4c0: 0x14640017  bne         $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BA4C0u;
    {
        const bool branch_taken_0x2ba4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2BA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4C0u;
        // 0x2ba4c4: 0x27d1c4a8  addiu       $s1, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4c0) {
            ctx->pc = 0x2BA520u;
            goto label_2ba520;
        }
    }
    ctx->pc = 0x2BA4C8u;
    // 0x2ba4c8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ba4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2ba4cc: 0x8f83b4f8  lw          $v1, -0x4B08($gp)
    ctx->pc = 0x2ba4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948088)));
    // 0x2ba4d0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BA4D0u;
    {
        const bool branch_taken_0x2ba4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4D0u;
        // 0x2ba4d4: 0xac402010  sw          $zero, 0x2010($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4d0) {
            ctx->pc = 0x2BA520u;
            goto label_2ba520;
        }
    }
    ctx->pc = 0x2BA4D8u;
    // 0x2ba4d8: 0x8f939f74  lw          $s3, -0x608C($gp)
    ctx->pc = 0x2ba4d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2ba4dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ba4dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba4e0: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x2ba4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2ba4e4: 0x0  nop
    ctx->pc = 0x2ba4e4u;
    // NOP
label_2ba4e8:
    // 0x2ba4e8: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2ba4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2ba4ec: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2ba4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ba4f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BA4F0u;
    {
        const bool branch_taken_0x2ba4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4F0u;
        // 0x2ba4f4: 0x24031210  addiu       $v1, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4f0) {
            ctx->pc = 0x2BA51Cu;
            goto label_2ba51c;
        }
    }
    ctx->pc = 0x2BA4F8u;
    // 0x2ba4f8: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x2ba4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2ba4fc: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2ba4fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ba500: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ba500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba504: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ba504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ba508: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2ba508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2ba50c: 0x5445fff6  bnel        $v0, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BA50Cu;
    {
        const bool branch_taken_0x2ba50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ba50c) {
            ctx->pc = 0x2BA510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA50Cu;
            // 0x2ba510: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba4e8;
        }
    }
    ctx->pc = 0x2BA514u;
    // 0x2ba514: 0xc0b1fbc  jal         func_2C7EF0
    ctx->pc = 0x2BA514u;
    SET_GPR_U32(ctx, 31, 0x2BA51Cu);
    ctx->pc = 0x2BA518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA514u;
    // 0x2ba518: 0x8c640bcc  lw          $a0, 0xBCC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3020)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7EF0u, 0x2BA514u, 0x2BA51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA51Cu;
label_2ba51c:
    // 0x2ba51c: 0x27d1c4a8  addiu       $s1, $fp, -0x3B58
    ctx->pc = 0x2ba51cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
label_2ba520:
    // 0x2ba520: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2ba520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ba524: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2ba524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2ba528: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA528u;
    {
        const bool branch_taken_0x2ba528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA528u;
        // 0x2ba52c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba528) {
            ctx->pc = 0x2BA544u;
            goto label_2ba544;
        }
    }
    ctx->pc = 0x2BA530u;
    // 0x2ba530: 0xc08a64a  jal         func_229928
    ctx->pc = 0x2BA530u;
    SET_GPR_U32(ctx, 31, 0x2BA538u);
    ctx->pc = 0x229928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229928u, 0x2BA530u, 0x2BA538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA538u;
label_2ba538:
    // 0x2ba538: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2ba538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2ba53c: 0x107000e2  beq         $v1, $s0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x2BA53Cu;
    {
        const bool branch_taken_0x2ba53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2BA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA53Cu;
        // 0x2ba540: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba53c) {
            ctx->pc = 0x2BA8C8u;
            goto label_2ba8c8;
        }
    }
    ctx->pc = 0x2BA544u;
label_2ba544:
    // 0x2ba544: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2ba544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2ba548: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ba548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ba54c: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2BA54Cu;
    {
        const bool branch_taken_0x2ba54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA54Cu;
        // 0x2ba550: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba54c) {
            ctx->pc = 0x2BA634u;
            goto label_2ba634;
        }
    }
    ctx->pc = 0x2BA554u;
    // 0x2ba554: 0x148200d9  bne         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2BA554u;
    {
        const bool branch_taken_0x2ba554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA554u;
        // 0x2ba558: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba554) {
            ctx->pc = 0x2BA8BCu;
            goto label_2ba8bc;
        }
    }
    ctx->pc = 0x2BA55Cu;
    // 0x2ba55c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BA55Cu;
    {
        const bool branch_taken_0x2ba55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ba55c) {
            ctx->pc = 0x2BA5ACu;
            goto label_2ba5ac;
        }
    }
    ctx->pc = 0x2BA564u;
    // 0x2ba564: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2BA564u;
    SET_GPR_U32(ctx, 31, 0x2BA56Cu);
    ctx->pc = 0x2BA568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA564u;
    // 0x2ba568: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2BA564u, 0x2BA56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA56Cu;
label_2ba56c:
    // 0x2ba56c: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA56Cu;
    SET_GPR_U32(ctx, 31, 0x2BA574u);
    ctx->pc = 0x2BA570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA56Cu;
    // 0x2ba570: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA56Cu, 0x2BA574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA574u;
label_2ba574:
    // 0x2ba574: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2BA574u;
    SET_GPR_U32(ctx, 31, 0x2BA57Cu);
    ctx->pc = 0x2BA578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA574u;
    // 0x2ba578: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2BA574u, 0x2BA57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA57Cu;
label_2ba57c:
    // 0x2ba57c: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA57Cu;
    SET_GPR_U32(ctx, 31, 0x2BA584u);
    ctx->pc = 0x2BA580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA57Cu;
    // 0x2ba580: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA57Cu, 0x2BA584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA584u;
label_2ba584:
    // 0x2ba584: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA584u;
    SET_GPR_U32(ctx, 31, 0x2BA58Cu);
    ctx->pc = 0x2BA588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA584u;
    // 0x2ba588: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA584u, 0x2BA58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA58Cu;
label_2ba58c:
    // 0x2ba58c: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA58Cu;
    SET_GPR_U32(ctx, 31, 0x2BA594u);
    ctx->pc = 0x2BA590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA58Cu;
    // 0x2ba590: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA58Cu, 0x2BA594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA594u;
label_2ba594:
    // 0x2ba594: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA594u;
    SET_GPR_U32(ctx, 31, 0x2BA59Cu);
    ctx->pc = 0x2BA598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA594u;
    // 0x2ba598: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA594u, 0x2BA59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA59Cu;
label_2ba59c:
    // 0x2ba59c: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA59Cu;
    SET_GPR_U32(ctx, 31, 0x2BA5A4u);
    ctx->pc = 0x2BA5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA59Cu;
    // 0x2ba5a0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA59Cu, 0x2BA5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5A4u;
label_2ba5a4:
    // 0x2ba5a4: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x2BA5A4u;
    {
        const bool branch_taken_0x2ba5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba5a4) {
            ctx->pc = 0x2BA8BCu;
            goto label_2ba8bc;
        }
    }
    ctx->pc = 0x2BA5ACu;
label_2ba5ac:
    // 0x2ba5ac: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2BA5ACu;
    SET_GPR_U32(ctx, 31, 0x2BA5B4u);
    ctx->pc = 0x2BA5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5ACu;
    // 0x2ba5b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2BA5ACu, 0x2BA5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5B4u;
label_2ba5b4:
    // 0x2ba5b4: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA5B4u;
    SET_GPR_U32(ctx, 31, 0x2BA5BCu);
    ctx->pc = 0x2BA5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5B4u;
    // 0x2ba5b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA5B4u, 0x2BA5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5BCu;
label_2ba5bc:
    // 0x2ba5bc: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2BA5BCu;
    SET_GPR_U32(ctx, 31, 0x2BA5C4u);
    ctx->pc = 0x2BA5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5BCu;
    // 0x2ba5c0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2BA5BCu, 0x2BA5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5C4u;
label_2ba5c4:
    // 0x2ba5c4: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA5C4u;
    SET_GPR_U32(ctx, 31, 0x2BA5CCu);
    ctx->pc = 0x2BA5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5C4u;
    // 0x2ba5c8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA5C4u, 0x2BA5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5CCu;
label_2ba5cc:
    // 0x2ba5cc: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2BA5CCu;
    SET_GPR_U32(ctx, 31, 0x2BA5D4u);
    ctx->pc = 0x2BA5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5CCu;
    // 0x2ba5d0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2BA5CCu, 0x2BA5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5D4u;
label_2ba5d4:
    // 0x2ba5d4: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA5D4u;
    SET_GPR_U32(ctx, 31, 0x2BA5DCu);
    ctx->pc = 0x2BA5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5D4u;
    // 0x2ba5d8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA5D4u, 0x2BA5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5DCu;
label_2ba5dc:
    // 0x2ba5dc: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2BA5DCu;
    SET_GPR_U32(ctx, 31, 0x2BA5E4u);
    ctx->pc = 0x2BA5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5DCu;
    // 0x2ba5e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2BA5DCu, 0x2BA5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5E4u;
label_2ba5e4:
    // 0x2ba5e4: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA5E4u;
    SET_GPR_U32(ctx, 31, 0x2BA5ECu);
    ctx->pc = 0x2BA5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5E4u;
    // 0x2ba5e8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA5E4u, 0x2BA5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5ECu;
label_2ba5ec:
    // 0x2ba5ec: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2BA5ECu;
    SET_GPR_U32(ctx, 31, 0x2BA5F4u);
    ctx->pc = 0x2BA5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5ECu;
    // 0x2ba5f0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2BA5ECu, 0x2BA5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5F4u;
label_2ba5f4:
    // 0x2ba5f4: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA5F4u;
    SET_GPR_U32(ctx, 31, 0x2BA5FCu);
    ctx->pc = 0x2BA5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5F4u;
    // 0x2ba5f8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA5F4u, 0x2BA5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5FCu;
label_2ba5fc:
    // 0x2ba5fc: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2BA5FCu;
    SET_GPR_U32(ctx, 31, 0x2BA604u);
    ctx->pc = 0x2BA600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5FCu;
    // 0x2ba600: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2BA5FCu, 0x2BA604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA604u;
label_2ba604:
    // 0x2ba604: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA604u;
    SET_GPR_U32(ctx, 31, 0x2BA60Cu);
    ctx->pc = 0x2BA608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA604u;
    // 0x2ba608: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA604u, 0x2BA60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA60Cu;
label_2ba60c:
    // 0x2ba60c: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2BA60Cu;
    SET_GPR_U32(ctx, 31, 0x2BA614u);
    ctx->pc = 0x2BA610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA60Cu;
    // 0x2ba610: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2BA60Cu, 0x2BA614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA614u;
label_2ba614:
    // 0x2ba614: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA614u;
    SET_GPR_U32(ctx, 31, 0x2BA61Cu);
    ctx->pc = 0x2BA618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA614u;
    // 0x2ba618: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA614u, 0x2BA61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA61Cu;
label_2ba61c:
    // 0x2ba61c: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2BA61Cu;
    SET_GPR_U32(ctx, 31, 0x2BA624u);
    ctx->pc = 0x2BA620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA61Cu;
    // 0x2ba620: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2BA61Cu, 0x2BA624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA624u;
label_2ba624:
    // 0x2ba624: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA624u;
    SET_GPR_U32(ctx, 31, 0x2BA62Cu);
    ctx->pc = 0x2BA628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA624u;
    // 0x2ba628: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA624u, 0x2BA62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA62Cu;
label_2ba62c:
    // 0x2ba62c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2BA62Cu;
    {
        const bool branch_taken_0x2ba62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba62c) {
            ctx->pc = 0x2BA8BCu;
            goto label_2ba8bc;
        }
    }
    ctx->pc = 0x2BA634u;
label_2ba634:
    // 0x2ba634: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ba634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ba638: 0x146200a0  bne         $v1, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2BA638u;
    {
        const bool branch_taken_0x2ba638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ba638) {
            ctx->pc = 0x2BA8BCu;
            goto label_2ba8bc;
        }
    }
    ctx->pc = 0x2BA640u;
    // 0x2ba640: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA640u;
    SET_GPR_U32(ctx, 31, 0x2BA648u);
    ctx->pc = 0x2BA644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA640u;
    // 0x2ba644: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA640u, 0x2BA648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA648u;
label_2ba648:
    // 0x2ba648: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA648u;
    SET_GPR_U32(ctx, 31, 0x2BA650u);
    ctx->pc = 0x2BA64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA648u;
    // 0x2ba64c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA648u, 0x2BA650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA650u;
label_2ba650:
    // 0x2ba650: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA650u;
    SET_GPR_U32(ctx, 31, 0x2BA658u);
    ctx->pc = 0x2BA654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA650u;
    // 0x2ba654: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA650u, 0x2BA658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA658u;
label_2ba658:
    // 0x2ba658: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA658u;
    SET_GPR_U32(ctx, 31, 0x2BA660u);
    ctx->pc = 0x2BA65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA658u;
    // 0x2ba65c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA658u, 0x2BA660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA660u;
label_2ba660:
    // 0x2ba660: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA660u;
    SET_GPR_U32(ctx, 31, 0x2BA668u);
    ctx->pc = 0x2BA664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA660u;
    // 0x2ba664: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA660u, 0x2BA668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA668u;
label_2ba668:
    // 0x2ba668: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2BA668u;
    SET_GPR_U32(ctx, 31, 0x2BA670u);
    ctx->pc = 0x2BA66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA668u;
    // 0x2ba66c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2BA668u, 0x2BA670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA670u;
label_2ba670:
    // 0x2ba670: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA670u;
    SET_GPR_U32(ctx, 31, 0x2BA678u);
    ctx->pc = 0x2BA674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA670u;
    // 0x2ba674: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA670u, 0x2BA678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA678u;
label_2ba678:
    // 0x2ba678: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA678u;
    SET_GPR_U32(ctx, 31, 0x2BA680u);
    ctx->pc = 0x2BA67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA678u;
    // 0x2ba67c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA678u, 0x2BA680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA680u;
label_2ba680:
    // 0x2ba680: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA680u;
    SET_GPR_U32(ctx, 31, 0x2BA688u);
    ctx->pc = 0x2BA684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA680u;
    // 0x2ba684: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA680u, 0x2BA688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA688u;
label_2ba688:
    // 0x2ba688: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA688u;
    SET_GPR_U32(ctx, 31, 0x2BA690u);
    ctx->pc = 0x2BA68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA688u;
    // 0x2ba68c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA688u, 0x2BA690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA690u;
label_2ba690:
    // 0x2ba690: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA690u;
    SET_GPR_U32(ctx, 31, 0x2BA698u);
    ctx->pc = 0x2BA694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA690u;
    // 0x2ba694: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA690u, 0x2BA698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA698u;
label_2ba698:
    // 0x2ba698: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA698u;
    SET_GPR_U32(ctx, 31, 0x2BA6A0u);
    ctx->pc = 0x2BA69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA698u;
    // 0x2ba69c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA698u, 0x2BA6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6A0u;
label_2ba6a0:
    // 0x2ba6a0: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA6A0u;
    SET_GPR_U32(ctx, 31, 0x2BA6A8u);
    ctx->pc = 0x2BA6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6A0u;
    // 0x2ba6a4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA6A0u, 0x2BA6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6A8u;
label_2ba6a8:
    // 0x2ba6a8: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2BA6A8u;
    SET_GPR_U32(ctx, 31, 0x2BA6B0u);
    ctx->pc = 0x2BA6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6A8u;
    // 0x2ba6ac: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2BA6A8u, 0x2BA6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6B0u;
label_2ba6b0:
    // 0x2ba6b0: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA6B0u;
    SET_GPR_U32(ctx, 31, 0x2BA6B8u);
    ctx->pc = 0x2BA6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6B0u;
    // 0x2ba6b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA6B0u, 0x2BA6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6B8u;
label_2ba6b8:
    // 0x2ba6b8: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA6B8u;
    SET_GPR_U32(ctx, 31, 0x2BA6C0u);
    ctx->pc = 0x2BA6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6B8u;
    // 0x2ba6bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA6B8u, 0x2BA6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6C0u;
label_2ba6c0:
    // 0x2ba6c0: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA6C0u;
    SET_GPR_U32(ctx, 31, 0x2BA6C8u);
    ctx->pc = 0x2BA6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6C0u;
    // 0x2ba6c4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA6C0u, 0x2BA6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6C8u;
label_2ba6c8:
    // 0x2ba6c8: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA6C8u;
    SET_GPR_U32(ctx, 31, 0x2BA6D0u);
    ctx->pc = 0x2BA6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6C8u;
    // 0x2ba6cc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA6C8u, 0x2BA6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6D0u;
label_2ba6d0:
    // 0x2ba6d0: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA6D0u;
    SET_GPR_U32(ctx, 31, 0x2BA6D8u);
    ctx->pc = 0x2BA6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6D0u;
    // 0x2ba6d4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA6D0u, 0x2BA6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6D8u;
label_2ba6d8:
    // 0x2ba6d8: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA6D8u;
    SET_GPR_U32(ctx, 31, 0x2BA6E0u);
    ctx->pc = 0x2BA6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6D8u;
    // 0x2ba6dc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA6D8u, 0x2BA6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6E0u;
label_2ba6e0:
    // 0x2ba6e0: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA6E0u;
    SET_GPR_U32(ctx, 31, 0x2BA6E8u);
    ctx->pc = 0x2BA6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6E0u;
    // 0x2ba6e4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA6E0u, 0x2BA6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6E8u;
label_2ba6e8:
    // 0x2ba6e8: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA6E8u;
    SET_GPR_U32(ctx, 31, 0x2BA6F0u);
    ctx->pc = 0x2BA6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6E8u;
    // 0x2ba6ec: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA6E8u, 0x2BA6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6F0u;
label_2ba6f0:
    // 0x2ba6f0: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA6F0u;
    SET_GPR_U32(ctx, 31, 0x2BA6F8u);
    ctx->pc = 0x2BA6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6F0u;
    // 0x2ba6f4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA6F0u, 0x2BA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6F8u;
label_2ba6f8:
    // 0x2ba6f8: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA6F8u;
    SET_GPR_U32(ctx, 31, 0x2BA700u);
    ctx->pc = 0x2BA6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6F8u;
    // 0x2ba6fc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA6F8u, 0x2BA700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA700u;
label_2ba700:
    // 0x2ba700: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA700u;
    SET_GPR_U32(ctx, 31, 0x2BA708u);
    ctx->pc = 0x2BA704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA700u;
    // 0x2ba704: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA700u, 0x2BA708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA708u;
label_2ba708:
    // 0x2ba708: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA708u;
    SET_GPR_U32(ctx, 31, 0x2BA710u);
    ctx->pc = 0x2BA70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA708u;
    // 0x2ba70c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA708u, 0x2BA710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA710u;
label_2ba710:
    // 0x2ba710: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA710u;
    SET_GPR_U32(ctx, 31, 0x2BA718u);
    ctx->pc = 0x2BA714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA710u;
    // 0x2ba714: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA710u, 0x2BA718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA718u;
label_2ba718:
    // 0x2ba718: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2BA718u;
    SET_GPR_U32(ctx, 31, 0x2BA720u);
    ctx->pc = 0x2BA71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA718u;
    // 0x2ba71c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2BA718u, 0x2BA720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA720u;
label_2ba720:
    // 0x2ba720: 0x24040444  addiu       $a0, $zero, 0x444
    ctx->pc = 0x2ba720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1092));
    // 0x2ba724: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA724u;
    SET_GPR_U32(ctx, 31, 0x2BA72Cu);
    ctx->pc = 0x2BA728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA724u;
    // 0x2ba728: 0x24050447  addiu       $a1, $zero, 0x447 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA724u, 0x2BA72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA72Cu;
label_2ba72c:
    // 0x2ba72c: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA72Cu;
    SET_GPR_U32(ctx, 31, 0x2BA734u);
    ctx->pc = 0x2BA730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA72Cu;
    // 0x2ba730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA72Cu, 0x2BA734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA734u;
label_2ba734:
    // 0x2ba734: 0x2404044a  addiu       $a0, $zero, 0x44A
    ctx->pc = 0x2ba734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1098));
    // 0x2ba738: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA738u;
    SET_GPR_U32(ctx, 31, 0x2BA740u);
    ctx->pc = 0x2BA73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA738u;
    // 0x2ba73c: 0x2405044e  addiu       $a1, $zero, 0x44E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1102));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA738u, 0x2BA740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA740u;
label_2ba740:
    // 0x2ba740: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA740u;
    SET_GPR_U32(ctx, 31, 0x2BA748u);
    ctx->pc = 0x2BA744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA740u;
    // 0x2ba744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA740u, 0x2BA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA748u;
label_2ba748:
    // 0x2ba748: 0x24040439  addiu       $a0, $zero, 0x439
    ctx->pc = 0x2ba748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1081));
    // 0x2ba74c: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA74Cu;
    SET_GPR_U32(ctx, 31, 0x2BA754u);
    ctx->pc = 0x2BA750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA74Cu;
    // 0x2ba750: 0x240503f0  addiu       $a1, $zero, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA74Cu, 0x2BA754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA754u;
label_2ba754:
    // 0x2ba754: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA754u;
    SET_GPR_U32(ctx, 31, 0x2BA75Cu);
    ctx->pc = 0x2BA758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA754u;
    // 0x2ba758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA754u, 0x2BA75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA75Cu;
label_2ba75c:
    // 0x2ba75c: 0x240404a9  addiu       $a0, $zero, 0x4A9
    ctx->pc = 0x2ba75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1193));
    // 0x2ba760: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA760u;
    SET_GPR_U32(ctx, 31, 0x2BA768u);
    ctx->pc = 0x2BA764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA760u;
    // 0x2ba764: 0x240504aa  addiu       $a1, $zero, 0x4AA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1194));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA760u, 0x2BA768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA768u;
label_2ba768:
    // 0x2ba768: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA768u;
    SET_GPR_U32(ctx, 31, 0x2BA770u);
    ctx->pc = 0x2BA76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA768u;
    // 0x2ba76c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA768u, 0x2BA770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA770u;
label_2ba770:
    // 0x2ba770: 0x240404a1  addiu       $a0, $zero, 0x4A1
    ctx->pc = 0x2ba770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1185));
    // 0x2ba774: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA774u;
    SET_GPR_U32(ctx, 31, 0x2BA77Cu);
    ctx->pc = 0x2BA778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA774u;
    // 0x2ba778: 0x240504a2  addiu       $a1, $zero, 0x4A2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA774u, 0x2BA77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA77Cu;
label_2ba77c:
    // 0x2ba77c: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA77Cu;
    SET_GPR_U32(ctx, 31, 0x2BA784u);
    ctx->pc = 0x2BA780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA77Cu;
    // 0x2ba780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA77Cu, 0x2BA784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA784u;
label_2ba784:
    // 0x2ba784: 0x24040468  addiu       $a0, $zero, 0x468
    ctx->pc = 0x2ba784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1128));
    // 0x2ba788: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA788u;
    SET_GPR_U32(ctx, 31, 0x2BA790u);
    ctx->pc = 0x2BA78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA788u;
    // 0x2ba78c: 0x2405056c  addiu       $a1, $zero, 0x56C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA788u, 0x2BA790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA790u;
label_2ba790:
    // 0x2ba790: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA790u;
    SET_GPR_U32(ctx, 31, 0x2BA798u);
    ctx->pc = 0x2BA794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA790u;
    // 0x2ba794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA790u, 0x2BA798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA798u;
label_2ba798:
    // 0x2ba798: 0x24040480  addiu       $a0, $zero, 0x480
    ctx->pc = 0x2ba798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x2ba79c: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA79Cu;
    SET_GPR_U32(ctx, 31, 0x2BA7A4u);
    ctx->pc = 0x2BA7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA79Cu;
    // 0x2ba7a0: 0x24050482  addiu       $a1, $zero, 0x482 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1154));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA79Cu, 0x2BA7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7A4u;
label_2ba7a4:
    // 0x2ba7a4: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA7A4u;
    SET_GPR_U32(ctx, 31, 0x2BA7ACu);
    ctx->pc = 0x2BA7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7A4u;
    // 0x2ba7a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA7A4u, 0x2BA7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7ACu;
label_2ba7ac:
    // 0x2ba7ac: 0x2404040c  addiu       $a0, $zero, 0x40C
    ctx->pc = 0x2ba7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x2ba7b0: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA7B0u;
    SET_GPR_U32(ctx, 31, 0x2BA7B8u);
    ctx->pc = 0x2BA7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7B0u;
    // 0x2ba7b4: 0x2405040b  addiu       $a1, $zero, 0x40B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA7B0u, 0x2BA7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7B8u;
label_2ba7b8:
    // 0x2ba7b8: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA7B8u;
    SET_GPR_U32(ctx, 31, 0x2BA7C0u);
    ctx->pc = 0x2BA7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7B8u;
    // 0x2ba7bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA7B8u, 0x2BA7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7C0u;
label_2ba7c0:
    // 0x2ba7c0: 0x240404f1  addiu       $a0, $zero, 0x4F1
    ctx->pc = 0x2ba7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1265));
    // 0x2ba7c4: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA7C4u;
    SET_GPR_U32(ctx, 31, 0x2BA7CCu);
    ctx->pc = 0x2BA7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7C4u;
    // 0x2ba7c8: 0x2405040b  addiu       $a1, $zero, 0x40B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA7C4u, 0x2BA7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7CCu;
label_2ba7cc:
    // 0x2ba7cc: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA7CCu;
    SET_GPR_U32(ctx, 31, 0x2BA7D4u);
    ctx->pc = 0x2BA7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7CCu;
    // 0x2ba7d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA7CCu, 0x2BA7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7D4u;
label_2ba7d4:
    // 0x2ba7d4: 0x24040410  addiu       $a0, $zero, 0x410
    ctx->pc = 0x2ba7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x2ba7d8: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA7D8u;
    SET_GPR_U32(ctx, 31, 0x2BA7E0u);
    ctx->pc = 0x2BA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7D8u;
    // 0x2ba7dc: 0x2405040f  addiu       $a1, $zero, 0x40F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA7D8u, 0x2BA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7E0u;
label_2ba7e0:
    // 0x2ba7e0: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA7E0u;
    SET_GPR_U32(ctx, 31, 0x2BA7E8u);
    ctx->pc = 0x2BA7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7E0u;
    // 0x2ba7e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA7E0u, 0x2BA7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7E8u;
label_2ba7e8:
    // 0x2ba7e8: 0x24040410  addiu       $a0, $zero, 0x410
    ctx->pc = 0x2ba7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x2ba7ec: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA7ECu;
    SET_GPR_U32(ctx, 31, 0x2BA7F4u);
    ctx->pc = 0x2BA7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7ECu;
    // 0x2ba7f0: 0x24050539  addiu       $a1, $zero, 0x539 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1337));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA7ECu, 0x2BA7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7F4u;
label_2ba7f4:
    // 0x2ba7f4: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA7F4u;
    SET_GPR_U32(ctx, 31, 0x2BA7FCu);
    ctx->pc = 0x2BA7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7F4u;
    // 0x2ba7f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA7F4u, 0x2BA7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7FCu;
label_2ba7fc:
    // 0x2ba7fc: 0x24040550  addiu       $a0, $zero, 0x550
    ctx->pc = 0x2ba7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1360));
    // 0x2ba800: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA800u;
    SET_GPR_U32(ctx, 31, 0x2BA808u);
    ctx->pc = 0x2BA804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA800u;
    // 0x2ba804: 0x240504ae  addiu       $a1, $zero, 0x4AE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1198));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA800u, 0x2BA808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA808u;
label_2ba808:
    // 0x2ba808: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA808u;
    SET_GPR_U32(ctx, 31, 0x2BA810u);
    ctx->pc = 0x2BA80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA808u;
    // 0x2ba80c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA808u, 0x2BA810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA810u;
label_2ba810:
    // 0x2ba810: 0x240404aa  addiu       $a0, $zero, 0x4AA
    ctx->pc = 0x2ba810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1194));
    // 0x2ba814: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA814u;
    SET_GPR_U32(ctx, 31, 0x2BA81Cu);
    ctx->pc = 0x2BA818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA814u;
    // 0x2ba818: 0x2405054d  addiu       $a1, $zero, 0x54D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1357));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA814u, 0x2BA81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA81Cu;
label_2ba81c:
    // 0x2ba81c: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA81Cu;
    SET_GPR_U32(ctx, 31, 0x2BA824u);
    ctx->pc = 0x2BA820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA81Cu;
    // 0x2ba820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA81Cu, 0x2BA824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA824u;
label_2ba824:
    // 0x2ba824: 0x24040468  addiu       $a0, $zero, 0x468
    ctx->pc = 0x2ba824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1128));
    // 0x2ba828: 0xc09925e  jal         func_264978
    ctx->pc = 0x2BA828u;
    SET_GPR_U32(ctx, 31, 0x2BA830u);
    ctx->pc = 0x2BA82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA828u;
    // 0x2ba82c: 0x2405056c  addiu       $a1, $zero, 0x56C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2BA828u, 0x2BA830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA830u;
label_2ba830:
    // 0x2ba830: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2BA830u;
    SET_GPR_U32(ctx, 31, 0x2BA838u);
    ctx->pc = 0x2BA834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA830u;
    // 0x2ba834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2BA830u, 0x2BA838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA838u;
label_2ba838:
    // 0x2ba838: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2ba838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ba83c: 0xc095e08  jal         func_257820
    ctx->pc = 0x2BA83Cu;
    SET_GPR_U32(ctx, 31, 0x2BA844u);
    ctx->pc = 0x2BA840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA83Cu;
    // 0x2ba840: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x2BA83Cu, 0x2BA844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA844u;
label_2ba844:
    // 0x2ba844: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x2ba844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2ba848: 0xc095e08  jal         func_257820
    ctx->pc = 0x2BA848u;
    SET_GPR_U32(ctx, 31, 0x2BA850u);
    ctx->pc = 0x2BA84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA848u;
    // 0x2ba84c: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x2BA848u, 0x2BA850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA850u;
label_2ba850:
    // 0x2ba850: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x2ba850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2ba854: 0xc095e08  jal         func_257820
    ctx->pc = 0x2BA854u;
    SET_GPR_U32(ctx, 31, 0x2BA85Cu);
    ctx->pc = 0x2BA858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA854u;
    // 0x2ba858: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x2BA854u, 0x2BA85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA85Cu;
label_2ba85c:
    // 0x2ba85c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2ba85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2ba860: 0xc095e08  jal         func_257820
    ctx->pc = 0x2BA860u;
    SET_GPR_U32(ctx, 31, 0x2BA868u);
    ctx->pc = 0x2BA864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA860u;
    // 0x2ba864: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x2BA860u, 0x2BA868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA868u;
label_2ba868:
    // 0x2ba868: 0xc095dde  jal         func_257778
    ctx->pc = 0x2BA868u;
    SET_GPR_U32(ctx, 31, 0x2BA870u);
    ctx->pc = 0x2BA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA868u;
    // 0x2ba86c: 0x2404005b  addiu       $a0, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257778u, 0x2BA868u, 0x2BA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA870u;
label_2ba870:
    // 0x2ba870: 0xc095dde  jal         func_257778
    ctx->pc = 0x2BA870u;
    SET_GPR_U32(ctx, 31, 0x2BA878u);
    ctx->pc = 0x2BA874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA870u;
    // 0x2ba874: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257778u, 0x2BA870u, 0x2BA878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA878u;
label_2ba878:
    // 0x2ba878: 0xc095dde  jal         func_257778
    ctx->pc = 0x2BA878u;
    SET_GPR_U32(ctx, 31, 0x2BA880u);
    ctx->pc = 0x2BA87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA878u;
    // 0x2ba87c: 0x2404005d  addiu       $a0, $zero, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257778u, 0x2BA878u, 0x2BA880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA880u;
label_2ba880:
    // 0x2ba880: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ba880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ba884: 0xc095e08  jal         func_257820
    ctx->pc = 0x2BA884u;
    SET_GPR_U32(ctx, 31, 0x2BA88Cu);
    ctx->pc = 0x2BA888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA884u;
    // 0x2ba888: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x2BA884u, 0x2BA88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA88Cu;
label_2ba88c:
    // 0x2ba88c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ba88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ba890: 0xc095e08  jal         func_257820
    ctx->pc = 0x2BA890u;
    SET_GPR_U32(ctx, 31, 0x2BA898u);
    ctx->pc = 0x2BA894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA890u;
    // 0x2ba894: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x2BA890u, 0x2BA898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA898u;
label_2ba898:
    // 0x2ba898: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2ba898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2ba89c: 0xc095e08  jal         func_257820
    ctx->pc = 0x2BA89Cu;
    SET_GPR_U32(ctx, 31, 0x2BA8A4u);
    ctx->pc = 0x2BA8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA89Cu;
    // 0x2ba8a0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x2BA89Cu, 0x2BA8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8A4u;
label_2ba8a4:
    // 0x2ba8a4: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x2ba8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x2ba8a8: 0xc095e08  jal         func_257820
    ctx->pc = 0x2BA8A8u;
    SET_GPR_U32(ctx, 31, 0x2BA8B0u);
    ctx->pc = 0x2BA8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA8A8u;
    // 0x2ba8ac: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x2BA8A8u, 0x2BA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8B0u;
label_2ba8b0:
    // 0x2ba8b0: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x2ba8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2ba8b4: 0xc095e08  jal         func_257820
    ctx->pc = 0x2BA8B4u;
    SET_GPR_U32(ctx, 31, 0x2BA8BCu);
    ctx->pc = 0x2BA8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA8B4u;
    // 0x2ba8b8: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x2BA8B4u, 0x2BA8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8BCu;
label_2ba8bc:
    // 0x2ba8bc: 0xc0b3494  jal         func_2CD250
    ctx->pc = 0x2BA8BCu;
    SET_GPR_U32(ctx, 31, 0x2BA8C4u);
    ctx->pc = 0x2CD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD250u, 0x2BA8BCu, 0x2BA8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8C4u;
label_2ba8c4:
    // 0x2ba8c4: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x2ba8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
label_2ba8c8:
    // 0x2ba8c8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ba8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ba8cc: 0x8c500048  lw          $s0, 0x48($v0)
    ctx->pc = 0x2ba8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ba8d0: 0x16030030  bne         $s0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2BA8D0u;
    {
        const bool branch_taken_0x2ba8d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8D0u;
        // 0x2ba8d4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8d0) {
            ctx->pc = 0x2BA994u;
            goto label_2ba994;
        }
    }
    ctx->pc = 0x2BA8D8u;
    // 0x2ba8d8: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2ba8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2ba8dc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ba8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ba8e0: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2BA8E0u;
    {
        const bool branch_taken_0x2ba8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8E0u;
        // 0x2ba8e4: 0xaf80b59c  sw          $zero, -0x4A64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8e0) {
            ctx->pc = 0x2BA964u;
            goto label_2ba964;
        }
    }
    ctx->pc = 0x2BA8E8u;
    // 0x2ba8e8: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2ba8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ba8ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA8ECu;
    {
        const bool branch_taken_0x2ba8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8ECu;
        // 0x2ba8f0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8ec) {
            ctx->pc = 0x2BA904u;
            goto label_2ba904;
        }
    }
    ctx->pc = 0x2BA8F4u;
    // 0x2ba8f4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BA8F4u;
    {
        const bool branch_taken_0x2ba8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8F4u;
        // 0x2ba8f8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8f4) {
            ctx->pc = 0x2BA938u;
            goto label_2ba938;
        }
    }
    ctx->pc = 0x2BA8FCu;
    // 0x2ba8fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2BA8FCu;
    {
        const bool branch_taken_0x2ba8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba8fc) {
            ctx->pc = 0x2BA988u;
            goto label_2ba988;
        }
    }
    ctx->pc = 0x2BA904u;
label_2ba904:
    // 0x2ba904: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2ba904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ba908: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA908u;
    {
        const bool branch_taken_0x2ba908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA908u;
        // 0x2ba90c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba908) {
            ctx->pc = 0x2BA920u;
            goto label_2ba920;
        }
    }
    ctx->pc = 0x2BA910u;
    // 0x2ba910: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BA910u;
    {
        const bool branch_taken_0x2ba910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA910u;
        // 0x2ba914: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba910) {
            ctx->pc = 0x2BA948u;
            goto label_2ba948;
        }
    }
    ctx->pc = 0x2BA918u;
    // 0x2ba918: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2BA918u;
    {
        const bool branch_taken_0x2ba918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba918) {
            ctx->pc = 0x2BA988u;
            goto label_2ba988;
        }
    }
    ctx->pc = 0x2BA920u;
label_2ba920:
    // 0x2ba920: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ba920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2ba924: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2ba924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2ba928: 0x24420b28  addiu       $v0, $v0, 0xB28
    ctx->pc = 0x2ba928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2856));
    // 0x2ba92c: 0x24631110  addiu       $v1, $v1, 0x1110
    ctx->pc = 0x2ba92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4368));
    // 0x2ba930: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BA930u;
    {
        const bool branch_taken_0x2ba930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA930u;
        // 0x2ba934: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba930) {
            ctx->pc = 0x2BA978u;
            goto label_2ba978;
        }
    }
    ctx->pc = 0x2BA938u;
label_2ba938:
    // 0x2ba938: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2ba938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2ba93c: 0x24421120  addiu       $v0, $v0, 0x1120
    ctx->pc = 0x2ba93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4384));
    // 0x2ba940: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA940u;
    {
        const bool branch_taken_0x2ba940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA940u;
        // 0x2ba944: 0x24631630  addiu       $v1, $v1, 0x1630 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba940) {
            ctx->pc = 0x2BA954u;
            goto label_2ba954;
        }
    }
    ctx->pc = 0x2BA948u;
label_2ba948:
    // 0x2ba948: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2ba948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2ba94c: 0x24421a88  addiu       $v0, $v0, 0x1A88
    ctx->pc = 0x2ba94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6792));
    // 0x2ba950: 0x24631f98  addiu       $v1, $v1, 0x1F98
    ctx->pc = 0x2ba950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8088));
label_2ba954:
    // 0x2ba954: 0xaf82b9f0  sw          $v0, -0x4610($gp)
    ctx->pc = 0x2ba954u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 2));
    // 0x2ba958: 0xaf90b9c0  sw          $s0, -0x4640($gp)
    ctx->pc = 0x2ba958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949312), GPR_U32(ctx, 16));
    // 0x2ba95c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BA95Cu;
    {
        const bool branch_taken_0x2ba95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA95Cu;
        // 0x2ba960: 0xaf83b9f4  sw          $v1, -0x460C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba95c) {
            ctx->pc = 0x2BA990u;
            goto label_2ba990;
        }
    }
    ctx->pc = 0x2BA964u;
label_2ba964:
    // 0x2ba964: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ba964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2ba968: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2ba968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2ba96c: 0x24421640  addiu       $v0, $v0, 0x1640
    ctx->pc = 0x2ba96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5696));
    // 0x2ba970: 0x24631a78  addiu       $v1, $v1, 0x1A78
    ctx->pc = 0x2ba970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6776));
    // 0x2ba974: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ba974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ba978:
    // 0x2ba978: 0xaf82b9f0  sw          $v0, -0x4610($gp)
    ctx->pc = 0x2ba978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 2));
    // 0x2ba97c: 0xaf84b9c0  sw          $a0, -0x4640($gp)
    ctx->pc = 0x2ba97cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949312), GPR_U32(ctx, 4));
    // 0x2ba980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA980u;
    {
        const bool branch_taken_0x2ba980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA980u;
        // 0x2ba984: 0xaf83b9f4  sw          $v1, -0x460C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba980) {
            ctx->pc = 0x2BA990u;
            goto label_2ba990;
        }
    }
    ctx->pc = 0x2BA988u;
label_2ba988:
    // 0x2ba988: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x2BA988u;
    SET_GPR_U32(ctx, 31, 0x2BA990u);
    ctx->pc = 0x2BA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA988u;
    // 0x2ba98c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x2BA988u, 0x2BA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA990u;
label_2ba990:
    // 0x2ba990: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ba990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2ba994:
    // 0x2ba994: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2ba994u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ba998: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2ba998u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ba99c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2ba99cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ba9a0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2ba9a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ba9a4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ba9a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ba9a8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2ba9a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ba9ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ba9acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ba9b0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ba9b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba9b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ba9b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba9b8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2ba9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ba9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9BCu;
        // 0x2ba9c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA9C4u;
}
