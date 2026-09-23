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

// Function: signon_pageTick
// Address: 0x23f438 - 0x23fd68
void signon_pageTick_0x23f438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signon_pageTick_0x23f438");
#endif

    switch (ctx->pc) {
        case 0x23f4b0u: goto label_23f4b0;
        case 0x23f4b8u: goto label_23f4b8;
        case 0x23f4e0u: goto label_23f4e0;
        case 0x23f50cu: goto label_23f50c;
        case 0x23f538u: goto label_23f538;
        case 0x23f55cu: goto label_23f55c;
        case 0x23f564u: goto label_23f564;
        case 0x23f578u: goto label_23f578;
        case 0x23f59cu: goto label_23f59c;
        case 0x23f5c4u: goto label_23f5c4;
        case 0x23f5d4u: goto label_23f5d4;
        case 0x23f5f0u: goto label_23f5f0;
        case 0x23f5f8u: goto label_23f5f8;
        case 0x23f668u: goto label_23f668;
        case 0x23f674u: goto label_23f674;
        case 0x23f698u: goto label_23f698;
        case 0x23f6b0u: goto label_23f6b0;
        case 0x23f6d4u: goto label_23f6d4;
        case 0x23f6fcu: goto label_23f6fc;
        case 0x23f70cu: goto label_23f70c;
        case 0x23f720u: goto label_23f720;
        case 0x23f730u: goto label_23f730;
        case 0x23f73cu: goto label_23f73c;
        case 0x23f75cu: goto label_23f75c;
        case 0x23f79cu: goto label_23f79c;
        case 0x23f7e4u: goto label_23f7e4;
        case 0x23f7f4u: goto label_23f7f4;
        case 0x23f800u: goto label_23f800;
        case 0x23f804u: goto label_23f804;
        case 0x23f840u: goto label_23f840;
        case 0x23f89cu: goto label_23f89c;
        case 0x23f8b0u: goto label_23f8b0;
        case 0x23f8bcu: goto label_23f8bc;
        case 0x23f8dcu: goto label_23f8dc;
        case 0x23f8f8u: goto label_23f8f8;
        case 0x23f91cu: goto label_23f91c;
        case 0x23f938u: goto label_23f938;
        case 0x23f948u: goto label_23f948;
        case 0x23f954u: goto label_23f954;
        case 0x23f974u: goto label_23f974;
        case 0x23f9c4u: goto label_23f9c4;
        case 0x23fa2cu: goto label_23fa2c;
        case 0x23fa5cu: goto label_23fa5c;
        case 0x23fa68u: goto label_23fa68;
        case 0x23faa8u: goto label_23faa8;
        case 0x23fab4u: goto label_23fab4;
        case 0x23fac4u: goto label_23fac4;
        case 0x23faf0u: goto label_23faf0;
        case 0x23fb3cu: goto label_23fb3c;
        case 0x23fb4cu: goto label_23fb4c;
        case 0x23fb64u: goto label_23fb64;
        case 0x23fb88u: goto label_23fb88;
        case 0x23fb98u: goto label_23fb98;
        case 0x23fba0u: goto label_23fba0;
        case 0x23fbb0u: goto label_23fbb0;
        case 0x23fbccu: goto label_23fbcc;
        case 0x23fbdcu: goto label_23fbdc;
        case 0x23fc08u: goto label_23fc08;
        case 0x23fc30u: goto label_23fc30;
        case 0x23fc38u: goto label_23fc38;
        case 0x23fc58u: goto label_23fc58;
        case 0x23fc60u: goto label_23fc60;
        case 0x23fc7cu: goto label_23fc7c;
        case 0x23fcc0u: goto label_23fcc0;
        case 0x23fcc8u: goto label_23fcc8;
        case 0x23fce4u: goto label_23fce4;
        case 0x23fcf0u: goto label_23fcf0;
        default: break;
    }

    ctx->pc = 0x23f438u;

    // 0x23f438: 0x8f82b73c  lw          $v0, -0x48C4($gp)
    ctx->pc = 0x23f438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x23f43c: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23f43cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x23f440: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23f440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23f444: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x23f444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x23f448: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x23f448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x23f44c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23f450: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x23f450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x23f454: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x23f454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x23f458: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x23f458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x23f45c: 0x24a51308  addiu       $a1, $a1, 0x1308
    ctx->pc = 0x23f45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4872));
    // 0x23f460: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x23f460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x23f464: 0x24d52c18  addiu       $s5, $a2, 0x2C18
    ctx->pc = 0x23f464u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x23f468: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x23f468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x23f46c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23f470: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x23f470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x23f474: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f478: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x23f478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x23f47c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23f480: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23f480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23f484: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x23f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x23f488: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x23f488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x23f48c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23f490: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23f490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23f494: 0x24a56440  addiu       $a1, $a1, 0x6440
    ctx->pc = 0x23f494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25664));
    // 0x23f498: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23f498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23f49c: 0x279eb738  addiu       $fp, $gp, -0x48C8
    ctx->pc = 0x23f49cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x23f4a0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x23f4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f4a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23f4a8: 0xc08c086  jal         func_230218
    ctx->pc = 0x23F4A8u;
    SET_GPR_U32(ctx, 31, 0x23F4B0u);
    ctx->pc = 0x23F4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4A8u;
    // 0x23f4ac: 0x8cc401d8  lw          $a0, 0x1D8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x23F4A8u, 0x23F4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4B0u;
label_23f4b0:
    // 0x23f4b0: 0xc08a984  jal         func_22A610
    ctx->pc = 0x23F4B0u;
    SET_GPR_U32(ctx, 31, 0x23F4B8u);
    ctx->pc = 0x23F4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4B0u;
    // 0x23f4b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x23F4B0u, 0x23F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4B8u;
label_23f4b8:
    // 0x23f4b8: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23f4bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f4c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f4c4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x23f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x23f4c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23f4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f4cc: 0x14640011  bne         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23F4CCu;
    {
        const bool branch_taken_0x23f4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4CCu;
        // 0x23f4d0: 0x8f82b7a8  lw          $v0, -0x4858($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4cc) {
            ctx->pc = 0x23F514u;
            goto label_23f514;
        }
    }
    ctx->pc = 0x23F4D4u;
    // 0x23f4d4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23f4d8: 0xc08c46a  jal         func_2311A8
    ctx->pc = 0x23F4D8u;
    SET_GPR_U32(ctx, 31, 0x23F4E0u);
    ctx->pc = 0x23F4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4D8u;
    // 0x23f4dc: 0x24446430  addiu       $a0, $v0, 0x6430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2311A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2311A8u, 0x23F4D8u, 0x23F4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4E0u;
label_23f4e0:
    // 0x23f4e0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x23f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x23f4e4: 0xa380b750  sb          $zero, -0x48B0($gp)
    ctx->pc = 0x23f4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948688), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f4e8: 0xaf82b7a8  sw          $v0, -0x4858($gp)
    ctx->pc = 0x23f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948776), GPR_U32(ctx, 2));
    // 0x23f4ec: 0x2784b7a0  addiu       $a0, $gp, -0x4860
    ctx->pc = 0x23f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948768));
    // 0x23f4f0: 0xa380b758  sb          $zero, -0x48A8($gp)
    ctx->pc = 0x23f4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948696), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f4f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f4f8: 0xa380b75a  sb          $zero, -0x48A6($gp)
    ctx->pc = 0x23f4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948698), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f4fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23f4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23f500: 0xa380b7a4  sb          $zero, -0x485C($gp)
    ctx->pc = 0x23f500u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948772), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f504: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x23F504u;
    SET_GPR_U32(ctx, 31, 0x23F50Cu);
    ctx->pc = 0x23F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F504u;
    // 0x23f508: 0xaf80b7ac  sw          $zero, -0x4854($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948780), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x23F504u, 0x23F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F50Cu;
