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

// Function: propTickBefore
// Address: 0x26f500 - 0x26f9e8
void propTickBefore_0x26f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propTickBefore_0x26f500");
#endif

    switch (ctx->pc) {
        case 0x26f538u: goto label_26f538;
        case 0x26f58cu: goto label_26f58c;
        case 0x26f59cu: goto label_26f59c;
        case 0x26f5acu: goto label_26f5ac;
        case 0x26f5bcu: goto label_26f5bc;
        case 0x26f5ccu: goto label_26f5cc;
        case 0x26f62cu: goto label_26f62c;
        case 0x26f63cu: goto label_26f63c;
        case 0x26f658u: goto label_26f658;
        case 0x26f680u: goto label_26f680;
        case 0x26f6d8u: goto label_26f6d8;
        case 0x26f6e8u: goto label_26f6e8;
        case 0x26f770u: goto label_26f770;
        case 0x26f79cu: goto label_26f79c;
        case 0x26f84cu: goto label_26f84c;
        case 0x26f85cu: goto label_26f85c;
        case 0x26f86cu: goto label_26f86c;
        case 0x26f87cu: goto label_26f87c;
        case 0x26f88cu: goto label_26f88c;
        case 0x26f89cu: goto label_26f89c;
        case 0x26f8acu: goto label_26f8ac;
        case 0x26f8bcu: goto label_26f8bc;
        case 0x26f920u: goto label_26f920;
        case 0x26f92cu: goto label_26f92c;
        case 0x26f964u: goto label_26f964;
        case 0x26f9a4u: goto label_26f9a4;
        default: break;
    }

    ctx->pc = 0x26f500u;

    // 0x26f500: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26f500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26f504: 0x8f85b15c  lw          $a1, -0x4EA4($gp)
    ctx->pc = 0x26f504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x26f508: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x26f508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x26f50c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x26f50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x26f510: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26f510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f514: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x26f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x26f518: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x26f518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x26f51c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x26f51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x26f520: 0x18a00052  blez        $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x26F520u;
    {
        const bool branch_taken_0x26f520 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x26F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F520u;
        // 0x26f524: 0xffb00050  sd          $s0, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f520) {
            ctx->pc = 0x26F66Cu;
            goto label_26f66c;
        }
    }
    ctx->pc = 0x26F528u;
    // 0x26f528: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x26f528u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x26f52c: 0x3673fff0  ori         $s3, $s3, 0xFFF0
    ctx->pc = 0x26f52cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65520);
    // 0x26f530: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x26f534: 0x0  nop
    ctx->pc = 0x26f534u;
    // NOP
label_26f538:
    // 0x26f538: 0x8f84b07c  lw          $a0, -0x4F84($gp)
    ctx->pc = 0x26f538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x26f53c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x26f53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26f540: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x26f540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26f544: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x26f544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26f548: 0x4620045  bltzl       $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x26F548u;
    {
        const bool branch_taken_0x26f548 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x26f548) {
            ctx->pc = 0x26F54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F548u;
            // 0x26f54c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F660u;
            goto label_26f660;
        }
    }
    ctx->pc = 0x26F550u;
    // 0x26f550: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x26f550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26f554: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x26f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26f558: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x26f558u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26f55c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F55Cu;
    {
        const bool branch_taken_0x26f55c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F55Cu;
        // 0x26f560: 0x108180  sll         $s0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f55c) {
            ctx->pc = 0x26F57Cu;
            goto label_26f57c;
        }
    }
    ctx->pc = 0x26F564u;
    // 0x26f564: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x26f564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x26f568: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x26f568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x26f56c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x26f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x26f570: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x26f570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x26f574: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26F574u;
    {
        const bool branch_taken_0x26f574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F574u;
        // 0x26f578: 0xaca00014  sw          $zero, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f574) {
            ctx->pc = 0x26F5E8u;
            goto label_26f5e8;
        }
    }
    ctx->pc = 0x26F57Cu;
