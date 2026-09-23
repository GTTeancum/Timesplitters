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

// Function: enemyAmbushLeft
// Address: 0x2c8828 - 0x2c8a28
void enemyAmbushLeft_0x2c8828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAmbushLeft_0x2c8828");
#endif

    switch (ctx->pc) {
        case 0x2c8848u: goto label_2c8848;
        case 0x2c886cu: goto label_2c886c;
        case 0x2c887cu: goto label_2c887c;
        case 0x2c888cu: goto label_2c888c;
        case 0x2c889cu: goto label_2c889c;
        case 0x2c88acu: goto label_2c88ac;
        case 0x2c8900u: goto label_2c8900;
        case 0x2c891cu: goto label_2c891c;
        case 0x2c895cu: goto label_2c895c;
        case 0x2c8978u: goto label_2c8978;
        case 0x2c8988u: goto label_2c8988;
        case 0x2c8998u: goto label_2c8998;
        case 0x2c89a8u: goto label_2c89a8;
        case 0x2c89b8u: goto label_2c89b8;
        case 0x2c89c8u: goto label_2c89c8;
        case 0x2c89e8u: goto label_2c89e8;
        case 0x2c89f0u: goto label_2c89f0;
        case 0x2c89f8u: goto label_2c89f8;
        default: break;
    }

    ctx->pc = 0x2c8828u;

    // 0x2c8828: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c882c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c8830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c8830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c8838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c883c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c883cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c8840: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C8840u;
    SET_GPR_U32(ctx, 31, 0x2C8848u);
    ctx->pc = 0x2C8844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8840u;
    // 0x2c8844: 0x8e110160  lw          $s1, 0x160($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C8840u, 0x2C8848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8848u;
label_2c8848:
    // 0x2c8848: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2c8848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c884c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8850: 0xe6200aec  swc1        $f0, 0xAEC($s1)
    ctx->pc = 0x2c8850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c8854: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2c8854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8858: 0xe6210af0  swc1        $f1, 0xAF0($s1)
    ctx->pc = 0x2c8858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c885c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2c885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8860: 0xae200adc  sw          $zero, 0xADC($s1)
    ctx->pc = 0x2c8860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2780), GPR_U32(ctx, 0));
    // 0x2c8864: 0xc0b269a  jal         func_2C9A68
    ctx->pc = 0x2C8864u;
    SET_GPR_U32(ctx, 31, 0x2C886Cu);
    ctx->pc = 0x2C8868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8864u;
    // 0x2c8868: 0xe6200af4  swc1        $f0, 0xAF4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9A68u, 0x2C8864u, 0x2C886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C886Cu;
label_2c886c:
    // 0x2c886c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C886Cu;
    {
        const bool branch_taken_0x2c886c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C886Cu;
        // 0x2c8870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c886c) {
            ctx->pc = 0x2C8980u;
            goto label_2c8980;
        }
    }
    ctx->pc = 0x2C8874u;
    // 0x2c8874: 0xc085608  jal         func_215820
    ctx->pc = 0x2C8874u;
    SET_GPR_U32(ctx, 31, 0x2C887Cu);
    ctx->pc = 0x2C8878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8874u;
    // 0x2c8878: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C8874u, 0x2C887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C887Cu;
label_2c887c:
    // 0x2c887c: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2C887Cu;
    {
        const bool branch_taken_0x2c887c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C887Cu;
        // 0x2c8880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c887c) {
            ctx->pc = 0x2C8980u;
            goto label_2c8980;
        }
    }
    ctx->pc = 0x2C8884u;
    // 0x2c8884: 0xc085608  jal         func_215820
    ctx->pc = 0x2C8884u;
    SET_GPR_U32(ctx, 31, 0x2C888Cu);
    ctx->pc = 0x2C8888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8884u;
    // 0x2c8888: 0x24050260  addiu       $a1, $zero, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C8884u, 0x2C888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C888Cu;
label_2c888c:
    // 0x2c888c: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C888Cu;
    {
        const bool branch_taken_0x2c888c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C888Cu;
        // 0x2c8890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c888c) {
            ctx->pc = 0x2C8980u;
            goto label_2c8980;
        }
    }
    ctx->pc = 0x2C8894u;
    // 0x2c8894: 0xc085608  jal         func_215820
    ctx->pc = 0x2C8894u;
    SET_GPR_U32(ctx, 31, 0x2C889Cu);
    ctx->pc = 0x2C8898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8894u;
    // 0x2c8898: 0x24050264  addiu       $a1, $zero, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C8894u, 0x2C889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C889Cu;
label_2c889c:
    // 0x2c889c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C889Cu;
    {
        const bool branch_taken_0x2c889c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C889Cu;
        // 0x2c88a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c889c) {
            ctx->pc = 0x2C8980u;
            goto label_2c8980;
        }
    }
    ctx->pc = 0x2C88A4u;
    // 0x2c88a4: 0xc085608  jal         func_215820
    ctx->pc = 0x2C88A4u;
    SET_GPR_U32(ctx, 31, 0x2C88ACu);
    ctx->pc = 0x2C88A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C88A4u;
    // 0x2c88a8: 0x24050263  addiu       $a1, $zero, 0x263 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C88A4u, 0x2C88ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88ACu;