label_23f50c:
    // 0x23f50c: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x23F50Cu;
    {
        const bool branch_taken_0x23f50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f50c) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23F514u;
label_23f514:
    // 0x23f514: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F514u;
    {
        const bool branch_taken_0x23f514 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F514u;
        // 0x23f518: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f514) {
            ctx->pc = 0x23F524u;
            goto label_23f524;
        }
    }
    ctx->pc = 0x23F51Cu;
    // 0x23f51c: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x23F51Cu;
    {
        const bool branch_taken_0x23f51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F51Cu;
        // 0x23f520: 0xaf82b7a8  sw          $v0, -0x4858($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f51c) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23F524u;
label_23f524:
    // 0x23f524: 0x9382b7a4  lbu         $v0, -0x485C($gp)
    ctx->pc = 0x23f524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948772)));
    // 0x23f528: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23F528u;
    {
        const bool branch_taken_0x23f528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F528u;
        // 0x23f52c: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f528) {
            ctx->pc = 0x23F580u;
            goto label_23f580;
        }
    }
    ctx->pc = 0x23F530u;
    // 0x23f530: 0xc08c2ec  jal         func_230BB0
    ctx->pc = 0x23F530u;
    SET_GPR_U32(ctx, 31, 0x23F538u);
    ctx->pc = 0x23F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F530u;
    // 0x23f534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230BB0u, 0x23F530u, 0x23F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F538u;
label_23f538:
    // 0x23f538: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x23f538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x23f53c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23f53cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23f540: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F540u;
    {
        const bool branch_taken_0x23f540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f540) {
            ctx->pc = 0x23F570u;
            goto label_23f570;
        }
    }
    ctx->pc = 0x23F548u;
    // 0x23f548: 0xa380b7a4  sb          $zero, -0x485C($gp)
    ctx->pc = 0x23f548u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948772), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f54c: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x23f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x23f550: 0xaf80b7ac  sw          $zero, -0x4854($gp)
    ctx->pc = 0x23f550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948780), GPR_U32(ctx, 0));
    // 0x23f554: 0xc081546  jal         func_205518
    ctx->pc = 0x23F554u;
    SET_GPR_U32(ctx, 31, 0x23F55Cu);
    ctx->pc = 0x23F558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F554u;
    // 0x23f558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23F554u, 0x23F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F55Cu;
label_23f55c:
    // 0x23f55c: 0xc08c2b8  jal         func_230AE0
    ctx->pc = 0x23F55Cu;
    SET_GPR_U32(ctx, 31, 0x23F564u);
    ctx->pc = 0x23F560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F55Cu;
    // 0x23f560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230AE0u, 0x23F55Cu, 0x23F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F564u;
label_23f564:
    // 0x23f564: 0x21e1821  addu        $v1, $s0, $fp
    ctx->pc = 0x23f564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x23f568: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23f568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f56c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23f56cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23f570:
    // 0x23f570: 0xc080ea2  jal         func_203A88
    ctx->pc = 0x23F570u;
    SET_GPR_U32(ctx, 31, 0x23F578u);
    ctx->pc = 0x23F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F570u;
    // 0x23f574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x23F570u, 0x23F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F578u;
label_23f578:
    // 0x23f578: 0x10000192  b           . + 4 + (0x192 << 2)
    ctx->pc = 0x23F578u;
    {
        const bool branch_taken_0x23f578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f578) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23F580u;
label_23f580:
    // 0x23f580: 0x9382b750  lbu         $v0, -0x48B0($gp)
    ctx->pc = 0x23f580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948688)));
    // 0x23f584: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x23F584u;
    {
        const bool branch_taken_0x23f584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F584u;
        // 0x23f588: 0x8f83b7ac  lw          $v1, -0x4854($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f584) {
            ctx->pc = 0x23F6B8u;
            goto label_23f6b8;
        }
    }
    ctx->pc = 0x23F58Cu;
    // 0x23f58c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F58Cu;
    {
        const bool branch_taken_0x23f58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F58Cu;
        // 0x23f590: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f58c) {
            ctx->pc = 0x23F5A4u;
            goto label_23f5a4;
        }
    }
    ctx->pc = 0x23F594u;
    // 0x23f594: 0xc08fc64  jal         func_23F190
    ctx->pc = 0x23F594u;
    SET_GPR_U32(ctx, 31, 0x23F59Cu);
    ctx->pc = 0x23F598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F594u;
    // 0x23f598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F190u, 0x23F594u, 0x23F59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F59Cu;
label_23f59c:
    // 0x23f59c: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x23F59Cu;
    {
        const bool branch_taken_0x23f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f59c) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23F5A4u;
label_23f5a4:
    // 0x23f5a4: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x23f5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
    // 0x23f5a8: 0x24c311f8  addiu       $v1, $a2, 0x11F8
    ctx->pc = 0x23f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4600));
    // 0x23f5ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23f5b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23f5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f5b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F5B4u;
    {
        const bool branch_taken_0x23f5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f5b4) {
            ctx->pc = 0x23F5CCu;
            goto label_23f5cc;
        }
    }
    ctx->pc = 0x23F5BCu;
    // 0x23f5bc: 0xc08c5ec  jal         func_2317B0
    ctx->pc = 0x23F5BCu;
    SET_GPR_U32(ctx, 31, 0x23F5C4u);
    ctx->pc = 0x23F5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5BCu;
    // 0x23f5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317B0u, 0x23F5BCu, 0x23F5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5C4u;
label_23f5c4:
    // 0x23f5c4: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x23F5C4u;
    {
        const bool branch_taken_0x23f5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5C4u;
        // 0x23f5c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5c4) {
            ctx->pc = 0x23F990u;
            goto label_23f990;
        }
    }
    ctx->pc = 0x23F5CCu;
label_23f5cc:
    // 0x23f5cc: 0xc08c628  jal         func_2318A0
    ctx->pc = 0x23F5CCu;
    SET_GPR_U32(ctx, 31, 0x23F5D4u);
    ctx->pc = 0x23F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5CCu;
    // 0x23f5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2318A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2318A0u, 0x23F5CCu, 0x23F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5D4u;
label_23f5d4:
    // 0x23f5d4: 0x1040017b  beqz        $v0, . + 4 + (0x17B << 2)
    ctx->pc = 0x23F5D4u;
    {
        const bool branch_taken_0x23f5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5D4u;
        // 0x23f5d8: 0x8f82b754  lw          $v0, -0x48AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5d4) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23F5DCu;
    // 0x23f5dc: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x23F5DCu;
    {
        const bool branch_taken_0x23f5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5DCu;
        // 0x23f5e0: 0x8f82b730  lw          $v0, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5dc) {
            ctx->pc = 0x23F6A4u;
            goto label_23f6a4;
        }
    }
    ctx->pc = 0x23F5E4u;
    // 0x23f5e4: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23F5E4u;
    {
        const bool branch_taken_0x23f5e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5E4u;
        // 0x23f5e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5e4) {
            ctx->pc = 0x23F648u;
            goto label_23f648;
        }
    }
    ctx->pc = 0x23F5ECu;
    // 0x23f5ec: 0x0  nop
    ctx->pc = 0x23f5ecu;
    // NOP
label_23f5f0:
    // 0x23f5f0: 0xc08828c  jal         func_220A30
    ctx->pc = 0x23F5F0u;
    SET_GPR_U32(ctx, 31, 0x23F5F8u);
    ctx->pc = 0x23F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5F0u;
    // 0x23f5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x23F5F0u, 0x23F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5F8u;