label_26f57c:
    // 0x26f57c: 0x2610000f  addiu       $s0, $s0, 0xF
    ctx->pc = 0x26f57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x26f580: 0x2138024  and         $s0, $s0, $s3
    ctx->pc = 0x26f580u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 19));
    // 0x26f584: 0xc0807de  jal         func_201F78
    ctx->pc = 0x26F584u;
    SET_GPR_U32(ctx, 31, 0x26F58Cu);
    ctx->pc = 0x26F588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F584u;
    // 0x26f588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x26F584u, 0x26F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F58Cu;
label_26f58c:
    // 0x26f58c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x26f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26f590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f594: 0xc0807de  jal         func_201F78
    ctx->pc = 0x26F594u;
    SET_GPR_U32(ctx, 31, 0x26F59Cu);
    ctx->pc = 0x26F598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F594u;
    // 0x26f598: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x26F594u, 0x26F59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F59Cu;
label_26f59c:
    // 0x26f59c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x26f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26f5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f5a4: 0xc0807de  jal         func_201F78
    ctx->pc = 0x26F5A4u;
    SET_GPR_U32(ctx, 31, 0x26F5ACu);
    ctx->pc = 0x26F5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5A4u;
    // 0x26f5a8: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x26F5A4u, 0x26F5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5ACu;
label_26f5ac:
    // 0x26f5ac: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x26f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26f5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f5b4: 0xc0807de  jal         func_201F78
    ctx->pc = 0x26F5B4u;
    SET_GPR_U32(ctx, 31, 0x26F5BCu);
    ctx->pc = 0x26F5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5B4u;
    // 0x26f5b8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x26F5B4u, 0x26F5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5BCu;
label_26f5bc:
    // 0x26f5bc: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x26f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26f5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f5c4: 0xc0807de  jal         func_201F78
    ctx->pc = 0x26F5C4u;
    SET_GPR_U32(ctx, 31, 0x26F5CCu);
    ctx->pc = 0x26F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5C4u;
    // 0x26f5c8: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x26F5C4u, 0x26F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5CCu;
label_26f5cc:
    // 0x26f5cc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x26f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26f5d0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26f5d4: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x26f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26f5d8: 0x3463feff  ori         $v1, $v1, 0xFEFF
    ctx->pc = 0x26f5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65279);
    // 0x26f5dc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x26f5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26f5e0: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x26f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x26f5e4: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x26f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
label_26f5e8:
    // 0x26f5e8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x26f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26f5ec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x26f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26f5f0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x26F5F0u;
    {
        const bool branch_taken_0x26f5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f5f0) {
            ctx->pc = 0x26F5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F5F0u;
            // 0x26f5f4: 0x8ca200f8  lw          $v0, 0xF8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F648u;
            goto label_26f648;
        }
    }
    ctx->pc = 0x26F5F8u;
    // 0x26f5f8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x26f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26f5fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F5FCu;
    {
        const bool branch_taken_0x26f5fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5FCu;
        // 0x26f600: 0x3c030f00  lui         $v1, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5fc) {
            ctx->pc = 0x26F614u;
            goto label_26f614;
        }
    }
    ctx->pc = 0x26F604u;
    // 0x26f604: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x26f604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26f608: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26f608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26f60c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F60Cu;
    {
        const bool branch_taken_0x26f60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F60Cu;
        // 0x26f610: 0x42180  sll         $a0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f60c) {
            ctx->pc = 0x26F61Cu;
            goto label_26f61c;
        }
    }
    ctx->pc = 0x26F614u;
label_26f614:
    // 0x26f614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F614u;
    {
        const bool branch_taken_0x26f614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F614u;
        // 0x26f618: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f614) {
            ctx->pc = 0x26F624u;
            goto label_26f624;
        }
    }
    ctx->pc = 0x26F61Cu;
label_26f61c:
    // 0x26f61c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x26f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x26f620: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x26f620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
