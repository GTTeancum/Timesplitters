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

// Function: setTimeSplitterAnimation
// Address: 0x2bece0 - 0x2bf680
void setTimeSplitterAnimation_0x2bece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setTimeSplitterAnimation_0x2bece0");
#endif

    switch (ctx->pc) {
        case 0x2bed20u: goto label_2bed20;
        case 0x2bed34u: goto label_2bed34;
        case 0x2bed44u: goto label_2bed44;
        case 0x2bed54u: goto label_2bed54;
        case 0x2bed68u: goto label_2bed68;
        case 0x2bed88u: goto label_2bed88;
        case 0x2bed98u: goto label_2bed98;
        case 0x2beda8u: goto label_2beda8;
        case 0x2bedd0u: goto label_2bedd0;
        case 0x2bee1cu: goto label_2bee1c;
        case 0x2bee38u: goto label_2bee38;
        case 0x2bee5cu: goto label_2bee5c;
        case 0x2bee6cu: goto label_2bee6c;
        case 0x2bee7cu: goto label_2bee7c;
        case 0x2bee9cu: goto label_2bee9c;
        case 0x2beec0u: goto label_2beec0;
        case 0x2beee8u: goto label_2beee8;
        case 0x2beef8u: goto label_2beef8;
        case 0x2bef08u: goto label_2bef08;
        case 0x2bef28u: goto label_2bef28;
        case 0x2bef4cu: goto label_2bef4c;
        case 0x2bef5cu: goto label_2bef5c;
        case 0x2bef6cu: goto label_2bef6c;
        case 0x2bef7cu: goto label_2bef7c;
        case 0x2bef8cu: goto label_2bef8c;
        case 0x2bef9cu: goto label_2bef9c;
        case 0x2befacu: goto label_2befac;
        case 0x2befbcu: goto label_2befbc;
        case 0x2befccu: goto label_2befcc;
        case 0x2befecu: goto label_2befec;
        case 0x2beffcu: goto label_2beffc;
        case 0x2bf028u: goto label_2bf028;
        case 0x2bf038u: goto label_2bf038;
        case 0x2bf098u: goto label_2bf098;
        case 0x2bf0ccu: goto label_2bf0cc;
        case 0x2bf0e8u: goto label_2bf0e8;
        case 0x2bf108u: goto label_2bf108;
        case 0x2bf124u: goto label_2bf124;
        case 0x2bf130u: goto label_2bf130;
        case 0x2bf150u: goto label_2bf150;
        case 0x2bf170u: goto label_2bf170;
        case 0x2bf180u: goto label_2bf180;
        case 0x2bf190u: goto label_2bf190;
        case 0x2bf1a0u: goto label_2bf1a0;
        case 0x2bf1b0u: goto label_2bf1b0;
        case 0x2bf1c0u: goto label_2bf1c0;
        case 0x2bf1d0u: goto label_2bf1d0;
        case 0x2bf1e0u: goto label_2bf1e0;
        case 0x2bf204u: goto label_2bf204;
        case 0x2bf214u: goto label_2bf214;
        case 0x2bf240u: goto label_2bf240;
        case 0x2bf250u: goto label_2bf250;
        case 0x2bf2b0u: goto label_2bf2b0;
        case 0x2bf304u: goto label_2bf304;
        case 0x2bf320u: goto label_2bf320;
        case 0x2bf368u: goto label_2bf368;
        case 0x2bf378u: goto label_2bf378;
        case 0x2bf388u: goto label_2bf388;
        case 0x2bf3acu: goto label_2bf3ac;
        case 0x2bf3c4u: goto label_2bf3c4;
        case 0x2bf3e4u: goto label_2bf3e4;
        case 0x2bf400u: goto label_2bf400;
        case 0x2bf420u: goto label_2bf420;
        case 0x2bf430u: goto label_2bf430;
        case 0x2bf440u: goto label_2bf440;
        case 0x2bf450u: goto label_2bf450;
        case 0x2bf474u: goto label_2bf474;
        case 0x2bf498u: goto label_2bf498;
        case 0x2bf4a8u: goto label_2bf4a8;
        case 0x2bf4b8u: goto label_2bf4b8;
        case 0x2bf4dcu: goto label_2bf4dc;
        case 0x2bf4f8u: goto label_2bf4f8;
        case 0x2bf508u: goto label_2bf508;
        case 0x2bf518u: goto label_2bf518;
        case 0x2bf528u: goto label_2bf528;
        case 0x2bf534u: goto label_2bf534;
        case 0x2bf544u: goto label_2bf544;
        case 0x2bf55cu: goto label_2bf55c;
        case 0x2bf56cu: goto label_2bf56c;
        case 0x2bf57cu: goto label_2bf57c;
        case 0x2bf594u: goto label_2bf594;
        case 0x2bf5c4u: goto label_2bf5c4;
        case 0x2bf5d4u: goto label_2bf5d4;
        case 0x2bf5e4u: goto label_2bf5e4;
        case 0x2bf5f0u: goto label_2bf5f0;
        case 0x2bf5fcu: goto label_2bf5fc;
        case 0x2bf610u: goto label_2bf610;
        case 0x2bf61cu: goto label_2bf61c;
        case 0x2bf62cu: goto label_2bf62c;
        case 0x2bf634u: goto label_2bf634;
        case 0x2bf640u: goto label_2bf640;
        case 0x2bf658u: goto label_2bf658;
        default: break;
    }

    ctx->pc = 0x2bece0u;

    // 0x2bece0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bece4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2bece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2bece8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2becec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bececu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2becf0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2becf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2becf4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2becf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2becf8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2becf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2becfc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2becfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2bed00: 0x8e330160  lw          $s3, 0x160($s1)
    ctx->pc = 0x2bed00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2bed04: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x2bed04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
    // 0x2bed08: 0x8e620a90  lw          $v0, 0xA90($s3)
    ctx->pc = 0x2bed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2704)));
    // 0x2bed0c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2bed0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2bed10: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x2BED10u;
    {
        const bool branch_taken_0x2bed10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bed10) {
            ctx->pc = 0x2BED14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BED10u;
            // 0x2bed14: 0x8e630a94  lw          $v1, 0xA94($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEE20u;
            goto label_2bee20;
        }
    }
    ctx->pc = 0x2BED18u;
    // 0x2bed18: 0xc085608  jal         func_215820
    ctx->pc = 0x2BED18u;
    SET_GPR_U32(ctx, 31, 0x2BED20u);
    ctx->pc = 0x2BED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED18u;
    // 0x2bed1c: 0x2405022b  addiu       $a1, $zero, 0x22B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BED18u, 0x2BED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED20u;
label_2bed20:
    // 0x2bed20: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BED20u;
    {
        const bool branch_taken_0x2bed20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED20u;
        // 0x2bed24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed20) {
            ctx->pc = 0x2BED90u;
            goto label_2bed90;
        }
    }
    ctx->pc = 0x2BED28u;
    // 0x2bed28: 0xc66c0adc  lwc1        $f12, 0xADC($s3)
    ctx->pc = 0x2bed28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bed2c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BED2Cu;
    SET_GPR_U32(ctx, 31, 0x2BED34u);
    ctx->pc = 0x2BED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED2Cu;
    // 0x2bed30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BED2Cu, 0x2BED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED34u;
label_2bed34:
    // 0x2bed34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bed34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed3c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BED3Cu;
    SET_GPR_U32(ctx, 31, 0x2BED44u);
    ctx->pc = 0x2BED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED3Cu;
    // 0x2bed40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BED3Cu, 0x2BED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED44u;
label_2bed44:
    // 0x2bed44: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BED44u;
    {
        const bool branch_taken_0x2bed44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED44u;
        // 0x2bed48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed44) {
            ctx->pc = 0x2BED58u;
            goto label_2bed58;
        }
    }
    ctx->pc = 0x2BED4Cu;
    // 0x2bed4c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BED4Cu;
    SET_GPR_U32(ctx, 31, 0x2BED54u);
    ctx->pc = 0x2BED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED4Cu;
    // 0x2bed50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BED4Cu, 0x2BED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED54u;
label_2bed54:
    // 0x2bed54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bed54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bed58:
    // 0x2bed58: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2bed58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2bed5c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2bed5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2bed60: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BED60u;
    SET_GPR_U32(ctx, 31, 0x2BED68u);
    ctx->pc = 0x2BED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED60u;
    // 0x2bed64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BED60u, 0x2BED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED68u;