label_23f5f8:
    // 0x23f5f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f5fc: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x23F5FCu;
    {
        const bool branch_taken_0x23f5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5FCu;
        // 0x23f600: 0x8f82b730  lw          $v0, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5fc) {
            ctx->pc = 0x23F638u;
            goto label_23f638;
        }
    }
    ctx->pc = 0x23F604u;
    // 0x23f604: 0x21e2821  addu        $a1, $s0, $fp
    ctx->pc = 0x23f604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x23f608: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23f608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23f60c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23f60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23f610: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23F610u;
    {
        const bool branch_taken_0x23f610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F610u;
        // 0x23f614: 0x8f82b730  lw          $v0, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f610) {
            ctx->pc = 0x23F638u;
            goto label_23f638;
        }
    }
    ctx->pc = 0x23F618u;
    // 0x23f618: 0x2782b740  addiu       $v0, $gp, -0x48C0
    ctx->pc = 0x23f618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948672));
    // 0x23f61c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x23f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x23f620: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f624: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23f624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f628: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x23f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x23f62c: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x23f62cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23f630: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x23f630u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x23f634: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x23f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
label_23f638:
    // 0x23f638: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23f638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23f63c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23f63cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23f640: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x23F640u;
    {
        const bool branch_taken_0x23f640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f640) {
            ctx->pc = 0x23F5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f5f0;
        }
    }
    ctx->pc = 0x23F648u;
label_23f648:
    // 0x23f648: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23f648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x23f64c: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x23f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x23f650: 0x2442e1c8  addiu       $v0, $v0, -0x1E38
    ctx->pc = 0x23f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x23f654: 0x2783b740  addiu       $v1, $gp, -0x48C0
    ctx->pc = 0x23f654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948672));
    // 0x23f658: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x23f658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23f65c: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x23f65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x23f660: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23F660u;
    {
        const bool branch_taken_0x23f660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F660u;
        // 0x23f664: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f660) {
            ctx->pc = 0x23F66Cu;
            goto label_23f66c;
        }
    }
    ctx->pc = 0x23F668u;
label_23f668:
    // 0x23f668: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23f668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23f66c:
    // 0x23f66c: 0xc088224  jal         func_220890
    ctx->pc = 0x23F66Cu;
    SET_GPR_U32(ctx, 31, 0x23F674u);
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x23F66Cu, 0x23F674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F674u;
label_23f674:
    // 0x23f674: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23f674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23f678: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23F678u;
    {
        const bool branch_taken_0x23f678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F678u;
        // 0x23f67c: 0x8f82b754  lw          $v0, -0x48AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f678) {
            ctx->pc = 0x23F6B0u;
            goto label_23f6b0;
        }
    }
    ctx->pc = 0x23F680u;
    // 0x23f680: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23f684: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23F684u;
    {
        const bool branch_taken_0x23f684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F684u;
        // 0x23f688: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f684) {
            ctx->pc = 0x23F668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f668;
        }
    }
    ctx->pc = 0x23F68Cu;
    // 0x23f68c: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x23f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x23f690: 0xc081546  jal         func_205518
    ctx->pc = 0x23F690u;
    SET_GPR_U32(ctx, 31, 0x23F698u);
    ctx->pc = 0x23F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F690u;
    // 0x23f694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23F690u, 0x23F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F698u;
label_23f698:
    // 0x23f698: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x23f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23f69c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23F69Cu;
    {
        const bool branch_taken_0x23f69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F69Cu;
        // 0x23f6a0: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f69c) {
            ctx->pc = 0x23F6B0u;
            goto label_23f6b0;
        }
    }
    ctx->pc = 0x23F6A4u;
label_23f6a4:
    // 0x23f6a4: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x23f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x23f6a8: 0xc081546  jal         func_205518
    ctx->pc = 0x23F6A8u;
    SET_GPR_U32(ctx, 31, 0x23F6B0u);
    ctx->pc = 0x23F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6A8u;
    // 0x23f6ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23F6A8u, 0x23F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6B0u;
label_23f6b0:
    // 0x23f6b0: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x23F6B0u;
    {
        const bool branch_taken_0x23f6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6B0u;
        // 0x23f6b4: 0xa380b750  sb          $zero, -0x48B0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948688), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6b0) {
            ctx->pc = 0x23FBC0u;
            goto label_23fbc0;
        }
    }
    ctx->pc = 0x23F6B8u;
label_23f6b8:
    // 0x23f6b8: 0x9382b75a  lbu         $v0, -0x48A6($gp)
    ctx->pc = 0x23f6b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948698)));
    // 0x23f6bc: 0x504000b6  beql        $v0, $zero, . + 4 + (0xB6 << 2)
    ctx->pc = 0x23F6BCu;
    {
        const bool branch_taken_0x23f6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f6bc) {
            ctx->pc = 0x23F6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F6BCu;
            // 0x23f6c0: 0x9382b758  lbu         $v0, -0x48A8($gp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F998u;
            goto label_23f998;
        }
    }
    ctx->pc = 0x23F6C4u;
    // 0x23f6c4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F6C4u;
    {
        const bool branch_taken_0x23f6c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6C4u;
        // 0x23f6c8: 0x2452ffff  addiu       $s2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6c4) {
            ctx->pc = 0x23F6DCu;
            goto label_23f6dc;
        }
    }
    ctx->pc = 0x23F6CCu;
    // 0x23f6cc: 0xc08fc64  jal         func_23F190
    ctx->pc = 0x23F6CCu;
    SET_GPR_U32(ctx, 31, 0x23F6D4u);
    ctx->pc = 0x23F6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6CCu;
    // 0x23f6d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F190u, 0x23F6CCu, 0x23F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6D4u;
label_23f6d4:
    // 0x23f6d4: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x23F6D4u;
    {
        const bool branch_taken_0x23f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f6d4) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23F6DCu;
label_23f6dc:
    // 0x23f6dc: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23f6e0: 0x244311f8  addiu       $v1, $v0, 0x11F8
    ctx->pc = 0x23f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x23f6e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23f6e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23f6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f6ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F6ECu;
    {
        const bool branch_taken_0x23f6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f6ec) {
            ctx->pc = 0x23F704u;
            goto label_23f704;
        }
    }
    ctx->pc = 0x23F6F4u;
    // 0x23f6f4: 0xc08c746  jal         func_231D18
    ctx->pc = 0x23F6F4u;
    SET_GPR_U32(ctx, 31, 0x23F6FCu);
    ctx->pc = 0x23F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6F4u;
    // 0x23f6f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D18u, 0x23F6F4u, 0x23F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6FCu;
label_23f6fc:
    // 0x23f6fc: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x23F6FCu;
    {
        const bool branch_taken_0x23f6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f6fc) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23F704u;
label_23f704:
    // 0x23f704: 0xc08c754  jal         func_231D50
    ctx->pc = 0x23F704u;
    SET_GPR_U32(ctx, 31, 0x23F70Cu);
    ctx->pc = 0x23F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F704u;
    // 0x23f708: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D50u, 0x23F704u, 0x23F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F70Cu;
label_23f70c:
    // 0x23f70c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f710: 0x1200009c  beqz        $s0, . + 4 + (0x9C << 2)
    ctx->pc = 0x23F710u;
    {
        const bool branch_taken_0x23f710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F710u;
        // 0x23f714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f710) {
            ctx->pc = 0x23F984u;
            goto label_23f984;
        }
    }
    ctx->pc = 0x23F718u;
    // 0x23f718: 0xc08828c  jal         func_220A30
    ctx->pc = 0x23F718u;
    SET_GPR_U32(ctx, 31, 0x23F720u);
    ctx->pc = 0x23F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F718u;
    // 0x23f71c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x23F718u, 0x23F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F720u;
label_23f720:
    // 0x23f720: 0x16110012  bne         $s0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x23F720u;
    {
        const bool branch_taken_0x23f720 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x23F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F720u;
        // 0x23f724: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f720) {
            ctx->pc = 0x23F76Cu;
            goto label_23f76c;
        }
    }
    ctx->pc = 0x23F728u;
    // 0x23f728: 0xc0881ec  jal         func_2207B0
    ctx->pc = 0x23F728u;
    SET_GPR_U32(ctx, 31, 0x23F730u);
    ctx->pc = 0x23F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F728u;
    // 0x23f72c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2207B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2207B0u, 0x23F728u, 0x23F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F730u;