label_26f624:
    // 0x26f624: 0xc0807de  jal         func_201F78
    ctx->pc = 0x26F624u;
    SET_GPR_U32(ctx, 31, 0x26F62Cu);
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x26F624u, 0x26F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F62Cu;
label_26f62c:
    // 0x26f62c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x26f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26f630: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x26f630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26f634: 0xc0807de  jal         func_201F78
    ctx->pc = 0x26F634u;
    SET_GPR_U32(ctx, 31, 0x26F63Cu);
    ctx->pc = 0x26F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F634u;
    // 0x26f638: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x26F634u, 0x26F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F63Cu;
label_26f63c:
    // 0x26f63c: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x26f63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26f640: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x26f640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x26f644: 0x8ca200f8  lw          $v0, 0xF8($a1)
    ctx->pc = 0x26f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
label_26f648:
    // 0x26f648: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F648u;
    {
        const bool branch_taken_0x26f648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F648u;
        // 0x26f64c: 0x8f85b15c  lw          $a1, -0x4EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f648) {
            ctx->pc = 0x26F65Cu;
            goto label_26f65c;
        }
    }
    ctx->pc = 0x26F650u;
    // 0x26f650: 0xc09d100  jal         func_274400
    ctx->pc = 0x26F650u;
    SET_GPR_U32(ctx, 31, 0x26F658u);
    ctx->pc = 0x26F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F650u;
    // 0x26f654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274400u, 0x26F650u, 0x26F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F658u;
label_26f658:
    // 0x26f658: 0x8f85b15c  lw          $a1, -0x4EA4($gp)
    ctx->pc = 0x26f658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_26f65c:
    // 0x26f65c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26f65cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_26f660:
    // 0x26f660: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x26f660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26f664: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x26F664u;
    {
        const bool branch_taken_0x26f664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F664u;
        // 0x26f668: 0x24020250  addiu       $v0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f664) {
            ctx->pc = 0x26F538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f538;
        }
    }
    ctx->pc = 0x26F66Cu;
label_26f66c:
    // 0x26f66c: 0x18a000d6  blez        $a1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x26F66Cu;
    {
        const bool branch_taken_0x26f66c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x26F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F66Cu;
        // 0x26f670: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f66c) {
            ctx->pc = 0x26F9C8u;
            goto label_26f9c8;
        }
    }
    ctx->pc = 0x26F674u;
    // 0x26f674: 0x3c1401fd  lui         $s4, 0x1FD
    ctx->pc = 0x26f674u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)509 << 16));
    // 0x26f678: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x26f678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26f67c: 0x0  nop
    ctx->pc = 0x26f67cu;
    // NOP
label_26f680:
    // 0x26f680: 0x24030250  addiu       $v1, $zero, 0x250
    ctx->pc = 0x26f680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x26f684: 0x8f84b07c  lw          $a0, -0x4F84($gp)
    ctx->pc = 0x26f684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x26f688: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x26f688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26f68c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26f690: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x26f690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x26f694: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x26f694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f698: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x26f698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26f69c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x26f69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26f6a0: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x26F6A0u;
    {
        const bool branch_taken_0x26f6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6A0u;
        // 0x26f6a4: 0x8e110020  lw          $s1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6a0) {
            ctx->pc = 0x26F938u;
            goto label_26f938;
        }
    }
    ctx->pc = 0x26F6A8u;
    // 0x26f6a8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x26f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x26f6ac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26F6ACu;
    {
        const bool branch_taken_0x26f6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6ACu;
        // 0x26f6b0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6ac) {
            ctx->pc = 0x26F6ECu;
            goto label_26f6ec;
        }
    }
    ctx->pc = 0x26F6B4u;
    // 0x26f6b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f6b8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F6B8u;
    {
        const bool branch_taken_0x26f6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6B8u;
        // 0x26f6bc: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6b8) {
            ctx->pc = 0x26F6D0u;
            goto label_26f6d0;
        }
    }
    ctx->pc = 0x26F6C0u;
    // 0x26f6c0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F6C0u;
    {
        const bool branch_taken_0x26f6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f6c0) {
            ctx->pc = 0x26F6E0u;
            goto label_26f6e0;
        }
    }
    ctx->pc = 0x26F6C8u;
    // 0x26f6c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26F6C8u;
    {
        const bool branch_taken_0x26f6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f6c8) {
            ctx->pc = 0x26F6ECu;
            goto label_26f6ec;
        }
    }
    ctx->pc = 0x26F6D0u;
