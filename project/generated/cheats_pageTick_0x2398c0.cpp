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

// Function: cheats_pageTick
// Address: 0x2398c0 - 0x239be4
void cheats_pageTick_0x2398c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cheats_pageTick_0x2398c0");
#endif

    switch (ctx->pc) {
        case 0x23990cu: goto label_23990c;
        case 0x23991cu: goto label_23991c;
        case 0x239998u: goto label_239998;
        case 0x2399a0u: goto label_2399a0;
        case 0x2399b0u: goto label_2399b0;
        case 0x2399d0u: goto label_2399d0;
        case 0x239a50u: goto label_239a50;
        case 0x239ba4u: goto label_239ba4;
        case 0x239bb0u: goto label_239bb0;
        default: break;
    }

    ctx->pc = 0x2398c0u;

    // 0x2398c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2398c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2398c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2398c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2398c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2398c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2398cc: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x2398ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x2398d0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2398d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2398d4: 0x260311f8  addiu       $v1, $s0, 0x11F8
    ctx->pc = 0x2398d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
    // 0x2398d8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2398d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2398dc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2398dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2398e0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2398e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2398e4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2398e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2398e8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2398e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2398ec: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2398ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2398f0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2398f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2398f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2398f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x2398f8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2398f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2398fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2398FCu;
    {
        const bool branch_taken_0x2398fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398FCu;
        // 0x239900: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398fc) {
            ctx->pc = 0x239914u;
            goto label_239914;
        }
    }
    ctx->pc = 0x239904u;
    // 0x239904: 0xc08956c  jal         func_2255B0
    ctx->pc = 0x239904u;
    SET_GPR_U32(ctx, 31, 0x23990Cu);
    ctx->pc = 0x2255B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2255B0u, 0x239904u, 0x23990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23990Cu;
label_23990c:
    // 0x23990c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23990Cu;
    {
        const bool branch_taken_0x23990c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23990Cu;
        // 0x239910: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23990c) {
            ctx->pc = 0x239920u;
            goto label_239920;
        }
    }
    ctx->pc = 0x239914u;
label_239914:
    // 0x239914: 0xc089584  jal         func_225610
    ctx->pc = 0x239914u;
    SET_GPR_U32(ctx, 31, 0x23991Cu);
    ctx->pc = 0x225610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225610u, 0x239914u, 0x23991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23991Cu;
label_23991c:
    // 0x23991c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23991cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239920:
    // 0x239920: 0x260311f8  addiu       $v1, $s0, 0x11F8
    ctx->pc = 0x239920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
    // 0x239924: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x239924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x239928: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x239928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x23992c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23992Cu;
    {
        const bool branch_taken_0x23992c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23992Cu;
        // 0x239930: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23992c) {
            ctx->pc = 0x239950u;
            goto label_239950;
        }
    }
    ctx->pc = 0x239934u;
    // 0x239934: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x239934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x239938: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x239938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x23993c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23993cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x239940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x239940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x239944: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x239944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239948: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x239948u;
    {
        const bool branch_taken_0x239948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239948u;
        // 0x23994c: 0x8c8403a4  lw          $a0, 0x3A4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239948) {
            ctx->pc = 0x239968u;
            goto label_239968;
        }
    }
    ctx->pc = 0x239950u;
label_239950:
    // 0x239950: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x239950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x239954: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x239954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x239958: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x239958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23995c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x239960: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x239960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239964: 0x8c8403a8  lw          $a0, 0x3A8($a0)
    ctx->pc = 0x239964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 936)));
label_239968:
    // 0x239968: 0x8f82b73c  lw          $v0, -0x48C4($gp)
    ctx->pc = 0x239968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x23996c: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23996cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x239970: 0x24631308  addiu       $v1, $v1, 0x1308
    ctx->pc = 0x239970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x239974: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x239974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x239978: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x239978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23997c: 0x24a54830  addiu       $a1, $a1, 0x4830
    ctx->pc = 0x23997cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18480));
    // 0x239980: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x239980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x239984: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x239984u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
    // 0x239988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x239988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23998c: 0x26704600  addiu       $s0, $s3, 0x4600
    ctx->pc = 0x23998cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 17920));
    // 0x239990: 0xc08c086  jal         func_230218
    ctx->pc = 0x239990u;
    SET_GPR_U32(ctx, 31, 0x239998u);
    ctx->pc = 0x239994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239990u;
    // 0x239994: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x239990u, 0x239998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239998u;