label_23f730:
    // 0x23f730: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f734: 0xc08824c  jal         func_220930
    ctx->pc = 0x23F734u;
    SET_GPR_U32(ctx, 31, 0x23F73Cu);
    ctx->pc = 0x23F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F734u;
    // 0x23f738: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220930u, 0x23F734u, 0x23F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F73Cu;
label_23f73c:
    // 0x23f73c: 0x2783b740  addiu       $v1, $gp, -0x48C0
    ctx->pc = 0x23f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948672));
    // 0x23f740: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x23f740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x23f744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f748: 0x240407d0  addiu       $a0, $zero, 0x7D0
    ctx->pc = 0x23f748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x23f74c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x23f74cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x23f750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f754: 0xc081546  jal         func_205518
    ctx->pc = 0x23F754u;
    SET_GPR_U32(ctx, 31, 0x23F75Cu);
    ctx->pc = 0x23F758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F754u;
    // 0x23f758: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23F754u, 0x23F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F75Cu;
label_23f75c:
    // 0x23f75c: 0x25e1821  addu        $v1, $s2, $fp
    ctx->pc = 0x23f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x23f760: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f764: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x23F764u;
    {
        const bool branch_taken_0x23f764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F764u;
        // 0x23f768: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f764) {
            ctx->pc = 0x23F97Cu;
            goto label_23f97c;
        }
    }
    ctx->pc = 0x23F76Cu;
label_23f76c:
    // 0x23f76c: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x23f76cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x23f770: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x23f770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x23f774: 0x26c3e1c8  addiu       $v1, $s6, -0x1E38
    ctx->pc = 0x23f774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959560));
    // 0x23f778: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f77c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f780: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23f780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f784: 0x1064006e  beq         $v1, $a0, . + 4 + (0x6E << 2)
    ctx->pc = 0x23F784u;
    {
        const bool branch_taken_0x23f784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F784u;
        // 0x23f788: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f784) {
            ctx->pc = 0x23F940u;
            goto label_23f940;
        }
    }
    ctx->pc = 0x23F78Cu;
    // 0x23f78c: 0x14620061  bne         $v1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x23F78Cu;
    {
        const bool branch_taken_0x23f78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f78c) {
            ctx->pc = 0x23F914u;
            goto label_23f914;
        }
    }
    ctx->pc = 0x23F794u;
    // 0x23f794: 0xc088232  jal         func_2208C8
    ctx->pc = 0x23F794u;
    SET_GPR_U32(ctx, 31, 0x23F79Cu);
    ctx->pc = 0x23F798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F794u;
    // 0x23f798: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208C8u, 0x23F794u, 0x23F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F79Cu;
label_23f79c:
    // 0x23f79c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x23f79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x23f7a0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23F7A0u;
    {
        const bool branch_taken_0x23f7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7A0u;
        // 0x23f7a4: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7a0) {
            ctx->pc = 0x23F7ECu;
            goto label_23f7ec;
        }
    }
    ctx->pc = 0x23F7A8u;
    // 0x23f7a8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x23f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23f7ac: 0x2452818  mult        $a1, $s2, $a1
    ctx->pc = 0x23f7acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23f7b0: 0x3c0701fc  lui         $a3, 0x1FC
    ctx->pc = 0x23f7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)508 << 16));
    // 0x23f7b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23f7b8: 0x24e73298  addiu       $a3, $a3, 0x3298
    ctx->pc = 0x23f7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12952));
    // 0x23f7bc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23f7c0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x23f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x23f7c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f7c8: 0x24841e08  addiu       $a0, $a0, 0x1E08
    ctx->pc = 0x23f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7688));
    // 0x23f7cc: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x23f7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x23f7d0: 0x8c69052c  lw          $t1, 0x52C($v1)
    ctx->pc = 0x23f7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1324)));
    // 0x23f7d4: 0x8c650520  lw          $a1, 0x520($v1)
    ctx->pc = 0x23f7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1312)));
    // 0x23f7d8: 0x8c660524  lw          $a2, 0x524($v1)
    ctx->pc = 0x23f7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1316)));
    // 0x23f7dc: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23F7DCu;
    SET_GPR_U32(ctx, 31, 0x23F7E4u);
    ctx->pc = 0x23F7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F7DCu;
    // 0x23f7e0: 0x8c680528  lw          $t0, 0x528($v1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23F7DCu, 0x23F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F7E4u;
label_23f7e4:
    // 0x23f7e4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x23F7E4u;
    {
        const bool branch_taken_0x23f7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7E4u;
        // 0x23f7e8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7e4) {
            ctx->pc = 0x23F8A0u;
            goto label_23f8a0;
        }
    }
    ctx->pc = 0x23F7ECu;
label_23f7ec:
    // 0x23f7ec: 0xc088224  jal         func_220890
    ctx->pc = 0x23F7ECu;
    SET_GPR_U32(ctx, 31, 0x23F7F4u);
    ctx->pc = 0x23F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F7ECu;
    // 0x23f7f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x23F7ECu, 0x23F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F7F4u;
label_23f7f4:
    // 0x23f7f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23F7F4u;
    {
        const bool branch_taken_0x23f7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7F4u;
        // 0x23f7f8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7f4) {
            ctx->pc = 0x23F804u;
            goto label_23f804;
        }
    }
    ctx->pc = 0x23F7FCu;
    // 0x23f7fc: 0x0  nop
    ctx->pc = 0x23f7fcu;
    // NOP
label_23f800:
    // 0x23f800: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23f800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23f804:
    // 0x23f804: 0x215982a  slt         $s3, $s0, $s5
    ctx->pc = 0x23f804u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x23f808: 0x12600025  beqz        $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x23F808u;
    {
        const bool branch_taken_0x23f808 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f808) {
            ctx->pc = 0x23F8A0u;
            goto label_23f8a0;
        }
    }
    ctx->pc = 0x23F810u;
    // 0x23f810: 0x1214fffb  beq         $s0, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F810u;
    {
        const bool branch_taken_0x23f810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x23F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F810u;
        // 0x23f814: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f810) {
            ctx->pc = 0x23F800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f800;
        }
    }
    ctx->pc = 0x23F818u;
    // 0x23f818: 0x24040b78  addiu       $a0, $zero, 0xB78
    ctx->pc = 0x23f818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x23f81c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x23f81cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23f820: 0x72042018  mult1       $a0, $s0, $a0
    ctx->pc = 0x23f820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23f824: 0x8f859dd8  lw          $a1, -0x6228($gp)
    ctx->pc = 0x23f824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23f828: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23f828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23f82c: 0x24423298  addiu       $v0, $v0, 0x3298
    ctx->pc = 0x23f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12952));
    // 0x23f830: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x23f830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f834: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x23f834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x23f838: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x23F838u;
    SET_GPR_U32(ctx, 31, 0x23F840u);
    ctx->pc = 0x23F83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F838u;
    // 0x23f83c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x23F838u, 0x23F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F840u;