label_2bed68:
    // 0x2bed68: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BED68u;
    {
        const bool branch_taken_0x2bed68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED68u;
        // 0x2bed6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed68) {
            ctx->pc = 0x2BED90u;
            goto label_2bed90;
        }
    }
    ctx->pc = 0x2BED70u;
    // 0x2bed70: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bed70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bed74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bed74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bed78: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2bed78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2bed7c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bed7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bed80: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BED80u;
    SET_GPR_U32(ctx, 31, 0x2BED88u);
    ctx->pc = 0x2BED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED80u;
    // 0x2bed84: 0x2405022b  addiu       $a1, $zero, 0x22B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BED80u, 0x2BED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED88u;
label_2bed88:
    // 0x2bed88: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x2BED88u;
    {
        const bool branch_taken_0x2bed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED88u;
        // 0x2bed8c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed88) {
            ctx->pc = 0x2BF664u;
            goto label_2bf664;
        }
    }
    ctx->pc = 0x2BED90u;
label_2bed90:
    // 0x2bed90: 0xc085608  jal         func_215820
    ctx->pc = 0x2BED90u;
    SET_GPR_U32(ctx, 31, 0x2BED98u);
    ctx->pc = 0x2BED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED90u;
    // 0x2bed94: 0x2405022b  addiu       $a1, $zero, 0x22B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BED90u, 0x2BED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED98u;
label_2bed98:
    // 0x2bed98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BED98u;
    {
        const bool branch_taken_0x2bed98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED98u;
        // 0x2bed9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed98) {
            ctx->pc = 0x2BEDC8u;
            goto label_2bedc8;
        }
    }
    ctx->pc = 0x2BEDA0u;
    // 0x2beda0: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BEDA0u;
    SET_GPR_U32(ctx, 31, 0x2BEDA8u);
    ctx->pc = 0x2BEDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEDA0u;
    // 0x2beda4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BEDA0u, 0x2BEDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEDA8u;
label_2beda8:
    // 0x2beda8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BEDA8u;
    {
        const bool branch_taken_0x2beda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDA8u;
        // 0x2bedac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beda8) {
            ctx->pc = 0x2BEDC8u;
            goto label_2bedc8;
        }
    }
    ctx->pc = 0x2BEDB0u;
    // 0x2bedb0: 0x8e630a90  lw          $v1, 0xA90($s3)
    ctx->pc = 0x2bedb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2704)));
    // 0x2bedb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2bedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2bedb8: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2bedb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2bedbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2bedbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bedc0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2BEDC0u;
    {
        const bool branch_taken_0x2bedc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDC0u;
        // 0x2bedc4: 0xae630a90  sw          $v1, 0xA90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bedc0) {
            ctx->pc = 0x2BEE1Cu;
            goto label_2bee1c;
        }
    }
    ctx->pc = 0x2BEDC8u;
label_2bedc8:
    // 0x2bedc8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEDC8u;
    SET_GPR_U32(ctx, 31, 0x2BEDD0u);
    ctx->pc = 0x2BEDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEDC8u;
    // 0x2bedcc: 0x2405022b  addiu       $a1, $zero, 0x22B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEDC8u, 0x2BEDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEDD0u;
label_2bedd0:
    // 0x2bedd0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BEDD0u;
    {
        const bool branch_taken_0x2bedd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bedd0) {
            ctx->pc = 0x2BEDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEDD0u;
            // 0x2bedd4: 0x8e630a94  lw          $v1, 0xA94($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEE20u;
            goto label_2bee20;
        }
    }
    ctx->pc = 0x2BEDD8u;
    // 0x2bedd8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2beddc: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2beddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x2bede0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bede0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bede4: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x2bede4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bede8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bede8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bedec: 0x0  nop
    ctx->pc = 0x2bedecu;
    // NOP
    // 0x2bedf0: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x2BEDF0u;
    {
        const bool branch_taken_0x2bedf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bedf0) {
            ctx->pc = 0x2BEDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEDF0u;
            // 0x2bedf4: 0x8e630a94  lw          $v1, 0xA94($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEE20u;
            goto label_2bee20;
        }
    }
    ctx->pc = 0x2BEDF8u;
    // 0x2bedf8: 0xc7809088  lwc1        $f0, -0x6F78($gp)
    ctx->pc = 0x2bedf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bedfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bedfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bee00: 0x0  nop
    ctx->pc = 0x2bee00u;
    // NOP
    // 0x2bee04: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEE04u;
    {
        const bool branch_taken_0x2bee04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BEE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE04u;
        // 0x2bee08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee04) {
            ctx->pc = 0x2BEE1Cu;
            goto label_2bee1c;
        }
    }
    ctx->pc = 0x2BEE0Cu;
    // 0x2bee0c: 0x26650178  addiu       $a1, $s3, 0x178
    ctx->pc = 0x2bee0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 376));
    // 0x2bee10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bee10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee14: 0xc0a3cb4  jal         func_28F2D0
    ctx->pc = 0x2BEE14u;
    SET_GPR_U32(ctx, 31, 0x2BEE1Cu);
    ctx->pc = 0x2BEE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE14u;
    // 0x2bee18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F2D0u, 0x2BEE14u, 0x2BEE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE1Cu;
label_2bee1c:
    // 0x2bee1c: 0x8e630a94  lw          $v1, 0xA94($s3)
    ctx->pc = 0x2bee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2708)));
label_2bee20:
    // 0x2bee20: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2bee20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2bee24: 0x50400140  beql        $v0, $zero, . + 4 + (0x140 << 2)
    ctx->pc = 0x2BEE24u;
    {
        const bool branch_taken_0x2bee24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bee24) {
            ctx->pc = 0x2BEE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEE24u;
            // 0x2bee28: 0xc6610b3c  lwc1        $f1, 0xB3C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF328u;
            goto label_2bf328;
        }
    }
    ctx->pc = 0x2BEE2Cu;
    // 0x2bee2c: 0xc62c0050  lwc1        $f12, 0x50($s1)
    ctx->pc = 0x2bee2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bee30: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2BEE30u;
    SET_GPR_U32(ctx, 31, 0x2BEE38u);
    ctx->pc = 0x2BEE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE30u;
    // 0x2bee34: 0xc62d004c  lwc1        $f13, 0x4C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2BEE30u, 0x2BEE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE38u;
label_2bee38:
    // 0x2bee38: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bee38u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2bee3c: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2bee3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x2bee40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bee40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bee44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bee44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bee48: 0x0  nop
    ctx->pc = 0x2bee48u;
    // NOP
    // 0x2bee4c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x2BEE4Cu;
    {
        const bool branch_taken_0x2bee4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE4Cu;
        // 0x2bee50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee4c) {
            ctx->pc = 0x2BEEC8u;
            goto label_2beec8;
        }
    }
    ctx->pc = 0x2BEE54u;
    // 0x2bee54: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEE54u;
    SET_GPR_U32(ctx, 31, 0x2BEE5Cu);
    ctx->pc = 0x2BEE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE54u;
    // 0x2bee58: 0x24050231  addiu       $a1, $zero, 0x231 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEE54u, 0x2BEE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE5Cu;
label_2bee5c:
    // 0x2bee5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEE5Cu;
    {
        const bool branch_taken_0x2bee5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE5Cu;
        // 0x2bee60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee5c) {
            ctx->pc = 0x2BEE74u;
            goto label_2bee74;
        }
    }
    ctx->pc = 0x2BEE64u;
    // 0x2bee64: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEE64u;
    SET_GPR_U32(ctx, 31, 0x2BEE6Cu);
    ctx->pc = 0x2BEE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE64u;
    // 0x2bee68: 0x24050230  addiu       $a1, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEE64u, 0x2BEE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE6Cu;
label_2bee6c:
    // 0x2bee6c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BEE6Cu;
    {
        const bool branch_taken_0x2bee6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE6Cu;
        // 0x2bee70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee6c) {
            ctx->pc = 0x2BEEA4u;
            goto label_2beea4;
        }
    }
    ctx->pc = 0x2BEE74u;
label_2bee74:
    // 0x2bee74: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BEE74u;
    SET_GPR_U32(ctx, 31, 0x2BEE7Cu);
    ctx->pc = 0x2BEE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE74u;
    // 0x2bee78: 0x24050231  addiu       $a1, $zero, 0x231 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BEE74u, 0x2BEE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE7Cu;
