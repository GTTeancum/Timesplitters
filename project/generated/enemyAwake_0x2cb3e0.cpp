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

// Function: enemyAwake
// Address: 0x2cb3e0 - 0x2cb5b8
void enemyAwake_0x2cb3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAwake_0x2cb3e0");
#endif

    switch (ctx->pc) {
        case 0x2cb410u: goto label_2cb410;
        case 0x2cb41cu: goto label_2cb41c;
        case 0x2cb42cu: goto label_2cb42c;
        case 0x2cb4acu: goto label_2cb4ac;
        case 0x2cb5a4u: goto label_2cb5a4;
        default: break;
    }

    ctx->pc = 0x2cb3e0u;

    // 0x2cb3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb3e4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2cb3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2cb3e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2cb3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cb3ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb3f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb3f8: 0x8e300160  lw          $s0, 0x160($s1)
    ctx->pc = 0x2cb3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2cb3fc: 0x8e020aa4  lw          $v0, 0xAA4($s0)
    ctx->pc = 0x2cb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2724)));
    // 0x2cb400: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB400u;
    {
        const bool branch_taken_0x2cb400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cb400) {
            ctx->pc = 0x2CB404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB400u;
            // 0x2cb404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB424u;
            goto label_2cb424;
        }
    }
    ctx->pc = 0x2CB408u;
    // 0x2cb408: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CB408u;
    SET_GPR_U32(ctx, 31, 0x2CB410u);
    ctx->pc = 0x2CB40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB408u;
    // 0x2cb40c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CB408u, 0x2CB410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB410u;
label_2cb410:
    // 0x2cb410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb414: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CB414u;
    SET_GPR_U32(ctx, 31, 0x2CB41Cu);
    ctx->pc = 0x2CB418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB414u;
    // 0x2cb418: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CB414u, 0x2CB41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB41Cu;
label_2cb41c:
    // 0x2cb41c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB41Cu;
    {
        const bool branch_taken_0x2cb41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB41Cu;
        // 0x2cb420: 0x8e030ae4  lw          $v1, 0xAE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb41c) {
            ctx->pc = 0x2CB430u;
            goto label_2cb430;
        }
    }
    ctx->pc = 0x2CB424u;
label_2cb424:
    // 0x2cb424: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CB424u;
    SET_GPR_U32(ctx, 31, 0x2CB42Cu);
    ctx->pc = 0x2CB428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB424u;
    // 0x2cb428: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CB424u, 0x2CB42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB42Cu;
label_2cb42c:
    // 0x2cb42c: 0x8e030ae4  lw          $v1, 0xAE4($s0)
    ctx->pc = 0x2cb42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
label_2cb430:
    // 0x2cb430: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2CB430u;
    {
        const bool branch_taken_0x2cb430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB430u;
        // 0x2cb434: 0x8f82b230  lw          $v0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb430) {
            ctx->pc = 0x2CB578u;
            goto label_2cb578;
        }
    }
    ctx->pc = 0x2CB438u;
    // 0x2cb438: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2cb438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb43c: 0x8e040a90  lw          $a0, 0xA90($s0)
    ctx->pc = 0x2cb43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2cb440: 0xe6000aec  swc1        $f0, 0xAEC($s0)
    ctx->pc = 0x2cb440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2796), bits); }
    // 0x2cb444: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x2cb444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x2cb448: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x2cb448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb44c: 0xe6000af0  swc1        $f0, 0xAF0($s0)
    ctx->pc = 0x2cb44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2800), bits); }
    // 0x2cb450: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x2cb450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb454: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CB454u;
    {
        const bool branch_taken_0x2cb454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB454u;
        // 0x2cb458: 0xe6010af4  swc1        $f1, 0xAF4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2804), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb454) {
            ctx->pc = 0x2CB4A4u;
            goto label_2cb4a4;
        }
    }
    ctx->pc = 0x2CB45Cu;
    // 0x2cb45c: 0x8e020ad4  lw          $v0, 0xAD4($s0)
    ctx->pc = 0x2cb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
    // 0x2cb460: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB460u;
    {
        const bool branch_taken_0x2cb460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB460u;
        // 0x2cb464: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb460) {
            ctx->pc = 0x2CB4A4u;
            goto label_2cb4a4;
        }
    }
    ctx->pc = 0x2CB468u;
    // 0x2cb468: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2cb468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2cb46c: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2cb46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2cb470: 0x8e050aa4  lw          $a1, 0xAA4($s0)
    ctx->pc = 0x2cb470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2724)));
    // 0x2cb474: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x2cb474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
    // 0x2cb478: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2cb478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2cb47c: 0xae000aa4  sw          $zero, 0xAA4($s0)
    ctx->pc = 0x2cb47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2724), GPR_U32(ctx, 0));
    // 0x2cb480: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2cb480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2cb484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb488: 0xae020a90  sw          $v0, 0xA90($s0)
    ctx->pc = 0x2cb488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
    // 0x2cb48c: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2cb48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
    // 0x2cb490: 0xae050a9c  sw          $a1, 0xA9C($s0)
    ctx->pc = 0x2cb490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 5));
    // 0x2cb494: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2cb494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb49c: 0x80b2e42  j           func_2CB908
    ctx->pc = 0x2CB49Cu;
    ctx->pc = 0x2CB4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB49Cu;
    // 0x2cb4a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB908u;
    enemyInformOthers_0x2cb908(rdram, ctx, runtime); return;
    ctx->pc = 0x2CB4A4u;
