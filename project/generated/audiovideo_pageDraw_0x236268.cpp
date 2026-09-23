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

// Function: audiovideo_pageDraw
// Address: 0x236268 - 0x2364c8
void audiovideo_pageDraw_0x236268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audiovideo_pageDraw_0x236268");
#endif

    switch (ctx->pc) {
        case 0x23629cu: goto label_23629c;
        case 0x236330u: goto label_236330;
        case 0x236360u: goto label_236360;
        case 0x236384u: goto label_236384;
        case 0x2363a4u: goto label_2363a4;
        case 0x2363c0u: goto label_2363c0;
        case 0x2363dcu: goto label_2363dc;
        case 0x2363f8u: goto label_2363f8;
        case 0x236410u: goto label_236410;
        case 0x236428u: goto label_236428;
        case 0x236440u: goto label_236440;
        case 0x236458u: goto label_236458;
        default: break;
    }

    ctx->pc = 0x236268u;

    // 0x236268: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x236268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x23626c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x23626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x236270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236274: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x236274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x236278: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x236278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x23627c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x23627cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x236280: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x236280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x236284: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x236284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x236288: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x236288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x23628c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x23628cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x236290: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x236290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x236294: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x236294u;
    SET_GPR_U32(ctx, 31, 0x23629Cu);
    ctx->pc = 0x236298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236294u;
    // 0x236298: 0xffb10030  sd          $s1, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x236294u, 0x23629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23629Cu;
label_23629c:
    // 0x23629c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x23629cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2362a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2362a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2362a4: 0x1462007d  bne         $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2362A4u;
    {
        const bool branch_taken_0x2362a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2362A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362A4u;
        // 0x2362a8: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362a4) {
            ctx->pc = 0x23649Cu;
            goto label_23649c;
        }
    }
    ctx->pc = 0x2362ACu;
    // 0x2362ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2362acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2362b0: 0x9391a02d  lbu         $s1, -0x5FD3($gp)
    ctx->pc = 0x2362b0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942765)));
    // 0x2362b4: 0x244499f0  addiu       $a0, $v0, -0x6610
    ctx->pc = 0x2362b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x2362b8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2362b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2362bc: 0x8c4299f0  lw          $v0, -0x6610($v0)
    ctx->pc = 0x2362bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3299F0u));
    // 0x2362c0: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2362c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2362c4: 0x9388a02c  lbu         $t0, -0x5FD4($gp)
    ctx->pc = 0x2362c4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x2362c8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2362c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2362cc: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2362ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2362d0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2362d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2362d4: 0x34427f00  ori         $v0, $v0, 0x7F00
    ctx->pc = 0x2362d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32512);
    // 0x2362d8: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x2362d8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x329A04u));
    // 0x2362dc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x2362dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2362e0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2362e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2362e4: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x2362e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x2362e8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2362e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2362ec: 0x261e0002  addiu       $fp, $s0, 0x2
    ctx->pc = 0x2362ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2362f0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2362f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2362f4: 0x2613000b  addiu       $s3, $s0, 0xB
    ctx->pc = 0x2362f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x2362f8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2362f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2362fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236300: 0x246300ca  addiu       $v1, $v1, 0xCA
    ctx->pc = 0x236300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 202));
    // 0x236304: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x236304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236308: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x236308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x23630c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x23630cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236310: 0x26170034  addiu       $s7, $s0, 0x34
    ctx->pc = 0x236310u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x236314: 0x8c920018  lw          $s2, 0x18($a0)
    ctx->pc = 0x236314u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x329A08u));
    // 0x236318: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x236318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x23631c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23631cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F4u));
    // 0x236320: 0x2656fff4  addiu       $s6, $s2, -0xC
    ctx->pc = 0x236320u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
    // 0x236324: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x236324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x236328: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x236328u;
    SET_GPR_U32(ctx, 31, 0x236330u);
    ctx->pc = 0x23632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236328u;
    // 0x23632c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x236328u, 0x236330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236330u;
label_236330:
    // 0x236330: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x236330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x236334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x236334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236338: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x236338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x23633c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x23633cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236340: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x236340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
    // 0x236344: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x236344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236348: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x236348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x23634c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23634cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236350: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x236350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x236354: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x236354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236358: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x236358u;
    SET_GPR_U32(ctx, 31, 0x236360u);
    ctx->pc = 0x23635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236358u;
    // 0x23635c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x236358u, 0x236360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236360u;