label_239998:
    // 0x239998: 0xc08a984  jal         func_22A610
    ctx->pc = 0x239998u;
    SET_GPR_U32(ctx, 31, 0x2399A0u);
    ctx->pc = 0x23999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239998u;
    // 0x23999c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x239998u, 0x2399A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399A0u;
label_2399a0:
    // 0x2399a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2399a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2399a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399a8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2399A8u;
    SET_GPR_U32(ctx, 31, 0x2399B0u);
    ctx->pc = 0x2399ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399A8u;
    // 0x2399ac: 0x240601e0  addiu       $a2, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2399A8u, 0x2399B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399B0u;
label_2399b0:
    // 0x2399b0: 0x8f8e9f4c  lw          $t6, -0x60B4($gp)
    ctx->pc = 0x2399b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2399b4: 0x3c170035  lui         $s7, 0x35
    ctx->pc = 0x2399b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
    // 0x2399b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2399b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2399bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2399bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399c0: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x2399c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2399c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399c8: 0x1041004  sllv        $v0, $a0, $t0
    ctx->pc = 0x2399c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
    // 0x2399cc: 0x0  nop
    ctx->pc = 0x2399ccu;
    // NOP
label_2399d0:
    // 0x2399d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2399d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2399d4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x2399d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2399d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2399D8u;
    {
        const bool branch_taken_0x2399d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2399DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399D8u;
        // 0x2399dc: 0x24e203e8  addiu       $v0, $a3, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399d8) {
            ctx->pc = 0x2399ECu;
            goto label_2399ec;
        }
    }
    ctx->pc = 0x2399E0u;
    // 0x2399e0: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x2399e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2399e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2399e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2399e8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2399e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2399ec:
    // 0x2399ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2399ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2399f0: 0x2902000f  slti        $v0, $t0, 0xF
    ctx->pc = 0x2399f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2399f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2399F4u;
    {
        const bool branch_taken_0x2399f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2399F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399F4u;
        // 0x2399f8: 0x1041004  sllv        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399f4) {
            ctx->pc = 0x2399D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2399d0;
        }
    }
    ctx->pc = 0x2399FCu;
    // 0x2399fc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2399fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a00: 0x26704600  addiu       $s0, $s3, 0x4600
    ctx->pc = 0x239a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 17920));
    // 0x239a04: 0x29420010  slti        $v0, $t2, 0x10
    ctx->pc = 0x239a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x239a08: 0x254cffff  addiu       $t4, $t2, -0x1
    ctx->pc = 0x239a08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x239a0c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x239a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x239a10: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x239a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x239a14: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x239a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x239a18: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x239a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x239a1c: 0x24562c18  addiu       $s6, $v0, 0x2C18
    ctx->pc = 0x239a1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x239a20: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x239a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x239a24: 0xc1140  sll         $v0, $t4, 5
    ctx->pc = 0x239a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x239a28: 0x200682d  daddu       $t5, $s0, $zero
    ctx->pc = 0x239a28u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a2c: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x239a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x239a30: 0x246b3868  addiu       $t3, $v1, 0x3868
    ctx->pc = 0x239a30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 14440));
    // 0x239a34: 0x24892d98  addiu       $t1, $a0, 0x2D98
    ctx->pc = 0x239a34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 11672));
    // 0x239a38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x239a38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x239a3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a40: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x239a40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239a44: 0x3c150035  lui         $s5, 0x35
    ctx->pc = 0x239a44u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)53 << 16));
    // 0x239a48: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x239a48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x239a4c: 0x0  nop
    ctx->pc = 0x239a4cu;
    // NOP