label_2bee7c:
    // 0x2bee7c: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x2BEE7Cu;
    {
        const bool branch_taken_0x2bee7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE7Cu;
        // 0x2bee80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee7c) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BEE84u;
    // 0x2bee84: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bee88: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2bee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bee8c: 0x106000a6  beqz        $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2BEE8Cu;
    {
        const bool branch_taken_0x2bee8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bee8c) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BEE94u;
    // 0x2bee94: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BEE94u;
    SET_GPR_U32(ctx, 31, 0x2BEE9Cu);
    ctx->pc = 0x2BEE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE94u;
    // 0x2bee98: 0x24050231  addiu       $a1, $zero, 0x231 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BEE94u, 0x2BEE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE9Cu;
label_2bee9c:
    // 0x2bee9c: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2BEE9Cu;
    {
        const bool branch_taken_0x2bee9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE9Cu;
        // 0x2beea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee9c) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BEEA4u;
label_2beea4:
    // 0x2beea4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2beea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2beea8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2beea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2beeac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2beeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beeb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2beeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2beeb4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2beeb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2beeb8: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BEEB8u;
    SET_GPR_U32(ctx, 31, 0x2BEEC0u);
    ctx->pc = 0x2BEEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEEB8u;
    // 0x2beebc: 0x24050231  addiu       $a1, $zero, 0x231 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BEEB8u, 0x2BEEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEEC0u;
label_2beec0:
    // 0x2beec0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2BEEC0u;
    {
        const bool branch_taken_0x2beec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEC0u;
        // 0x2beec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beec0) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BEEC8u;
label_2beec8:
    // 0x2beec8: 0x3c01c234  lui         $at, 0xC234
    ctx->pc = 0x2beec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49716 << 16));
    // 0x2beecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2beeccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2beed0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2beed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2beed4: 0x0  nop
    ctx->pc = 0x2beed4u;
    // NOP
    // 0x2beed8: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
    ctx->pc = 0x2BEED8u;
    {
        const bool branch_taken_0x2beed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2beed8) {
            ctx->pc = 0x2BEEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEED8u;
            // 0x2beedc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEF54u;
            goto label_2bef54;
        }
    }
    ctx->pc = 0x2BEEE0u;
    // 0x2beee0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEEE0u;
    SET_GPR_U32(ctx, 31, 0x2BEEE8u);
    ctx->pc = 0x2BEEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEEE0u;
    // 0x2beee4: 0x24050230  addiu       $a1, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEEE0u, 0x2BEEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEEE8u;
label_2beee8:
    // 0x2beee8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEEE8u;
    {
        const bool branch_taken_0x2beee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEE8u;
        // 0x2beeec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beee8) {
            ctx->pc = 0x2BEF00u;
            goto label_2bef00;
        }
    }
    ctx->pc = 0x2BEEF0u;
    // 0x2beef0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEEF0u;
    SET_GPR_U32(ctx, 31, 0x2BEEF8u);
    ctx->pc = 0x2BEEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEEF0u;
    // 0x2beef4: 0x24050231  addiu       $a1, $zero, 0x231 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEEF0u, 0x2BEEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEEF8u;
label_2beef8:
    // 0x2beef8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BEEF8u;
    {
        const bool branch_taken_0x2beef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEF8u;
        // 0x2beefc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beef8) {
            ctx->pc = 0x2BEF30u;
            goto label_2bef30;
        }
    }
    ctx->pc = 0x2BEF00u;
label_2bef00:
    // 0x2bef00: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BEF00u;
    SET_GPR_U32(ctx, 31, 0x2BEF08u);
    ctx->pc = 0x2BEF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF00u;
    // 0x2bef04: 0x24050230  addiu       $a1, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BEF00u, 0x2BEF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF08u;
label_2bef08:
    // 0x2bef08: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x2BEF08u;
    {
        const bool branch_taken_0x2bef08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF08u;
        // 0x2bef0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef08) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BEF10u;
    // 0x2bef10: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bef14: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2bef14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bef18: 0x10600083  beqz        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x2BEF18u;
    {
        const bool branch_taken_0x2bef18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bef18) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BEF20u;
    // 0x2bef20: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BEF20u;
    SET_GPR_U32(ctx, 31, 0x2BEF28u);
    ctx->pc = 0x2BEF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF20u;
    // 0x2bef24: 0x24050230  addiu       $a1, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BEF20u, 0x2BEF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF28u;
label_2bef28:
    // 0x2bef28: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2BEF28u;
    {
        const bool branch_taken_0x2bef28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF28u;
        // 0x2bef2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef28) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BEF30u;
label_2bef30:
    // 0x2bef30: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bef30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bef34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bef34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bef38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bef38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bef3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bef40: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bef40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bef44: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BEF44u;
    SET_GPR_U32(ctx, 31, 0x2BEF4Cu);
    ctx->pc = 0x2BEF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF44u;
    // 0x2bef48: 0x24050230  addiu       $a1, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BEF44u, 0x2BEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF4Cu;
label_2bef4c:
    // 0x2bef4c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2BEF4Cu;
    {
        const bool branch_taken_0x2bef4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF4Cu;
        // 0x2bef50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef4c) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BEF54u;
label_2bef54:
    // 0x2bef54: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEF54u;
    SET_GPR_U32(ctx, 31, 0x2BEF5Cu);
    ctx->pc = 0x2BEF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF54u;
    // 0x2bef58: 0x24050230  addiu       $a1, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEF54u, 0x2BEF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF5Cu;
label_2bef5c:
    // 0x2bef5c: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2BEF5Cu;
    {
        const bool branch_taken_0x2bef5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF5Cu;
        // 0x2bef60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef5c) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BEF64u;
    // 0x2bef64: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEF64u;
    SET_GPR_U32(ctx, 31, 0x2BEF6Cu);
    ctx->pc = 0x2BEF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF64u;
    // 0x2bef68: 0x24050231  addiu       $a1, $zero, 0x231 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEF64u, 0x2BEF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF6Cu;
label_2bef6c:
    // 0x2bef6c: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2BEF6Cu;
    {
        const bool branch_taken_0x2bef6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF6Cu;
        // 0x2bef70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef6c) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BEF74u;
    // 0x2bef74: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEF74u;
    SET_GPR_U32(ctx, 31, 0x2BEF7Cu);
    ctx->pc = 0x2BEF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF74u;
    // 0x2bef78: 0x2405022c  addiu       $a1, $zero, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEF74u, 0x2BEF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF7Cu;
label_2bef7c:
    // 0x2bef7c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BEF7Cu;
    {
        const bool branch_taken_0x2bef7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF7Cu;
        // 0x2bef80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef7c) {
            ctx->pc = 0x2BEFF4u;
            goto label_2beff4;
        }
    }
    ctx->pc = 0x2BEF84u;
    // 0x2bef84: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEF84u;
    SET_GPR_U32(ctx, 31, 0x2BEF8Cu);
    ctx->pc = 0x2BEF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF84u;
    // 0x2bef88: 0x2405022d  addiu       $a1, $zero, 0x22D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 557));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEF84u, 0x2BEF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF8Cu;
label_2bef8c:
    // 0x2bef8c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BEF8Cu;
    {
        const bool branch_taken_0x2bef8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF8Cu;
        // 0x2bef90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef8c) {
            ctx->pc = 0x2BEFF4u;
            goto label_2beff4;
        }
    }
    ctx->pc = 0x2BEF94u;
    // 0x2bef94: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEF94u;
    SET_GPR_U32(ctx, 31, 0x2BEF9Cu);
    ctx->pc = 0x2BEF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF94u;
    // 0x2bef98: 0x2405022e  addiu       $a1, $zero, 0x22E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 558));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEF94u, 0x2BEF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF9Cu;
label_2bef9c:
    // 0x2bef9c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BEF9Cu;
    {
        const bool branch_taken_0x2bef9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF9Cu;
        // 0x2befa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef9c) {
            ctx->pc = 0x2BEFF4u;
            goto label_2beff4;
        }
    }
    ctx->pc = 0x2BEFA4u;
    // 0x2befa4: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEFA4u;
    SET_GPR_U32(ctx, 31, 0x2BEFACu);
    ctx->pc = 0x2BEFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEFA4u;
    // 0x2befa8: 0x24050229  addiu       $a1, $zero, 0x229 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEFA4u, 0x2BEFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEFACu;
label_2befac:
    // 0x2befac: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BEFACu;
    {
        const bool branch_taken_0x2befac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFACu;
        // 0x2befb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2befac) {
            ctx->pc = 0x2BEFF4u;
            goto label_2beff4;
        }
    }
    ctx->pc = 0x2BEFB4u;
    // 0x2befb4: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEFB4u;
    SET_GPR_U32(ctx, 31, 0x2BEFBCu);
    ctx->pc = 0x2BEFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEFB4u;
    // 0x2befb8: 0x2405022a  addiu       $a1, $zero, 0x22A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 554));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEFB4u, 0x2BEFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEFBCu;
label_2befbc:
    // 0x2befbc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BEFBCu;
    {
        const bool branch_taken_0x2befbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFBCu;
        // 0x2befc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2befbc) {
            ctx->pc = 0x2BEFF4u;
            goto label_2beff4;
        }
    }
    ctx->pc = 0x2BEFC4u;
    // 0x2befc4: 0xc085608  jal         func_215820
    ctx->pc = 0x2BEFC4u;
    SET_GPR_U32(ctx, 31, 0x2BEFCCu);
    ctx->pc = 0x2BEFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEFC4u;
    // 0x2befc8: 0x2405022b  addiu       $a1, $zero, 0x22B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BEFC4u, 0x2BEFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEFCCu;