label_23f840:
    // 0x23f840: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23F840u;
    {
        const bool branch_taken_0x23f840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f840) {
            ctx->pc = 0x23F844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F840u;
            // 0x23f844: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f804;
        }
    }
    ctx->pc = 0x23F848u;
    // 0x23f848: 0x26c3e1c8  addiu       $v1, $s6, -0x1E38
    ctx->pc = 0x23f848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959560));
    // 0x23f84c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x23f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x23f850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f854: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x23f854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23f858: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23f858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f85c: 0x5464ffe9  bnel        $v1, $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x23F85Cu;
    {
        const bool branch_taken_0x23f85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23f85c) {
            ctx->pc = 0x23F860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F85Cu;
            // 0x23f860: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f804;
        }
    }
    ctx->pc = 0x23F864u;
    // 0x23f864: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x23F864u;
    {
        const bool branch_taken_0x23f864 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F864u;
        // 0x23f868: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f864) {
            ctx->pc = 0x23F8A0u;
            goto label_23f8a0;
        }
    }
    ctx->pc = 0x23F86Cu;
    // 0x23f86c: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x23f86cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x23f870: 0x24c52c18  addiu       $a1, $a2, 0x2C18
    ctx->pc = 0x23f870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x23f874: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x23f874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x23f878: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f87c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23f87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f880: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23f880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23f884: 0x24841e18  addiu       $a0, $a0, 0x1E18
    ctx->pc = 0x23f884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7704));
    // 0x23f888: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23f888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f88c: 0x8c480538  lw          $t0, 0x538($v0)
    ctx->pc = 0x23f88cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1336)));
    // 0x23f890: 0x8c450530  lw          $a1, 0x530($v0)
    ctx->pc = 0x23f890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1328)));
    // 0x23f894: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23F894u;
    SET_GPR_U32(ctx, 31, 0x23F89Cu);
    ctx->pc = 0x23F898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F894u;
    // 0x23f898: 0x8c470534  lw          $a3, 0x534($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23F894u, 0x23F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F89Cu;
label_23f89c:
    // 0x23f89c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x23f89cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f8a0:
    // 0x23f8a0: 0x12e0001c  beqz        $s7, . + 4 + (0x1C << 2)
    ctx->pc = 0x23F8A0u;
    {
        const bool branch_taken_0x23f8a0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f8a0) {
            ctx->pc = 0x23F914u;
            goto label_23f914;
        }
    }
    ctx->pc = 0x23F8A8u;
    // 0x23f8a8: 0xc0881ec  jal         func_2207B0
    ctx->pc = 0x23F8A8u;
    SET_GPR_U32(ctx, 31, 0x23F8B0u);
    ctx->pc = 0x23F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8A8u;
    // 0x23f8ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2207B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2207B0u, 0x23F8A8u, 0x23F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8B0u;
label_23f8b0:
    // 0x23f8b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8b4: 0xc08824c  jal         func_220930
    ctx->pc = 0x23F8B4u;
    SET_GPR_U32(ctx, 31, 0x23F8BCu);
    ctx->pc = 0x23F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8B4u;
    // 0x23f8b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220930u, 0x23F8B4u, 0x23F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8BCu;
label_23f8bc:
    // 0x23f8bc: 0x2783b740  addiu       $v1, $gp, -0x48C0
    ctx->pc = 0x23f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948672));
    // 0x23f8c0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x23f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x23f8c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f8c8: 0x240407d0  addiu       $a0, $zero, 0x7D0
    ctx->pc = 0x23f8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x23f8cc: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x23f8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x23f8d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8d4: 0xc081546  jal         func_205518
    ctx->pc = 0x23F8D4u;
    SET_GPR_U32(ctx, 31, 0x23F8DCu);
    ctx->pc = 0x23F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8D4u;
    // 0x23f8d8: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23F8D4u, 0x23F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8DCu;
label_23f8dc:
    // 0x23f8dc: 0x25e1821  addu        $v1, $s2, $fp
    ctx->pc = 0x23f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x23f8e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f8e4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23f8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f8e8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x23f8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8f0: 0xc08c2a2  jal         func_230A88
    ctx->pc = 0x23F8F0u;
    SET_GPR_U32(ctx, 31, 0x23F8F8u);
    ctx->pc = 0x23F8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8F0u;
    // 0x23f8f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230A88u, 0x23F8F0u, 0x23F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8F8u;
label_23f8f8:
    // 0x23f8f8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23f8fc: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x23f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23f900: 0x244411f8  addiu       $a0, $v0, 0x11F8
    ctx->pc = 0x23f900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x23f904: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23f904u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23f908: 0xa383b7a4  sb          $v1, -0x485C($gp)
    ctx->pc = 0x23f908u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948772), (uint8_t)GPR_U32(ctx, 3));
    // 0x23f90c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23f90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x23f910: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23f910u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1FC11FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC11FCu, _value); } while (0);
label_23f914:
    // 0x23f914: 0xc08828c  jal         func_220A30
    ctx->pc = 0x23F914u;
    SET_GPR_U32(ctx, 31, 0x23F91Cu);
    ctx->pc = 0x23F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F914u;
    // 0x23f918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x23F914u, 0x23F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F91Cu;
label_23f91c:
    // 0x23f91c: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23F91Cu;
    {
        const bool branch_taken_0x23f91c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F91Cu;
        // 0x23f920: 0x25e1821  addu        $v1, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f91c) {
            ctx->pc = 0x23F97Cu;
            goto label_23f97c;
        }
    }
    ctx->pc = 0x23F924u;
    // 0x23f924: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23f924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23f928: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23f928u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f92c: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x23f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x23f930: 0xc081546  jal         func_205518
    ctx->pc = 0x23F930u;
    SET_GPR_U32(ctx, 31, 0x23F938u);
    ctx->pc = 0x23F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F930u;
    // 0x23f934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23F930u, 0x23F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F938u;
label_23f938:
    // 0x23f938: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x23F938u;
    {
        const bool branch_taken_0x23f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F938u;
        // 0x23f93c: 0xa380b75a  sb          $zero, -0x48A6($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948698), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f938) {
            ctx->pc = 0x23FBC0u;
            goto label_23fbc0;
        }
    }
    ctx->pc = 0x23F940u;
label_23f940:
    // 0x23f940: 0xc0881ec  jal         func_2207B0
    ctx->pc = 0x23F940u;
    SET_GPR_U32(ctx, 31, 0x23F948u);
    ctx->pc = 0x23F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F940u;
    // 0x23f944: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2207B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2207B0u, 0x23F940u, 0x23F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F948u;
label_23f948:
    // 0x23f948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f94c: 0xc08824c  jal         func_220930
    ctx->pc = 0x23F94Cu;
    SET_GPR_U32(ctx, 31, 0x23F954u);
    ctx->pc = 0x23F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F94Cu;
    // 0x23f950: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220930u, 0x23F94Cu, 0x23F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F954u;
label_23f954:
    // 0x23f954: 0x2783b740  addiu       $v1, $gp, -0x48C0
    ctx->pc = 0x23f954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948672));
    // 0x23f958: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x23f958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x23f95c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f960: 0x240407d0  addiu       $a0, $zero, 0x7D0
    ctx->pc = 0x23f960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x23f964: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x23f964u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x23f968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f96c: 0xc081546  jal         func_205518
    ctx->pc = 0x23F96Cu;
    SET_GPR_U32(ctx, 31, 0x23F974u);
    ctx->pc = 0x23F970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F96Cu;
    // 0x23f970: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23F96Cu, 0x23F974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F974u;
label_23f974:
    // 0x23f974: 0x25e1821  addu        $v1, $s2, $fp
    ctx->pc = 0x23f974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x23f978: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x23f978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
label_23f97c:
    // 0x23f97c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x23F97Cu;
    {
        const bool branch_taken_0x23f97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F97Cu;
        // 0x23f980: 0xa380b75a  sb          $zero, -0x48A6($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948698), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f97c) {
            ctx->pc = 0x23FBC0u;
            goto label_23fbc0;
        }
    }
    ctx->pc = 0x23F984u;