label_26f6d0:
    // 0x26f6d0: 0xc09bb3c  jal         func_26ECF0
    ctx->pc = 0x26F6D0u;
    SET_GPR_U32(ctx, 31, 0x26F6D8u);
    ctx->pc = 0x26F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6D0u;
    // 0x26f6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ECF0u, 0x26F6D0u, 0x26F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6D8u;
label_26f6d8:
    // 0x26f6d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26F6D8u;
    {
        const bool branch_taken_0x26f6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6D8u;
        // 0x26f6dc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6d8) {
            ctx->pc = 0x26F6ECu;
            goto label_26f6ec;
        }
    }
    ctx->pc = 0x26F6E0u;
label_26f6e0:
    // 0x26f6e0: 0xc09adc4  jal         func_26B710
    ctx->pc = 0x26F6E0u;
    SET_GPR_U32(ctx, 31, 0x26F6E8u);
    ctx->pc = 0x26F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6E0u;
    // 0x26f6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B710u, 0x26F6E0u, 0x26F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6E8u;
label_26f6e8:
    // 0x26f6e8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x26f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_26f6ec:
    // 0x26f6ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26f6f0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x26f6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x26f6f4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x26f6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26f6f8: 0x54400090  bnel        $v0, $zero, . + 4 + (0x90 << 2)
    ctx->pc = 0x26F6F8u;
    {
        const bool branch_taken_0x26f6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f6f8) {
            ctx->pc = 0x26F6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F6F8u;
            // 0x26f6fc: 0xc601004c  lwc1        $f1, 0x4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F93Cu;
            goto label_26f93c;
        }
    }
    ctx->pc = 0x26F700u;
    // 0x26f700: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x26f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x26f704: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x26F704u;
    {
        const bool branch_taken_0x26f704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F704u;
        // 0x26f708: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f704) {
            ctx->pc = 0x26F774u;
            goto label_26f774;
        }
    }
    ctx->pc = 0x26F70Cu;
    // 0x26f70c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f710: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26F710u;
    {
        const bool branch_taken_0x26f710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F710u;
        // 0x26f714: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f710) {
            ctx->pc = 0x26F774u;
            goto label_26f774;
        }
    }
    ctx->pc = 0x26F718u;
    // 0x26f718: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26F718u;
    {
        const bool branch_taken_0x26f718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f718) {
            ctx->pc = 0x26F774u;
            goto label_26f774;
        }
    }
    ctx->pc = 0x26F720u;
    // 0x26f720: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x26f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x26f724: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x26f724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26f728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f72c: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x26F72Cu;
    {
        const bool branch_taken_0x26f72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x26F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F72Cu;
        // 0x26f730: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f72c) {
            ctx->pc = 0x26F760u;
            goto label_26f760;
        }
    }
    ctx->pc = 0x26F734u;
    // 0x26f734: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x26f734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x26f738: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F738u;
    {
        const bool branch_taken_0x26f738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F738u;
        // 0x26f73c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f738) {
            ctx->pc = 0x26F760u;
            goto label_26f760;
        }
    }
    ctx->pc = 0x26F740u;
    // 0x26f740: 0x8f829da8  lw          $v0, -0x6258($gp)
    ctx->pc = 0x26f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x26f744: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x26f744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x26f748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F748u;
    {
        const bool branch_taken_0x26f748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F748u;
        // 0x26f74c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f748) {
            ctx->pc = 0x26F760u;
            goto label_26f760;
        }
    }
    ctx->pc = 0x26F750u;
    // 0x26f750: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x26f750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x26f754: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x26f754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x26f758: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26f758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f75c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x26f75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_26f760:
    // 0x26f760: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F760u;
    {
        const bool branch_taken_0x26f760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f760) {
            ctx->pc = 0x26F774u;
            goto label_26f774;
        }
    }
    ctx->pc = 0x26F768u;
    // 0x26f768: 0xc09a8cc  jal         func_26A330
    ctx->pc = 0x26F768u;
    SET_GPR_U32(ctx, 31, 0x26F770u);
    ctx->pc = 0x26F76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F768u;
    // 0x26f76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A330u, 0x26F768u, 0x26F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F770u;