label_2cb4a4:
    // 0x2cb4a4: 0xc0b19a8  jal         func_2C66A0
    ctx->pc = 0x2CB4A4u;
    SET_GPR_U32(ctx, 31, 0x2CB4ACu);
    ctx->pc = 0x2CB4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB4A4u;
    // 0x2cb4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C66A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C66A0u, 0x2CB4A4u, 0x2CB4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4ACu;
label_2cb4ac:
    // 0x2cb4ac: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2CB4ACu;
    {
        const bool branch_taken_0x2cb4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb4ac) {
            ctx->pc = 0x2CB4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB4ACu;
            // 0x2cb4b0: 0x8e030ae4  lw          $v1, 0xAE4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB4E4u;
            goto label_2cb4e4;
        }
    }
    ctx->pc = 0x2CB4B4u;
    // 0x2cb4b4: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2cb4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2cb4b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb4bc: 0x8e020aa4  lw          $v0, 0xAA4($s0)
    ctx->pc = 0x2cb4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2724)));
    // 0x2cb4c0: 0xae000aa4  sw          $zero, 0xAA4($s0)
    ctx->pc = 0x2cb4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2724), GPR_U32(ctx, 0));
    // 0x2cb4c4: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2cb4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2cb4c8: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2cb4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
    // 0x2cb4cc: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2cb4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2cb4d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb4d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2cb4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb4d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb4d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb4dc: 0x80b2e42  j           func_2CB908
    ctx->pc = 0x2CB4DCu;
    ctx->pc = 0x2CB4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB4DCu;
    // 0x2cb4e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB908u;
    enemyInformOthers_0x2cb908(rdram, ctx, runtime); return;
    ctx->pc = 0x2CB4E4u;
label_2cb4e4:
    // 0x2cb4e4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CB4E4u;
    {
        const bool branch_taken_0x2cb4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4E4u;
        // 0x2cb4e8: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4e4) {
            ctx->pc = 0x2CB574u;
            goto label_2cb574;
        }
    }
    ctx->pc = 0x2CB4ECu;
    // 0x2cb4ec: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2cb4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cb4f0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CB4F0u;
    {
        const bool branch_taken_0x2cb4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4F0u;
        // 0x2cb4f4: 0x8f82b230  lw          $v0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4f0) {
            ctx->pc = 0x2CB578u;
            goto label_2cb578;
        }
    }
    ctx->pc = 0x2CB4F8u;
    // 0x2cb4f8: 0x8e050a90  lw          $a1, 0xA90($s0)
    ctx->pc = 0x2cb4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2cb4fc: 0x30a24000  andi        $v0, $a1, 0x4000
    ctx->pc = 0x2cb4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x2cb500: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CB500u;
    {
        const bool branch_taken_0x2cb500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb500) {
            ctx->pc = 0x2CB504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB500u;
            // 0x2cb504: 0x86030004  lh          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB584u;
            goto label_2cb584;
        }
    }
    ctx->pc = 0x2CB508u;
    // 0x2cb508: 0x8e020ad4  lw          $v0, 0xAD4($s0)
    ctx->pc = 0x2cb508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
    // 0x2cb50c: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CB50Cu;
    {
        const bool branch_taken_0x2cb50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb50c) {
            ctx->pc = 0x2CB510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB50Cu;
            // 0x2cb510: 0x86030004  lh          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB584u;
            goto label_2cb584;
        }
    }
    ctx->pc = 0x2CB514u;
    // 0x2cb514: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x2cb514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2cb518: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cb518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb51c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cb51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb520: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CB520u;
    {
        const bool branch_taken_0x2cb520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CB524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB520u;
        // 0x2cb524: 0x8f84b238  lw          $a0, -0x4DC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb520) {
            ctx->pc = 0x2CB548u;
            goto label_2cb548;
        }
    }
    ctx->pc = 0x2CB528u;
    // 0x2cb528: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2cb528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cb52c: 0x8c820a94  lw          $v0, 0xA94($a0)
    ctx->pc = 0x2cb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
    // 0x2cb530: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB530u;
    {
        const bool branch_taken_0x2cb530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB530u;
        // 0x2cb534: 0x8f82b230  lw          $v0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb530) {
            ctx->pc = 0x2CB548u;
            goto label_2cb548;
        }
    }
    ctx->pc = 0x2CB538u;
    // 0x2cb538: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2cb538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2cb53c: 0x3463bfff  ori         $v1, $v1, 0xBFFF
    ctx->pc = 0x2cb53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49151);
    // 0x2cb540: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB540u;
    {
        const bool branch_taken_0x2cb540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB540u;
        // 0x2cb544: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb540) {
            ctx->pc = 0x2CB564u;
            goto label_2cb564;
        }
    }
    ctx->pc = 0x2CB548u;
