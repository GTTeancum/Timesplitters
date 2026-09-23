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

// Function: enemyAmbushRight
// Address: 0x2c86c8 - 0x2c8824
void enemyAmbushRight_0x2c86c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAmbushRight_0x2c86c8");
#endif

    switch (ctx->pc) {
        case 0x2c86e8u: goto label_2c86e8;
        case 0x2c870cu: goto label_2c870c;
        case 0x2c871cu: goto label_2c871c;
        case 0x2c872cu: goto label_2c872c;
        case 0x2c8770u: goto label_2c8770;
        case 0x2c878cu: goto label_2c878c;
        case 0x2c879cu: goto label_2c879c;
        case 0x2c87acu: goto label_2c87ac;
        case 0x2c87bcu: goto label_2c87bc;
        case 0x2c87e8u: goto label_2c87e8;
        case 0x2c87f0u: goto label_2c87f0;
        case 0x2c87f8u: goto label_2c87f8;
        default: break;
    }

    ctx->pc = 0x2c86c8u;

    // 0x2c86c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c86c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c86cc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c86ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c86d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c86d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c86d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c86d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c86d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c86d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c86dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c86dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c86e0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C86E0u;
    SET_GPR_U32(ctx, 31, 0x2C86E8u);
    ctx->pc = 0x2C86E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C86E0u;
    // 0x2c86e4: 0x8e110160  lw          $s1, 0x160($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C86E0u, 0x2C86E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C86E8u;
label_2c86e8:
    // 0x2c86e8: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2c86e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c86ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c86ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c86f0: 0xe6200aec  swc1        $f0, 0xAEC($s1)
    ctx->pc = 0x2c86f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c86f4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2c86f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c86f8: 0xe6210af0  swc1        $f1, 0xAF0($s1)
    ctx->pc = 0x2c86f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c86fc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2c86fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8700: 0xae200adc  sw          $zero, 0xADC($s1)
    ctx->pc = 0x2c8700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2780), GPR_U32(ctx, 0));
    // 0x2c8704: 0xc0b269a  jal         func_2C9A68
    ctx->pc = 0x2C8704u;
    SET_GPR_U32(ctx, 31, 0x2C870Cu);
    ctx->pc = 0x2C8708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8704u;
    // 0x2c8708: 0xe6200af4  swc1        $f0, 0xAF4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9A68u, 0x2C8704u, 0x2C870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C870Cu;
label_2c870c:
    // 0x2c870c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C870Cu;
    {
        const bool branch_taken_0x2c870c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C870Cu;
        // 0x2c8710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c870c) {
            ctx->pc = 0x2C8794u;
            goto label_2c8794;
        }
    }
    ctx->pc = 0x2C8714u;
    // 0x2c8714: 0xc085608  jal         func_215820
    ctx->pc = 0x2C8714u;
    SET_GPR_U32(ctx, 31, 0x2C871Cu);
    ctx->pc = 0x2C8718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8714u;
    // 0x2c8718: 0x240501bf  addiu       $a1, $zero, 0x1BF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C8714u, 0x2C871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C871Cu;
label_2c871c:
    // 0x2c871c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C871Cu;
    {
        const bool branch_taken_0x2c871c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C871Cu;
        // 0x2c8720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c871c) {
            ctx->pc = 0x2C8794u;
            goto label_2c8794;
        }
    }
    ctx->pc = 0x2C8724u;
    // 0x2c8724: 0xc085608  jal         func_215820
    ctx->pc = 0x2C8724u;
    SET_GPR_U32(ctx, 31, 0x2C872Cu);
    ctx->pc = 0x2C8728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8724u;
    // 0x2c8728: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C8724u, 0x2C872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C872Cu;
label_2c872c:
    // 0x2c872c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C872Cu;
    {
        const bool branch_taken_0x2c872c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C872Cu;
        // 0x2c8730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c872c) {
            ctx->pc = 0x2C8794u;
            goto label_2c8794;
        }
    }
    ctx->pc = 0x2C8734u;
    // 0x2c8734: 0x8e240178  lw          $a0, 0x178($s1)
    ctx->pc = 0x2c8734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c8738: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2c8738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2c873c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2c873cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2c8740: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2c8740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c8744: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x2c8744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x2c8748: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c874c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c8750: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c8750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c8754: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8754u;
    {
        const bool branch_taken_0x2c8754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8754u;
        // 0x2c8758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8754) {
            ctx->pc = 0x2C8778u;
            goto label_2c8778;
        }
    }
    ctx->pc = 0x2C875Cu;
    // 0x2c875c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c875cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8760: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8764: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c8764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8768: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C8768u;
    SET_GPR_U32(ctx, 31, 0x2C8770u);
    ctx->pc = 0x2C876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8768u;
    // 0x2c876c: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C8768u, 0x2C8770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8770u;
label_2c8770:
    // 0x2c8770: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2C8770u;
    {
        const bool branch_taken_0x2c8770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8770u;
        // 0x2c8774: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8770) {
            ctx->pc = 0x2C8814u;
            goto label_2c8814;
        }
    }
    ctx->pc = 0x2C8778u;