label_239a50:
    // 0x239a50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x239a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239a54: 0x10f1004  sllv        $v0, $t7, $t0
    ctx->pc = 0x239a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 8) & 0x1F));
    // 0x239a58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x239a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x239a5c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x239a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x239a60: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x239A60u;
    {
        const bool branch_taken_0x239a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A60u;
        // 0x239a64: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a60) {
            ctx->pc = 0x239B64u;
            goto label_239b64;
        }
    }
    ctx->pc = 0x239A68u;
    // 0x239a68: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x239a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a6c: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x239a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x239a70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x239a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x239a74: 0x8f829f50  lw          $v0, -0x60B0($gp)
    ctx->pc = 0x239a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x239a78: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x239a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x239a7c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x239a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x239a80: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x239a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239a84: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x239a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x239a88: 0x26a345c8  addiu       $v1, $s5, 0x45C8
    ctx->pc = 0x239a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 17864));
    // 0x239a8c: 0x68780007  ldl         $t8, 0x7($v1)
    ctx->pc = 0x239a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x239a90: 0x6c780000  ldr         $t8, 0x0($v1)
    ctx->pc = 0x239a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem >> shift)); }
    // 0x239a94: 0x6879000f  ldl         $t9, 0xF($v1)
    ctx->pc = 0x239a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
    // 0x239a98: 0x6c790008  ldr         $t9, 0x8($v1)
    ctx->pc = 0x239a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x239a9c: 0x687e0017  ldl         $fp, 0x17($v1)
    ctx->pc = 0x239a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 30, (GPR_U64(ctx, 30) & keepMask) | (mem << shift)); }
    // 0x239aa0: 0x6c7e0010  ldr         $fp, 0x10($v1)
    ctx->pc = 0x239aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 30, (GPR_U64(ctx, 30) & keepMask) | (mem >> shift)); }
    // 0x239aa4: 0xb1380007  sdl         $t8, 0x7($t1)
    ctx->pc = 0x239aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239aa8: 0xb5380000  sdr         $t8, 0x0($t1)
    ctx->pc = 0x239aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239aac: 0xb139000f  sdl         $t9, 0xF($t1)
    ctx->pc = 0x239aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239ab0: 0xb5390008  sdr         $t9, 0x8($t1)
    ctx->pc = 0x239ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239ab4: 0xb13e0017  sdl         $fp, 0x17($t1)
    ctx->pc = 0x239ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 30); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239ab8: 0xb53e0010  sdr         $fp, 0x10($t1)
    ctx->pc = 0x239ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 30); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239abc: 0x6878001f  ldl         $t8, 0x1F($v1)
    ctx->pc = 0x239abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x239ac0: 0x6c780018  ldr         $t8, 0x18($v1)
    ctx->pc = 0x239ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem >> shift)); }
    // 0x239ac4: 0x68790027  ldl         $t9, 0x27($v1)
    ctx->pc = 0x239ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
    // 0x239ac8: 0x6c790020  ldr         $t9, 0x20($v1)
    ctx->pc = 0x239ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x239acc: 0xb138001f  sdl         $t8, 0x1F($t1)
    ctx->pc = 0x239accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239ad0: 0xb5380018  sdr         $t8, 0x18($t1)
    ctx->pc = 0x239ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239ad4: 0xb1390027  sdl         $t9, 0x27($t1)
    ctx->pc = 0x239ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239ad8: 0xb5390020  sdr         $t9, 0x20($t1)
    ctx->pc = 0x239ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239adc: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x239adcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x239ae0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x239ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x239ae4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x239ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x239ae8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x239ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239aec: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x239aecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x239af0: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x239af0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x239af4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x239af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x239af8: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x239af8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x239afc: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x239afcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x239b00: 0xa614000a  sh          $s4, 0xA($s0)
    ctx->pc = 0x239b00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 20));
    // 0x239b04: 0x18e00008  blez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x239B04u;
    {
        const bool branch_taken_0x239b04 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x239B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B04u;
        // 0x239b08: 0xae09000c  sw          $t1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b04) {
            ctx->pc = 0x239B28u;
            goto label_239b28;
        }
    }
    ctx->pc = 0x239B0Cu;
    // 0x239b0c: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x239b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x239b10: 0x2544ffff  addiu       $a0, $t2, -0x1
    ctx->pc = 0x239b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x239b14: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x239b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x239b18: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x239b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x239b1c: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x239b1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x239b20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239B20u;
    {
        const bool branch_taken_0x239b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B20u;
        // 0x239b24: 0xa6030010  sh          $v1, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b20) {
            ctx->pc = 0x239B34u;
            goto label_239b34;
        }
    }
    ctx->pc = 0x239B28u;