label_23f984:
    // 0x23f984: 0x8f82b7a8  lw          $v0, -0x4858($gp)
    ctx->pc = 0x23f984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948776)));
    // 0x23f988: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x23F988u;
    {
        const bool branch_taken_0x23f988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F988u;
        // 0x23f98c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f988) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23F990u;
label_23f990:
    // 0x23f990: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x23F990u;
    {
        const bool branch_taken_0x23f990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F990u;
        // 0x23f994: 0xaf82b7a8  sw          $v0, -0x4858($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f990) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23F998u;
label_23f998:
    // 0x23f998: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x23F998u;
    {
        const bool branch_taken_0x23f998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f998) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23F9A0u;
    // 0x23f9a0: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x23f9a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23f9a4: 0x2783b7a0  addiu       $v1, $gp, -0x4860
    ctx->pc = 0x23f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948768));
    // 0x23f9a8: 0x2638821  addu        $s1, $s3, $v1
    ctx->pc = 0x23f9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x23f9ac: 0x8f84b7ac  lw          $a0, -0x4854($gp)
    ctx->pc = 0x23f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948780)));
    // 0x23f9b0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x23f9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23f9b4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F9B4u;
    {
        const bool branch_taken_0x23f9b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9B4u;
        // 0x23f9b8: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9b4) {
            ctx->pc = 0x23F9CCu;
            goto label_23f9cc;
        }
    }
    ctx->pc = 0x23F9BCu;
    // 0x23f9bc: 0xc08fc64  jal         func_23F190
    ctx->pc = 0x23F9BCu;
    SET_GPR_U32(ctx, 31, 0x23F9C4u);
    ctx->pc = 0x23F9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F9BCu;
    // 0x23f9c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F190u, 0x23F9BCu, 0x23F9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F9C4u;
label_23f9c4:
    // 0x23f9c4: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x23F9C4u;
    {
        const bool branch_taken_0x23f9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f9c4) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23F9CCu;
label_23f9cc:
    // 0x23f9cc: 0x3c1401fc  lui         $s4, 0x1FC
    ctx->pc = 0x23f9ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
    // 0x23f9d0: 0x268211f8  addiu       $v0, $s4, 0x11F8
    ctx->pc = 0x23f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
    // 0x23f9d4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x23f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23f9d8: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x23f9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x23f9dc: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x23F9DCu;
    {
        const bool branch_taken_0x23f9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9DCu;
        // 0x23f9e0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9dc) {
            ctx->pc = 0x23FAE0u;
            goto label_23fae0;
        }
    }
    ctx->pc = 0x23F9E4u;
    // 0x23f9e4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x23f9e8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x23f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x23f9ec: 0x2442e1c8  addiu       $v0, $v0, -0x1E38
    ctx->pc = 0x23f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x23f9f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f9f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f9f8: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x23f9f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23f9fc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23F9FCu;
    {
        const bool branch_taken_0x23f9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9FCu;
        // 0x23fa00: 0x24030b78  addiu       $v1, $zero, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9fc) {
            ctx->pc = 0x23FA70u;
            goto label_23fa70;
        }
    }
    ctx->pc = 0x23FA04u;
    // 0x23fa04: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23fa08: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x23fa08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23fa0c: 0x8f919dd8  lw          $s1, -0x6228($gp)
    ctx->pc = 0x23fa0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23fa10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23fa14: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x23fa14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x23fa18: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23fa1c: 0x26101e28  addiu       $s0, $s0, 0x1E28
    ctx->pc = 0x23fa1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7720));
    // 0x23fa20: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x23fa20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fa24: 0xc090cca  jal         func_243328
    ctx->pc = 0x23FA24u;
    SET_GPR_U32(ctx, 31, 0x23FA2Cu);
    ctx->pc = 0x23FA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA24u;
    // 0x23fa28: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243328u, 0x23FA24u, 0x23FA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA2Cu;
label_23fa2c:
    // 0x23fa2c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23fa30: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23fa30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa34: 0x8e470544  lw          $a3, 0x544($s2)
    ctx->pc = 0x23fa34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1348)));
    // 0x23fa38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23fa40: 0x8e450540  lw          $a1, 0x540($s2)
    ctx->pc = 0x23fa40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1344)));
    // 0x23fa44: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x23fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x23fa48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23fa48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fa50: 0x8c4a054c  lw          $t2, 0x54C($v0)
    ctx->pc = 0x23fa50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1356)));
    // 0x23fa54: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23FA54u;
    SET_GPR_U32(ctx, 31, 0x23FA5Cu);
    ctx->pc = 0x23FA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA54u;
    // 0x23fa58: 0x8c490548  lw          $t1, 0x548($v0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23FA54u, 0x23FA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA5Cu;
label_23fa5c:
    // 0x23fa5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23fa5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa60: 0xc08c58e  jal         func_231638
    ctx->pc = 0x23FA60u;
    SET_GPR_U32(ctx, 31, 0x23FA68u);
    ctx->pc = 0x23FA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA60u;
    // 0x23fa64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x23FA60u, 0x23FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA68u;
label_23fa68:
    // 0x23fa68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23FA68u;
    {
        const bool branch_taken_0x23fa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA68u;
        // 0x23fa6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa68) {
            ctx->pc = 0x23FAB8u;
            goto label_23fab8;
        }
    }
    ctx->pc = 0x23FA70u;
label_23fa70:
    // 0x23fa70: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23fa74: 0x24060b78  addiu       $a2, $zero, 0xB78
    ctx->pc = 0x23fa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x23fa78: 0x2063018  mult        $a2, $s0, $a2
    ctx->pc = 0x23fa78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23fa7c: 0x8f859dd8  lw          $a1, -0x6228($gp)
    ctx->pc = 0x23fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23fa80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23fa84: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x23fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x23fa88: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x23fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x23fa8c: 0x24841e40  addiu       $a0, $a0, 0x1E40
    ctx->pc = 0x23fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7744));
    // 0x23fa90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fa94: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x23fa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x23fa98: 0x8c48055c  lw          $t0, 0x55C($v0)
    ctx->pc = 0x23fa98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1372)));
    // 0x23fa9c: 0x8c450554  lw          $a1, 0x554($v0)
    ctx->pc = 0x23fa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1364)));
    // 0x23faa0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23FAA0u;
    SET_GPR_U32(ctx, 31, 0x23FAA8u);
    ctx->pc = 0x23FAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAA0u;
    // 0x23faa4: 0x8c470558  lw          $a3, 0x558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23FAA0u, 0x23FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAA8u;
label_23faa8:
    // 0x23faa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23faa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23faac: 0xc08c58e  jal         func_231638
    ctx->pc = 0x23FAACu;
    SET_GPR_U32(ctx, 31, 0x23FAB4u);
    ctx->pc = 0x23FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAACu;
    // 0x23fab0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x23FAACu, 0x23FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAB4u;
label_23fab4:
    // 0x23fab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23fab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23fab8:
    // 0x23fab8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23fab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fabc: 0xc08c2a2  jal         func_230A88
    ctx->pc = 0x23FABCu;
    SET_GPR_U32(ctx, 31, 0x23FAC4u);
    ctx->pc = 0x23FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FABCu;
    // 0x23fac0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230A88u, 0x23FABCu, 0x23FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAC4u;
label_23fac4:
    // 0x23fac4: 0x268411f8  addiu       $a0, $s4, 0x11F8
    ctx->pc = 0x23fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
    // 0x23fac8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23facc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23faccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23fad0: 0xaf83b7a8  sw          $v1, -0x4858($gp)
    ctx->pc = 0x23fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948776), GPR_U32(ctx, 3));
    // 0x23fad4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23fad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x23fad8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x23FAD8u;
    {
        const bool branch_taken_0x23fad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAD8u;
        // 0x23fadc: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fad8) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23FAE0u;
label_23fae0:
    // 0x23fae0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x23FAE0u;
    {
        const bool branch_taken_0x23fae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fae0) {
            ctx->pc = 0x23FBA8u;
            goto label_23fba8;
        }
    }
    ctx->pc = 0x23FAE8u;
    // 0x23fae8: 0xc08c2ec  jal         func_230BB0
    ctx->pc = 0x23FAE8u;
    SET_GPR_U32(ctx, 31, 0x23FAF0u);
    ctx->pc = 0x23FAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAE8u;
    // 0x23faec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230BB0u, 0x23FAE8u, 0x23FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAF0u;