label_2befcc:
    // 0x2befcc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BEFCCu;
    {
        const bool branch_taken_0x2befcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFCCu;
        // 0x2befd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2befcc) {
            ctx->pc = 0x2BEFF4u;
            goto label_2beff4;
        }
    }
    ctx->pc = 0x2BEFD4u;
    // 0x2befd4: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x2befd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2befd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2befd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2befdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2befdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2befe0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2befe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2befe4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BEFE4u;
    SET_GPR_U32(ctx, 31, 0x2BEFECu);
    ctx->pc = 0x2BEFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEFE4u;
    // 0x2befe8: 0x24a5022c  addiu       $a1, $a1, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BEFE4u, 0x2BEFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEFECu;
label_2befec:
    // 0x2befec: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2BEFECu;
    {
        const bool branch_taken_0x2befec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFECu;
        // 0x2beff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2befec) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BEFF4u;
label_2beff4:
    // 0x2beff4: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BEFF4u;
    SET_GPR_U32(ctx, 31, 0x2BEFFCu);
    ctx->pc = 0x2BEFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEFF4u;
    // 0x2beff8: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BEFF4u, 0x2BEFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEFFCu;
label_2beffc:
    // 0x2beffc: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2BEFFCu;
    {
        const bool branch_taken_0x2beffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFFCu;
        // 0x2bf000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beffc) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BF004u;
    // 0x2bf004: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x2bf004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2bf008: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BF008u;
    {
        const bool branch_taken_0x2bf008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF008u;
        // 0x2bf00c: 0x24a5022c  addiu       $a1, $a1, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf008) {
            ctx->pc = 0x2BF030u;
            goto label_2bf030;
        }
    }
    ctx->pc = 0x2BF010u;
    // 0x2bf010: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf014: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf01c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf020: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF020u;
    SET_GPR_U32(ctx, 31, 0x2BF028u);
    ctx->pc = 0x2BF024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF020u;
    // 0x2bf024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF020u, 0x2BF028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF028u;
label_2bf028:
    // 0x2bf028: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2BF028u;
    {
        const bool branch_taken_0x2bf028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF028u;
        // 0x2bf02c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf028) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BF030u;
label_2bf030:
    // 0x2bf030: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BF030u;
    SET_GPR_U32(ctx, 31, 0x2BF038u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BF030u, 0x2BF038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF038u;
label_2bf038:
    // 0x2bf038: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF038u;
    {
        const bool branch_taken_0x2bf038 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BF03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF038u;
        // 0x2bf03c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf038) {
            ctx->pc = 0x2BF04Cu;
            goto label_2bf04c;
        }
    }
    ctx->pc = 0x2BF040u;
    // 0x2bf040: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bf040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bf044: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF044u;
    {
        const bool branch_taken_0x2bf044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF044u;
        // 0x2bf048: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf044) {
            ctx->pc = 0x2BF060u;
            goto label_2bf060;
        }
    }
    ctx->pc = 0x2BF04Cu;
label_2bf04c:
    // 0x2bf04c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bf04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bf050: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bf050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bf054: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bf054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bf058: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bf058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bf05c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bf05cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bf060:
    // 0x2bf060: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2bf060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2bf064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf068: 0xc781908c  lwc1        $f1, -0x6F74($gp)
    ctx->pc = 0x2bf068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf06c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bf06cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bf070: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2bf070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf074: 0x0  nop
    ctx->pc = 0x2bf074u;
    // NOP
    // 0x2bf078: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2BF078u;
    {
        const bool branch_taken_0x2bf078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF078u;
        // 0x2bf07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf078) {
            ctx->pc = 0x2BF0A0u;
            goto label_2bf0a0;
        }
    }
    ctx->pc = 0x2BF080u;
    // 0x2bf080: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf084: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf088: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf08c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf090: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF090u;
    SET_GPR_U32(ctx, 31, 0x2BF098u);
    ctx->pc = 0x2BF094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF090u;
    // 0x2bf094: 0x2405022c  addiu       $a1, $zero, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF090u, 0x2BF098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF098u;
label_2bf098:
    // 0x2bf098: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2BF098u;
    {
        const bool branch_taken_0x2bf098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF098u;
        // 0x2bf09c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf098) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BF0A0u;
label_2bf0a0:
    // 0x2bf0a0: 0xc7809090  lwc1        $f0, -0x6F70($gp)
    ctx->pc = 0x2bf0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf0a4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bf0a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf0a8: 0x0  nop
    ctx->pc = 0x2bf0a8u;
    // NOP
    // 0x2bf0ac: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x2BF0ACu;
    {
        const bool branch_taken_0x2bf0ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf0ac) {
            ctx->pc = 0x2BF0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF0ACu;
            // 0x2bf0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF0F0u;
            goto label_2bf0f0;
        }
    }
    ctx->pc = 0x2BF0B4u;
    // 0x2bf0b4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf0b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf0b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf0bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf0c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf0c4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF0C4u;
    SET_GPR_U32(ctx, 31, 0x2BF0CCu);
    ctx->pc = 0x2BF0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF0C4u;
    // 0x2bf0c8: 0x24050229  addiu       $a1, $zero, 0x229 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF0C4u, 0x2BF0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0CCu;
label_2bf0cc:
    // 0x2bf0cc: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2bf0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2bf0d0: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BF0D0u;
    {
        const bool branch_taken_0x2bf0d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0D0u;
        // 0x2bf0d4: 0x240400aa  addiu       $a0, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf0d0) {
            ctx->pc = 0x2BF124u;
            goto label_2bf124;
        }
    }
    ctx->pc = 0x2BF0D8u;
    // 0x2bf0d8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x2bf0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2bf0dc: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x2bf0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2bf0e0: 0xc081602  jal         func_205808
    ctx->pc = 0x2BF0E0u;
    SET_GPR_U32(ctx, 31, 0x2BF0E8u);
    ctx->pc = 0x2BF0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF0E0u;
    // 0x2bf0e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205808u, 0x2BF0E0u, 0x2BF0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0E8u;
label_2bf0e8:
    // 0x2bf0e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BF0E8u;
    {
        const bool branch_taken_0x2bf0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0E8u;
        // 0x2bf0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf0e8) {
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BF0F0u;
label_2bf0f0:
    // 0x2bf0f0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf0f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf0f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf0fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf100: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF100u;
    SET_GPR_U32(ctx, 31, 0x2BF108u);
    ctx->pc = 0x2BF104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF100u;
    // 0x2bf104: 0x2405022a  addiu       $a1, $zero, 0x22A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 554));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF100u, 0x2BF108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF108u;
label_2bf108:
    // 0x2bf108: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2bf108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2bf10c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF10Cu;
    {
        const bool branch_taken_0x2bf10c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF10Cu;
        // 0x2bf110: 0x240400aa  addiu       $a0, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf10c) {
            ctx->pc = 0x2BF124u;
            goto label_2bf124;
        }
    }
    ctx->pc = 0x2BF114u;
    // 0x2bf114: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x2bf114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2bf118: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x2bf118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2bf11c: 0xc081602  jal         func_205808
    ctx->pc = 0x2BF11Cu;
    SET_GPR_U32(ctx, 31, 0x2BF124u);
    ctx->pc = 0x2BF120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF11Cu;
    // 0x2bf120: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205808u, 0x2BF11Cu, 0x2BF124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF124u;