label_2cb548:
    // 0x2cb548: 0x8c831ca4  lw          $v1, 0x1CA4($a0)
    ctx->pc = 0x2cb548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7332)));
    // 0x2cb54c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2cb54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cb550: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CB550u;
    {
        const bool branch_taken_0x2cb550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB550u;
        // 0x2cb554: 0x8f82b230  lw          $v0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb550) {
            ctx->pc = 0x2CB580u;
            goto label_2cb580;
        }
    }
    ctx->pc = 0x2CB558u;
    // 0x2cb558: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2cb558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2cb55c: 0x3463bfff  ori         $v1, $v1, 0xBFFF
    ctx->pc = 0x2cb55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49151);
    // 0x2cb560: 0x8c44089c  lw          $a0, 0x89C($v0)
    ctx->pc = 0x2cb560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2204)));
label_2cb564:
    // 0x2cb564: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2cb564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2cb568: 0xae030a90  sw          $v1, 0xA90($s0)
    ctx->pc = 0x2cb568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 3));
    // 0x2cb56c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB56Cu;
    {
        const bool branch_taken_0x2cb56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB56Cu;
        // 0x2cb570: 0xae040ae4  sw          $a0, 0xAE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb56c) {
            ctx->pc = 0x2CB580u;
            goto label_2cb580;
        }
    }
    ctx->pc = 0x2CB574u;
label_2cb574:
    // 0x2cb574: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2cb574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
label_2cb578:
    // 0x2cb578: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x2cb578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2cb57c: 0xae030ae4  sw          $v1, 0xAE4($s0)
    ctx->pc = 0x2cb57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 3));
label_2cb580:
    // 0x2cb580: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x2cb580u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2cb584:
    // 0x2cb584: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2cb584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2cb588: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB588u;
    {
        const bool branch_taken_0x2cb588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB588u;
        // 0x2cb58c: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb588) {
            ctx->pc = 0x2CB59Cu;
            goto label_2cb59c;
        }
    }
    ctx->pc = 0x2CB590u;
    // 0x2cb590: 0x8e030aa4  lw          $v1, 0xAA4($s0)
    ctx->pc = 0x2cb590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2724)));
    // 0x2cb594: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB594u;
    {
        const bool branch_taken_0x2cb594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB594u;
        // 0x2cb598: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb594) {
            ctx->pc = 0x2CB5A8u;
            goto label_2cb5a8;
        }
    }
    ctx->pc = 0x2CB59Cu;
label_2cb59c:
    // 0x2cb59c: 0xc0b2d92  jal         func_2CB648
    ctx->pc = 0x2CB59Cu;
    SET_GPR_U32(ctx, 31, 0x2CB5A4u);
    ctx->pc = 0x2CB5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB59Cu;
    // 0x2cb5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB648u, 0x2CB59Cu, 0x2CB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB5A4u;
label_2cb5a4:
    // 0x2cb5a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb5a8:
    // 0x2cb5a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2cb5a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb5ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5B0u;
        // 0x2cb5b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB5B8u;
}