label_236360:
    // 0x236360: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x236360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x236364: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x236364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236368: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x236368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23636c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23636cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236370: 0x2455ff36  addiu       $s5, $v0, -0xCA
    ctx->pc = 0x236370u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967094));
    // 0x236374: 0x2454ffeb  addiu       $s4, $v0, -0x15
    ctx->pc = 0x236374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
    // 0x236378: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x236378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23637c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x23637Cu;
    SET_GPR_U32(ctx, 31, 0x236384u);
    ctx->pc = 0x236380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23637Cu;
    // 0x236380: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x23637Cu, 0x236384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236384u;
label_236384:
    // 0x236384: 0x2653fffe  addiu       $s3, $s2, -0x2
    ctx->pc = 0x236384u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x236388: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x236388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23638c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23638cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236390: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x236390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236394: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x236394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236398: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x236398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23639c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x23639Cu;
    SET_GPR_U32(ctx, 31, 0x2363A4u);
    ctx->pc = 0x2363A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23639Cu;
    // 0x2363a0: 0x2650ffcc  addiu       $s0, $s2, -0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x23639Cu, 0x2363A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363A4u;
label_2363a4:
    // 0x2363a4: 0x2652fffd  addiu       $s2, $s2, -0x3
    ctx->pc = 0x2363a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
    // 0x2363a8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2363a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2363ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2363acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2363b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363b4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2363b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363b8: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2363B8u;
    SET_GPR_U32(ctx, 31, 0x2363C0u);
    ctx->pc = 0x2363BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363B8u;
    // 0x2363bc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2363B8u, 0x2363C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363C0u;
label_2363c0:
    // 0x2363c0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2363c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2363c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2363c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2363c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363cc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2363ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363d0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2363d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363d4: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2363D4u;
    SET_GPR_U32(ctx, 31, 0x2363DCu);
    ctx->pc = 0x2363D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363D4u;
    // 0x2363d8: 0x2466ffea  addiu       $a2, $v1, -0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2363D4u, 0x2363DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363DCu;
label_2363dc:
    // 0x2363dc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2363dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2363e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2363e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2363e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2363e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2363e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363ec: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2363ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363f0: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2363F0u;
    SET_GPR_U32(ctx, 31, 0x2363F8u);
    ctx->pc = 0x2363F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363F0u;
    // 0x2363f4: 0x24460015  addiu       $a2, $v0, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2363F0u, 0x2363F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363F8u;
label_2363f8:
    // 0x2363f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2363f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2363fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2363fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236400: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x236400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x236404: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x236404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236408: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x236408u;
    SET_GPR_U32(ctx, 31, 0x236410u);
    ctx->pc = 0x23640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236408u;
    // 0x23640c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x236408u, 0x236410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236410u;
label_236410:
    // 0x236410: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x236410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236414: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x236414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236418: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x236418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23641c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x23641cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236420: 0xc0ae226  jal         func_2B8898
    ctx->pc = 0x236420u;
    SET_GPR_U32(ctx, 31, 0x236428u);
    ctx->pc = 0x236424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236420u;
    // 0x236424: 0x8fa80010  lw          $t0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8898u, 0x236420u, 0x236428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236428u;
label_236428:
    // 0x236428: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x236428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23642c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236430: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x236430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236434: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x236434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236438: 0xc0ae226  jal         func_2B8898
    ctx->pc = 0x236438u;
    SET_GPR_U32(ctx, 31, 0x236440u);
    ctx->pc = 0x23643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236438u;
    // 0x23643c: 0x8fa80010  lw          $t0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8898u, 0x236438u, 0x236440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236440u;
label_236440:
    // 0x236440: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x236440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236444: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x236444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236448: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x236448u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23644c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23644cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236450: 0xc0ae226  jal         func_2B8898
    ctx->pc = 0x236450u;
    SET_GPR_U32(ctx, 31, 0x236458u);
    ctx->pc = 0x236454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236450u;
    // 0x236454: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8898u, 0x236450u, 0x236458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236458u;
label_236458:
    // 0x236458: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x236458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23645c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23645cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236460: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x236460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236464: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x236464u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236468: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x236468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23646c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x23646cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236470: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x236470u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x236474: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x236474u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x236478: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x236478u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23647c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x23647cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x236480: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x236480u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x236484: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x236484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236488: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x236488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23648c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x23648cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236490: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x236490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236494: 0x80ae226  j           func_2B8898
    ctx->pc = 0x236494u;
    ctx->pc = 0x236498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236494u;
    // 0x236498: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    dlDrawLine_0x2b8898(rdram, ctx, runtime); return;
    ctx->pc = 0x23649Cu;
label_23649c:
    // 0x23649c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x23649cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2364a0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2364a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2364a4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2364a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2364a8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2364a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2364ac: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2364acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2364b0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2364b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2364b4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2364b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2364b8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2364b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2364bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2364bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2364c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2364C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2364C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364C0u;
        // 0x2364c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2364C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2364C8u;
}