label_2c8778:
    // 0x2c8778: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c8778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c877c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c877cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8780: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c8780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8784: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C8784u;
    SET_GPR_U32(ctx, 31, 0x2C878Cu);
    ctx->pc = 0x2C8788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8784u;
    // 0x2c8788: 0x240501bf  addiu       $a1, $zero, 0x1BF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C8784u, 0x2C878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C878Cu;
label_2c878c:
    // 0x2c878c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C878Cu;
    {
        const bool branch_taken_0x2c878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C878Cu;
        // 0x2c8790: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c878c) {
            ctx->pc = 0x2C8814u;
            goto label_2c8814;
        }
    }
    ctx->pc = 0x2C8794u;
label_2c8794:
    // 0x2c8794: 0xc085608  jal         func_215820
    ctx->pc = 0x2C8794u;
    SET_GPR_U32(ctx, 31, 0x2C879Cu);
    ctx->pc = 0x2C8798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8794u;
    // 0x2c8798: 0x240501bf  addiu       $a1, $zero, 0x1BF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C8794u, 0x2C879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C879Cu;
label_2c879c:
    // 0x2c879c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C879Cu;
    {
        const bool branch_taken_0x2c879c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C879Cu;
        // 0x2c87a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c879c) {
            ctx->pc = 0x2C87B4u;
            goto label_2c87b4;
        }
    }
    ctx->pc = 0x2C87A4u;
    // 0x2c87a4: 0xc085608  jal         func_215820
    ctx->pc = 0x2C87A4u;
    SET_GPR_U32(ctx, 31, 0x2C87ACu);
    ctx->pc = 0x2C87A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C87A4u;
    // 0x2c87a8: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C87A4u, 0x2C87ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87ACu;
label_2c87ac:
    // 0x2c87ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C87ACu;
    {
        const bool branch_taken_0x2c87ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87ACu;
        // 0x2c87b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87ac) {
            ctx->pc = 0x2C87E0u;
            goto label_2c87e0;
        }
    }
    ctx->pc = 0x2C87B4u;
label_2c87b4:
    // 0x2c87b4: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C87B4u;
    SET_GPR_U32(ctx, 31, 0x2C87BCu);
    ctx->pc = 0x2C87B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C87B4u;
    // 0x2c87b8: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C87B4u, 0x2C87BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87BCu;
label_2c87bc:
    // 0x2c87bc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C87BCu;
    {
        const bool branch_taken_0x2c87bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87BCu;
        // 0x2c87c0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87bc) {
            ctx->pc = 0x2C8810u;
            goto label_2c8810;
        }
    }
    ctx->pc = 0x2C87C4u;
    // 0x2c87c4: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c87c8: 0x8e240a9c  lw          $a0, 0xA9C($s1)
    ctx->pc = 0x2c87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2c87cc: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c87ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2c87d0: 0xae230a9c  sw          $v1, 0xA9C($s1)
    ctx->pc = 0x2c87d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 3));
    // 0x2c87d4: 0xae220a90  sw          $v0, 0xA90($s1)
    ctx->pc = 0x2c87d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
    // 0x2c87d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C87D8u;
    {
        const bool branch_taken_0x2c87d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87D8u;
        // 0x2c87dc: 0xae240aa0  sw          $a0, 0xAA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87d8) {
            ctx->pc = 0x2C880Cu;
            goto label_2c880c;
        }
    }
    ctx->pc = 0x2C87E0u;
label_2c87e0:
    // 0x2c87e0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C87E0u;
    SET_GPR_U32(ctx, 31, 0x2C87E8u);
    ctx->pc = 0x2C87E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C87E0u;
    // 0x2c87e4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C87E0u, 0x2C87E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87E8u;
label_2c87e8:
    // 0x2c87e8: 0xc0b2d92  jal         func_2CB648
    ctx->pc = 0x2C87E8u;
    SET_GPR_U32(ctx, 31, 0x2C87F0u);
    ctx->pc = 0x2C87ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C87E8u;
    // 0x2c87ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB648u, 0x2C87E8u, 0x2C87F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87F0u;
label_2c87f0:
    // 0x2c87f0: 0xc0b19a8  jal         func_2C66A0
    ctx->pc = 0x2C87F0u;
    SET_GPR_U32(ctx, 31, 0x2C87F8u);
    ctx->pc = 0x2C87F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C87F0u;
    // 0x2c87f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C66A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C66A0u, 0x2C87F0u, 0x2C87F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87F8u;
label_2c87f8:
    // 0x2c87f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C87F8u;
    {
        const bool branch_taken_0x2c87f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87F8u;
        // 0x2c87fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87f8) {
            ctx->pc = 0x2C8810u;
            goto label_2c8810;
        }
    }
    ctx->pc = 0x2C8800u;
    // 0x2c8800: 0x8e230a9c  lw          $v1, 0xA9C($s1)
    ctx->pc = 0x2c8800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2c8804: 0xae220a9c  sw          $v0, 0xA9C($s1)
    ctx->pc = 0x2c8804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 2));
    // 0x2c8808: 0xae230aa0  sw          $v1, 0xAA0($s1)
    ctx->pc = 0x2c8808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 3));
label_2c880c:
    // 0x2c880c: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c880cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
label_2c8810:
    // 0x2c8810: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8814:
    // 0x2c8814: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c8814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c8818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c881c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C881Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C881Cu;
        // 0x2c8820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C881Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8824u;
}