label_26f770:
    // 0x26f770: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x26f770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_26f774:
    // 0x26f774: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26f774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26f778: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x26f778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x26f77c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x26f77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26f780: 0x5440006e  bnel        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x26F780u;
    {
        const bool branch_taken_0x26f780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f780) {
            ctx->pc = 0x26F784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F780u;
            // 0x26f784: 0xc601004c  lwc1        $f1, 0x4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F93Cu;
            goto label_26f93c;
        }
    }
    ctx->pc = 0x26F788u;
    // 0x26f788: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x26f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x26f78c: 0x5440006b  bnel        $v0, $zero, . + 4 + (0x6B << 2)
    ctx->pc = 0x26F78Cu;
    {
        const bool branch_taken_0x26f78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f78c) {
            ctx->pc = 0x26F790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F78Cu;
            // 0x26f790: 0xc601004c  lwc1        $f1, 0x4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F93Cu;
            goto label_26f93c;
        }
    }
    ctx->pc = 0x26F794u;
    // 0x26f794: 0xc084b3e  jal         func_212CF8
    ctx->pc = 0x26F794u;
    SET_GPR_U32(ctx, 31, 0x26F79Cu);
    ctx->pc = 0x26F798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F794u;
    // 0x26f798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212CF8u, 0x26F794u, 0x26F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F79Cu;
