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

// Function: padact_pageDraw
// Address: 0x24f418 - 0x24f520
void padact_pageDraw_0x24f418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padact_pageDraw_0x24f418");
#endif

    switch (ctx->pc) {
        case 0x24f434u: goto label_24f434;
        case 0x24f49cu: goto label_24f49c;
        case 0x24f4a4u: goto label_24f4a4;
        case 0x24f50cu: goto label_24f50c;
        default: break;
    }

    ctx->pc = 0x24f418u;

    // 0x24f418: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24f418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24f41c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24f41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24f420: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24f420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24f424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24f424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f428: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24f428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24f42c: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x24F42Cu;
    SET_GPR_U32(ctx, 31, 0x24F434u);
    ctx->pc = 0x24F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F42Cu;
    // 0x24f430: 0x96250004  lhu         $a1, 0x4($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x24F42Cu, 0x24F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F434u;
label_24f434:
    // 0x24f434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24f434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f438: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24F438u;
    {
        const bool branch_taken_0x24f438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F438u;
        // 0x24f43c: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f438) {
            ctx->pc = 0x24F49Cu;
            goto label_24f49c;
        }
    }
    ctx->pc = 0x24F440u;
    // 0x24f440: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x24f440u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24f444: 0x8c839a04  lw          $v1, -0x65FC($a0)
    ctx->pc = 0x24f444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941188)));
    // 0x24f448: 0x8f82a1dc  lw          $v0, -0x5E24($gp)
    ctx->pc = 0x24f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943196)));
    // 0x24f44c: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x24f44cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f450: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24f450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24f454: 0x960a0006  lhu         $t2, 0x6($s0)
    ctx->pc = 0x24f454u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x24f458: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24f458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24f45c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x24f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f460: 0x9388a02c  lbu         $t0, -0x5FD4($gp)
    ctx->pc = 0x24f460u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x24f464: 0x252200fc  addiu       $v0, $t1, 0xFC
    ctx->pc = 0x24f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 252));
    // 0x24f468: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x24f468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x24f46c: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x24f46cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x24f470: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x24f470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x24f474: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x24f474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f478: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x24f478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f47c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24f47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f480: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x24f480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f484: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x24f484u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x24f488: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x24f488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x24f48c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x24f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x24f490: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x24f490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x24f494: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x24F494u;
    SET_GPR_U32(ctx, 31, 0x24F49Cu);
    ctx->pc = 0x24F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F494u;
    // 0x24f498: 0xafaa000c  sw          $t2, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x24F494u, 0x24F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F49Cu;
label_24f49c:
    // 0x24f49c: 0xc08b79a  jal         func_22DE68
    ctx->pc = 0x24F49Cu;
    SET_GPR_U32(ctx, 31, 0x24F4A4u);
    ctx->pc = 0x24F4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F49Cu;
    // 0x24f4a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DE68u, 0x24F49Cu, 0x24F4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4A4u;
label_24f4a4:
    // 0x24f4a4: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24F4A4u;
    {
        const bool branch_taken_0x24f4a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4A4u;
        // 0x24f4a8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4a4) {
            ctx->pc = 0x24F50Cu;
            goto label_24f50c;
        }
    }
    ctx->pc = 0x24F4ACu;
    // 0x24f4ac: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x24f4acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24f4b0: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24F4B0u;
    {
        const bool branch_taken_0x24f4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4B0u;
        // 0x24f4b4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4b0) {
            ctx->pc = 0x24F50Cu;
            goto label_24f50c;
        }
    }
    ctx->pc = 0x24F4B8u;
    // 0x24f4b8: 0x96070002  lhu         $a3, 0x2($s0)
    ctx->pc = 0x24f4b8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24f4bc: 0x244399f0  addiu       $v1, $v0, -0x6610
    ctx->pc = 0x24f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x24f4c0: 0x8c4499f0  lw          $a0, -0x6610($v0)
    ctx->pc = 0x24f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941168)));
    // 0x24f4c4: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x24f4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x24f4c8: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x24f4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x24f4cc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x24f4ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f4d0: 0x34a57f00  ori         $a1, $a1, 0x7F00
    ctx->pc = 0x24f4d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32512);
    // 0x24f4d4: 0x8f82a1dc  lw          $v0, -0x5E24($gp)
    ctx->pc = 0x24f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943196)));
    // 0x24f4d8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x24f4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x24f4dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24f4e0: 0x9387a02c  lbu         $a3, -0x5FD4($gp)
    ctx->pc = 0x24f4e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x24f4e4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x24f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x24f4e8: 0x2484ffe2  addiu       $a0, $a0, -0x1E
    ctx->pc = 0x24f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x24f4ec: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x24f4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24f4f0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x24f4f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24f4f4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24f4f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24f4f8: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x24f4f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24f4fc: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x24f4fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24f500: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x24f500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x24f504: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24F504u;
    SET_GPR_U32(ctx, 31, 0x24F50Cu);
    ctx->pc = 0x24F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F504u;
    // 0x24f508: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24F504u, 0x24F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F50Cu;
label_24f50c:
    // 0x24f50c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24f50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f510: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24f510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f514: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24f514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f518: 0x3e00008  jr          $ra
    ctx->pc = 0x24F518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F518u;
        // 0x24f51c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F520u;
}