label_239b28:
    // 0x239b28: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x239b28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x239b2c: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x239b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b30: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x239b30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_239b34:
    // 0x239b34: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x239b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x239b38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x239B38u;
    {
        const bool branch_taken_0x239b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B38u;
        // 0x239b3c: 0x24e40001  addiu       $a0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b38) {
            ctx->pc = 0x239B54u;
            goto label_239b54;
        }
    }
    ctx->pc = 0x239B40u;
    // 0x239b40: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x239b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x239b44: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x239b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x239b48: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x239b48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x239b4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x239B4Cu;
    {
        const bool branch_taken_0x239b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B4Cu;
        // 0x239b50: 0xa6030012  sh          $v1, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b4c) {
            ctx->pc = 0x239B5Cu;
            goto label_239b5c;
        }
    }
    ctx->pc = 0x239B54u;
label_239b54:
    // 0x239b54: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x239b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x239b58: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x239b58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_239b5c:
    // 0x239b5c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x239b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b60: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x239b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_239b64:
    // 0x239b64: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x239b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x239b68: 0x256b000c  addiu       $t3, $t3, 0xC
    ctx->pc = 0x239b68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x239b6c: 0x2902000f  slti        $v0, $t0, 0xF
    ctx->pc = 0x239b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x239b70: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x239B70u;
    {
        const bool branch_taken_0x239b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B70u;
        // 0x239b74: 0x25290028  addiu       $t1, $t1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b70) {
            ctx->pc = 0x239A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239a50;
        }
    }
    ctx->pc = 0x239B78u;
    // 0x239b78: 0x8fb80004  lw          $t8, 0x4($sp)
    ctx->pc = 0x239b78u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x239b7c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x239b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x239b80: 0x26e345f0  addiu       $v1, $s7, 0x45F0
    ctx->pc = 0x239b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 17904));
    // 0x239b84: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x239b84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x239b88: 0x158100b  movn        $v0, $t2, $t8
    ctx->pc = 0x239b88u;
    if (GPR_U64(ctx, 24) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x239b8c: 0x261047e0  addiu       $s0, $s0, 0x47E0
    ctx->pc = 0x239b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18400));
    // 0x239b90: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x239b90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x239b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x239b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b98: 0xa6ea45f0  sh          $t2, 0x45F0($s7)
    ctx->pc = 0x239b98u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 17904), (uint16_t)GPR_U32(ctx, 10));
    // 0x239b9c: 0xc08c08e  jal         func_230238
    ctx->pc = 0x239B9Cu;
    SET_GPR_U32(ctx, 31, 0x239BA4u);
    ctx->pc = 0x239BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B9Cu;
    // 0x239ba0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x239B9Cu, 0x239BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BA4u;
label_239ba4:
    // 0x239ba4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x239ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x239ba8: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x239BA8u;
    SET_GPR_U32(ctx, 31, 0x239BB0u);
    ctx->pc = 0x239BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BA8u;
    // 0x239bac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x239BA8u, 0x239BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BB0u;
label_239bb0:
    // 0x239bb0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x239bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x239bb4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x239bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x239bb8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x239bb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x239bbc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x239bbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x239bc0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x239bc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x239bc4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x239bc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x239bc8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x239bc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x239bcc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x239bccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239bd0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x239bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239bd4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x239bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239bd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x239bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x239BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BDCu;
        // 0x239be0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239BE4u;
}