label_2c88ac:
    // 0x2c88ac: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2C88ACu;
    {
        const bool branch_taken_0x2c88ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88ACu;
        // 0x2c88b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88ac) {
            ctx->pc = 0x2C8980u;
            goto label_2c8980;
        }
    }
    ctx->pc = 0x2C88B4u;
    // 0x2c88b4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2c88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2c88b8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x2c88b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2c88bc: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2c88bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c88c0: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C88C0u;
    {
        const bool branch_taken_0x2c88c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C88C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88C0u;
        // 0x2c88c4: 0x8e240178  lw          $a0, 0x178($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88c0) {
            ctx->pc = 0x2C8924u;
            goto label_2c8924;
        }
    }
    ctx->pc = 0x2C88C8u;
    // 0x2c88c8: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2c88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2c88cc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2c88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2c88d0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2c88d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c88d4: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x2c88d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x2c88d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c88dc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c88e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c88e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c88e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C88E4u;
    {
        const bool branch_taken_0x2c88e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88E4u;
        // 0x2c88e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88e4) {
            ctx->pc = 0x2C8908u;
            goto label_2c8908;
        }
    }
    ctx->pc = 0x2C88ECu;
    // 0x2c88ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c88ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c88f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c88f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c88f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c88f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c88f8: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C88F8u;
    SET_GPR_U32(ctx, 31, 0x2C8900u);
    ctx->pc = 0x2C88FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C88F8u;
    // 0x2c88fc: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C88F8u, 0x2C8900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8900u;
label_2c8900:
    // 0x2c8900: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2C8900u;
    {
        const bool branch_taken_0x2c8900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8900u;
        // 0x2c8904: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8900) {
            ctx->pc = 0x2C8A18u;
            goto label_2c8a18;
        }
    }
    ctx->pc = 0x2C8908u;
label_2c8908:
    // 0x2c8908: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c8908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c890c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c890cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8910: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c8910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8914: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C8914u;
    SET_GPR_U32(ctx, 31, 0x2C891Cu);
    ctx->pc = 0x2C8918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8914u;
    // 0x2c8918: 0x24050260  addiu       $a1, $zero, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C8914u, 0x2C891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C891Cu;
label_2c891c:
    // 0x2c891c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2C891Cu;
    {
        const bool branch_taken_0x2c891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C891Cu;
        // 0x2c8920: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c891c) {
            ctx->pc = 0x2C8A18u;
            goto label_2c8a18;
        }
    }
    ctx->pc = 0x2C8924u;
label_2c8924:
    // 0x2c8924: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2c8924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2c8928: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2c8928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2c892c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2c892cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c8930: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x2c8930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x2c8934: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8938: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c8938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c893c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c8940: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8940u;
    {
        const bool branch_taken_0x2c8940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8940u;
        // 0x2c8944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8940) {
            ctx->pc = 0x2C8964u;
            goto label_2c8964;
        }
    }
    ctx->pc = 0x2C8948u;
    // 0x2c8948: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c8948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c894c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c894cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8950: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c8950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8954: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C8954u;
    SET_GPR_U32(ctx, 31, 0x2C895Cu);
    ctx->pc = 0x2C8958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8954u;
    // 0x2c8958: 0x24050264  addiu       $a1, $zero, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C8954u, 0x2C895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C895Cu;
label_2c895c:
    // 0x2c895c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2C895Cu;
    {
        const bool branch_taken_0x2c895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C895Cu;
        // 0x2c8960: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c895c) {
            ctx->pc = 0x2C8A18u;
            goto label_2c8a18;
        }
    }
    ctx->pc = 0x2C8964u;
label_2c8964:
    // 0x2c8964: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c8964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8968: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c896c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c896cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8970: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C8970u;
    SET_GPR_U32(ctx, 31, 0x2C8978u);
    ctx->pc = 0x2C8974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8970u;
    // 0x2c8974: 0x24050263  addiu       $a1, $zero, 0x263 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C8970u, 0x2C8978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8978u;
label_2c8978:
    // 0x2c8978: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C8978u;
    {
        const bool branch_taken_0x2c8978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8978u;
        // 0x2c897c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8978) {
            ctx->pc = 0x2C8A18u;
            goto label_2c8a18;
        }
    }
    ctx->pc = 0x2C8980u;
label_2c8980:
    // 0x2c8980: 0xc085608  jal         func_215820
    ctx->pc = 0x2C8980u;
    SET_GPR_U32(ctx, 31, 0x2C8988u);
    ctx->pc = 0x2C8984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8980u;
    // 0x2c8984: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C8980u, 0x2C8988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8988u;