label_2bf124:
    // 0x2bf124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf128:
    // 0x2bf128: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BF128u;
    SET_GPR_U32(ctx, 31, 0x2BF130u);
    ctx->pc = 0x2BF12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF128u;
    // 0x2bf12c: 0x24050230  addiu       $a1, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BF128u, 0x2BF130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF130u;
label_2bf130:
    // 0x2bf130: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF130u;
    {
        const bool branch_taken_0x2bf130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF130u;
        // 0x2bf134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf130) {
            ctx->pc = 0x2BF148u;
            goto label_2bf148;
        }
    }
    ctx->pc = 0x2BF138u;
    // 0x2bf138: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bf138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bf13c: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2bf13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bf140: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BF140u;
    {
        const bool branch_taken_0x2bf140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf140) {
            ctx->pc = 0x2BF168u;
            goto label_2bf168;
        }
    }
    ctx->pc = 0x2BF148u;
label_2bf148:
    // 0x2bf148: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BF148u;
    SET_GPR_U32(ctx, 31, 0x2BF150u);
    ctx->pc = 0x2BF14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF148u;
    // 0x2bf14c: 0x24050231  addiu       $a1, $zero, 0x231 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BF148u, 0x2BF150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF150u;
label_2bf150:
    // 0x2bf150: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x2BF150u;
    {
        const bool branch_taken_0x2bf150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF150u;
        // 0x2bf154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf150) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF158u;
    // 0x2bf158: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bf158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bf15c: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2bf15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bf160: 0x106000e0  beqz        $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x2BF160u;
    {
        const bool branch_taken_0x2bf160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF160u;
        // 0x2bf164: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf160) {
            ctx->pc = 0x2BF4E4u;
            goto label_2bf4e4;
        }
    }
    ctx->pc = 0x2BF168u;
label_2bf168:
    // 0x2bf168: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BF168u;
    SET_GPR_U32(ctx, 31, 0x2BF170u);
    ctx->pc = 0x2BF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF168u;
    // 0x2bf16c: 0x24050230  addiu       $a1, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BF168u, 0x2BF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF170u;
label_2bf170:
    // 0x2bf170: 0x144000db  bnez        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x2BF170u;
    {
        const bool branch_taken_0x2bf170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF170u;
        // 0x2bf174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf170) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF178u;
    // 0x2bf178: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BF178u;
    SET_GPR_U32(ctx, 31, 0x2BF180u);
    ctx->pc = 0x2BF17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF178u;
    // 0x2bf17c: 0x24050231  addiu       $a1, $zero, 0x231 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BF178u, 0x2BF180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF180u;
label_2bf180:
    // 0x2bf180: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x2BF180u;
    {
        const bool branch_taken_0x2bf180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF180u;
        // 0x2bf184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf180) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF188u;
    // 0x2bf188: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF188u;
    SET_GPR_U32(ctx, 31, 0x2BF190u);
    ctx->pc = 0x2BF18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF188u;
    // 0x2bf18c: 0x2405022c  addiu       $a1, $zero, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF188u, 0x2BF190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF190u;
label_2bf190:
    // 0x2bf190: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2BF190u;
    {
        const bool branch_taken_0x2bf190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF190u;
        // 0x2bf194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf190) {
            ctx->pc = 0x2BF20Cu;
            goto label_2bf20c;
        }
    }
    ctx->pc = 0x2BF198u;
    // 0x2bf198: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF198u;
    SET_GPR_U32(ctx, 31, 0x2BF1A0u);
    ctx->pc = 0x2BF19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF198u;
    // 0x2bf19c: 0x2405022d  addiu       $a1, $zero, 0x22D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 557));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF198u, 0x2BF1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF1A0u;
label_2bf1a0:
    // 0x2bf1a0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BF1A0u;
    {
        const bool branch_taken_0x2bf1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1A0u;
        // 0x2bf1a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1a0) {
            ctx->pc = 0x2BF20Cu;
            goto label_2bf20c;
        }
    }
    ctx->pc = 0x2BF1A8u;
    // 0x2bf1a8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF1A8u;
    SET_GPR_U32(ctx, 31, 0x2BF1B0u);
    ctx->pc = 0x2BF1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF1A8u;
    // 0x2bf1ac: 0x2405022e  addiu       $a1, $zero, 0x22E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 558));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF1A8u, 0x2BF1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF1B0u;
label_2bf1b0:
    // 0x2bf1b0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BF1B0u;
    {
        const bool branch_taken_0x2bf1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1B0u;
        // 0x2bf1b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1b0) {
            ctx->pc = 0x2BF20Cu;
            goto label_2bf20c;
        }
    }
    ctx->pc = 0x2BF1B8u;
    // 0x2bf1b8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF1B8u;
    SET_GPR_U32(ctx, 31, 0x2BF1C0u);
    ctx->pc = 0x2BF1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF1B8u;
    // 0x2bf1bc: 0x24050229  addiu       $a1, $zero, 0x229 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF1B8u, 0x2BF1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF1C0u;
label_2bf1c0:
    // 0x2bf1c0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BF1C0u;
    {
        const bool branch_taken_0x2bf1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1C0u;
        // 0x2bf1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1c0) {
            ctx->pc = 0x2BF20Cu;
            goto label_2bf20c;
        }
    }
    ctx->pc = 0x2BF1C8u;
    // 0x2bf1c8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF1C8u;
    SET_GPR_U32(ctx, 31, 0x2BF1D0u);
    ctx->pc = 0x2BF1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF1C8u;
    // 0x2bf1cc: 0x2405022a  addiu       $a1, $zero, 0x22A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 554));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF1C8u, 0x2BF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF1D0u;
label_2bf1d0:
    // 0x2bf1d0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BF1D0u;
    {
        const bool branch_taken_0x2bf1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1D0u;
        // 0x2bf1d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1d0) {
            ctx->pc = 0x2BF20Cu;
            goto label_2bf20c;
        }
    }
    ctx->pc = 0x2BF1D8u;
    // 0x2bf1d8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF1D8u;
    SET_GPR_U32(ctx, 31, 0x2BF1E0u);
    ctx->pc = 0x2BF1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF1D8u;
    // 0x2bf1dc: 0x2405022b  addiu       $a1, $zero, 0x22B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF1D8u, 0x2BF1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF1E0u;
label_2bf1e0:
    // 0x2bf1e0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF1E0u;
    {
        const bool branch_taken_0x2bf1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1E0u;
        // 0x2bf1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1e0) {
            ctx->pc = 0x2BF20Cu;
            goto label_2bf20c;
        }
    }
    ctx->pc = 0x2BF1E8u;
    // 0x2bf1e8: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x2bf1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2bf1ec: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf1f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf1f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf1f8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf1fc: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF1FCu;
    SET_GPR_U32(ctx, 31, 0x2BF204u);
    ctx->pc = 0x2BF200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF1FCu;
    // 0x2bf200: 0x24a5022c  addiu       $a1, $a1, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF1FCu, 0x2BF204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF204u;