label_23faf0:
    // 0x23faf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23faf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23faf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23faf8: 0x1642001c  bne         $s2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23FAF8u;
    {
        const bool branch_taken_0x23faf8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAF8u;
        // 0x23fafc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23faf8) {
            ctx->pc = 0x23FB6Cu;
            goto label_23fb6c;
        }
    }
    ctx->pc = 0x23FB00u;
    // 0x23fb00: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x23fb04: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x23fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x23fb08: 0x2442e1c8  addiu       $v0, $v0, -0x1E38
    ctx->pc = 0x23fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x23fb0c: 0x132840  sll         $a1, $s3, 1
    ctx->pc = 0x23fb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x23fb10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fb14: 0x2786b740  addiu       $a2, $gp, -0x48C0
    ctx->pc = 0x23fb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948672));
    // 0x23fb18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fb1c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x23fb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x23fb20: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x23fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x23fb24: 0x2c840008  sltiu       $a0, $a0, 0x8
    ctx->pc = 0x23fb24u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23fb28: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FB28u;
    {
        const bool branch_taken_0x23fb28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB28u;
        // 0x23fb2c: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb28) {
            ctx->pc = 0x23FB44u;
            goto label_23fb44;
        }
    }
    ctx->pc = 0x23FB30u;
    // 0x23fb30: 0xa390b759  sb          $s0, -0x48A7($gp)
    ctx->pc = 0x23fb30u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948697), (uint8_t)GPR_U32(ctx, 16));
    // 0x23fb34: 0xc08ca30  jal         func_2328C0
    ctx->pc = 0x23FB34u;
    SET_GPR_U32(ctx, 31, 0x23FB3Cu);
    ctx->pc = 0x23FB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB34u;
    // 0x23fb38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2328C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2328C0u, 0x23FB34u, 0x23FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB3Cu;
label_23fb3c:
    // 0x23fb3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23FB3Cu;
    {
        const bool branch_taken_0x23fb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB3Cu;
        // 0x23fb40: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb3c) {
            ctx->pc = 0x23FB5Cu;
            goto label_23fb5c;
        }
    }
    ctx->pc = 0x23FB44u;
label_23fb44:
    // 0x23fb44: 0xc0881ec  jal         func_2207B0
    ctx->pc = 0x23FB44u;
    SET_GPR_U32(ctx, 31, 0x23FB4Cu);
    ctx->pc = 0x23FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB44u;
    // 0x23fb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2207B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2207B0u, 0x23FB44u, 0x23FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB4Cu;
label_23fb4c:
    // 0x23fb4c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x23fb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fb50: 0xa380b758  sb          $zero, -0x48A8($gp)
    ctx->pc = 0x23fb50u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948696), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fb54: 0xaf80b7ac  sw          $zero, -0x4854($gp)
    ctx->pc = 0x23fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948780), GPR_U32(ctx, 0));
    // 0x23fb58: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x23fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_23fb5c:
    // 0x23fb5c: 0xc081546  jal         func_205518
    ctx->pc = 0x23FB5Cu;
    SET_GPR_U32(ctx, 31, 0x23FB64u);
    ctx->pc = 0x23FB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB5Cu;
    // 0x23fb60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23FB5Cu, 0x23FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB64u;
label_23fb64:
    // 0x23fb64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23FB64u;
    {
        const bool branch_taken_0x23fb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fb64) {
            ctx->pc = 0x23FB88u;
            goto label_23fb88;
        }
    }
    ctx->pc = 0x23FB6Cu;
label_23fb6c:
    // 0x23fb6c: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FB6Cu;
    {
        const bool branch_taken_0x23fb6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB6Cu;
        // 0x23fb70: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb6c) {
            ctx->pc = 0x23FB88u;
            goto label_23fb88;
        }
    }
    ctx->pc = 0x23FB74u;
    // 0x23fb74: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x23fb74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fb78: 0xa380b758  sb          $zero, -0x48A8($gp)
    ctx->pc = 0x23fb78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948696), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fb7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23fb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb80: 0xc081546  jal         func_205518
    ctx->pc = 0x23FB80u;
    SET_GPR_U32(ctx, 31, 0x23FB88u);
    ctx->pc = 0x23FB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB80u;
    // 0x23fb84: 0xaf80b7ac  sw          $zero, -0x4854($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948780), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23FB80u, 0x23FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB88u;
label_23fb88:
    // 0x23fb88: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FB88u;
    {
        const bool branch_taken_0x23fb88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fb88) {
            ctx->pc = 0x23FB98u;
            goto label_23fb98;
        }
    }
    ctx->pc = 0x23FB90u;
    // 0x23fb90: 0xc08c2b8  jal         func_230AE0
    ctx->pc = 0x23FB90u;
    SET_GPR_U32(ctx, 31, 0x23FB98u);
    ctx->pc = 0x23FB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB90u;
    // 0x23fb94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230AE0u, 0x23FB90u, 0x23FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB98u;
label_23fb98:
    // 0x23fb98: 0xc080ea2  jal         func_203A88
    ctx->pc = 0x23FB98u;
    SET_GPR_U32(ctx, 31, 0x23FBA0u);
    ctx->pc = 0x23FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB98u;
    // 0x23fb9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x23FB98u, 0x23FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBA0u;
label_23fba0:
    // 0x23fba0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23FBA0u;
    {
        const bool branch_taken_0x23fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fba0) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23FBA8u;
label_23fba8:
    // 0x23fba8: 0xc08ca3a  jal         func_2328E8
    ctx->pc = 0x23FBA8u;
    SET_GPR_U32(ctx, 31, 0x23FBB0u);
    ctx->pc = 0x23FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBA8u;
    // 0x23fbac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2328E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2328E8u, 0x23FBA8u, 0x23FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBB0u;
label_23fbb0:
    // 0x23fbb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FBB0u;
    {
        const bool branch_taken_0x23fbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fbb0) {
            ctx->pc = 0x23FBC4u;
            goto label_23fbc4;
        }
    }
    ctx->pc = 0x23FBB8u;
    // 0x23fbb8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x23fbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fbbc: 0xa380b758  sb          $zero, -0x48A8($gp)
    ctx->pc = 0x23fbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948696), (uint8_t)GPR_U32(ctx, 0));
label_23fbc0:
    // 0x23fbc0: 0xaf80b7ac  sw          $zero, -0x4854($gp)
    ctx->pc = 0x23fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948780), GPR_U32(ctx, 0));
label_23fbc4:
    // 0x23fbc4: 0xc08f822  jal         func_23E088
    ctx->pc = 0x23FBC4u;
    SET_GPR_U32(ctx, 31, 0x23FBCCu);
    ctx->pc = 0x23E088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E088u, 0x23FBC4u, 0x23FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBCCu;
label_23fbcc:
    // 0x23fbcc: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23fbd0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fbd4: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x23FBD4u;
    SET_GPR_U32(ctx, 31, 0x23FBDCu);
    ctx->pc = 0x23FBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBD4u;
    // 0x23fbd8: 0x24656430  addiu       $a1, $v1, 0x6430 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 25648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x23FBD4u, 0x23FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBDCu;