label_26f79c:
    // 0x26f79c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f7a0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x26f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26f7a4: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x26F7A4u;
    {
        const bool branch_taken_0x26f7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7A4u;
        // 0x26f7a8: 0x28620041  slti        $v0, $v1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7a4) {
            ctx->pc = 0x26F8BCu;
            goto label_26f8bc;
        }
    }
    ctx->pc = 0x26F7ACu;
    // 0x26f7ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26F7ACu;
    {
        const bool branch_taken_0x26f7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7ACu;
        // 0x26f7b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7ac) {
            ctx->pc = 0x26F7E8u;
            goto label_26f7e8;
        }
    }
    ctx->pc = 0x26F7B4u;
    // 0x26f7b4: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26F7B4u;
    {
        const bool branch_taken_0x26f7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7B4u;
        // 0x26f7b8: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7b4) {
            ctx->pc = 0x26F874u;
            goto label_26f874;
        }
    }
    ctx->pc = 0x26F7BCu;
    // 0x26f7bc: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x26F7BCu;
    {
        const bool branch_taken_0x26f7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f7bc) {
            ctx->pc = 0x26F7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F7BCu;
            // 0x26f7c0: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F7C4u;
    // 0x26f7c4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x26f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26f7c8: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x26F7C8u;
    {
        const bool branch_taken_0x26f7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7C8u;
        // 0x26f7cc: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7c8) {
            ctx->pc = 0x26F894u;
            goto label_26f894;
        }
    }
    ctx->pc = 0x26F7D0u;
    // 0x26f7d0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x26F7D0u;
    {
        const bool branch_taken_0x26f7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7D0u;
        // 0x26f7d4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7d0) {
            ctx->pc = 0x26F8BCu;
            goto label_26f8bc;
        }
    }
    ctx->pc = 0x26F7D8u;
    // 0x26f7d8: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x26F7D8u;
    {
        const bool branch_taken_0x26f7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f7d8) {
            ctx->pc = 0x26F884u;
            goto label_26f884;
        }
    }
    ctx->pc = 0x26F7E0u;
    // 0x26f7e0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x26F7E0u;
    {
        const bool branch_taken_0x26f7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7E0u;
        // 0x26f7e4: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7e0) {
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F7E8u;
label_26f7e8:
    // 0x26f7e8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x26f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x26f7ec: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x26F7ECu;
    {
        const bool branch_taken_0x26f7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7ECu;
        // 0x26f7f0: 0x28620201  slti        $v0, $v1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7ec) {
            ctx->pc = 0x26F8A4u;
            goto label_26f8a4;
        }
    }
    ctx->pc = 0x26F7F4u;
    // 0x26f7f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F7F4u;
    {
        const bool branch_taken_0x26f7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7F4u;
        // 0x26f7f8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7f4) {
            ctx->pc = 0x26F814u;
            goto label_26f814;
        }
    }
    ctx->pc = 0x26F7FCu;
    // 0x26f7fc: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26F7FCu;
    {
        const bool branch_taken_0x26f7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7FCu;
        // 0x26f800: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7fc) {
            ctx->pc = 0x26F864u;
            goto label_26f864;
        }
    }
    ctx->pc = 0x26F804u;
    // 0x26f804: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26F804u;
    {
        const bool branch_taken_0x26f804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f804) {
            ctx->pc = 0x26F854u;
            goto label_26f854;
        }
    }
    ctx->pc = 0x26F80Cu;
    // 0x26f80c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x26F80Cu;
    {
        const bool branch_taken_0x26f80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F80Cu;
        // 0x26f810: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f80c) {
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F814u;
label_26f814:
    // 0x26f814: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x26f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x26f818: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26F818u;
    {
        const bool branch_taken_0x26f818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F818u;
        // 0x26f81c: 0x28620801  slti        $v0, $v1, 0x801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f818) {
            ctx->pc = 0x26F8BCu;
            goto label_26f8bc;
        }
    }
    ctx->pc = 0x26F820u;
    // 0x26f820: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F820u;
    {
        const bool branch_taken_0x26f820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F820u;
        // 0x26f824: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f820) {
            ctx->pc = 0x26F838u;
            goto label_26f838;
        }
    }
    ctx->pc = 0x26F828u;
    // 0x26f828: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26F828u;
    {
        const bool branch_taken_0x26f828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f828) {
            ctx->pc = 0x26F8B4u;
            goto label_26f8b4;
        }
    }
    ctx->pc = 0x26F830u;
    // 0x26f830: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26F830u;
    {
        const bool branch_taken_0x26f830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F830u;
        // 0x26f834: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f830) {
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F838u;
label_26f838:
    // 0x26f838: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x26f838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x26f83c: 0x54620020  bnel        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x26F83Cu;
    {
        const bool branch_taken_0x26f83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f83c) {
            ctx->pc = 0x26F840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F83Cu;
            // 0x26f840: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F844u;
    // 0x26f844: 0xc09bb2e  jal         func_26ECB8
    ctx->pc = 0x26F844u;
    SET_GPR_U32(ctx, 31, 0x26F84Cu);
    ctx->pc = 0x26F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F844u;
    // 0x26f848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ECB8u, 0x26F844u, 0x26F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F84Cu;
label_26f84c:
    // 0x26f84c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26F84Cu;
    {
        const bool branch_taken_0x26f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F84Cu;
        // 0x26f850: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f84c) {
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F854u;
label_26f854:
    // 0x26f854: 0xc09d99e  jal         func_276678
    ctx->pc = 0x26F854u;
    SET_GPR_U32(ctx, 31, 0x26F85Cu);
    ctx->pc = 0x26F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F854u;
    // 0x26f858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276678u, 0x26F854u, 0x26F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F85Cu;
label_26f85c:
    // 0x26f85c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26F85Cu;
    {
        const bool branch_taken_0x26f85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F85Cu;
        // 0x26f860: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f85c) {
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F864u;
label_26f864:
    // 0x26f864: 0xc09eff2  jal         func_27BFC8
    ctx->pc = 0x26F864u;
    SET_GPR_U32(ctx, 31, 0x26F86Cu);
    ctx->pc = 0x26F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F864u;
    // 0x26f868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BFC8u, 0x26F864u, 0x26F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F86Cu;
label_26f86c:
    // 0x26f86c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26F86Cu;
    {
        const bool branch_taken_0x26f86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F86Cu;
        // 0x26f870: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f86c) {
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F874u;
label_26f874:
    // 0x26f874: 0xc09af9e  jal         func_26BE78
    ctx->pc = 0x26F874u;
    SET_GPR_U32(ctx, 31, 0x26F87Cu);
    ctx->pc = 0x26F878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F874u;
    // 0x26f878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BE78u, 0x26F874u, 0x26F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F87Cu;
label_26f87c:
    // 0x26f87c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26F87Cu;
    {
        const bool branch_taken_0x26f87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F87Cu;
        // 0x26f880: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f87c) {
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F884u;
label_26f884:
    // 0x26f884: 0xc09b770  jal         func_26DDC0
    ctx->pc = 0x26F884u;
    SET_GPR_U32(ctx, 31, 0x26F88Cu);
    ctx->pc = 0x26F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F884u;
    // 0x26f888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DDC0u, 0x26F884u, 0x26F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F88Cu;
label_26f88c:
    // 0x26f88c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26F88Cu;
    {
        const bool branch_taken_0x26f88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F88Cu;
        // 0x26f890: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f88c) {
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F894u;
label_26f894:
    // 0x26f894: 0xc09bb3a  jal         func_26ECE8
    ctx->pc = 0x26F894u;
    SET_GPR_U32(ctx, 31, 0x26F89Cu);
    ctx->pc = 0x26F898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F894u;
    // 0x26f898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ECE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ECE8u, 0x26F894u, 0x26F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F89Cu;
label_26f89c:
    // 0x26f89c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26F89Cu;
    {
        const bool branch_taken_0x26f89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F89Cu;
        // 0x26f8a0: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f89c) {
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F8A4u;
label_26f8a4:
    // 0x26f8a4: 0xc09b110  jal         func_26C440
    ctx->pc = 0x26F8A4u;
    SET_GPR_U32(ctx, 31, 0x26F8ACu);
    ctx->pc = 0x26F8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F8A4u;
    // 0x26f8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C440u, 0x26F8A4u, 0x26F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8ACu;
label_26f8ac:
    // 0x26f8ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26F8ACu;
    {
        const bool branch_taken_0x26f8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8ACu;
        // 0x26f8b0: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8ac) {
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F8B4u;
label_26f8b4:
    // 0x26f8b4: 0xc09e2ec  jal         func_278BB0
    ctx->pc = 0x26F8B4u;
    SET_GPR_U32(ctx, 31, 0x26F8BCu);
    ctx->pc = 0x26F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F8B4u;
    // 0x26f8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278BB0u, 0x26F8B4u, 0x26F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8BCu;
label_26f8bc:
    // 0x26f8bc: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x26f8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f8c0:
    // 0x26f8c0: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x26f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f8c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26f8c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f8c8: 0x0  nop
    ctx->pc = 0x26f8c8u;
    // NOP
    // 0x26f8cc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x26F8CCu;
    {
        const bool branch_taken_0x26f8cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8CCu;
        // 0x26f8d0: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8cc) {
            ctx->pc = 0x26F914u;
            goto label_26f914;
        }
    }
    ctx->pc = 0x26F8D4u;
    // 0x26f8d4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x26f8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f8d8: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x26f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f8dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26f8dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f8e0: 0x0  nop
    ctx->pc = 0x26f8e0u;
    // NOP
    // 0x26f8e4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x26F8E4u;
    {
        const bool branch_taken_0x26f8e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8E4u;
        // 0x26f8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8e4) {
            ctx->pc = 0x26F918u;
            goto label_26f918;
        }
    }
    ctx->pc = 0x26F8ECu;
    // 0x26f8ec: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x26f8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f8f0: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x26f8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f8f4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26f8f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f8f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x26F8F8u;
    {
        const bool branch_taken_0x26f8f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f8f8) {
            ctx->pc = 0x26F918u;
            goto label_26f918;
        }
    }
    ctx->pc = 0x26F900u;
    // 0x26f900: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x26f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f904: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x26f904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f908: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26f908u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f90c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x26F90Cu;
    {
        const bool branch_taken_0x26f90c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f90c) {
            ctx->pc = 0x26F93Cu;
            goto label_26f93c;
        }
    }
    ctx->pc = 0x26F914u;
label_26f914:
    // 0x26f914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f918:
    // 0x26f918: 0xc099cce  jal         func_267338
    ctx->pc = 0x26F918u;
    SET_GPR_U32(ctx, 31, 0x26F920u);
    ctx->pc = 0x26F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F918u;
    // 0x26f91c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267338u, 0x26F918u, 0x26F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F920u;
label_26f920:
    // 0x26f920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f924: 0xc099d6e  jal         func_2675B8
    ctx->pc = 0x26F924u;
    SET_GPR_U32(ctx, 31, 0x26F92Cu);
    ctx->pc = 0x26F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F924u;
    // 0x26f928: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2675B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2675B8u, 0x26F924u, 0x26F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F92Cu;
label_26f92c:
    // 0x26f92c: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x26f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F930u;
    {
        const bool branch_taken_0x26f930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F930u;
        // 0x26f934: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f930) {
            ctx->pc = 0x26F93Cu;
            goto label_26f93c;
        }
    }
    ctx->pc = 0x26F938u;
label_26f938:
    // 0x26f938: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x26f938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f93c:
    // 0x26f93c: 0xc78c84dc  lwc1        $f12, -0x7B24($gp)
    ctx->pc = 0x26f93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26f940: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26f940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f944: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26f944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26f948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f94c: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x26f94cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x26f950: 0x0  nop
    ctx->pc = 0x26f950u;
    // NOP
    // 0x26f954: 0x0  nop
    ctx->pc = 0x26f954u;
    // NOP
    // 0x26f958: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x26f958u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x26f95c: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x26F95Cu;
    SET_GPR_U32(ctx, 31, 0x26F964u);
    ctx->pc = 0x26F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F95Cu;
    // 0x26f960: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x26F95Cu, 0x26F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F964u;
label_26f964:
    // 0x26f964: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26f968: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x26f968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26f96c: 0x26830df0  addiu       $v1, $s4, 0xDF0
    ctx->pc = 0x26f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3568));
    // 0x26f970: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26f970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f974: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x26f974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26f978: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26f978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f97c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x26f97cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f980: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x26f980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f984: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x26f984u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f988: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x26f988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f98c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x26f98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f990: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x26f990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f994: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26f994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26f998: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26f998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26f99c: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x26F99Cu;
    SET_GPR_U32(ctx, 31, 0x26F9A4u);
    ctx->pc = 0x26F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F99Cu;
    // 0x26f9a0: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x26F99Cu, 0x26F9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F9A4u;
label_26f9a4:
    // 0x26f9a4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x26f9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f9a8: 0x8f82b15c  lw          $v0, -0x4EA4($gp)
    ctx->pc = 0x26f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x26f9ac: 0xe60001fc  swc1        $f0, 0x1FC($s0)
    ctx->pc = 0x26f9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
    // 0x26f9b0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x26f9b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f9b4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26f9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f9b8: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x26f9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x26f9bc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x26f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f9c0: 0x1440ff2f  bnez        $v0, . + 4 + (-0xD1 << 2)
    ctx->pc = 0x26F9C0u;
    {
        const bool branch_taken_0x26f9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9C0u;
        // 0x26f9c4: 0xe6010204  swc1        $f1, 0x204($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 516), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9c0) {
            ctx->pc = 0x26F680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f680;
        }
    }
    ctx->pc = 0x26F9C8u;
label_26f9c8:
    // 0x26f9c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x26f9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26f9cc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x26f9ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26f9d0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x26f9d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26f9d4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x26f9d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26f9d8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x26f9d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f9dc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x26f9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x26F9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9E0u;
        // 0x26f9e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F9E8u;
}