label_2bf204:
    // 0x2bf204: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x2BF204u;
    {
        const bool branch_taken_0x2bf204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF204u;
        // 0x2bf208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf204) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF20Cu;
label_2bf20c:
    // 0x2bf20c: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BF20Cu;
    SET_GPR_U32(ctx, 31, 0x2BF214u);
    ctx->pc = 0x2BF210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF20Cu;
    // 0x2bf210: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BF20Cu, 0x2BF214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF214u;
label_2bf214:
    // 0x2bf214: 0x504000b2  beql        $v0, $zero, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2BF214u;
    {
        const bool branch_taken_0x2bf214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf214) {
            ctx->pc = 0x2BF218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF214u;
            // 0x2bf218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF21Cu;
    // 0x2bf21c: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x2bf21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2bf220: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BF220u;
    {
        const bool branch_taken_0x2bf220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF220u;
        // 0x2bf224: 0x24a5022c  addiu       $a1, $a1, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf220) {
            ctx->pc = 0x2BF248u;
            goto label_2bf248;
        }
    }
    ctx->pc = 0x2BF228u;
    // 0x2bf228: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf22c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf230: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf234: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf238: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF238u;
    SET_GPR_U32(ctx, 31, 0x2BF240u);
    ctx->pc = 0x2BF23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF238u;
    // 0x2bf23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF238u, 0x2BF240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF240u;
label_2bf240:
    // 0x2bf240: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2BF240u;
    {
        const bool branch_taken_0x2bf240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF240u;
        // 0x2bf244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf240) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF248u;
label_2bf248:
    // 0x2bf248: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BF248u;
    SET_GPR_U32(ctx, 31, 0x2BF250u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BF248u, 0x2BF250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF250u;
label_2bf250:
    // 0x2bf250: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF250u;
    {
        const bool branch_taken_0x2bf250 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BF254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF250u;
        // 0x2bf254: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf250) {
            ctx->pc = 0x2BF264u;
            goto label_2bf264;
        }
    }
    ctx->pc = 0x2BF258u;
    // 0x2bf258: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bf258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bf25c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF25Cu;
    {
        const bool branch_taken_0x2bf25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF25Cu;
        // 0x2bf260: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf25c) {
            ctx->pc = 0x2BF278u;
            goto label_2bf278;
        }
    }
    ctx->pc = 0x2BF264u;
label_2bf264:
    // 0x2bf264: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bf264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bf268: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bf268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bf26c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bf26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bf270: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bf270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bf274: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bf274u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bf278:
    // 0x2bf278: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2bf278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2bf27c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf280: 0xc7819094  lwc1        $f1, -0x6F6C($gp)
    ctx->pc = 0x2bf280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf284: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bf284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bf288: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2bf288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf28c: 0x0  nop
    ctx->pc = 0x2bf28cu;
    // NOP
    // 0x2bf290: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2BF290u;
    {
        const bool branch_taken_0x2bf290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF290u;
        // 0x2bf294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf290) {
            ctx->pc = 0x2BF2B8u;
            goto label_2bf2b8;
        }
    }
    ctx->pc = 0x2BF298u;
    // 0x2bf298: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf29c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf2a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf2a4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf2a8: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF2A8u;
    SET_GPR_U32(ctx, 31, 0x2BF2B0u);
    ctx->pc = 0x2BF2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF2A8u;
    // 0x2bf2ac: 0x2405022c  addiu       $a1, $zero, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF2A8u, 0x2BF2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2B0u;
label_2bf2b0:
    // 0x2bf2b0: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2BF2B0u;
    {
        const bool branch_taken_0x2bf2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2B0u;
        // 0x2bf2b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2b0) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF2B8u;
label_2bf2b8:
    // 0x2bf2b8: 0xc7809098  lwc1        $f0, -0x6F68($gp)
    ctx->pc = 0x2bf2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf2bc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bf2bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf2c0: 0x0  nop
    ctx->pc = 0x2bf2c0u;
    // NOP
    // 0x2bf2c4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF2C4u;
    {
        const bool branch_taken_0x2bf2c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2C4u;
        // 0x2bf2c8: 0x24050229  addiu       $a1, $zero, 0x229 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2c4) {
            ctx->pc = 0x2BF2E4u;
            goto label_2bf2e4;
        }
    }
    ctx->pc = 0x2BF2CCu;
    // 0x2bf2cc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf2d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf2d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf2d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf2dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF2DCu;
    {
        const bool branch_taken_0x2bf2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf2dc) {
            ctx->pc = 0x2BF2FCu;
            goto label_2bf2fc;
        }
    }
    ctx->pc = 0x2BF2E4u;
label_2bf2e4:
    // 0x2bf2e4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf2e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf2f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf2f8: 0x2405022a  addiu       $a1, $zero, 0x22A
    ctx->pc = 0x2bf2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 554));
label_2bf2fc:
    // 0x2bf2fc: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF2FCu;
    SET_GPR_U32(ctx, 31, 0x2BF304u);
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF2FCu, 0x2BF304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF304u;
label_2bf304:
    // 0x2bf304: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2bf304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2bf308: 0x18400074  blez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2BF308u;
    {
        const bool branch_taken_0x2bf308 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF308u;
        // 0x2bf30c: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf308) {
            ctx->pc = 0x2BF4DCu;
            goto label_2bf4dc;
        }
    }
    ctx->pc = 0x2BF310u;
    // 0x2bf310: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x2bf310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x2bf314: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x2bf314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2bf318: 0xc081602  jal         func_205808
    ctx->pc = 0x2BF318u;
    SET_GPR_U32(ctx, 31, 0x2BF320u);
    ctx->pc = 0x2BF31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF318u;
    // 0x2bf31c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205808u, 0x2BF318u, 0x2BF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF320u;
label_2bf320:
    // 0x2bf320: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2BF320u;
    {
        const bool branch_taken_0x2bf320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF320u;
        // 0x2bf324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf320) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF328u;
label_2bf328:
    // 0x2bf328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bf328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf32c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bf32cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf330: 0x0  nop
    ctx->pc = 0x2bf330u;
    // NOP
    // 0x2bf334: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x2BF334u;
    {
        const bool branch_taken_0x2bf334 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF334u;
        // 0x2bf338: 0xc6600b2c  lwc1        $f0, 0xB2C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf334) {
            ctx->pc = 0x2BF47Cu;
            goto label_2bf47c;
        }
    }
    ctx->pc = 0x2BF33Cu;
    // 0x2bf33c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bf33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf340: 0x0  nop
    ctx->pc = 0x2bf340u;
    // NOP
    // 0x2bf344: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2BF344u;
    {
        const bool branch_taken_0x2bf344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF344u;
        // 0x2bf348: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf344) {
            ctx->pc = 0x2BF3B4u;
            goto label_2bf3b4;
        }
    }
    ctx->pc = 0x2BF34Cu;
    // 0x2bf34c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BF34Cu;
    {
        const bool branch_taken_0x2bf34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF34Cu;
        // 0x2bf350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf34c) {
            ctx->pc = 0x2BF3BCu;
            goto label_2bf3bc;
        }
    }
    ctx->pc = 0x2BF354u;
    // 0x2bf354: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2bf354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2bf358: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BF358u;
    {
        const bool branch_taken_0x2bf358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf358) {
            ctx->pc = 0x2BF3F8u;
            goto label_2bf3f8;
        }
    }
    ctx->pc = 0x2BF360u;
    // 0x2bf360: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF360u;
    SET_GPR_U32(ctx, 31, 0x2BF368u);
    ctx->pc = 0x2BF364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF360u;
    // 0x2bf364: 0x24050212  addiu       $a1, $zero, 0x212 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF360u, 0x2BF368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF368u;