label_23fbdc:
    // 0x23fbdc: 0x8f85b730  lw          $a1, -0x48D0($gp)
    ctx->pc = 0x23fbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23fbe0: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x23FBE0u;
    {
        const bool branch_taken_0x23fbe0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x23FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBE0u;
        // 0x23fbe4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbe0) {
            ctx->pc = 0x23FC20u;
            goto label_23fc20;
        }
    }
    ctx->pc = 0x23FBE8u;
    // 0x23fbe8: 0x9383b738  lbu         $v1, -0x48C8($gp)
    ctx->pc = 0x23fbe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948664)));
    // 0x23fbec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23fbf0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23FBF0u;
    {
        const bool branch_taken_0x23fbf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23fbf0) {
            ctx->pc = 0x23FC20u;
            goto label_23fc20;
        }
    }
    ctx->pc = 0x23FBF8u;
    // 0x23fbf8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23fbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbfc: 0x2788b738  addiu       $t0, $gp, -0x48C8
    ctx->pc = 0x23fbfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x23fc00: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x23fc00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23fc04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23fc08:
    // 0x23fc08: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x23fc08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x23fc0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FC0Cu;
    {
        const bool branch_taken_0x23fc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC0Cu;
        // 0x23fc10: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc0c) {
            ctx->pc = 0x23FC20u;
            goto label_23fc20;
        }
    }
    ctx->pc = 0x23FC14u;
    // 0x23fc14: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23fc14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fc18: 0x5067fffb  beql        $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23FC18u;
    {
        const bool branch_taken_0x23fc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x23fc18) {
            ctx->pc = 0x23FC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FC18u;
            // 0x23fc1c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fc08;
        }
    }
    ctx->pc = 0x23FC20u;
label_23fc20:
    // 0x23fc20: 0x14850040  bne         $a0, $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x23FC20u;
    {
        const bool branch_taken_0x23fc20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x23FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC20u;
        // 0x23fc24: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc20) {
            ctx->pc = 0x23FD24u;
            goto label_23fd24;
        }
    }
    ctx->pc = 0x23FC28u;
    // 0x23fc28: 0xc090556  jal         func_241558
    ctx->pc = 0x23FC28u;
    SET_GPR_U32(ctx, 31, 0x23FC30u);
    ctx->pc = 0x23FC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC28u;
    // 0x23fc2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241558u, 0x23FC28u, 0x23FC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC30u;
label_23fc30:
    // 0x23fc30: 0xc087f22  jal         func_21FC88
    ctx->pc = 0x23FC30u;
    SET_GPR_U32(ctx, 31, 0x23FC38u);
    ctx->pc = 0x23FC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC30u;
    // 0x23fc34: 0x8f84b730  lw          $a0, -0x48D0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FC88u, 0x23FC30u, 0x23FC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC38u;
label_23fc38:
    // 0x23fc38: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x23fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
    // 0x23fc3c: 0x8f83b730  lw          $v1, -0x48D0($gp)
    ctx->pc = 0x23fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23fc40: 0x24c211f8  addiu       $v0, $a2, 0x11F8
    ctx->pc = 0x23fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4600));
    // 0x23fc44: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x23fc44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1FC1224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC1224u, _value); } while (0);
    // 0x23fc48: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x23fc48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1FC1218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC1218u, _value); } while (0);
    // 0x23fc4c: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x23FC4Cu;
    {
        const bool branch_taken_0x23fc4c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC4Cu;
        // 0x23fc50: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc4c) {
            ctx->pc = 0x23FCA0u;
            goto label_23fca0;
        }
    }
    ctx->pc = 0x23FC54u;
    // 0x23fc54: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x23fc54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
label_23fc58:
    // 0x23fc58: 0xc08828c  jal         func_220A30
    ctx->pc = 0x23FC58u;
    SET_GPR_U32(ctx, 31, 0x23FC60u);
    ctx->pc = 0x23FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC58u;
    // 0x23fc5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x23FC58u, 0x23FC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC60u;
label_23fc60:
    // 0x23fc60: 0x24040b78  addiu       $a0, $zero, 0xB78
    ctx->pc = 0x23fc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x23fc64: 0x8f839dd8  lw          $v1, -0x6228($gp)
    ctx->pc = 0x23fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23fc68: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x23fc68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23fc6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fc70: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x23fc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x23fc74: 0xc0892ec  jal         func_224BB0
    ctx->pc = 0x23FC74u;
    SET_GPR_U32(ctx, 31, 0x23FC7Cu);
    ctx->pc = 0x23FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC74u;
    // 0x23fc78: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224BB0u, 0x23FC74u, 0x23FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC7Cu;
label_23fc7c:
    // 0x23fc7c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23FC7Cu;
    {
        const bool branch_taken_0x23fc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fc7c) {
            ctx->pc = 0x23FC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FC7Cu;
            // 0x23fc80: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FC84u;
            goto label_23fc84;
        }
    }
    ctx->pc = 0x23FC84u;
label_23fc84:
    // 0x23fc84: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x23fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23fc88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23fc88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23fc8c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x23fc8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23fc90: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x23FC90u;
    {
        const bool branch_taken_0x23fc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC90u;
        // 0x23fc94: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc90) {
            ctx->pc = 0x23FC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fc58;
        }
    }
    ctx->pc = 0x23FC98u;
    // 0x23fc98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23FC98u;
    {
        const bool branch_taken_0x23fc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC98u;
        // 0x23fc9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc98) {
            ctx->pc = 0x23FCACu;
            goto label_23fcac;
        }
    }
    ctx->pc = 0x23FCA0u;
label_23fca0:
    // 0x23fca0: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x23fca0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    // 0x23fca4: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23fca8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23fca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fcac:
    // 0x23fcac: 0x244311f8  addiu       $v1, $v0, 0x11F8
    ctx->pc = 0x23fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x23fcb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23fcb4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x23fcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x23fcb8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x23fcbc: 0x0  nop
    ctx->pc = 0x23fcbcu;
    // NOP
label_23fcc0:
    // 0x23fcc0: 0xc08b2d0  jal         func_22CB40
    ctx->pc = 0x23FCC0u;
    SET_GPR_U32(ctx, 31, 0x23FCC8u);
    ctx->pc = 0x23FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FCC0u;
    // 0x23fcc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB40u, 0x23FCC0u, 0x23FCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FCC8u;
label_23fcc8:
    // 0x23fcc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23fcc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23fccc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23fcd0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x23fcd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23fcd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23FCD4u;
    {
        const bool branch_taken_0x23fcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCD4u;
        // 0x23fcd8: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcd4) {
            ctx->pc = 0x23FCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fcc0;
        }
    }
    ctx->pc = 0x23FCDCu;
    // 0x23fcdc: 0xc08d484  jal         func_235210
    ctx->pc = 0x23FCDCu;
    SET_GPR_U32(ctx, 31, 0x23FCE4u);
    ctx->pc = 0x235210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235210u, 0x23FCDCu, 0x23FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FCE4u;
label_23fce4:
    // 0x23fce4: 0x264550f0  addiu       $a1, $s2, 0x50F0
    ctx->pc = 0x23fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20720));
    // 0x23fce8: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x23FCE8u;
    SET_GPR_U32(ctx, 31, 0x23FCF0u);
    ctx->pc = 0x23FCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FCE8u;
    // 0x23fcec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x23FCE8u, 0x23FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FCF0u;
label_23fcf0:
    // 0x23fcf0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fcf4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x23fcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23fcf8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x23fcf8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23fcfc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x23fcfcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23fd00: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x23fd00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23fd04: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x23fd04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23fd08: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x23fd08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fd0c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x23fd0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fd10: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23fd10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fd14: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x23fd14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fd18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23fd18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fd1c: 0x808c070  j           func_2301C0
    ctx->pc = 0x23FD1Cu;
    ctx->pc = 0x23FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD1Cu;
    // 0x23fd20: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301C0u;
    pageIn_0x2301c0(rdram, ctx, runtime); return;
    ctx->pc = 0x23FD24u;
label_23fd24:
    // 0x23fd24: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x23fd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23fd28: 0x246411f8  addiu       $a0, $v1, 0x11F8
    ctx->pc = 0x23fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x23fd2c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x23fd2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23fd30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23fd34: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x23fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x23fd38: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x23fd38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23fd3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23fd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23fd40: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x23fd40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23fd44: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x23fd44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23fd48: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x23fd48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fd4c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x23fd4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fd50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23fd50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fd54: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x23fd54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fd58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23fd58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fd5c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x23fd60: 0x3e00008  jr          $ra
    ctx->pc = 0x23FD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD60u;
        // 0x23fd64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FD68u;
}