label_2c8988:
    // 0x2c8988: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C8988u;
    {
        const bool branch_taken_0x2c8988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8988u;
        // 0x2c898c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8988) {
            ctx->pc = 0x2C89C0u;
            goto label_2c89c0;
        }
    }
    ctx->pc = 0x2C8990u;
    // 0x2c8990: 0xc085608  jal         func_215820
    ctx->pc = 0x2C8990u;
    SET_GPR_U32(ctx, 31, 0x2C8998u);
    ctx->pc = 0x2C8994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8990u;
    // 0x2c8994: 0x24050260  addiu       $a1, $zero, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C8990u, 0x2C8998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8998u;
label_2c8998:
    // 0x2c8998: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8998u;
    {
        const bool branch_taken_0x2c8998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8998u;
        // 0x2c899c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8998) {
            ctx->pc = 0x2C89C0u;
            goto label_2c89c0;
        }
    }
    ctx->pc = 0x2C89A0u;
    // 0x2c89a0: 0xc085608  jal         func_215820
    ctx->pc = 0x2C89A0u;
    SET_GPR_U32(ctx, 31, 0x2C89A8u);
    ctx->pc = 0x2C89A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C89A0u;
    // 0x2c89a4: 0x24050264  addiu       $a1, $zero, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C89A0u, 0x2C89A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89A8u;
label_2c89a8:
    // 0x2c89a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C89A8u;
    {
        const bool branch_taken_0x2c89a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89A8u;
        // 0x2c89ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89a8) {
            ctx->pc = 0x2C89C0u;
            goto label_2c89c0;
        }
    }
    ctx->pc = 0x2C89B0u;
    // 0x2c89b0: 0xc085608  jal         func_215820
    ctx->pc = 0x2C89B0u;
    SET_GPR_U32(ctx, 31, 0x2C89B8u);
    ctx->pc = 0x2C89B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C89B0u;
    // 0x2c89b4: 0x24050263  addiu       $a1, $zero, 0x263 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C89B0u, 0x2C89B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89B8u;
label_2c89b8:
    // 0x2c89b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C89B8u;
    {
        const bool branch_taken_0x2c89b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89B8u;
        // 0x2c89bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89b8) {
            ctx->pc = 0x2C89E0u;
            goto label_2c89e0;
        }
    }
    ctx->pc = 0x2C89C0u;
label_2c89c0:
    // 0x2c89c0: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C89C0u;
    SET_GPR_U32(ctx, 31, 0x2C89C8u);
    ctx->pc = 0x2C89C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C89C0u;
    // 0x2c89c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C89C0u, 0x2C89C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89C8u;
label_2c89c8:
    // 0x2c89c8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C89C8u;
    {
        const bool branch_taken_0x2c89c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c89c8) {
            ctx->pc = 0x2C89CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C89C8u;
            // 0x2c89cc: 0x8e230a9c  lw          $v1, 0xA9C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8A04u;
            goto label_2c8a04;
        }
    }
    ctx->pc = 0x2C89D0u;
    // 0x2c89d0: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c89d4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c89d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2c89d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C89D8u;
    {
        const bool branch_taken_0x2c89d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89D8u;
        // 0x2c89dc: 0xae220a90  sw          $v0, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89d8) {
            ctx->pc = 0x2C8A14u;
            goto label_2c8a14;
        }
    }
    ctx->pc = 0x2C89E0u;
label_2c89e0:
    // 0x2c89e0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C89E0u;
    SET_GPR_U32(ctx, 31, 0x2C89E8u);
    ctx->pc = 0x2C89E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C89E0u;
    // 0x2c89e4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C89E0u, 0x2C89E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89E8u;
label_2c89e8:
    // 0x2c89e8: 0xc0b2d92  jal         func_2CB648
    ctx->pc = 0x2C89E8u;
    SET_GPR_U32(ctx, 31, 0x2C89F0u);
    ctx->pc = 0x2C89ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C89E8u;
    // 0x2c89ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB648u, 0x2C89E8u, 0x2C89F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89F0u;
label_2c89f0:
    // 0x2c89f0: 0xc0b19a8  jal         func_2C66A0
    ctx->pc = 0x2C89F0u;
    SET_GPR_U32(ctx, 31, 0x2C89F8u);
    ctx->pc = 0x2C89F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C89F0u;
    // 0x2c89f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C66A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C66A0u, 0x2C89F0u, 0x2C89F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89F8u;
label_2c89f8:
    // 0x2c89f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C89F8u;
    {
        const bool branch_taken_0x2c89f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89F8u;
        // 0x2c89fc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89f8) {
            ctx->pc = 0x2C8A18u;
            goto label_2c8a18;
        }
    }
    ctx->pc = 0x2C8A00u;
    // 0x2c8a00: 0x8e230a9c  lw          $v1, 0xA9C($s1)
    ctx->pc = 0x2c8a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
label_2c8a04:
    // 0x2c8a04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8a08: 0xae220a9c  sw          $v0, 0xA9C($s1)
    ctx->pc = 0x2c8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 2));
    // 0x2c8a0c: 0xae230aa0  sw          $v1, 0xAA0($s1)
    ctx->pc = 0x2c8a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 3));
    // 0x2c8a10: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
label_2c8a14:
    // 0x2c8a14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8a18:
    // 0x2c8a18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c8a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c8a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8a20: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A20u;
        // 0x2c8a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8A28u;
}