label_2bf368:
    // 0x2bf368: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2BF368u;
    {
        const bool branch_taken_0x2bf368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF368u;
        // 0x2bf36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf368) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF370u;
    // 0x2bf370: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF370u;
    SET_GPR_U32(ctx, 31, 0x2BF378u);
    ctx->pc = 0x2BF374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF370u;
    // 0x2bf374: 0x24050213  addiu       $a1, $zero, 0x213 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF370u, 0x2BF378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF378u;
label_2bf378:
    // 0x2bf378: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2BF378u;
    {
        const bool branch_taken_0x2bf378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF378u;
        // 0x2bf37c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf378) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF380u;
    // 0x2bf380: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF380u;
    SET_GPR_U32(ctx, 31, 0x2BF388u);
    ctx->pc = 0x2BF384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF380u;
    // 0x2bf384: 0x24050214  addiu       $a1, $zero, 0x214 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF380u, 0x2BF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF388u;
label_2bf388:
    // 0x2bf388: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2BF388u;
    {
        const bool branch_taken_0x2bf388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF388u;
        // 0x2bf38c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf388) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF390u;
    // 0x2bf390: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x2bf390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2bf394: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf398: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf39c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf3a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf3a4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF3A4u;
    SET_GPR_U32(ctx, 31, 0x2BF3ACu);
    ctx->pc = 0x2BF3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF3A4u;
    // 0x2bf3a8: 0x24a50212  addiu       $a1, $a1, 0x212 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 530));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF3A4u, 0x2BF3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3ACu;
label_2bf3ac:
    // 0x2bf3ac: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2BF3ACu;
    {
        const bool branch_taken_0x2bf3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3ACu;
        // 0x2bf3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3ac) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF3B4u;
label_2bf3b4:
    // 0x2bf3b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BF3B4u;
    {
        const bool branch_taken_0x2bf3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3B4u;
        // 0x2bf3b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3b4) {
            ctx->pc = 0x2BF3ECu;
            goto label_2bf3ec;
        }
    }
    ctx->pc = 0x2BF3BCu;
label_2bf3bc:
    // 0x2bf3bc: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF3BCu;
    SET_GPR_U32(ctx, 31, 0x2BF3C4u);
    ctx->pc = 0x2BF3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF3BCu;
    // 0x2bf3c0: 0x24050216  addiu       $a1, $zero, 0x216 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF3BCu, 0x2BF3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3C4u;
label_2bf3c4:
    // 0x2bf3c4: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2BF3C4u;
    {
        const bool branch_taken_0x2bf3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3C4u;
        // 0x2bf3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3c4) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF3CCu;
    // 0x2bf3cc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf3d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf3d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf3d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf3d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf3dc: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF3DCu;
    SET_GPR_U32(ctx, 31, 0x2BF3E4u);
    ctx->pc = 0x2BF3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF3DCu;
    // 0x2bf3e0: 0x24050216  addiu       $a1, $zero, 0x216 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF3DCu, 0x2BF3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3E4u;
label_2bf3e4:
    // 0x2bf3e4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2BF3E4u;
    {
        const bool branch_taken_0x2bf3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3E4u;
        // 0x2bf3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3e4) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF3ECu;
label_2bf3ec:
    // 0x2bf3ec: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2bf3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2bf3f0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2BF3F0u;
    {
        const bool branch_taken_0x2bf3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf3f0) {
            ctx->pc = 0x2BF3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF3F0u;
            // 0x2bf3f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF428u;
            goto label_2bf428;
        }
    }
    ctx->pc = 0x2BF3F8u;
label_2bf3f8:
    // 0x2bf3f8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF3F8u;
    SET_GPR_U32(ctx, 31, 0x2BF400u);
    ctx->pc = 0x2BF3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF3F8u;
    // 0x2bf3fc: 0x24050215  addiu       $a1, $zero, 0x215 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 533));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF3F8u, 0x2BF400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF400u;
label_2bf400:
    // 0x2bf400: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2BF400u;
    {
        const bool branch_taken_0x2bf400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF400u;
        // 0x2bf404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf400) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF408u;
    // 0x2bf408: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf40c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf414: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf418: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF418u;
    SET_GPR_U32(ctx, 31, 0x2BF420u);
    ctx->pc = 0x2BF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF418u;
    // 0x2bf41c: 0x24050215  addiu       $a1, $zero, 0x215 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 533));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF418u, 0x2BF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF420u;
label_2bf420:
    // 0x2bf420: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2BF420u;
    {
        const bool branch_taken_0x2bf420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF420u;
        // 0x2bf424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf420) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF428u;
label_2bf428:
    // 0x2bf428: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF428u;
    SET_GPR_U32(ctx, 31, 0x2BF430u);
    ctx->pc = 0x2BF42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF428u;
    // 0x2bf42c: 0x2405021a  addiu       $a1, $zero, 0x21A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF428u, 0x2BF430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF430u;
label_2bf430:
    // 0x2bf430: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2BF430u;
    {
        const bool branch_taken_0x2bf430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF430u;
        // 0x2bf434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf430) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF438u;
    // 0x2bf438: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF438u;
    SET_GPR_U32(ctx, 31, 0x2BF440u);
    ctx->pc = 0x2BF43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF438u;
    // 0x2bf43c: 0x2405021b  addiu       $a1, $zero, 0x21B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF438u, 0x2BF440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF440u;
label_2bf440:
    // 0x2bf440: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BF440u;
    {
        const bool branch_taken_0x2bf440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF440u;
        // 0x2bf444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf440) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF448u;
    // 0x2bf448: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF448u;
    SET_GPR_U32(ctx, 31, 0x2BF450u);
    ctx->pc = 0x2BF44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF448u;
    // 0x2bf44c: 0x2405021c  addiu       $a1, $zero, 0x21C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF448u, 0x2BF450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF450u;
label_2bf450:
    // 0x2bf450: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BF450u;
    {
        const bool branch_taken_0x2bf450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF450u;
        // 0x2bf454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf450) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF458u;
    // 0x2bf458: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x2bf458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2bf45c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf460: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf464: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf468: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf46c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF46Cu;
    SET_GPR_U32(ctx, 31, 0x2BF474u);
    ctx->pc = 0x2BF470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF46Cu;
    // 0x2bf470: 0x24a5021a  addiu       $a1, $a1, 0x21A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 538));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF46Cu, 0x2BF474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF474u;
label_2bf474:
    // 0x2bf474: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BF474u;
    {
        const bool branch_taken_0x2bf474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF474u;
        // 0x2bf478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf474) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF47Cu;
label_2bf47c:
    // 0x2bf47c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bf47cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bf480: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf484: 0x0  nop
    ctx->pc = 0x2bf484u;
    // NOP
    // 0x2bf488: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2BF488u;
    {
        const bool branch_taken_0x2bf488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF488u;
        // 0x2bf48c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf488) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF490u;
    // 0x2bf490: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF490u;
    SET_GPR_U32(ctx, 31, 0x2BF498u);
    ctx->pc = 0x2BF494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF490u;
    // 0x2bf494: 0x24050217  addiu       $a1, $zero, 0x217 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF490u, 0x2BF498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF498u;
label_2bf498:
    // 0x2bf498: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BF498u;
    {
        const bool branch_taken_0x2bf498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF498u;
        // 0x2bf49c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf498) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF4A0u;
    // 0x2bf4a0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF4A0u;
    SET_GPR_U32(ctx, 31, 0x2BF4A8u);
    ctx->pc = 0x2BF4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4A0u;
    // 0x2bf4a4: 0x24050218  addiu       $a1, $zero, 0x218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF4A0u, 0x2BF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4A8u;
label_2bf4a8:
    // 0x2bf4a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BF4A8u;
    {
        const bool branch_taken_0x2bf4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4A8u;
        // 0x2bf4ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4a8) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF4B0u;
    // 0x2bf4b0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF4B0u;
    SET_GPR_U32(ctx, 31, 0x2BF4B8u);
    ctx->pc = 0x2BF4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4B0u;
    // 0x2bf4b4: 0x24050219  addiu       $a1, $zero, 0x219 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 537));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF4B0u, 0x2BF4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4B8u;
label_2bf4b8:
    // 0x2bf4b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BF4B8u;
    {
        const bool branch_taken_0x2bf4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4B8u;
        // 0x2bf4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4b8) {
            ctx->pc = 0x2BF4E0u;
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF4C0u;
    // 0x2bf4c0: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x2bf4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2bf4c4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bf4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bf4c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf4cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf4d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf4d4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BF4D4u;
    SET_GPR_U32(ctx, 31, 0x2BF4DCu);
    ctx->pc = 0x2BF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4D4u;
    // 0x2bf4d8: 0x24a50217  addiu       $a1, $a1, 0x217 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 535));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BF4D4u, 0x2BF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4DCu;
label_2bf4dc:
    // 0x2bf4dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf4e0:
    // 0x2bf4e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bf4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bf4e4:
    // 0x2bf4e4: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2bf4e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2bf4e8: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x2bf4e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2bf4ec: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2bf4ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bf4f0: 0xc085508  jal         func_215420
    ctx->pc = 0x2BF4F0u;
    SET_GPR_U32(ctx, 31, 0x2BF4F8u);
    ctx->pc = 0x2BF4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4F0u;
    // 0x2bf4f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215420u, 0x2BF4F0u, 0x2BF4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4F8u;
label_2bf4f8:
    // 0x2bf4f8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2bf4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf4fc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2bf4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf500: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BF500u;
    SET_GPR_U32(ctx, 31, 0x2BF508u);
    ctx->pc = 0x2BF504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF500u;
    // 0x2bf504: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BF500u, 0x2BF508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF508u;
label_2bf508:
    // 0x2bf508: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf50c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bf50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf510: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BF510u;
    SET_GPR_U32(ctx, 31, 0x2BF518u);
    ctx->pc = 0x2BF514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF510u;
    // 0x2bf514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BF510u, 0x2BF518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF518u;
label_2bf518:
    // 0x2bf518: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF518u;
    {
        const bool branch_taken_0x2bf518 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF518u;
        // 0x2bf51c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf518) {
            ctx->pc = 0x2BF52Cu;
            goto label_2bf52c;
        }
    }
    ctx->pc = 0x2BF520u;
    // 0x2bf520: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BF520u;
    SET_GPR_U32(ctx, 31, 0x2BF528u);
    ctx->pc = 0x2BF524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF520u;
    // 0x2bf524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BF520u, 0x2BF528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF528u;
label_2bf528:
    // 0x2bf528: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf52c:
    // 0x2bf52c: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2BF52Cu;
    SET_GPR_U32(ctx, 31, 0x2BF534u);
    ctx->pc = 0x2BF530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF52Cu;
    // 0x2bf530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2BF52Cu, 0x2BF534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF534u;
label_2bf534:
    // 0x2bf534: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bf534u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2bf538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf53c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF53Cu;
    SET_GPR_U32(ctx, 31, 0x2BF544u);
    ctx->pc = 0x2BF540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF53Cu;
    // 0x2bf540: 0x2405022b  addiu       $a1, $zero, 0x22B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF53Cu, 0x2BF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF544u;
label_2bf544:
    // 0x2bf544: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF544u;
    {
        const bool branch_taken_0x2bf544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF544u;
        // 0x2bf548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf544) {
            ctx->pc = 0x2BF564u;
            goto label_2bf564;
        }
    }
    ctx->pc = 0x2BF54Cu;
    // 0x2bf54c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2bf54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2bf550: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf554: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x2BF554u;
    SET_GPR_U32(ctx, 31, 0x2BF55Cu);
    ctx->pc = 0x2BF558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF554u;
    // 0x2bf558: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x2BF554u, 0x2BF55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF55Cu;
label_2bf55c:
    // 0x2bf55c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2BF55Cu;
    {
        const bool branch_taken_0x2bf55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF55Cu;
        // 0x2bf560: 0x8e620a94  lw          $v0, 0xA94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf55c) {
            ctx->pc = 0x2BF65Cu;
            goto label_2bf65c;
        }
    }
    ctx->pc = 0x2BF564u;
label_2bf564:
    // 0x2bf564: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF564u;
    SET_GPR_U32(ctx, 31, 0x2BF56Cu);
    ctx->pc = 0x2BF568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF564u;
    // 0x2bf568: 0x24050231  addiu       $a1, $zero, 0x231 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF564u, 0x2BF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF56Cu;
label_2bf56c:
    // 0x2bf56c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF56Cu;
    {
        const bool branch_taken_0x2bf56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF56Cu;
        // 0x2bf570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf56c) {
            ctx->pc = 0x2BF584u;
            goto label_2bf584;
        }
    }
    ctx->pc = 0x2BF574u;
    // 0x2bf574: 0xc085608  jal         func_215820
    ctx->pc = 0x2BF574u;
    SET_GPR_U32(ctx, 31, 0x2BF57Cu);
    ctx->pc = 0x2BF578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF574u;
    // 0x2bf578: 0x24050230  addiu       $a1, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BF574u, 0x2BF57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF57Cu;
label_2bf57c:
    // 0x2bf57c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF57Cu;
    {
        const bool branch_taken_0x2bf57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf57c) {
            ctx->pc = 0x2BF59Cu;
            goto label_2bf59c;
        }
    }
    ctx->pc = 0x2BF584u;
label_2bf584:
    // 0x2bf584: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf588: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf58c: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x2BF58Cu;
    SET_GPR_U32(ctx, 31, 0x2BF594u);
    ctx->pc = 0x2BF590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF58Cu;
    // 0x2bf590: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x2BF58Cu, 0x2BF594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF594u;
label_2bf594:
    // 0x2bf594: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2BF594u;
    {
        const bool branch_taken_0x2bf594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF594u;
        // 0x2bf598: 0x8e620a94  lw          $v0, 0xA94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf594) {
            ctx->pc = 0x2BF65Cu;
            goto label_2bf65c;
        }
    }
    ctx->pc = 0x2BF59Cu;
label_2bf59c:
    // 0x2bf59c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bf59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf5a0: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2bf5a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf5a4: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x2BF5A4u;
    {
        const bool branch_taken_0x2bf5a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf5a4) {
            ctx->pc = 0x2BF648u;
            goto label_2bf648;
        }
    }
    ctx->pc = 0x2BF5ACu;
    // 0x2bf5ac: 0xc66c0b3c  lwc1        $f12, 0xB3C($s3)
    ctx->pc = 0x2bf5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf5b0: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2bf5b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf5b4: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x2BF5B4u;
    {
        const bool branch_taken_0x2bf5b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf5b4) {
            ctx->pc = 0x2BF648u;
            goto label_2bf648;
        }
    }
    ctx->pc = 0x2BF5BCu;
    // 0x2bf5bc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BF5BCu;
    SET_GPR_U32(ctx, 31, 0x2BF5C4u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BF5BCu, 0x2BF5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5C4u;
label_2bf5c4:
    // 0x2bf5c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bf5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5cc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BF5CCu;
    SET_GPR_U32(ctx, 31, 0x2BF5D4u);
    ctx->pc = 0x2BF5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5CCu;
    // 0x2bf5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BF5CCu, 0x2BF5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5D4u;
label_2bf5d4:
    // 0x2bf5d4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF5D4u;
    {
        const bool branch_taken_0x2bf5d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5D4u;
        // 0x2bf5d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5d4) {
            ctx->pc = 0x2BF5E8u;
            goto label_2bf5e8;
        }
    }
    ctx->pc = 0x2BF5DCu;
    // 0x2bf5dc: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BF5DCu;
    SET_GPR_U32(ctx, 31, 0x2BF5E4u);
    ctx->pc = 0x2BF5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5DCu;
    // 0x2bf5e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BF5DCu, 0x2BF5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5E4u;
label_2bf5e4:
    // 0x2bf5e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf5e8:
    // 0x2bf5e8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BF5E8u;
    SET_GPR_U32(ctx, 31, 0x2BF5F0u);
    ctx->pc = 0x2BF5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5E8u;
    // 0x2bf5ec: 0xc7ac0008  lwc1        $f12, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BF5E8u, 0x2BF5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5F0u;
label_2bf5f0:
    // 0x2bf5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5f4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2BF5F4u;
    SET_GPR_U32(ctx, 31, 0x2BF5FCu);
    ctx->pc = 0x2BF5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5F4u;
    // 0x2bf5f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2BF5F4u, 0x2BF5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5FCu;
label_2bf5fc:
    // 0x2bf5fc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2bf5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2bf600: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf608: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BF608u;
    SET_GPR_U32(ctx, 31, 0x2BF610u);
    ctx->pc = 0x2BF60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF608u;
    // 0x2bf60c: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BF608u, 0x2BF610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF610u;
label_2bf610:
    // 0x2bf610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf614: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2BF614u;
    SET_GPR_U32(ctx, 31, 0x2BF61Cu);
    ctx->pc = 0x2BF618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF614u;
    // 0x2bf618: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2BF614u, 0x2BF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF61Cu;
label_2bf61c:
    // 0x2bf61c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2bf61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2bf620: 0xdc259d00  ld          $a1, -0x6300($at)
    ctx->pc = 0x2bf620u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9D00u));
    // 0x2bf624: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2BF624u;
    SET_GPR_U32(ctx, 31, 0x2BF62Cu);
    ctx->pc = 0x2BF628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF624u;
    // 0x2bf628: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2BF624u, 0x2BF62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF62Cu;
label_2bf62c:
    // 0x2bf62c: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2BF62Cu;
    SET_GPR_U32(ctx, 31, 0x2BF634u);
    ctx->pc = 0x2BF630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF62Cu;
    // 0x2bf630: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2BF62Cu, 0x2BF634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF634u;
label_2bf634:
    // 0x2bf634: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2bf634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bf638: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x2BF638u;
    SET_GPR_U32(ctx, 31, 0x2BF640u);
    ctx->pc = 0x2BF63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF638u;
    // 0x2bf63c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x2BF638u, 0x2BF640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF640u;
label_2bf640:
    // 0x2bf640: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF640u;
    {
        const bool branch_taken_0x2bf640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF640u;
        // 0x2bf644: 0x8e620a94  lw          $v0, 0xA94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf640) {
            ctx->pc = 0x2BF65Cu;
            goto label_2bf65c;
        }
    }
    ctx->pc = 0x2BF648u;
label_2bf648:
    // 0x2bf648: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf64c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf650: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x2BF650u;
    SET_GPR_U32(ctx, 31, 0x2BF658u);
    ctx->pc = 0x2BF654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF650u;
    // 0x2bf654: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x2BF650u, 0x2BF658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF658u;
label_2bf658:
    // 0x2bf658: 0x8e620a94  lw          $v0, 0xA94($s3)
    ctx->pc = 0x2bf658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2708)));
label_2bf65c:
    // 0x2bf65c: 0xae620a98  sw          $v0, 0xA98($s3)
    ctx->pc = 0x2bf65cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2712), GPR_U32(ctx, 2));
    // 0x2bf660: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bf660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2bf664:
    // 0x2bf664: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2bf664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf668: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2bf668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf66c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2bf66cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf670: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bf670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf674: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2bf674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bf678: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF678u;
        // 0x2bf67c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF680u;
}
