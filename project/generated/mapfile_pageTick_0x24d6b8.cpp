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

// Function: mapfile_pageTick
// Address: 0x24d6b8 - 0x24edbc
void mapfile_pageTick_0x24d6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapfile_pageTick_0x24d6b8");
#endif

    switch (ctx->pc) {
        case 0x24d728u: goto label_24d728;
        case 0x24d778u: goto label_24d778;
        case 0x24d798u: goto label_24d798;
        case 0x24d7c0u: goto label_24d7c0;
        case 0x24d80cu: goto label_24d80c;
        case 0x24d820u: goto label_24d820;
        case 0x24d828u: goto label_24d828;
        case 0x24d85cu: goto label_24d85c;
        case 0x24d870u: goto label_24d870;
        case 0x24d8a4u: goto label_24d8a4;
        case 0x24d8acu: goto label_24d8ac;
        case 0x24d8ccu: goto label_24d8cc;
        case 0x24d924u: goto label_24d924;
        case 0x24d984u: goto label_24d984;
        case 0x24d9b8u: goto label_24d9b8;
        case 0x24d9e0u: goto label_24d9e0;
        case 0x24d9f8u: goto label_24d9f8;
        case 0x24da0cu: goto label_24da0c;
        case 0x24da38u: goto label_24da38;
        case 0x24db18u: goto label_24db18;
        case 0x24db28u: goto label_24db28;
        case 0x24db58u: goto label_24db58;
        case 0x24db68u: goto label_24db68;
        case 0x24db74u: goto label_24db74;
        case 0x24db90u: goto label_24db90;
        case 0x24dc38u: goto label_24dc38;
        case 0x24dd44u: goto label_24dd44;
        case 0x24dd60u: goto label_24dd60;
        case 0x24dd84u: goto label_24dd84;
        case 0x24dd98u: goto label_24dd98;
        case 0x24dfc8u: goto label_24dfc8;
        case 0x24dffcu: goto label_24dffc;
        case 0x24e048u: goto label_24e048;
        case 0x24e0a8u: goto label_24e0a8;
        case 0x24e0fcu: goto label_24e0fc;
        case 0x24e15cu: goto label_24e15c;
        case 0x24e1acu: goto label_24e1ac;
        case 0x24e1d8u: goto label_24e1d8;
        case 0x24e1f0u: goto label_24e1f0;
        case 0x24e204u: goto label_24e204;
        case 0x24e244u: goto label_24e244;
        case 0x24e254u: goto label_24e254;
        case 0x24e2a8u: goto label_24e2a8;
        case 0x24e350u: goto label_24e350;
        case 0x24e3acu: goto label_24e3ac;
        case 0x24e414u: goto label_24e414;
        case 0x24e424u: goto label_24e424;
        case 0x24e458u: goto label_24e458;
        case 0x24e460u: goto label_24e460;
        case 0x24e4a8u: goto label_24e4a8;
        case 0x24e4d4u: goto label_24e4d4;
        case 0x24e4ecu: goto label_24e4ec;
        case 0x24e568u: goto label_24e568;
        case 0x24e5d4u: goto label_24e5d4;
        case 0x24e5e8u: goto label_24e5e8;
        case 0x24e610u: goto label_24e610;
        case 0x24e630u: goto label_24e630;
        case 0x24e658u: goto label_24e658;
        case 0x24e6b4u: goto label_24e6b4;
        case 0x24e6ccu: goto label_24e6cc;
        case 0x24e6d8u: goto label_24e6d8;
        case 0x24e6f0u: goto label_24e6f0;
        case 0x24e740u: goto label_24e740;
        case 0x24e760u: goto label_24e760;
        case 0x24e7d0u: goto label_24e7d0;
        case 0x24e7f0u: goto label_24e7f0;
        case 0x24e800u: goto label_24e800;
        case 0x24e814u: goto label_24e814;
        case 0x24e870u: goto label_24e870;
        case 0x24e878u: goto label_24e878;
        case 0x24e88cu: goto label_24e88c;
        case 0x24e89cu: goto label_24e89c;
        case 0x24e8b0u: goto label_24e8b0;
        case 0x24e8c8u: goto label_24e8c8;
        case 0x24e918u: goto label_24e918;
        case 0x24e9c4u: goto label_24e9c4;
        case 0x24e9ccu: goto label_24e9cc;
        case 0x24e9e0u: goto label_24e9e0;
        case 0x24e9f0u: goto label_24e9f0;
        case 0x24e9f8u: goto label_24e9f8;
        case 0x24ea00u: goto label_24ea00;
        case 0x24ea08u: goto label_24ea08;
        case 0x24ea20u: goto label_24ea20;
        case 0x24ea34u: goto label_24ea34;
        case 0x24ea48u: goto label_24ea48;
        case 0x24ea5cu: goto label_24ea5c;
        case 0x24ea98u: goto label_24ea98;
        case 0x24eb0cu: goto label_24eb0c;
        case 0x24eb1cu: goto label_24eb1c;
        case 0x24eb84u: goto label_24eb84;
        case 0x24eba4u: goto label_24eba4;
        case 0x24ebb4u: goto label_24ebb4;
        case 0x24ebccu: goto label_24ebcc;
        case 0x24ebd4u: goto label_24ebd4;
        case 0x24ebfcu: goto label_24ebfc;
        case 0x24ec0cu: goto label_24ec0c;
        case 0x24ec44u: goto label_24ec44;
        case 0x24ec8cu: goto label_24ec8c;
        case 0x24ec98u: goto label_24ec98;
        case 0x24eca8u: goto label_24eca8;
        case 0x24ecb0u: goto label_24ecb0;
        case 0x24ecdcu: goto label_24ecdc;
        case 0x24ed4cu: goto label_24ed4c;
        case 0x24ed54u: goto label_24ed54;
        case 0x24ed68u: goto label_24ed68;
        case 0x24ed84u: goto label_24ed84;
        default: break;
    }

    ctx->pc = 0x24d6b8u;

    // 0x24d6b8: 0x9383b848  lbu         $v1, -0x47B8($gp)
    ctx->pc = 0x24d6b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948936)));
    // 0x24d6bc: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24d6bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24d6c0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24d6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24d6c4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x24d6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x24d6c8: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x24d6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x24d6cc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x24d6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x24d6d0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x24d6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x24d6d4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x24d6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x24d6d8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24d6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24d6dc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24d6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24d6e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24d6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24d6e4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24d6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24d6e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24d6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24d6ec: 0x104005a0  beqz        $v0, . + 4 + (0x5A0 << 2)
    ctx->pc = 0x24D6ECu;
    {
        const bool branch_taken_0x24d6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6ECu;
        // 0x24d6f0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6ec) {
            ctx->pc = 0x24ED70u;
            goto label_24ed70;
        }
    }
    ctx->pc = 0x24D6F4u;
    // 0x24d6f4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24d6f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d6fc: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x24d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
    // 0x24d700: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d704: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24d704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d708: 0x800008  jr          $a0
    ctx->pc = 0x24D708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D710u: goto label_24d710;
            case 0x24D804u: goto label_24d804;
            case 0x24DA1Cu: goto label_24da1c;
            case 0x24DACCu: goto label_24dacc;
            case 0x24DFACu: goto label_24dfac;
            case 0x24E41Cu: goto label_24e41c;
            case 0x24E46Cu: goto label_24e46c;
            case 0x24E560u: goto label_24e560;
            case 0x24E5A8u: goto label_24e5a8;
            case 0x24E608u: goto label_24e608;
            case 0x24E6ACu: goto label_24e6ac;
            case 0x24E79Cu: goto label_24e79c;
            case 0x24E7F8u: goto label_24e7f8;
            case 0x24E8A8u: goto label_24e8a8;
            case 0x24EA2Cu: goto label_24ea2c;
            case 0x24EB14u: goto label_24eb14;
            case 0x24EB7Cu: goto label_24eb7c;
            case 0x24EBACu: goto label_24ebac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D708u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24D710u;
label_24d710:
    // 0x24d710: 0x8f82a22c  lw          $v0, -0x5DD4($gp)
    ctx->pc = 0x24d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24d714: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24d714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24d718: 0x14600461  bnez        $v1, . + 4 + (0x461 << 2)
    ctx->pc = 0x24D718u;
    {
        const bool branch_taken_0x24d718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D718u;
        // 0x24d71c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d718) {
            ctx->pc = 0x24E8A0u;
            goto label_24e8a0;
        }
    }
    ctx->pc = 0x24D720u;
    // 0x24d720: 0xc091354  jal         func_244D50
    ctx->pc = 0x24D720u;
    SET_GPR_U32(ctx, 31, 0x24D728u);
    ctx->pc = 0x244D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D50u, 0x24D720u, 0x24D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D728u;
label_24d728:
    // 0x24d728: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24d728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24d72c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x24d72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x24d730: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D730u;
    {
        const bool branch_taken_0x24d730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D730u;
        // 0x24d734: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d730) {
            ctx->pc = 0x24D754u;
            goto label_24d754;
        }
    }
    ctx->pc = 0x24D738u;
    // 0x24d738: 0x3c12002f  lui         $s2, 0x2F
    ctx->pc = 0x24d738u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
    // 0x24d73c: 0x26442c18  addiu       $a0, $s2, 0x2C18
    ctx->pc = 0x24d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x24d740: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d744: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24d748: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24d748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d74c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24D74Cu;
    {
        const bool branch_taken_0x24d74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D74Cu;
        // 0x24d750: 0x8c710798  lw          $s1, 0x798($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d74c) {
            ctx->pc = 0x24D76Cu;
            goto label_24d76c;
        }
    }
    ctx->pc = 0x24D754u;
label_24d754:
    // 0x24d754: 0x3c12002f  lui         $s2, 0x2F
    ctx->pc = 0x24d754u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
    // 0x24d758: 0x26442c18  addiu       $a0, $s2, 0x2C18
    ctx->pc = 0x24d758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x24d75c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d760: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24d760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24d764: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24d764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d768: 0x8c71079c  lw          $s1, 0x79C($v1)
    ctx->pc = 0x24d768u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1948)));
label_24d76c:
    // 0x24d76c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x24d76cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x24d770: 0xc094e3a  jal         func_2538E8
    ctx->pc = 0x24D770u;
    SET_GPR_U32(ctx, 31, 0x24D778u);
    ctx->pc = 0x24D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D770u;
    // 0x24d774: 0x26102100  addiu       $s0, $s0, 0x2100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538E8u, 0x24D770u, 0x24D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D778u;
label_24d778:
    // 0x24d778: 0x8f88a22c  lw          $t0, -0x5DD4($gp)
    ctx->pc = 0x24d778u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24d77c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24d77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d780: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24d780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d784: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x24d784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d788: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d78c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d790: 0xc0912ca  jal         func_244B28
    ctx->pc = 0x24D790u;
    SET_GPR_U32(ctx, 31, 0x24D798u);
    ctx->pc = 0x24D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D790u;
    // 0x24d794: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244B28u, 0x24D790u, 0x24D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D798u;
label_24d798:
    // 0x24d798: 0x8f86a0d8  lw          $a2, -0x5F28($gp)
    ctx->pc = 0x24d798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24d79c: 0x30c20800  andi        $v0, $a2, 0x800
    ctx->pc = 0x24d79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
    // 0x24d7a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24D7A0u;
    {
        const bool branch_taken_0x24d7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7A0u;
        // 0x24d7a4: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7a0) {
            ctx->pc = 0x24D7D0u;
            goto label_24d7d0;
        }
    }
    ctx->pc = 0x24D7A8u;
    // 0x24d7a8: 0x26442c18  addiu       $a0, $s2, 0x2C18
    ctx->pc = 0x24d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x24d7ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d7b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24d7b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d7b8: 0xc09133e  jal         func_244CF8
    ctx->pc = 0x24D7B8u;
    SET_GPR_U32(ctx, 31, 0x24D7C0u);
    ctx->pc = 0x24D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D7B8u;
    // 0x24d7bc: 0x8c6407a0  lw          $a0, 0x7A0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244CF8u, 0x24D7B8u, 0x24D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D7C0u;
label_24d7c0:
    // 0x24d7c0: 0x8f86a0d8  lw          $a2, -0x5F28($gp)
    ctx->pc = 0x24d7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24d7c4: 0x30c20800  andi        $v0, $a2, 0x800
    ctx->pc = 0x24d7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
    // 0x24d7c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D7C8u;
    {
        const bool branch_taken_0x24d7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d7c8) {
            ctx->pc = 0x24D7DCu;
            goto label_24d7dc;
        }
    }
    ctx->pc = 0x24D7D0u;
label_24d7d0:
    // 0x24d7d0: 0x8f82a0c8  lw          $v0, -0x5F38($gp)
    ctx->pc = 0x24d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x24d7d4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x24d7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x24d7d8: 0xaf82a0c8  sw          $v0, -0x5F38($gp)
    ctx->pc = 0x24d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 2));
label_24d7dc:
    // 0x24d7dc: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x24d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x24d7e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d7e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d7e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x24d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24d7ec: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x24d7ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x24d7f0: 0xa384b848  sb          $a0, -0x47B8($gp)
    ctx->pc = 0x24d7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 4));
    // 0x24d7f4: 0xaf83b85c  sw          $v1, -0x47A4($gp)
    ctx->pc = 0x24d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948956), GPR_U32(ctx, 3));
    // 0x24d7f8: 0xaf86a0d8  sw          $a2, -0x5F28($gp)
    ctx->pc = 0x24d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 6));
    // 0x24d7fc: 0x10000563  b           . + 4 + (0x563 << 2)
    ctx->pc = 0x24D7FCu;
    {
        const bool branch_taken_0x24d7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7FCu;
        // 0x24d800: 0xaf80a1cc  sw          $zero, -0x5E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7fc) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24D804u;
label_24d804:
    // 0x24d804: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x24D804u;
    SET_GPR_U32(ctx, 31, 0x24D80Cu);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x24D804u, 0x24D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D80Cu;
label_24d80c:
    // 0x24d80c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d810: 0x1443055f  bne         $v0, $v1, . + 4 + (0x55F << 2)
    ctx->pc = 0x24D810u;
    {
        const bool branch_taken_0x24d810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D810u;
        // 0x24d814: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d810) {
            ctx->pc = 0x24ED90u;
            goto label_24ed90;
        }
    }
    ctx->pc = 0x24D818u;
    // 0x24d818: 0xc091298  jal         func_244A60
    ctx->pc = 0x24D818u;
    SET_GPR_U32(ctx, 31, 0x24D820u);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x24D818u, 0x24D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D820u;
label_24d820:
    // 0x24d820: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x24D820u;
    SET_GPR_U32(ctx, 31, 0x24D828u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x24D820u, 0x24D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D828u;
label_24d828:
    // 0x24d828: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24d828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24d82c: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x24d82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x24d830: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x24D830u;
    {
        const bool branch_taken_0x24d830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D830u;
        // 0x24d834: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d830) {
            ctx->pc = 0x24DA04u;
            goto label_24da04;
        }
    }
    ctx->pc = 0x24D838u;
    // 0x24d838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d83c: 0x244221f0  addiu       $v0, $v0, 0x21F0
    ctx->pc = 0x24d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8688));
    // 0x24d840: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d844: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24d844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d848: 0x800008  jr          $a0
    ctx->pc = 0x24D848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D850u: goto label_24d850;
            case 0x24D8C4u: goto label_24d8c4;
            case 0x24D8E8u: goto label_24d8e8;
            case 0x24D91Cu: goto label_24d91c;
            case 0x24D97Cu: goto label_24d97c;
            case 0x24D994u: goto label_24d994;
            case 0x24DA04u: goto label_24da04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D848u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24D850u;
label_24d850:
    // 0x24d850: 0x8f90a22c  lw          $s0, -0x5DD4($gp)
    ctx->pc = 0x24d850u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24d854: 0xc094e3a  jal         func_2538E8
    ctx->pc = 0x24D854u;
    SET_GPR_U32(ctx, 31, 0x24D85Cu);
    ctx->pc = 0x24D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D854u;
    // 0x24d858: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538E8u, 0x24D854u, 0x24D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D85Cu;
label_24d85c:
    // 0x24d85c: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x24d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24d860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d864: 0x2445fffc  addiu       $a1, $v0, -0x4
    ctx->pc = 0x24d864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x24d868: 0xc0acf54  jal         func_2B3D50
    ctx->pc = 0x24D868u;
    SET_GPR_U32(ctx, 31, 0x24D870u);
    ctx->pc = 0x24D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D868u;
    // 0x24d86c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3D50u, 0x24D868u, 0x24D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D870u;
label_24d870:
    // 0x24d870: 0x1440040b  bnez        $v0, . + 4 + (0x40B << 2)
    ctx->pc = 0x24D870u;
    {
        const bool branch_taken_0x24d870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D870u;
        // 0x24d874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d870) {
            ctx->pc = 0x24E8A0u;
            goto label_24e8a0;
        }
    }
    ctx->pc = 0x24D878u;
    // 0x24d878: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24d878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24d87c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24d880: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24d880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24d884: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24d884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24d888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d88c: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x24d88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x24d890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d898: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d89c: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24D89Cu;
    SET_GPR_U32(ctx, 31, 0x24D8A4u);
    ctx->pc = 0x24D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D89Cu;
    // 0x24d8a0: 0x8c440f1c  lw          $a0, 0xF1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24D89Cu, 0x24D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8A4u;
label_24d8a4:
    // 0x24d8a4: 0xc094e46  jal         func_253918
    ctx->pc = 0x24D8A4u;
    SET_GPR_U32(ctx, 31, 0x24D8ACu);
    ctx->pc = 0x253918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253918u, 0x24D8A4u, 0x24D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8ACu;
label_24d8ac:
    // 0x24d8ac: 0x8f84a22c  lw          $a0, -0x5DD4($gp)
    ctx->pc = 0x24d8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24d8b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d8b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24d8b8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x24d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x24d8bc: 0x10000533  b           . + 4 + (0x533 << 2)
    ctx->pc = 0x24D8BCu;
    {
        const bool branch_taken_0x24d8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8BCu;
        // 0x24d8c0: 0xa383b848  sb          $v1, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8bc) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24D8C4u;
label_24d8c4:
    // 0x24d8c4: 0xc094d5a  jal         func_253568
    ctx->pc = 0x24D8C4u;
    SET_GPR_U32(ctx, 31, 0x24D8CCu);
    ctx->pc = 0x253568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253568u, 0x24D8C4u, 0x24D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8CCu;
label_24d8cc:
    // 0x24d8cc: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24d8d0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x24d8d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24d8d8: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x24d8d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24d8dc: 0xa384b848  sb          $a0, -0x47B8($gp)
    ctx->pc = 0x24d8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 4));
    // 0x24d8e0: 0x1000052a  b           . + 4 + (0x52A << 2)
    ctx->pc = 0x24D8E0u;
    {
        const bool branch_taken_0x24d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8E0u;
        // 0x24d8e4: 0xaf86a0d8  sw          $a2, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8e0) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24D8E8u;
label_24d8e8:
    // 0x24d8e8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d8ec: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24d8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24d8f0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24d8f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24d8f4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24d8f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24d8f8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24d8f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24d8fc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24d8fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24d900: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24d900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24d904: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24d904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d908: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24d908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d90c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24d90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d910: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24d910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d914: 0x8092e82  j           func_24BA08
    ctx->pc = 0x24D914u;
    ctx->pc = 0x24D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D914u;
    // 0x24d918: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    mmExitMenu_0x24ba08(rdram, ctx, runtime); return;
    ctx->pc = 0x24D91Cu;
label_24d91c:
    // 0x24d91c: 0xc092e82  jal         func_24BA08
    ctx->pc = 0x24D91Cu;
    SET_GPR_U32(ctx, 31, 0x24D924u);
    ctx->pc = 0x24D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D91Cu;
    // 0x24d920: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA08u, 0x24D91Cu, 0x24D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D924u;
label_24d924:
    // 0x24d924: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24d924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24d928: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24d928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24d92c: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24d930: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24d930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24d934: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d938: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24d938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24d93c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d940: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24d940u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24d944: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d948: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x24d948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x24d94c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24d94cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24d950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d954: 0x8c440f20  lw          $a0, 0xF20($v0)
    ctx->pc = 0x24d954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3872)));
    // 0x24d958: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24d958u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24d95c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24d95cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24d960: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24d960u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24d964: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24d964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d968: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24d968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d96c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24d96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d970: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24d970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d974: 0x80932a0  j           func_24CA80
    ctx->pc = 0x24D974u;
    ctx->pc = 0x24D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D974u;
    // 0x24d978: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    mmStartMessage_0x24ca80(rdram, ctx, runtime); return;
    ctx->pc = 0x24D97Cu;
label_24d97c:
    // 0x24d97c: 0xc094e46  jal         func_253918
    ctx->pc = 0x24D97Cu;
    SET_GPR_U32(ctx, 31, 0x24D984u);
    ctx->pc = 0x253918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253918u, 0x24D97Cu, 0x24D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D984u;
label_24d984:
    // 0x24d984: 0x8f82a22c  lw          $v0, -0x5DD4($gp)
    ctx->pc = 0x24d984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24d988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24d988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d98c: 0x100003b3  b           . + 4 + (0x3B3 << 2)
    ctx->pc = 0x24D98Cu;
    {
        const bool branch_taken_0x24d98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D98Cu;
        // 0x24d990: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d98c) {
            ctx->pc = 0x24E85Cu;
            goto label_24e85c;
        }
    }
    ctx->pc = 0x24D994u;
label_24d994:
    // 0x24d994: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x24d994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24d998: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x24d998u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
    // 0x24d99c: 0x26312c18  addiu       $s1, $s1, 0x2C18
    ctx->pc = 0x24d99cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11288));
    // 0x24d9a0: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x24d9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x24d9a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d9a8: 0x26102130  addiu       $s0, $s0, 0x2130
    ctx->pc = 0x24d9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8496));
    // 0x24d9ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24d9b0: 0xc090d0a  jal         func_243428
    ctx->pc = 0x24D9B0u;
    SET_GPR_U32(ctx, 31, 0x24D9B8u);
    ctx->pc = 0x24D9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9B0u;
    // 0x24d9b4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x24D9B0u, 0x24D9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D9B8u;
label_24d9b8:
    // 0x24d9b8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24d9bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24d9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d9c0: 0x8e450f24  lw          $a1, 0xF24($s2)
    ctx->pc = 0x24d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3876)));
    // 0x24d9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d9c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d9cc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x24d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x24d9d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d9d4: 0x8c480f2c  lw          $t0, 0xF2C($v0)
    ctx->pc = 0x24d9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3884)));
    // 0x24d9d8: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x24D9D8u;
    SET_GPR_U32(ctx, 31, 0x24D9E0u);
    ctx->pc = 0x24D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9D8u;
    // 0x24d9dc: 0x8c470f28  lw          $a3, 0xF28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3880)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x24D9D8u, 0x24D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D9E0u;
label_24d9e0:
    // 0x24d9e0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x24d9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x24d9e4: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24d9e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24d9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d9ec: 0x24c6d268  addiu       $a2, $a2, -0x2D98
    ctx->pc = 0x24d9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955624));
    // 0x24d9f0: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24D9F0u;
    SET_GPR_U32(ctx, 31, 0x24D9F8u);
    ctx->pc = 0x24D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9F0u;
    // 0x24d9f4: 0x34a5647f  ori         $a1, $a1, 0x647F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24D9F0u, 0x24D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D9F8u;
label_24d9f8:
    // 0x24d9f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24d9fc: 0x100004e3  b           . + 4 + (0x4E3 << 2)
    ctx->pc = 0x24D9FCu;
    {
        const bool branch_taken_0x24d9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9FCu;
        // 0x24da00: 0xa382b848  sb          $v0, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9fc) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24DA04u;
label_24da04:
    // 0x24da04: 0xc094e46  jal         func_253918
    ctx->pc = 0x24DA04u;
    SET_GPR_U32(ctx, 31, 0x24DA0Cu);
    ctx->pc = 0x253918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253918u, 0x24DA04u, 0x24DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA0Cu;
label_24da0c:
    // 0x24da0c: 0x8f82a22c  lw          $v0, -0x5DD4($gp)
    ctx->pc = 0x24da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24da10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24da10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24da14: 0x10000391  b           . + 4 + (0x391 << 2)
    ctx->pc = 0x24DA14u;
    {
        const bool branch_taken_0x24da14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA14u;
        // 0x24da18: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da14) {
            ctx->pc = 0x24E85Cu;
            goto label_24e85c;
        }
    }
    ctx->pc = 0x24DA1Cu;
label_24da1c:
    // 0x24da1c: 0x8f86a0d8  lw          $a2, -0x5F28($gp)
    ctx->pc = 0x24da1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24da20: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x24da20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x24da24: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x24da24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x24da28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DA28u;
    {
        const bool branch_taken_0x24da28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA28u;
        // 0x24da2c: 0x30c20800  andi        $v0, $a2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da28) {
            ctx->pc = 0x24DA40u;
            goto label_24da40;
        }
    }
    ctx->pc = 0x24DA30u;
    // 0x24da30: 0xc091346  jal         func_244D18
    ctx->pc = 0x24DA30u;
    SET_GPR_U32(ctx, 31, 0x24DA38u);
    ctx->pc = 0x244D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D18u, 0x24DA30u, 0x24DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA38u;
label_24da38:
    // 0x24da38: 0x8f86a0d8  lw          $a2, -0x5F28($gp)
    ctx->pc = 0x24da38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24da3c: 0x30c20800  andi        $v0, $a2, 0x800
    ctx->pc = 0x24da3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
label_24da40:
    // 0x24da40: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24DA40u;
    {
        const bool branch_taken_0x24da40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA40u;
        // 0x24da44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da40) {
            ctx->pc = 0x24DA64u;
            goto label_24da64;
        }
    }
    ctx->pc = 0x24DA48u;
    // 0x24da48: 0x8f87a22c  lw          $a3, -0x5DD4($gp)
    ctx->pc = 0x24da48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24da4c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x24da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x24da50: 0x3463fd66  ori         $v1, $v1, 0xFD66
    ctx->pc = 0x24da50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64870);
    // 0x24da54: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x24da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24da58: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x24da58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x24da5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24DA5Cu;
    {
        const bool branch_taken_0x24da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA5Cu;
        // 0x24da60: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da5c) {
            ctx->pc = 0x24DA68u;
            goto label_24da68;
        }
    }
    ctx->pc = 0x24DA64u;
label_24da64:
    // 0x24da64: 0x8f87a22c  lw          $a3, -0x5DD4($gp)
    ctx->pc = 0x24da64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
label_24da68:
    // 0x24da68: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x24da68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da6c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x24da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x24da70: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24DA70u;
    {
        const bool branch_taken_0x24da70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA70u;
        // 0x24da74: 0xaf85b864  sw          $a1, -0x479C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948964), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da70) {
            ctx->pc = 0x24DAACu;
            goto label_24daac;
        }
    }
    ctx->pc = 0x24DA78u;
    // 0x24da78: 0x8f82b85c  lw          $v0, -0x47A4($gp)
    ctx->pc = 0x24da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948956)));
    // 0x24da7c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24DA7Cu;
    {
        const bool branch_taken_0x24da7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA7Cu;
        // 0x24da80: 0x9782b864  lhu         $v0, -0x479C($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294948964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da7c) {
            ctx->pc = 0x24DA9Cu;
            goto label_24da9c;
        }
    }
    ctx->pc = 0x24DA84u;
    // 0x24da84: 0x9783b85c  lhu         $v1, -0x47A4($gp)
    ctx->pc = 0x24da84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294948956)));
    // 0x24da88: 0x9784a1cc  lhu         $a0, -0x5E34($gp)
    ctx->pc = 0x24da88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294943180)));
    // 0x24da8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24da90: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x24da90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24da94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24DA94u;
    {
        const bool branch_taken_0x24da94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA94u;
        // 0x24da98: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da94) {
            ctx->pc = 0x24DAA0u;
            goto label_24daa0;
        }
    }
    ctx->pc = 0x24DA9Cu;
label_24da9c:
    // 0x24da9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24daa0:
    // 0x24daa0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x24daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24daa4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24DAA4u;
    {
        const bool branch_taken_0x24daa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAA4u;
        // 0x24daa8: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24daa4) {
            ctx->pc = 0x24DACCu;
            goto label_24dacc;
        }
    }
    ctx->pc = 0x24DAACu;
label_24daac:
    // 0x24daac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DAACu;
    {
        const bool branch_taken_0x24daac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAACu;
        // 0x24dab0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24daac) {
            ctx->pc = 0x24DAC0u;
            goto label_24dac0;
        }
    }
    ctx->pc = 0x24DAB4u;
    // 0x24dab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dab8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24DAB8u;
    {
        const bool branch_taken_0x24dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAB8u;
        // 0x24dabc: 0xa4820004  sh          $v0, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dab8) {
            ctx->pc = 0x24DACCu;
            goto label_24dacc;
        }
    }
    ctx->pc = 0x24DAC0u;
label_24dac0:
    // 0x24dac0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x24dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24dac4: 0x2402029a  addiu       $v0, $zero, 0x29A
    ctx->pc = 0x24dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    // 0x24dac8: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x24dac8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
label_24dacc:
    // 0x24dacc: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x24daccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24dad0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x24dad4: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x24dad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x24dad8: 0x24956bb8  addiu       $s5, $a0, 0x6BB8
    ctx->pc = 0x24dad8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 27576));
    // 0x24dadc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x24dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x24dae0: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x24dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x24dae4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24dae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24dae8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24DAE8u;
    {
        const bool branch_taken_0x24dae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAE8u;
        // 0x24daec: 0xaea0fff0  sw          $zero, -0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294967280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dae8) {
            ctx->pc = 0x24DB20u;
            goto label_24db20;
        }
    }
    ctx->pc = 0x24DAF0u;
    // 0x24daf0: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24daf4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x24daf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x24daf8: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x24daf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x24dafc: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x24dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x24db00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24db00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24db04: 0x24843e80  addiu       $a0, $a0, 0x3E80
    ctx->pc = 0x24db04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16000));
    // 0x24db08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24db08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24db0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24db10: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x24DB10u;
    SET_GPR_U32(ctx, 31, 0x24DB18u);
    ctx->pc = 0x24DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DB10u;
    // 0x24db14: 0x8c4507a0  lw          $a1, 0x7A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x24DB10u, 0x24DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB18u;
label_24db18:
    // 0x24db18: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x24DB18u;
    {
        const bool branch_taken_0x24db18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB18u;
        // 0x24db1c: 0x8f82a0d8  lw          $v0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db18) {
            ctx->pc = 0x24DB78u;
            goto label_24db78;
        }
    }
    ctx->pc = 0x24DB20u;
label_24db20:
    // 0x24db20: 0xc090d0a  jal         func_243428
    ctx->pc = 0x24DB20u;
    SET_GPR_U32(ctx, 31, 0x24DB28u);
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x24DB20u, 0x24DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB28u;
label_24db28:
    // 0x24db28: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24DB28u;
    {
        const bool branch_taken_0x24db28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB28u;
        // 0x24db2c: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db28) {
            ctx->pc = 0x24DB74u;
            goto label_24db74;
        }
    }
    ctx->pc = 0x24DB30u;
    // 0x24db30: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24db30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24db34: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24db38: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x24db38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x24db3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24db40: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x24db40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x24db44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24db44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24db48: 0x26523e80  addiu       $s2, $s2, 0x3E80
    ctx->pc = 0x24db48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16000));
    // 0x24db4c: 0x2610e9c0  addiu       $s0, $s0, -0x1640
    ctx->pc = 0x24db4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961600));
    // 0x24db50: 0xc090d16  jal         func_243458
    ctx->pc = 0x24DB50u;
    SET_GPR_U32(ctx, 31, 0x24DB58u);
    ctx->pc = 0x24DB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DB50u;
    // 0x24db54: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243458u, 0x24DB50u, 0x24DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB58u;
label_24db58:
    // 0x24db58: 0x8e250f30  lw          $a1, 0xF30($s1)
    ctx->pc = 0x24db58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3888)));
    // 0x24db5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24db5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db60: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x24DB60u;
    SET_GPR_U32(ctx, 31, 0x24DB68u);
    ctx->pc = 0x24DB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DB60u;
    // 0x24db64: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x24DB60u, 0x24DB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB68u;
label_24db68:
    // 0x24db68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24db68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db6c: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x24DB6Cu;
    SET_GPR_U32(ctx, 31, 0x24DB74u);
    ctx->pc = 0x24DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DB6Cu;
    // 0x24db70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x24DB6Cu, 0x24DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB74u;
label_24db74:
    // 0x24db74: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
label_24db78:
    // 0x24db78: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24db78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x24db7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24db7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24db80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DB80u;
    {
        const bool branch_taken_0x24db80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB80u;
        // 0x24db84: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db80) {
            ctx->pc = 0x24DB98u;
            goto label_24db98;
        }
    }
    ctx->pc = 0x24DB88u;
    // 0x24db88: 0xc090d0a  jal         func_243428
    ctx->pc = 0x24DB88u;
    SET_GPR_U32(ctx, 31, 0x24DB90u);
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x24DB88u, 0x24DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB90u;
label_24db90:
    // 0x24db90: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x24DB90u;
    {
        const bool branch_taken_0x24db90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB90u;
        // 0x24db94: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db90) {
            ctx->pc = 0x24DBF0u;
            goto label_24dbf0;
        }
    }
    ctx->pc = 0x24DB98u;
label_24db98:
    // 0x24db98: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24db98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24db9c: 0x244c6ae8  addiu       $t4, $v0, 0x6AE8
    ctx->pc = 0x24db9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 27368));
    // 0x24dba0: 0x69870007  ldl         $a3, 0x7($t4)
    ctx->pc = 0x24dba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24dba4: 0x6d870000  ldr         $a3, 0x0($t4)
    ctx->pc = 0x24dba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x24dba8: 0x6988000f  ldl         $t0, 0xF($t4)
    ctx->pc = 0x24dba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x24dbac: 0x6d880008  ldr         $t0, 0x8($t4)
    ctx->pc = 0x24dbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x24dbb0: 0x698a0017  ldl         $t2, 0x17($t4)
    ctx->pc = 0x24dbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x24dbb4: 0x6d8a0010  ldr         $t2, 0x10($t4)
    ctx->pc = 0x24dbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x24dbb8: 0xb2a70007  sdl         $a3, 0x7($s5)
    ctx->pc = 0x24dbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dbbc: 0xb6a70000  sdr         $a3, 0x0($s5)
    ctx->pc = 0x24dbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dbc0: 0xb2a8000f  sdl         $t0, 0xF($s5)
    ctx->pc = 0x24dbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dbc4: 0xb6a80008  sdr         $t0, 0x8($s5)
    ctx->pc = 0x24dbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dbc8: 0xb2aa0017  sdl         $t2, 0x17($s5)
    ctx->pc = 0x24dbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dbcc: 0xb6aa0010  sdr         $t2, 0x10($s5)
    ctx->pc = 0x24dbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dbd0: 0x6987001f  ldl         $a3, 0x1F($t4)
    ctx->pc = 0x24dbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24dbd4: 0x6d870018  ldr         $a3, 0x18($t4)
    ctx->pc = 0x24dbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x24dbd8: 0xb2a7001f  sdl         $a3, 0x1F($s5)
    ctx->pc = 0x24dbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dbdc: 0xb6a70018  sdr         $a3, 0x18($s5)
    ctx->pc = 0x24dbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dbe0: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x24dbe0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x24dbe4: 0x8c626ba8  lw          $v0, 0x6BA8($v1)
    ctx->pc = 0x24dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x356BA8u));
    // 0x24dbe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24dbec: 0xac626ba8  sw          $v0, 0x6BA8($v1)
    ctx->pc = 0x24dbecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x356BA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x356BA8u, _value); } while (0);
label_24dbf0:
    // 0x24dbf0: 0x8f87a22c  lw          $a3, -0x5DD4($gp)
    ctx->pc = 0x24dbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24dbf4: 0x8f85b864  lw          $a1, -0x479C($gp)
    ctx->pc = 0x24dbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948964)));
    // 0x24dbf8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x24dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x24dbfc: 0x8f86a1cc  lw          $a2, -0x5E34($gp)
    ctx->pc = 0x24dbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943180)));
    // 0x24dc00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24dc04: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x24dc04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x24dc08: 0xaf82b868  sw          $v0, -0x4798($gp)
    ctx->pc = 0x24dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948968), GPR_U32(ctx, 2));
    // 0x24dc0c: 0x2883000b  slti        $v1, $a0, 0xB
    ctx->pc = 0x24dc0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x24dc10: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DC10u;
    {
        const bool branch_taken_0x24dc10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC10u;
        // 0x24dc14: 0xaf84b860  sw          $a0, -0x47A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948960), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc10) {
            ctx->pc = 0x24DC20u;
            goto label_24dc20;
        }
    }
    ctx->pc = 0x24DC18u;
    // 0x24dc18: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x24dc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24dc1c: 0xaf84b860  sw          $a0, -0x47A0($gp)
    ctx->pc = 0x24dc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948960), GPR_U32(ctx, 4));
label_24dc20:
    // 0x24dc20: 0x8f82b860  lw          $v0, -0x47A0($gp)
    ctx->pc = 0x24dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948960)));
    // 0x24dc24: 0x1840008b  blez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x24DC24u;
    {
        const bool branch_taken_0x24dc24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC24u;
        // 0x24dc28: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc24) {
            ctx->pc = 0x24DE54u;
            goto label_24de54;
        }
    }
    ctx->pc = 0x24DC2Cu;
    // 0x24dc2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24DC2Cu;
    {
        const bool branch_taken_0x24dc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC2Cu;
        // 0x24dc30: 0xd41821  addu        $v1, $a2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc2c) {
            ctx->pc = 0x24DC44u;
            goto label_24dc44;
        }
    }
    ctx->pc = 0x24DC34u;
    // 0x24dc34: 0x0  nop
    ctx->pc = 0x24dc34u;
    // NOP
label_24dc38:
    // 0x24dc38: 0x8f85b864  lw          $a1, -0x479C($gp)
    ctx->pc = 0x24dc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948964)));
    // 0x24dc3c: 0x8f86a1cc  lw          $a2, -0x5E34($gp)
    ctx->pc = 0x24dc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943180)));
    // 0x24dc40: 0xd41821  addu        $v1, $a2, $s4
    ctx->pc = 0x24dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
label_24dc44:
    // 0x24dc44: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x24dc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24dc48: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x24DC48u;
    {
        const bool branch_taken_0x24dc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC48u;
        // 0x24dc4c: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc48) {
            ctx->pc = 0x24DCC8u;
            goto label_24dcc8;
        }
    }
    ctx->pc = 0x24DC50u;
    // 0x24dc50: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24dc54: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x24dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x24dc58: 0x26960001  addiu       $s6, $s4, 0x1
    ctx->pc = 0x24dc58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x24dc5c: 0x24486b28  addiu       $t0, $v0, 0x6B28
    ctx->pc = 0x24dc5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 27432));
    // 0x24dc60: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x24dc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x24dc64: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x24dc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x24dc68: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x24dc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x24dc6c: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x24dc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x24dc70: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x24dc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24dc74: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x24dc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x24dc78: 0xb2a50007  sdl         $a1, 0x7($s5)
    ctx->pc = 0x24dc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dc7c: 0xb6a50000  sdr         $a1, 0x0($s5)
    ctx->pc = 0x24dc7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dc80: 0xb2a6000f  sdl         $a2, 0xF($s5)
    ctx->pc = 0x24dc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dc84: 0xb6a60008  sdr         $a2, 0x8($s5)
    ctx->pc = 0x24dc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dc88: 0xb2a70017  sdl         $a3, 0x17($s5)
    ctx->pc = 0x24dc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dc8c: 0xb6a70010  sdr         $a3, 0x10($s5)
    ctx->pc = 0x24dc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dc90: 0x6905001f  ldl         $a1, 0x1F($t0)
    ctx->pc = 0x24dc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x24dc94: 0x6d050018  ldr         $a1, 0x18($t0)
    ctx->pc = 0x24dc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x24dc98: 0xb2a5001f  sdl         $a1, 0x1F($s5)
    ctx->pc = 0x24dc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dc9c: 0xb6a50018  sdr         $a1, 0x18($s5)
    ctx->pc = 0x24dc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dca0: 0x8f87a22c  lw          $a3, -0x5DD4($gp)
    ctx->pc = 0x24dca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24dca4: 0x96a4000a  lhu         $a0, 0xA($s5)
    ctx->pc = 0x24dca4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x24dca8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x24dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x24dcac: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x24dcacu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24dcb0: 0x34830040  ori         $v1, $a0, 0x40
    ctx->pc = 0x24dcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x24dcb4: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x24dcb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x24dcb8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x24dcb8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x24dcbc: 0x255e000a  addiu       $fp, $t2, 0xA
    ctx->pc = 0x24dcbcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 10), 10));
    // 0x24dcc0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x24DCC0u;
    {
        const bool branch_taken_0x24dcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCC0u;
        // 0x24dcc4: 0xa6a3000a  sh          $v1, 0xA($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcc0) {
            ctx->pc = 0x24DDF0u;
            goto label_24ddf0;
        }
    }
    ctx->pc = 0x24DCC8u;
label_24dcc8:
    // 0x24dcc8: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x24dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24dccc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x24dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x24dcd0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x24dcd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24dcd4: 0x240c0022  addiu       $t4, $zero, 0x22
    ctx->pc = 0x24dcd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x24dcd8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24dcdc: 0x728c1818  mult1       $v1, $s4, $t4
    ctx->pc = 0x24dcdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24dce0: 0x24486b08  addiu       $t0, $v0, 0x6B08
    ctx->pc = 0x24dce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 27400));
    // 0x24dce4: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x24dce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x24dce8: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x24dce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x24dcec: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x24dcecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x24dcf0: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x24dcf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x24dcf4: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x24dcf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24dcf8: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x24dcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x24dcfc: 0xb2a40007  sdl         $a0, 0x7($s5)
    ctx->pc = 0x24dcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dd00: 0xb6a40000  sdr         $a0, 0x0($s5)
    ctx->pc = 0x24dd00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dd04: 0xb2a6000f  sdl         $a2, 0xF($s5)
    ctx->pc = 0x24dd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dd08: 0xb6a60008  sdr         $a2, 0x8($s5)
    ctx->pc = 0x24dd08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dd0c: 0xb2a70017  sdl         $a3, 0x17($s5)
    ctx->pc = 0x24dd0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dd10: 0xb6a70010  sdr         $a3, 0x10($s5)
    ctx->pc = 0x24dd10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dd14: 0x6904001f  ldl         $a0, 0x1F($t0)
    ctx->pc = 0x24dd14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x24dd18: 0x6d040018  ldr         $a0, 0x18($t0)
    ctx->pc = 0x24dd18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x24dd1c: 0xb2a4001f  sdl         $a0, 0x1F($s5)
    ctx->pc = 0x24dd1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dd20: 0xb6a40018  sdr         $a0, 0x18($s5)
    ctx->pc = 0x24dd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dd24: 0x3c1701fc  lui         $s7, 0x1FC
    ctx->pc = 0x24dd24u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)508 << 16));
    // 0x24dd28: 0x26e43ec0  addiu       $a0, $s7, 0x3EC0
    ctx->pc = 0x24dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16064));
    // 0x24dd2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24dd2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd30: 0x8f82a22c  lw          $v0, -0x5DD4($gp)
    ctx->pc = 0x24dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24dd34: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x24dd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x24dd38: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x24dd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24dd3c: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x24DD3Cu;
    SET_GPR_U32(ctx, 31, 0x24DD44u);
    ctx->pc = 0x24DD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD3Cu;
    // 0x24dd40: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x24DD3Cu, 0x24DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD44u;
label_24dd44:
    // 0x24dd44: 0x26aa0020  addiu       $t2, $s5, 0x20
    ctx->pc = 0x24dd44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x24dd48: 0x8fac0004  lw          $t4, 0x4($sp)
    ctx->pc = 0x24dd48u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24dd4c: 0x26960001  addiu       $s6, $s4, 0x1
    ctx->pc = 0x24dd4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x24dd50: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x24dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x24dd54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24DD54u;
    {
        const bool branch_taken_0x24dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD54u;
        // 0x24dd58: 0x259e000a  addiu       $fp, $t4, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 12), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd54) {
            ctx->pc = 0x24DD6Cu;
            goto label_24dd6c;
        }
    }
    ctx->pc = 0x24DD5Cu;
    // 0x24dd5c: 0x0  nop
    ctx->pc = 0x24dd5cu;
    // NOP
label_24dd60:
    // 0x24dd60: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x24dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x24dd64: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24dd68: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x24dd68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_24dd6c:
    // 0x24dd6c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x24dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x24dd70: 0x26f23ec0  addiu       $s2, $s7, 0x3EC0
    ctx->pc = 0x24dd70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 16064));
    // 0x24dd74: 0x2828018  mult        $s0, $s4, $v0
    ctx->pc = 0x24dd74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x24dd78: 0x2128821  addu        $s1, $s0, $s2
    ctx->pc = 0x24dd78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x24dd7c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24DD7Cu;
    SET_GPR_U32(ctx, 31, 0x24DD84u);
    ctx->pc = 0x24DD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD7Cu;
    // 0x24dd80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24DD7Cu, 0x24DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD84u;
label_24dd84:
    // 0x24dd84: 0x28420105  slti        $v0, $v0, 0x105
    ctx->pc = 0x24dd84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)261) ? 1 : 0);
    // 0x24dd88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24DD88u;
    {
        const bool branch_taken_0x24dd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dd88) {
            ctx->pc = 0x24DDA8u;
            goto label_24dda8;
        }
    }
    ctx->pc = 0x24DD90u;
    // 0x24dd90: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x24DD90u;
    SET_GPR_U32(ctx, 31, 0x24DD98u);
    ctx->pc = 0x24DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD90u;
    // 0x24dd94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x24DD90u, 0x24DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD98u;
label_24dd98:
    // 0x24dd98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24dd98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dda0: 0x1662ffef  bne         $s3, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x24DDA0u;
    {
        const bool branch_taken_0x24dda0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x24DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDA0u;
        // 0x24dda4: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dda0) {
            ctx->pc = 0x24DD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dd60;
        }
    }
    ctx->pc = 0x24DDA8u;
label_24dda8:
    // 0x24dda8: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x24DDA8u;
    {
        const bool branch_taken_0x24dda8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDA8u;
        // 0x24ddac: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dda8) {
            ctx->pc = 0x24DDECu;
            goto label_24ddec;
        }
    }
    ctx->pc = 0x24DDB0u;
    // 0x24ddb0: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x24ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x24ddb4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x24ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x24ddb8: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x24ddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x24ddbc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24ddc0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x24ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24ddc4: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x24ddc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x24ddc8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x24ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x24ddcc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x24ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x24ddd0: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x24ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x24ddd4: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x24ddd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x24ddd8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x24ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x24dddc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x24dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x24dde0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24dde4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x24dde4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x24dde8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x24dde8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_24ddec:
    // 0x24ddec: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x24ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_24ddf0:
    // 0x24ddf0: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DDF0u;
    {
        const bool branch_taken_0x24ddf0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x24DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDF0u;
        // 0x24ddf4: 0xa6b60008  sh          $s6, 0x8($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 8), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddf0) {
            ctx->pc = 0x24DE00u;
            goto label_24de00;
        }
    }
    ctx->pc = 0x24DDF8u;
    // 0x24ddf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24DDF8u;
    {
        const bool branch_taken_0x24ddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDF8u;
        // 0x24ddfc: 0xa6b40010  sh          $s4, 0x10($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddf8) {
            ctx->pc = 0x24DE04u;
            goto label_24de04;
        }
    }
    ctx->pc = 0x24DE00u;
label_24de00:
    // 0x24de00: 0xa6a00010  sh          $zero, 0x10($s5)
    ctx->pc = 0x24de00u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 0));
label_24de04:
    // 0x24de04: 0x8f83b860  lw          $v1, -0x47A0($gp)
    ctx->pc = 0x24de04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948960)));
    // 0x24de08: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x24de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24de0c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x24de0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24de10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DE10u;
    {
        const bool branch_taken_0x24de10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE10u;
        // 0x24de14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de10) {
            ctx->pc = 0x24DE20u;
            goto label_24de20;
        }
    }
    ctx->pc = 0x24DE18u;
    // 0x24de18: 0x96a20008  lhu         $v0, 0x8($s5)
    ctx->pc = 0x24de18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24de1c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x24de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24de20:
    // 0x24de20: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x24de20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x24de24: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x24de24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24de28: 0x8cc26ba8  lw          $v0, 0x6BA8($a2)
    ctx->pc = 0x24de28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x356BA8u));
    // 0x24de2c: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x24de2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24de30: 0xa6a70006  sh          $a3, 0x6($s5)
    ctx->pc = 0x24de30u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x24de34: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x24de34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24de38: 0xa6a40012  sh          $a0, 0x12($s5)
    ctx->pc = 0x24de38u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x24de3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24de40: 0x8fb50008  lw          $s5, 0x8($sp)
    ctx->pc = 0x24de40u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24de44: 0xacc26ba8  sw          $v0, 0x6BA8($a2)
    ctx->pc = 0x24de44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 27560), GPR_U32(ctx, 2));
    // 0x24de48: 0x1460ff7b  bnez        $v1, . + 4 + (-0x85 << 2)
    ctx->pc = 0x24DE48u;
    {
        const bool branch_taken_0x24de48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE48u;
        // 0x24de4c: 0xafbe0004  sw          $fp, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de48) {
            ctx->pc = 0x24DC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dc38;
        }
    }
    ctx->pc = 0x24DE50u;
    // 0x24de50: 0x8f87a22c  lw          $a3, -0x5DD4($gp)
    ctx->pc = 0x24de50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
label_24de54:
    // 0x24de54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24de54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24de58: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x24de58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24de5c: 0x3442fd66  ori         $v0, $v0, 0xFD66
    ctx->pc = 0x24de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64870);
    // 0x24de60: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24DE60u;
    {
        const bool branch_taken_0x24de60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE60u;
        // 0x24de64: 0x8f86a0d8  lw          $a2, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de60) {
            ctx->pc = 0x24DE84u;
            goto label_24de84;
        }
    }
    ctx->pc = 0x24DE68u;
    // 0x24de68: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x24de68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24de6c: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x24de6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x24de70: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x24DE70u;
    {
        const bool branch_taken_0x24de70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE70u;
        // 0x24de74: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de70) {
            ctx->pc = 0x24DF34u;
            goto label_24df34;
        }
    }
    ctx->pc = 0x24DE78u;
    // 0x24de78: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x24de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x24de7c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x24DE7Cu;
    {
        const bool branch_taken_0x24de7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE7Cu;
        // 0x24de80: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de7c) {
            ctx->pc = 0x24DF34u;
            goto label_24df34;
        }
    }
    ctx->pc = 0x24DE84u;
label_24de84:
    // 0x24de84: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24de84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24de88: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24de88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x24de8c: 0x24626b48  addiu       $v0, $v1, 0x6B48
    ctx->pc = 0x24de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 27464));
    // 0x24de90: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x24de90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x24de94: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x24de94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x24de98: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x24de98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x24de9c: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x24de9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x24dea0: 0x684c0017  ldl         $t4, 0x17($v0)
    ctx->pc = 0x24dea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x24dea4: 0x6c4c0010  ldr         $t4, 0x10($v0)
    ctx->pc = 0x24dea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x24dea8: 0xb2a80007  sdl         $t0, 0x7($s5)
    ctx->pc = 0x24dea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24deac: 0xb6a80000  sdr         $t0, 0x0($s5)
    ctx->pc = 0x24deacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24deb0: 0xb2aa000f  sdl         $t2, 0xF($s5)
    ctx->pc = 0x24deb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24deb4: 0xb6aa0008  sdr         $t2, 0x8($s5)
    ctx->pc = 0x24deb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24deb8: 0xb2ac0017  sdl         $t4, 0x17($s5)
    ctx->pc = 0x24deb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24debc: 0xb6ac0010  sdr         $t4, 0x10($s5)
    ctx->pc = 0x24debcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24dec0: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x24dec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x24dec4: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x24dec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x24dec8: 0xb2a8001f  sdl         $t0, 0x1F($s5)
    ctx->pc = 0x24dec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24decc: 0xb6a80018  sdr         $t0, 0x18($s5)
    ctx->pc = 0x24deccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ded0: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24ded4: 0x8c626ba8  lw          $v0, 0x6BA8($v1)
    ctx->pc = 0x24ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x356BA8u));
    // 0x24ded8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24dedc: 0xac626ba8  sw          $v0, 0x6BA8($v1)
    ctx->pc = 0x24dedcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x356BA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x356BA8u, _value); } while (0);
    // 0x24dee0: 0x24886b68  addiu       $t0, $a0, 0x6B68
    ctx->pc = 0x24dee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 27496));
    // 0x24dee4: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x24dee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x24dee8: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x24dee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x24deec: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x24deecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x24def0: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x24def0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x24def4: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x24def4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24def8: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x24def8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x24defc: 0xb2a50027  sdl         $a1, 0x27($s5)
    ctx->pc = 0x24defcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df00: 0xb6a50020  sdr         $a1, 0x20($s5)
    ctx->pc = 0x24df00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df04: 0xb2a6002f  sdl         $a2, 0x2F($s5)
    ctx->pc = 0x24df04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df08: 0xb6a60028  sdr         $a2, 0x28($s5)
    ctx->pc = 0x24df08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df0c: 0xb2a70037  sdl         $a3, 0x37($s5)
    ctx->pc = 0x24df0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df10: 0xb6a70030  sdr         $a3, 0x30($s5)
    ctx->pc = 0x24df10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df14: 0x6905001f  ldl         $a1, 0x1F($t0)
    ctx->pc = 0x24df14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x24df18: 0x6d050018  ldr         $a1, 0x18($t0)
    ctx->pc = 0x24df18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x24df1c: 0xb2a5003f  sdl         $a1, 0x3F($s5)
    ctx->pc = 0x24df1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df20: 0xb6a50038  sdr         $a1, 0x38($s5)
    ctx->pc = 0x24df20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df24: 0x8c626ba8  lw          $v0, 0x6BA8($v1)
    ctx->pc = 0x24df24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x356BA8u));
    // 0x24df28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24df28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24df2c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x24DF2Cu;
    {
        const bool branch_taken_0x24df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF2Cu;
        // 0x24df30: 0xac626ba8  sw          $v0, 0x6BA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df2c) {
            ctx->pc = 0x24DFA4u;
            goto label_24dfa4;
        }
    }
    ctx->pc = 0x24DF34u;
label_24df34:
    // 0x24df34: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24df34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24df38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DF38u;
    {
        const bool branch_taken_0x24df38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF38u;
        // 0x24df3c: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df38) {
            ctx->pc = 0x24DF4Cu;
            goto label_24df4c;
        }
    }
    ctx->pc = 0x24DF40u;
    // 0x24df40: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24df40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24df44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24DF44u;
    {
        const bool branch_taken_0x24df44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF44u;
        // 0x24df48: 0x24426b68  addiu       $v0, $v0, 0x6B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df44) {
            ctx->pc = 0x24DF54u;
            goto label_24df54;
        }
    }
    ctx->pc = 0x24DF4Cu;
label_24df4c:
    // 0x24df4c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24df50: 0x24426b88  addiu       $v0, $v0, 0x6B88
    ctx->pc = 0x24df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27528));
label_24df54:
    // 0x24df54: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x24df54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x24df58: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x24df58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x24df5c: 0x684c000f  ldl         $t4, 0xF($v0)
    ctx->pc = 0x24df5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x24df60: 0x6c4c0008  ldr         $t4, 0x8($v0)
    ctx->pc = 0x24df60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x24df64: 0x68440017  ldl         $a0, 0x17($v0)
    ctx->pc = 0x24df64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x24df68: 0x6c440010  ldr         $a0, 0x10($v0)
    ctx->pc = 0x24df68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x24df6c: 0x6845001f  ldl         $a1, 0x1F($v0)
    ctx->pc = 0x24df6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x24df70: 0x6c450018  ldr         $a1, 0x18($v0)
    ctx->pc = 0x24df70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x24df74: 0xb06a0007  sdl         $t2, 0x7($v1)
    ctx->pc = 0x24df74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df78: 0xb46a0000  sdr         $t2, 0x0($v1)
    ctx->pc = 0x24df78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df7c: 0xb06c000f  sdl         $t4, 0xF($v1)
    ctx->pc = 0x24df7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df80: 0xb46c0008  sdr         $t4, 0x8($v1)
    ctx->pc = 0x24df80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df84: 0xb0640017  sdl         $a0, 0x17($v1)
    ctx->pc = 0x24df84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df88: 0xb4640010  sdr         $a0, 0x10($v1)
    ctx->pc = 0x24df88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df8c: 0xb065001f  sdl         $a1, 0x1F($v1)
    ctx->pc = 0x24df8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df90: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x24df90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x24df94: 0xb4650018  sdr         $a1, 0x18($v1)
    ctx->pc = 0x24df94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24df98: 0x8cc26ba8  lw          $v0, 0x6BA8($a2)
    ctx->pc = 0x24df98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x356BA8u));
    // 0x24df9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24dfa0: 0xacc26ba8  sw          $v0, 0x6BA8($a2)
    ctx->pc = 0x24dfa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x356BA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x356BA8u, _value); } while (0);
label_24dfa4:
    // 0x24dfa4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24dfa8: 0xa382b848  sb          $v0, -0x47B8($gp)
    ctx->pc = 0x24dfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 2));
label_24dfac:
    // 0x24dfac: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24dfb0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x24dfb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24dfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24dfb8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24DFB8u;
    {
        const bool branch_taken_0x24dfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFB8u;
        // 0x24dfbc: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfb8) {
            ctx->pc = 0x24E004u;
            goto label_24e004;
        }
    }
    ctx->pc = 0x24DFC0u;
    // 0x24dfc0: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x24DFC0u;
    SET_GPR_U32(ctx, 31, 0x24DFC8u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x24DFC0u, 0x24DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DFC8u;
label_24dfc8:
    // 0x24dfc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24dfc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfcc: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x24dfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x24dfd0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24DFD0u;
    {
        const bool branch_taken_0x24dfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFD0u;
        // 0x24dfd4: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfd0) {
            ctx->pc = 0x24DFF4u;
            goto label_24dff4;
        }
    }
    ctx->pc = 0x24DFD8u;
    // 0x24dfd8: 0x144002f0  bnez        $v0, . + 4 + (0x2F0 << 2)
    ctx->pc = 0x24DFD8u;
    {
        const bool branch_taken_0x24dfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFD8u;
        // 0x24dfdc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfd8) {
            ctx->pc = 0x24EB9Cu;
            goto label_24eb9c;
        }
    }
    ctx->pc = 0x24DFE0u;
    // 0x24dfe0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DFE0u;
    {
        const bool branch_taken_0x24dfe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFE0u;
        // 0x24dfe4: 0x8f82a22c  lw          $v0, -0x5DD4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfe0) {
            ctx->pc = 0x24DFF4u;
            goto label_24dff4;
        }
    }
    ctx->pc = 0x24DFE8u;
    // 0x24dfe8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x24dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24dfec: 0x146002eb  bnez        $v1, . + 4 + (0x2EB << 2)
    ctx->pc = 0x24DFECu;
    {
        const bool branch_taken_0x24dfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dfec) {
            ctx->pc = 0x24EB9Cu;
            goto label_24eb9c;
        }
    }
    ctx->pc = 0x24DFF4u;
label_24dff4:
    // 0x24dff4: 0xc091352  jal         func_244D48
    ctx->pc = 0x24DFF4u;
    SET_GPR_U32(ctx, 31, 0x24DFFCu);
    ctx->pc = 0x244D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D48u, 0x24DFF4u, 0x24DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DFFCu;
label_24dffc:
    // 0x24dffc: 0x1040035c  beqz        $v0, . + 4 + (0x35C << 2)
    ctx->pc = 0x24DFFCu;
    {
        const bool branch_taken_0x24dffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFFCu;
        // 0x24e000: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dffc) {
            ctx->pc = 0x24ED70u;
            goto label_24ed70;
        }
    }
    ctx->pc = 0x24E004u;
label_24e004:
    // 0x24e004: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24e004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e008: 0x8f82a1cc  lw          $v0, -0x5E34($gp)
    ctx->pc = 0x24e008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943180)));
    // 0x24e00c: 0x94e60004  lhu         $a2, 0x4($a3)
    ctx->pc = 0x24e00cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24e010: 0x8f83b864  lw          $v1, -0x479C($gp)
    ctx->pc = 0x24e010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948964)));
    // 0x24e014: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x24e014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x24e018: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x24e018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e01c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24e020: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x24e020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e024: 0x14850017  bne         $a0, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x24E024u;
    {
        const bool branch_taken_0x24e024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x24E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E024u;
        // 0x24e028: 0xaf82b858  sw          $v0, -0x47A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e024) {
            ctx->pc = 0x24E084u;
            goto label_24e084;
        }
    }
    ctx->pc = 0x24E02Cu;
    // 0x24e02c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x24e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24e030: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24e034: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x24e034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x24e038: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24E038u;
    {
        const bool branch_taken_0x24e038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E038u;
        // 0x24e03c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e038) {
            ctx->pc = 0x24E084u;
            goto label_24e084;
        }
    }
    ctx->pc = 0x24E040u;
    // 0x24e040: 0xc081546  jal         func_205518
    ctx->pc = 0x24E040u;
    SET_GPR_U32(ctx, 31, 0x24E048u);
    ctx->pc = 0x24E044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E040u;
    // 0x24e044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x24E040u, 0x24E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E048u;
label_24e048:
    // 0x24e048: 0x8f83a1cc  lw          $v1, -0x5E34($gp)
    ctx->pc = 0x24e048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943180)));
    // 0x24e04c: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x24e04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24e050: 0x4c10020  bgez        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x24E050u;
    {
        const bool branch_taken_0x24e050 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x24E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E050u;
        // 0x24e054: 0xaf86a1cc  sw          $a2, -0x5E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943180), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e050) {
            ctx->pc = 0x24E0D4u;
            goto label_24e0d4;
        }
    }
    ctx->pc = 0x24E058u;
    // 0x24e058: 0x8f82b868  lw          $v0, -0x4798($gp)
    ctx->pc = 0x24e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948968)));
    // 0x24e05c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x24e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24e060: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x24e060u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e064: 0x2446fff6  addiu       $a2, $v0, -0xA
    ctx->pc = 0x24e064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x24e068: 0x2844000a  slti        $a0, $v0, 0xA
    ctx->pc = 0x24e068u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x24e06c: 0x2845000b  slti        $a1, $v0, 0xB
    ctx->pc = 0x24e06cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x24e070: 0x4300b  movn        $a2, $zero, $a0
    ctx->pc = 0x24e070u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x24e074: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x24e074u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x24e078: 0xaf86a1cc  sw          $a2, -0x5E34($gp)
    ctx->pc = 0x24e078u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943180), GPR_U32(ctx, 6));
    // 0x24e07c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24E07Cu;
    {
        const bool branch_taken_0x24e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E07Cu;
        // 0x24e080: 0xa5030004  sh          $v1, 0x4($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e07c) {
            ctx->pc = 0x24E0D4u;
            goto label_24e0d4;
        }
    }
    ctx->pc = 0x24E084u;
label_24e084:
    // 0x24e084: 0x8f82b860  lw          $v0, -0x47A0($gp)
    ctx->pc = 0x24e084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948960)));
    // 0x24e088: 0x14c2001a  bne         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24E088u;
    {
        const bool branch_taken_0x24e088 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E088u;
        // 0x24e08c: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e088) {
            ctx->pc = 0x24E0F4u;
            goto label_24e0f4;
        }
    }
    ctx->pc = 0x24E090u;
    // 0x24e090: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24e090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24e094: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x24e094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x24e098: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24E098u;
    {
        const bool branch_taken_0x24e098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E098u;
        // 0x24e09c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e098) {
            ctx->pc = 0x24E0F4u;
            goto label_24e0f4;
        }
    }
    ctx->pc = 0x24E0A0u;
    // 0x24e0a0: 0xc081546  jal         func_205518
    ctx->pc = 0x24E0A0u;
    SET_GPR_U32(ctx, 31, 0x24E0A8u);
    ctx->pc = 0x24E0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E0A0u;
    // 0x24e0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x24E0A0u, 0x24E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0A8u;
label_24e0a8:
    // 0x24e0a8: 0x8f83a1cc  lw          $v1, -0x5E34($gp)
    ctx->pc = 0x24e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943180)));
    // 0x24e0ac: 0x8f82b868  lw          $v0, -0x4798($gp)
    ctx->pc = 0x24e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948968)));
    // 0x24e0b0: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x24e0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24e0b4: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x24e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x24e0b8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x24e0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x24e0bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E0BCu;
    {
        const bool branch_taken_0x24e0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0BCu;
        // 0x24e0c0: 0xaf86a1cc  sw          $a2, -0x5E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943180), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0bc) {
            ctx->pc = 0x24E0D4u;
            goto label_24e0d4;
        }
    }
    ctx->pc = 0x24E0C4u;
    // 0x24e0c4: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x24e0c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e0c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e0cc: 0xaf80a1cc  sw          $zero, -0x5E34($gp)
    ctx->pc = 0x24e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943180), GPR_U32(ctx, 0));
    // 0x24e0d0: 0xa5420004  sh          $v0, 0x4($t2)
    ctx->pc = 0x24e0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 2));
label_24e0d4:
    // 0x24e0d4: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x24e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24e0d8: 0x2404ffc3  addiu       $a0, $zero, -0x3D
    ctx->pc = 0x24e0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x24e0dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24e0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24e0e0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24e0e4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x24e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x24e0e8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x24e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x24e0ec: 0x10000320  b           . + 4 + (0x320 << 2)
    ctx->pc = 0x24E0ECu;
    {
        const bool branch_taken_0x24e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0ECu;
        // 0x24e0f0: 0xa385b848  sb          $a1, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0ec) {
            ctx->pc = 0x24ED70u;
            goto label_24ed70;
        }
    }
    ctx->pc = 0x24E0F4u;
label_24e0f4:
    // 0x24e0f4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24E0F4u;
    SET_GPR_U32(ctx, 31, 0x24E0FCu);
    ctx->pc = 0x24E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E0F4u;
    // 0x24e0f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24E0F4u, 0x24E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0FCu;
label_24e0fc:
    // 0x24e0fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24e0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x24e100: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24E100u;
    {
        const bool branch_taken_0x24e100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E100u;
        // 0x24e104: 0x8f82a0d8  lw          $v0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e100) {
            ctx->pc = 0x24E144u;
            goto label_24e144;
        }
    }
    ctx->pc = 0x24E108u;
    // 0x24e108: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x24e108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x24e10c: 0x144002a3  bnez        $v0, . + 4 + (0x2A3 << 2)
    ctx->pc = 0x24E10Cu;
    {
        const bool branch_taken_0x24e10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E10Cu;
        // 0x24e110: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e10c) {
            ctx->pc = 0x24EB9Cu;
            goto label_24eb9c;
        }
    }
    ctx->pc = 0x24E114u;
    // 0x24e114: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24e114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24e118: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24e118u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24e11c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24e11cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24e120: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24e120u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24e124: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24e124u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e128: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24e128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e12c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24e12cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e130: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24e130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e134: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24e134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e138: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24e138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e13c: 0x8092e82  j           func_24BA08
    ctx->pc = 0x24E13Cu;
    ctx->pc = 0x24E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E13Cu;
    // 0x24e140: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    mmExitMenu_0x24ba08(rdram, ctx, runtime); return;
    ctx->pc = 0x24E144u;
label_24e144:
    // 0x24e144: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24e144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x24e148: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e14c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x24E14Cu;
    {
        const bool branch_taken_0x24e14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e14c) {
            ctx->pc = 0x24E1FCu;
            goto label_24e1fc;
        }
    }
    ctx->pc = 0x24E154u;
    // 0x24e154: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24E154u;
    SET_GPR_U32(ctx, 31, 0x24E15Cu);
    ctx->pc = 0x24E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E154u;
    // 0x24e158: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24E154u, 0x24E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E15Cu;
label_24e15c:
    // 0x24e15c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x24e15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x24e160: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x24E160u;
    {
        const bool branch_taken_0x24e160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E160u;
        // 0x24e164: 0x8f84a22c  lw          $a0, -0x5DD4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e160) {
            ctx->pc = 0x24E1FCu;
            goto label_24e1fc;
        }
    }
    ctx->pc = 0x24E168u;
    // 0x24e168: 0x8f83b858  lw          $v1, -0x47A8($gp)
    ctx->pc = 0x24e168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948952)));
    // 0x24e16c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x24e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24e170: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x24e170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24e174: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x24E174u;
    {
        const bool branch_taken_0x24e174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E174u;
        // 0x24e178: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e174) {
            ctx->pc = 0x24E1FCu;
            goto label_24e1fc;
        }
    }
    ctx->pc = 0x24E17Cu;
    // 0x24e17c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x24e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24e180: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x24e180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x24e184: 0x3c12002f  lui         $s2, 0x2F
    ctx->pc = 0x24e184u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
    // 0x24e188: 0x26522c18  addiu       $s2, $s2, 0x2C18
    ctx->pc = 0x24e188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x24e18c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24e190: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24e190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24e194: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x24e194u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x24e198: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x24e198u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e19c: 0x26312140  addiu       $s1, $s1, 0x2140
    ctx->pc = 0x24e19cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8512));
    // 0x24e1a0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x24e1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x24e1a4: 0xc090d0a  jal         func_243428
    ctx->pc = 0x24E1A4u;
    SET_GPR_U32(ctx, 31, 0x24E1ACu);
    ctx->pc = 0x24E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E1A4u;
    // 0x24e1a8: 0x908021  addu        $s0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x24E1A4u, 0x24E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1ACu;
label_24e1ac:
    // 0x24e1ac: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24e1b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x24e1b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e1b4: 0x8e670f38  lw          $a3, 0xF38($s3)
    ctx->pc = 0x24e1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3896)));
    // 0x24e1b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e1bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24e1c0: 0x8e650f34  lw          $a1, 0xF34($s3)
    ctx->pc = 0x24e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
    // 0x24e1c4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x24e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x24e1c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24e1c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e1cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e1d0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x24E1D0u;
    SET_GPR_U32(ctx, 31, 0x24E1D8u);
    ctx->pc = 0x24E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E1D0u;
    // 0x24e1d4: 0x8c490f3c  lw          $t1, 0xF3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3900)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x24E1D0u, 0x24E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1D8u;
label_24e1d8:
    // 0x24e1d8: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x24e1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x24e1dc: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24e1e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e1e4: 0x24c6d268  addiu       $a2, $a2, -0x2D98
    ctx->pc = 0x24e1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955624));
    // 0x24e1e8: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24E1E8u;
    SET_GPR_U32(ctx, 31, 0x24E1F0u);
    ctx->pc = 0x24E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E1E8u;
    // 0x24e1ec: 0x34a5647f  ori         $a1, $a1, 0x647F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24E1E8u, 0x24E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1F0u;
label_24e1f0:
    // 0x24e1f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24e1f4: 0x100002e5  b           . + 4 + (0x2E5 << 2)
    ctx->pc = 0x24E1F4u;
    {
        const bool branch_taken_0x24e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1F4u;
        // 0x24e1f8: 0xa382b848  sb          $v0, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1f4) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24E1FCu;
label_24e1fc:
    // 0x24e1fc: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24E1FCu;
    SET_GPR_U32(ctx, 31, 0x24E204u);
    ctx->pc = 0x24E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E1FCu;
    // 0x24e200: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24E1FCu, 0x24E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E204u;
label_24e204:
    // 0x24e204: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24e204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x24e208: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x24E208u;
    {
        const bool branch_taken_0x24e208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E208u;
        // 0x24e20c: 0x8f85a0d8  lw          $a1, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e208) {
            ctx->pc = 0x24E404u;
            goto label_24e404;
        }
    }
    ctx->pc = 0x24E210u;
    // 0x24e210: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x24e210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x24e214: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x24E214u;
    {
        const bool branch_taken_0x24e214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E214u;
        // 0x24e218: 0x8f83a22c  lw          $v1, -0x5DD4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e214) {
            ctx->pc = 0x24E35Cu;
            goto label_24e35c;
        }
    }
    ctx->pc = 0x24E21Cu;
    // 0x24e21c: 0x8f84b858  lw          $a0, -0x47A8($gp)
    ctx->pc = 0x24e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948952)));
    // 0x24e220: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24e220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24e224: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x24e224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24e228: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x24E228u;
    {
        const bool branch_taken_0x24e228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E228u;
        // 0x24e22c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e228) {
            ctx->pc = 0x24E404u;
            goto label_24e404;
        }
    }
    ctx->pc = 0x24E230u;
    // 0x24e230: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x24e230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24e234: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24E234u;
    {
        const bool branch_taken_0x24e234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E234u;
        // 0x24e238: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e234) {
            ctx->pc = 0x24E298u;
            goto label_24e298;
        }
    }
    ctx->pc = 0x24E23Cu;
    // 0x24e23c: 0xc094d9e  jal         func_253678
    ctx->pc = 0x24E23Cu;
    SET_GPR_U32(ctx, 31, 0x24E244u);
    ctx->pc = 0x253678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253678u, 0x24E23Cu, 0x24E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E244u;
label_24e244:
    // 0x24e244: 0x1440028f  bnez        $v0, . + 4 + (0x28F << 2)
    ctx->pc = 0x24E244u;
    {
        const bool branch_taken_0x24e244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e244) {
            ctx->pc = 0x24EC84u;
            goto label_24ec84;
        }
    }
    ctx->pc = 0x24E24Cu;
    // 0x24e24c: 0xc092e82  jal         func_24BA08
    ctx->pc = 0x24E24Cu;
    SET_GPR_U32(ctx, 31, 0x24E254u);
    ctx->pc = 0x24E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E24Cu;
    // 0x24e250: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA08u, 0x24E24Cu, 0x24E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E254u;
label_24e254:
    // 0x24e254: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24e254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x24e258: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x24e258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x24e25c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24e25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24e260: 0x24842158  addiu       $a0, $a0, 0x2158
    ctx->pc = 0x24e260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8536));
    // 0x24e264: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24e264u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24e268: 0x34a53c7f  ori         $a1, $a1, 0x3C7F
    ctx->pc = 0x24e268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15487);
    // 0x24e26c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24e26cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24e270: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24e270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e274: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24e274u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24e278: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24e278u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e27c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24e27cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e280: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24e280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e284: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24e284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e288: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24e288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e28c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24e28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e290: 0x80932a0  j           func_24CA80
    ctx->pc = 0x24E290u;
    ctx->pc = 0x24E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E290u;
    // 0x24e294: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    mmStartMessage_0x24ca80(rdram, ctx, runtime); return;
    ctx->pc = 0x24E298u;
label_24e298:
    // 0x24e298: 0x902818  mult        $a1, $a0, $s0
    ctx->pc = 0x24e298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24e29c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x24e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24e2a0: 0xc094e66  jal         func_253998
    ctx->pc = 0x24E2A0u;
    SET_GPR_U32(ctx, 31, 0x24E2A8u);
    ctx->pc = 0x24E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E2A0u;
    // 0x24e2a4: 0x94440030  lhu         $a0, 0x30($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253998u, 0x24E2A0u, 0x24E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E2A8u;
label_24e2a8:
    // 0x24e2a8: 0x8f85b858  lw          $a1, -0x47A8($gp)
    ctx->pc = 0x24e2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948952)));
    // 0x24e2ac: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x24e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x24e2b0: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24e2b4: 0x24842c18  addiu       $a0, $a0, 0x2C18
    ctx->pc = 0x24e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x24e2b8: 0xb02818  mult        $a1, $a1, $s0
    ctx->pc = 0x24e2b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24e2bc: 0x8f88a22c  lw          $t0, -0x5DD4($gp)
    ctx->pc = 0x24e2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24e2c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24e2c4: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x24e2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
    // 0x24e2c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24e2cc: 0x24cb4018  addiu       $t3, $a2, 0x4018
    ctx->pc = 0x24e2ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 16408));
    // 0x24e2d0: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x24e2d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e2d4: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x24e2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x24e2d8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x24e2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x24e2dc: 0x24e72100  addiu       $a3, $a3, 0x2100
    ctx->pc = 0x24e2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8448));
    // 0x24e2e0: 0x24c44018  addiu       $a0, $a2, 0x4018
    ctx->pc = 0x24e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16408));
    // 0x24e2e4: 0x68aa0013  ldl         $t2, 0x13($a1)
    ctx->pc = 0x24e2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x24e2e8: 0x6caa000c  ldr         $t2, 0xC($a1)
    ctx->pc = 0x24e2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x24e2ec: 0x68ac001b  ldl         $t4, 0x1B($a1)
    ctx->pc = 0x24e2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x24e2f0: 0x6cac0014  ldr         $t4, 0x14($a1)
    ctx->pc = 0x24e2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x24e2f4: 0x68a30023  ldl         $v1, 0x23($a1)
    ctx->pc = 0x24e2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x24e2f8: 0x6ca3001c  ldr         $v1, 0x1C($a1)
    ctx->pc = 0x24e2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24e2fc: 0xb08a0007  sdl         $t2, 0x7($a0)
    ctx->pc = 0x24e2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e300: 0xb48a0000  sdr         $t2, 0x0($a0)
    ctx->pc = 0x24e300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e304: 0xb08c000f  sdl         $t4, 0xF($a0)
    ctx->pc = 0x24e304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e308: 0xb48c0008  sdr         $t4, 0x8($a0)
    ctx->pc = 0x24e308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e30c: 0xb0830017  sdl         $v1, 0x17($a0)
    ctx->pc = 0x24e30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e310: 0xb4830010  sdr         $v1, 0x10($a0)
    ctx->pc = 0x24e310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e314: 0x68aa002b  ldl         $t2, 0x2B($a1)
    ctx->pc = 0x24e314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x24e318: 0x6caa0024  ldr         $t2, 0x24($a1)
    ctx->pc = 0x24e318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x24e31c: 0x68ac0033  ldl         $t4, 0x33($a1)
    ctx->pc = 0x24e31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x24e320: 0x6cac002c  ldr         $t4, 0x2C($a1)
    ctx->pc = 0x24e320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x24e324: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x24e324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e328: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x24e328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e32c: 0xb08c0027  sdl         $t4, 0x27($a0)
    ctx->pc = 0x24e32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e330: 0xb48c0020  sdr         $t4, 0x20($a0)
    ctx->pc = 0x24e330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e334: 0x8f88a0d0  lw          $t0, -0x5F30($gp)
    ctx->pc = 0x24e334u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x24e338: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x24e338u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e33c: 0x8d250760  lw          $a1, 0x760($t1)
    ctx->pc = 0x24e33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1888)));
    // 0x24e340: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24e340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e344: 0x95690026  lhu         $t1, 0x26($t3)
    ctx->pc = 0x24e344u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)FAST_READ16(0x1FC403Eu));
    // 0x24e348: 0xc0912ca  jal         func_244B28
    ctx->pc = 0x24E348u;
    SET_GPR_U32(ctx, 31, 0x24E350u);
    ctx->pc = 0x24E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E348u;
    // 0x24e34c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244B28u, 0x24E348u, 0x24E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E350u;
label_24e350:
    // 0x24e350: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x24e350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x24e354: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x24E354u;
    {
        const bool branch_taken_0x24e354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E354u;
        // 0x24e358: 0xa382b848  sb          $v0, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e354) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24E35Cu;
label_24e35c:
    // 0x24e35c: 0x8f82b864  lw          $v0, -0x479C($gp)
    ctx->pc = 0x24e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948964)));
    // 0x24e360: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x24E360u;
    {
        const bool branch_taken_0x24e360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E360u;
        // 0x24e364: 0x8f83b858  lw          $v1, -0x47A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e360) {
            ctx->pc = 0x24E3F8u;
            goto label_24e3f8;
        }
    }
    ctx->pc = 0x24E368u;
    // 0x24e368: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24e36c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x24E36Cu;
    {
        const bool branch_taken_0x24e36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E36Cu;
        // 0x24e370: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e36c) {
            ctx->pc = 0x24E3FCu;
            goto label_24e3fc;
        }
    }
    ctx->pc = 0x24E374u;
    // 0x24e374: 0x8f82a22c  lw          $v0, -0x5DD4($gp)
    ctx->pc = 0x24e374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24e378: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x24e378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x24e37c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e380: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x24e380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24e384: 0xa33024  and         $a2, $a1, $v1
    ctx->pc = 0x24e384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x24e388: 0x28840064  slti        $a0, $a0, 0x64
    ctx->pc = 0x24e388u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x24e38c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x24E38Cu;
    {
        const bool branch_taken_0x24e38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E38Cu;
        // 0x24e390: 0xaf86a0d8  sw          $a2, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e38c) {
            ctx->pc = 0x24E3C0u;
            goto label_24e3c0;
        }
    }
    ctx->pc = 0x24E394u;
    // 0x24e394: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24e394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24e398: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x24e398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x24e39c: 0x9044e9c8  lbu         $a0, -0x1638($v0)
    ctx->pc = 0x24e39cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3AE9C8u));
    // 0x24e3a0: 0x24704018  addiu       $s0, $v1, 0x4018
    ctx->pc = 0x24e3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16408));
    // 0x24e3a4: 0xc094e82  jal         func_253A08
    ctx->pc = 0x24E3A4u;
    SET_GPR_U32(ctx, 31, 0x24E3ACu);
    ctx->pc = 0x24E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E3A4u;
    // 0x24e3a8: 0xa0644018  sb          $a0, 0x4018($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 16408), (uint8_t)GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253A08u, 0x24E3A4u, 0x24E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E3ACu;
label_24e3ac:
    // 0x24e3ac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x24e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24e3b0: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x24e3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x24e3b4: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x24e3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x24e3b8: 0x10000274  b           . + 4 + (0x274 << 2)
    ctx->pc = 0x24E3B8u;
    {
        const bool branch_taken_0x24e3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3B8u;
        // 0x24e3bc: 0xa383b848  sb          $v1, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3b8) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24E3C0u;
label_24e3c0:
    // 0x24e3c0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24e3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24e3c4: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x24e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x24e3c8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24e3c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24e3cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e3d0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24e3d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24e3d4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24e3d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24e3d8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24e3d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e3dc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24e3dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e3e0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24e3e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e3e4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24e3e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e3e8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24e3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e3ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24e3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e3f0: 0x8081546  j           func_205518
    ctx->pc = 0x24E3F0u;
    ctx->pc = 0x24E3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E3F0u;
    // 0x24e3f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x24E3F8u;
label_24e3f8:
    // 0x24e3f8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x24e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24e3fc:
    // 0x24e3fc: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x24E3FCu;
    {
        const bool branch_taken_0x24e3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3FCu;
        // 0x24e400: 0xa382b848  sb          $v0, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3fc) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24E404u;
label_24e404:
    // 0x24e404: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x24e404u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x24e408: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e40c: 0xc0930ea  jal         func_24C3A8
    ctx->pc = 0x24E40Cu;
    SET_GPR_U32(ctx, 31, 0x24E414u);
    ctx->pc = 0x24E410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E40Cu;
    // 0x24e410: 0x24c56ba8  addiu       $a1, $a2, 0x6BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 27560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C3A8u, 0x24E40Cu, 0x24E414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E414u;
label_24e414:
    // 0x24e414: 0x10000257  b           . + 4 + (0x257 << 2)
    ctx->pc = 0x24E414u;
    {
        const bool branch_taken_0x24e414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E414u;
        // 0x24e418: 0x8fa80000  lw          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e414) {
            ctx->pc = 0x24ED74u;
            goto label_24ed74;
        }
    }
    ctx->pc = 0x24E41Cu;
label_24e41c:
    // 0x24e41c: 0xc093242  jal         func_24C908
    ctx->pc = 0x24E41Cu;
    SET_GPR_U32(ctx, 31, 0x24E424u);
    ctx->pc = 0x24C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C908u, 0x24E41Cu, 0x24E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E424u;
label_24e424:
    // 0x24e424: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24e424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e42c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24E42Cu;
    {
        const bool branch_taken_0x24e42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E42Cu;
        // 0x24e430: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e42c) {
            ctx->pc = 0x24E450u;
            goto label_24e450;
        }
    }
    ctx->pc = 0x24E434u;
    // 0x24e434: 0x1440024f  bnez        $v0, . + 4 + (0x24F << 2)
    ctx->pc = 0x24E434u;
    {
        const bool branch_taken_0x24e434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E434u;
        // 0x24e438: 0x8fa80000  lw          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e434) {
            ctx->pc = 0x24ED74u;
            goto label_24ed74;
        }
    }
    ctx->pc = 0x24E43Cu;
    // 0x24e43c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e440: 0x5062024b  beql        $v1, $v0, . + 4 + (0x24B << 2)
    ctx->pc = 0x24E440u;
    {
        const bool branch_taken_0x24e440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e440) {
            ctx->pc = 0x24E444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E440u;
            // 0x24e444: 0xa383b848  sb          $v1, -0x47B8($gp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED70u;
            goto label_24ed70;
        }
    }
    ctx->pc = 0x24E448u;
    // 0x24e448: 0x1000024b  b           . + 4 + (0x24B << 2)
    ctx->pc = 0x24E448u;
    {
        const bool branch_taken_0x24e448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E448u;
        // 0x24e44c: 0x3c0a0035  lui         $t2, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e448) {
            ctx->pc = 0x24ED78u;
            goto label_24ed78;
        }
    }
    ctx->pc = 0x24E450u;
label_24e450:
    // 0x24e450: 0xc094ec8  jal         func_253B20
    ctx->pc = 0x24E450u;
    SET_GPR_U32(ctx, 31, 0x24E458u);
    ctx->pc = 0x24E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E450u;
    // 0x24e454: 0x8f84b858  lw          $a0, -0x47A8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B20u, 0x24E450u, 0x24E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E458u;
label_24e458:
    // 0x24e458: 0xc0934b6  jal         func_24D2D8
    ctx->pc = 0x24E458u;
    SET_GPR_U32(ctx, 31, 0x24E460u);
    ctx->pc = 0x24E45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E458u;
    // 0x24e45c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D2D8u, 0x24E458u, 0x24E460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E460u;
label_24e460:
    // 0x24e460: 0xa380b854  sb          $zero, -0x47AC($gp)
    ctx->pc = 0x24e460u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948948), (uint8_t)GPR_U32(ctx, 0));
    // 0x24e464: 0x10000249  b           . + 4 + (0x249 << 2)
    ctx->pc = 0x24E464u;
    {
        const bool branch_taken_0x24e464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E464u;
        // 0x24e468: 0xaf80b858  sw          $zero, -0x47A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e464) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24E46Cu;
label_24e46c:
    // 0x24e46c: 0x8f83b858  lw          $v1, -0x47A8($gp)
    ctx->pc = 0x24e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948952)));
    // 0x24e470: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x24e470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x24e474: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x24e474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24e478: 0x3c12002f  lui         $s2, 0x2F
    ctx->pc = 0x24e478u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
    // 0x24e47c: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x24e47cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24e480: 0x26522c18  addiu       $s2, $s2, 0x2C18
    ctx->pc = 0x24e480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x24e484: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24e484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24e488: 0x8f91a22c  lw          $s1, -0x5DD4($gp)
    ctx->pc = 0x24e488u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24e48c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24e490: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x24e490u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x24e494: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x24e494u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e498: 0x26102140  addiu       $s0, $s0, 0x2140
    ctx->pc = 0x24e498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8512));
    // 0x24e49c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x24e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x24e4a0: 0xc090d0a  jal         func_243428
    ctx->pc = 0x24E4A0u;
    SET_GPR_U32(ctx, 31, 0x24E4A8u);
    ctx->pc = 0x24E4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E4A0u;
    // 0x24e4a4: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x24E4A0u, 0x24E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E4A8u;
label_24e4a8:
    // 0x24e4a8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24e4ac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x24e4acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4b0: 0x8e670f44  lw          $a3, 0xF44($s3)
    ctx->pc = 0x24e4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3908)));
    // 0x24e4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24e4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24e4bc: 0x8e650f40  lw          $a1, 0xF40($s3)
    ctx->pc = 0x24e4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3904)));
    // 0x24e4c0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x24e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x24e4c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24e4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e4cc: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x24E4CCu;
    SET_GPR_U32(ctx, 31, 0x24E4D4u);
    ctx->pc = 0x24E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E4CCu;
    // 0x24e4d0: 0x8c490f48  lw          $t1, 0xF48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x24E4CCu, 0x24E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E4D4u;
label_24e4d4:
    // 0x24e4d4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x24e4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x24e4d8: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24e4dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4e0: 0x24c6d2a0  addiu       $a2, $a2, -0x2D60
    ctx->pc = 0x24e4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955680));
    // 0x24e4e4: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24E4E4u;
    SET_GPR_U32(ctx, 31, 0x24E4ECu);
    ctx->pc = 0x24E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E4E4u;
    // 0x24e4e8: 0x34a5647f  ori         $a1, $a1, 0x647F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24E4E4u, 0x24E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E4ECu;
label_24e4ec:
    // 0x24e4ec: 0x8f82b858  lw          $v0, -0x47A8($gp)
    ctx->pc = 0x24e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948952)));
    // 0x24e4f0: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x24e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x24e4f4: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x24e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24e4f8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x24e4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24e4fc: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x24e4fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24e500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e504: 0x24ac4018  addiu       $t4, $a1, 0x4018
    ctx->pc = 0x24e504u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 16408));
    // 0x24e508: 0x68470013  ldl         $a3, 0x13($v0)
    ctx->pc = 0x24e508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24e50c: 0x6c47000c  ldr         $a3, 0xC($v0)
    ctx->pc = 0x24e50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x24e510: 0x6848001b  ldl         $t0, 0x1B($v0)
    ctx->pc = 0x24e510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x24e514: 0x6c480014  ldr         $t0, 0x14($v0)
    ctx->pc = 0x24e514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x24e518: 0x684a0023  ldl         $t2, 0x23($v0)
    ctx->pc = 0x24e518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x24e51c: 0x6c4a001c  ldr         $t2, 0x1C($v0)
    ctx->pc = 0x24e51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x24e520: 0xb1870007  sdl         $a3, 0x7($t4)
    ctx->pc = 0x24e520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e524: 0xb5870000  sdr         $a3, 0x0($t4)
    ctx->pc = 0x24e524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e528: 0xb188000f  sdl         $t0, 0xF($t4)
    ctx->pc = 0x24e528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e52c: 0xb5880008  sdr         $t0, 0x8($t4)
    ctx->pc = 0x24e52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e530: 0xb18a0017  sdl         $t2, 0x17($t4)
    ctx->pc = 0x24e530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e534: 0xb58a0010  sdr         $t2, 0x10($t4)
    ctx->pc = 0x24e534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e538: 0x6847002b  ldl         $a3, 0x2B($v0)
    ctx->pc = 0x24e538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24e53c: 0x6c470024  ldr         $a3, 0x24($v0)
    ctx->pc = 0x24e53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x24e540: 0x68480033  ldl         $t0, 0x33($v0)
    ctx->pc = 0x24e540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x24e544: 0x6c48002c  ldr         $t0, 0x2C($v0)
    ctx->pc = 0x24e544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x24e548: 0xb187001f  sdl         $a3, 0x1F($t4)
    ctx->pc = 0x24e548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e54c: 0xb5870018  sdr         $a3, 0x18($t4)
    ctx->pc = 0x24e54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e550: 0xb1880027  sdl         $t0, 0x27($t4)
    ctx->pc = 0x24e550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e554: 0xb5880020  sdr         $t0, 0x20($t4)
    ctx->pc = 0x24e554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e558: 0xa384b848  sb          $a0, -0x47B8($gp)
    ctx->pc = 0x24e558u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 4));
    // 0x24e55c: 0xa380b854  sb          $zero, -0x47AC($gp)
    ctx->pc = 0x24e55cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948948), (uint8_t)GPR_U32(ctx, 0));
label_24e560:
    // 0x24e560: 0xc093242  jal         func_24C908
    ctx->pc = 0x24E560u;
    SET_GPR_U32(ctx, 31, 0x24E568u);
    ctx->pc = 0x24C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C908u, 0x24E560u, 0x24E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E568u;
label_24e568:
    // 0x24e568: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e570: 0x10820047  beq         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x24E570u;
    {
        const bool branch_taken_0x24e570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E570u;
        // 0x24e574: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e570) {
            ctx->pc = 0x24E690u;
            goto label_24e690;
        }
    }
    ctx->pc = 0x24E578u;
    // 0x24e578: 0x144001fe  bnez        $v0, . + 4 + (0x1FE << 2)
    ctx->pc = 0x24E578u;
    {
        const bool branch_taken_0x24e578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E578u;
        // 0x24e57c: 0x8fa80000  lw          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e578) {
            ctx->pc = 0x24ED74u;
            goto label_24ed74;
        }
    }
    ctx->pc = 0x24E580u;
    // 0x24e580: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24e580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e584: 0x148201fc  bne         $a0, $v0, . + 4 + (0x1FC << 2)
    ctx->pc = 0x24E584u;
    {
        const bool branch_taken_0x24e584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E584u;
        // 0x24e588: 0x3c0a0035  lui         $t2, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e584) {
            ctx->pc = 0x24ED78u;
            goto label_24ed78;
        }
    }
    ctx->pc = 0x24E58Cu;
    // 0x24e58c: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24e590: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x24e590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x24e594: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e598: 0x144001f4  bnez        $v0, . + 4 + (0x1F4 << 2)
    ctx->pc = 0x24E598u;
    {
        const bool branch_taken_0x24e598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E598u;
        // 0x24e59c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e598) {
            ctx->pc = 0x24ED6Cu;
            goto label_24ed6c;
        }
    }
    ctx->pc = 0x24E5A0u;
    // 0x24e5a0: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x24E5A0u;
    {
        const bool branch_taken_0x24e5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5A0u;
        // 0x24e5a4: 0xa384b848  sb          $a0, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5a0) {
            ctx->pc = 0x24ED70u;
            goto label_24ed70;
        }
    }
    ctx->pc = 0x24E5A8u;
label_24e5a8:
    // 0x24e5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e5ac: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x24e5acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x24e5b0: 0xa382b854  sb          $v0, -0x47AC($gp)
    ctx->pc = 0x24e5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948948), (uint8_t)GPR_U32(ctx, 2));
    // 0x24e5b4: 0x24a54018  addiu       $a1, $a1, 0x4018
    ctx->pc = 0x24e5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16408));
    // 0x24e5b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24e5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e5bc: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x24e5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x24e5c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24e5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e5c4: 0x24080108  addiu       $t0, $zero, 0x108
    ctx->pc = 0x24e5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x24e5c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24e5c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e5cc: 0xc08bf66  jal         func_22FD98
    ctx->pc = 0x24E5CCu;
    SET_GPR_U32(ctx, 31, 0x24E5D4u);
    ctx->pc = 0x24E5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E5CCu;
    // 0x24e5d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FD98u, 0x24E5CCu, 0x24E5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5D4u;
label_24e5d4:
    // 0x24e5d4: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x24e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24e5d8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x24e5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x24e5dc: 0x24a56ad8  addiu       $a1, $a1, 0x6AD8
    ctx->pc = 0x24e5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27352));
    // 0x24e5e0: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x24E5E0u;
    SET_GPR_U32(ctx, 31, 0x24E5E8u);
    ctx->pc = 0x24E5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E5E0u;
    // 0x24e5e4: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x24E5E0u, 0x24E5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5E8u;
label_24e5e8:
    // 0x24e5e8: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x24e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24e5ec: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x24e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x24e5f0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24e5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24e5f4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x24e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x24e5f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e5fc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x24e5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x24e600: 0x100001e2  b           . + 4 + (0x1E2 << 2)
    ctx->pc = 0x24E600u;
    {
        const bool branch_taken_0x24e600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E600u;
        // 0x24e604: 0xa385b848  sb          $a1, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e600) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24E608u;
label_24e608:
    // 0x24e608: 0xc08bfb6  jal         func_22FED8
    ctx->pc = 0x24E608u;
    SET_GPR_U32(ctx, 31, 0x24E610u);
    ctx->pc = 0x24E60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E608u;
    // 0x24e60c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED8u, 0x24E608u, 0x24E610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E610u;
label_24e610:
    // 0x24e610: 0x8f83a034  lw          $v1, -0x5FCC($gp)
    ctx->pc = 0x24e610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x24e614: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x24e614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24e618: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x24E618u;
    {
        const bool branch_taken_0x24e618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E618u;
        // 0x24e61c: 0x3c1101fc  lui         $s1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e618) {
            ctx->pc = 0x24E698u;
            goto label_24e698;
        }
    }
    ctx->pc = 0x24E620u;
    // 0x24e620: 0x82224018  lb          $v0, 0x4018($s1)
    ctx->pc = 0x24e620u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16408)));
    // 0x24e624: 0x104001d0  beqz        $v0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x24E624u;
    {
        const bool branch_taken_0x24e624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E624u;
        // 0x24e628: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e624) {
            ctx->pc = 0x24ED68u;
            goto label_24ed68;
        }
    }
    ctx->pc = 0x24E62Cu;
    // 0x24e62c: 0x0  nop
    ctx->pc = 0x24e62cu;
    // NOP
label_24e630:
    // 0x24e630: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x24e630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24e634: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24e638: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x24e638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24e63c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24E63Cu;
    {
        const bool branch_taken_0x24e63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E63Cu;
        // 0x24e640: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e63c) {
            ctx->pc = 0x24E690u;
            goto label_24e690;
        }
    }
    ctx->pc = 0x24E644u;
    // 0x24e644: 0x26254018  addiu       $a1, $s1, 0x4018
    ctx->pc = 0x24e644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16408));
    // 0x24e648: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x24e648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24e64c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x24e64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x24e650: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x24E650u;
    SET_GPR_U32(ctx, 31, 0x24E658u);
    ctx->pc = 0x24E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E650u;
    // 0x24e654: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x24E650u, 0x24E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E658u;
label_24e658:
    // 0x24e658: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x24E658u;
    {
        const bool branch_taken_0x24e658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e658) {
            ctx->pc = 0x24E65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E658u;
            // 0x24e65c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e630;
        }
    }
    ctx->pc = 0x24E660u;
    // 0x24e660: 0x8f84a0d8  lw          $a0, -0x5F28($gp)
    ctx->pc = 0x24e660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24e664: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x24e664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x24e668: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x24e668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24e66c: 0xaf90b858  sw          $s0, -0x47A8($gp)
    ctx->pc = 0x24e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948952), GPR_U32(ctx, 16));
    // 0x24e670: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24e670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24e674: 0xa383b848  sb          $v1, -0x47B8($gp)
    ctx->pc = 0x24e674u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 3));
    // 0x24e678: 0xaf86a0d8  sw          $a2, -0x5F28($gp)
    ctx->pc = 0x24e678u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 6));
    // 0x24e67c: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x24e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24e680: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24e684: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x24e684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24e688: 0x144001ba  bnez        $v0, . + 4 + (0x1BA << 2)
    ctx->pc = 0x24E688u;
    {
        const bool branch_taken_0x24e688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E688u;
        // 0x24e68c: 0x8fa80000  lw          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e688) {
            ctx->pc = 0x24ED74u;
            goto label_24ed74;
        }
    }
    ctx->pc = 0x24E690u;
label_24e690:
    // 0x24e690: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x24E690u;
    {
        const bool branch_taken_0x24e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E690u;
        // 0x24e694: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e690) {
            ctx->pc = 0x24ED6Cu;
            goto label_24ed6c;
        }
    }
    ctx->pc = 0x24E698u;
label_24e698:
    // 0x24e698: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x24e698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x24e69c: 0x104001b4  beqz        $v0, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x24E69Cu;
    {
        const bool branch_taken_0x24e69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E69Cu;
        // 0x24e6a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e69c) {
            ctx->pc = 0x24ED70u;
            goto label_24ed70;
        }
    }
    ctx->pc = 0x24E6A4u;
    // 0x24e6a4: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x24E6A4u;
    {
        const bool branch_taken_0x24e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6A4u;
        // 0x24e6a8: 0xa382b848  sb          $v0, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e6a4) {
            ctx->pc = 0x24ED70u;
            goto label_24ed70;
        }
    }
    ctx->pc = 0x24E6ACu;
label_24e6ac:
    // 0x24e6ac: 0xc0acf14  jal         func_2B3C50
    ctx->pc = 0x24E6ACu;
    SET_GPR_U32(ctx, 31, 0x24E6B4u);
    ctx->pc = 0x24E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E6ACu;
    // 0x24e6b0: 0x3c1101fc  lui         $s1, 0x1FC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)508 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3C50u, 0x24E6ACu, 0x24E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E6B4u;
label_24e6b4:
    // 0x24e6b4: 0x26304018  addiu       $s0, $s1, 0x4018
    ctx->pc = 0x24e6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16408));
    // 0x24e6b8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x24e6bc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x24e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x24e6c0: 0x248465e8  addiu       $a0, $a0, 0x65E8
    ctx->pc = 0x24e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26088));
    // 0x24e6c4: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x24E6C4u;
    SET_GPR_U32(ctx, 31, 0x24E6CCu);
    ctx->pc = 0x24E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E6C4u;
    // 0x24e6c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x24E6C4u, 0x24E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E6CCu;
label_24e6cc:
    // 0x24e6cc: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x24e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x24e6d0: 0xc091f1e  jal         func_247C78
    ctx->pc = 0x24E6D0u;
    SET_GPR_U32(ctx, 31, 0x24E6D8u);
    ctx->pc = 0x24E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E6D0u;
    // 0x24e6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247C78u, 0x24E6D0u, 0x24E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E6D8u;
label_24e6d8:
    // 0x24e6d8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x24e6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24e6dc: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x24E6DCu;
    {
        const bool branch_taken_0x24e6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6DCu;
        // 0x24e6e0: 0xa6020026  sh          $v0, 0x26($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e6dc) {
            ctx->pc = 0x24E768u;
            goto label_24e768;
        }
    }
    ctx->pc = 0x24E6E4u;
    // 0x24e6e4: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x24e6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x24e6e8: 0xc0acf40  jal         func_2B3D00
    ctx->pc = 0x24E6E8u;
    SET_GPR_U32(ctx, 31, 0x24E6F0u);
    ctx->pc = 0x24E6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E6E8u;
    // 0x24e6ec: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3D00u, 0x24E6E8u, 0x24E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E6F0u;
label_24e6f0:
    // 0x24e6f0: 0x96050026  lhu         $a1, 0x26($s0)
    ctx->pc = 0x24e6f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x24e6f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24e6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e6f8: 0x8f83a0d0  lw          $v1, -0x5F30($gp)
    ctx->pc = 0x24e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x24e6fc: 0x96040026  lhu         $a0, 0x26($s0)
    ctx->pc = 0x24e6fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x24e700: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24e704: 0x8f86a22c  lw          $a2, -0x5DD4($gp)
    ctx->pc = 0x24e704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24e708: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24e708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24e70c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x24e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x24e710: 0xa6040026  sh          $a0, 0x26($s0)
    ctx->pc = 0x24e710u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 4));
    // 0x24e714: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x24e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24e718: 0x14470022  bne         $v0, $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x24E718u;
    {
        const bool branch_taken_0x24e718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x24E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E718u;
        // 0x24e71c: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e718) {
            ctx->pc = 0x24E7A4u;
            goto label_24e7a4;
        }
    }
    ctx->pc = 0x24E720u;
    // 0x24e720: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24e720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24e724: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24e724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24e728: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x24e728u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x24e72c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24e730: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x24e730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
    // 0x24e734: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24e734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e738: 0xc094e3c  jal         func_2538F0
    ctx->pc = 0x24E738u;
    SET_GPR_U32(ctx, 31, 0x24E740u);
    ctx->pc = 0x24E73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E738u;
    // 0x24e73c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2538F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538F0u, 0x24E738u, 0x24E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E740u;
label_24e740:
    // 0x24e740: 0x8e250764  lw          $a1, 0x764($s1)
    ctx->pc = 0x24e740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1892)));
    // 0x24e744: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24e744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e748: 0x8f88a22c  lw          $t0, -0x5DD4($gp)
    ctx->pc = 0x24e748u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24e74c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x24e74cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e750: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24e750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24e754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24e754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e758: 0xc091302  jal         func_244C08
    ctx->pc = 0x24E758u;
    SET_GPR_U32(ctx, 31, 0x24E760u);
    ctx->pc = 0x24E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E758u;
    // 0x24e75c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244C08u, 0x24E758u, 0x24E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E760u;
label_24e760:
    // 0x24e760: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x24E760u;
    {
        const bool branch_taken_0x24e760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E760u;
        // 0x24e764: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e760) {
            ctx->pc = 0x24ED6Cu;
            goto label_24ed6c;
        }
    }
    ctx->pc = 0x24E768u;
label_24e768:
    // 0x24e768: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24e768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e76c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24e76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24e770: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24e770u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24e774: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24e774u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24e778: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24e778u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24e77c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24e77cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e780: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24e780u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e784: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24e784u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e788: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24e788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e78c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24e78cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e790: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24e790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e794: 0x8092e82  j           func_24BA08
    ctx->pc = 0x24E794u;
    ctx->pc = 0x24E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E794u;
    // 0x24e798: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    mmExitMenu_0x24ba08(rdram, ctx, runtime); return;
    ctx->pc = 0x24E79Cu;
label_24e79c:
    // 0x24e79c: 0x3c1101fc  lui         $s1, 0x1FC
    ctx->pc = 0x24e79cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)508 << 16));
    // 0x24e7a0: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_24e7a4:
    // 0x24e7a4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24e7a8: 0x26254018  addiu       $a1, $s1, 0x4018
    ctx->pc = 0x24e7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16408));
    // 0x24e7ac: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24e7b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24e7b4: 0x94a40024  lhu         $a0, 0x24($a1)
    ctx->pc = 0x24e7b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x24e7b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e7bc: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x24e7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x24e7c0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x24e7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e7c4: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x24e7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
    // 0x24e7c8: 0xc094e66  jal         func_253998
    ctx->pc = 0x24E7C8u;
    SET_GPR_U32(ctx, 31, 0x24E7D0u);
    ctx->pc = 0x24E7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E7C8u;
    // 0x24e7cc: 0x94b20026  lhu         $s2, 0x26($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253998u, 0x24E7C8u, 0x24E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E7D0u;
label_24e7d0:
    // 0x24e7d0: 0x8e250764  lw          $a1, 0x764($s1)
    ctx->pc = 0x24e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1892)));
    // 0x24e7d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24e7d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7d8: 0x8f88a0d0  lw          $t0, -0x5F30($gp)
    ctx->pc = 0x24e7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x24e7dc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x24e7dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7e0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x24e7e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e7e8: 0xc091302  jal         func_244C08
    ctx->pc = 0x24E7E8u;
    SET_GPR_U32(ctx, 31, 0x24E7F0u);
    ctx->pc = 0x24E7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E7E8u;
    // 0x24e7ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244C08u, 0x24E7E8u, 0x24E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E7F0u;
label_24e7f0:
    // 0x24e7f0: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x24E7F0u;
    {
        const bool branch_taken_0x24e7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7F0u;
        // 0x24e7f4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e7f0) {
            ctx->pc = 0x24ED6Cu;
            goto label_24ed6c;
        }
    }
    ctx->pc = 0x24E7F8u;
label_24e7f8:
    // 0x24e7f8: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x24E7F8u;
    SET_GPR_U32(ctx, 31, 0x24E800u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x24E7F8u, 0x24E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E800u;
label_24e800:
    // 0x24e800: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24e800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24e804: 0x14430162  bne         $v0, $v1, . + 4 + (0x162 << 2)
    ctx->pc = 0x24E804u;
    {
        const bool branch_taken_0x24e804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E804u;
        // 0x24e808: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e804) {
            ctx->pc = 0x24ED90u;
            goto label_24ed90;
        }
    }
    ctx->pc = 0x24E80Cu;
    // 0x24e80c: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x24E80Cu;
    SET_GPR_U32(ctx, 31, 0x24E814u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x24E80Cu, 0x24E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E814u;
label_24e814:
    // 0x24e814: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24e814u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e818: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x24e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24e81c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24E81Cu;
    {
        const bool branch_taken_0x24e81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E81Cu;
        // 0x24e820: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e81c) {
            ctx->pc = 0x24E868u;
            goto label_24e868;
        }
    }
    ctx->pc = 0x24E824u;
    // 0x24e824: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E824u;
    {
        const bool branch_taken_0x24e824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E824u;
        // 0x24e828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e824) {
            ctx->pc = 0x24E83Cu;
            goto label_24e83c;
        }
    }
    ctx->pc = 0x24E82Cu;
    // 0x24e82c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24E82Cu;
    {
        const bool branch_taken_0x24e82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E82Cu;
        // 0x24e830: 0x8f82a22c  lw          $v0, -0x5DD4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e82c) {
            ctx->pc = 0x24E850u;
            goto label_24e850;
        }
    }
    ctx->pc = 0x24E834u;
    // 0x24e834: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x24E834u;
    {
        const bool branch_taken_0x24e834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e834) {
            ctx->pc = 0x24E9F8u;
            goto label_24e9f8;
        }
    }
    ctx->pc = 0x24E83Cu;
label_24e83c:
    // 0x24e83c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24e840: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24E840u;
    {
        const bool branch_taken_0x24e840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e840) {
            ctx->pc = 0x24E894u;
            goto label_24e894;
        }
    }
    ctx->pc = 0x24E848u;
    // 0x24e848: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x24E848u;
    {
        const bool branch_taken_0x24e848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e848) {
            ctx->pc = 0x24E9F8u;
            goto label_24e9f8;
        }
    }
    ctx->pc = 0x24E850u;
label_24e850:
    // 0x24e850: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x24e850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x24e854: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24e854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24e858: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24e858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_24e85c:
    // 0x24e85c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x24e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x24e860: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x24E860u;
    {
        const bool branch_taken_0x24e860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E860u;
        // 0x24e864: 0xa384b848  sb          $a0, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e860) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24E868u;
label_24e868:
    // 0x24e868: 0xc091298  jal         func_244A60
    ctx->pc = 0x24E868u;
    SET_GPR_U32(ctx, 31, 0x24E870u);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x24E868u, 0x24E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E870u;
label_24e870:
    // 0x24e870: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x24E870u;
    SET_GPR_U32(ctx, 31, 0x24E878u);
    ctx->pc = 0x24E874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E870u;
    // 0x24e874: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x24E870u, 0x24E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E878u;
label_24e878:
    // 0x24e878: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24e878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24e87c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e880: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x24e880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x24e884: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24E884u;
    SET_GPR_U32(ctx, 31, 0x24E88Cu);
    ctx->pc = 0x24E888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E884u;
    // 0x24e888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24E884u, 0x24E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E88Cu;
label_24e88c:
    // 0x24e88c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24E88Cu;
    {
        const bool branch_taken_0x24e88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E88Cu;
        // 0x24e890: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e88c) {
            ctx->pc = 0x24E8A0u;
            goto label_24e8a0;
        }
    }
    ctx->pc = 0x24E894u;
label_24e894:
    // 0x24e894: 0xc091298  jal         func_244A60
    ctx->pc = 0x24E894u;
    SET_GPR_U32(ctx, 31, 0x24E89Cu);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x24E894u, 0x24E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E89Cu;
label_24e89c:
    // 0x24e89c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24e8a0:
    // 0x24e8a0: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x24E8A0u;
    {
        const bool branch_taken_0x24e8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8A0u;
        // 0x24e8a4: 0xa382b848  sb          $v0, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8a0) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24E8A8u;
label_24e8a8:
    // 0x24e8a8: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x24E8A8u;
    SET_GPR_U32(ctx, 31, 0x24E8B0u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x24E8A8u, 0x24E8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E8B0u;
label_24e8b0:
    // 0x24e8b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e8b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e8b8: 0x16020135  bne         $s0, $v0, . + 4 + (0x135 << 2)
    ctx->pc = 0x24E8B8u;
    {
        const bool branch_taken_0x24e8b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8B8u;
        // 0x24e8bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8b8) {
            ctx->pc = 0x24ED90u;
            goto label_24ed90;
        }
    }
    ctx->pc = 0x24E8C0u;
    // 0x24e8c0: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x24E8C0u;
    SET_GPR_U32(ctx, 31, 0x24E8C8u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x24E8C0u, 0x24E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E8C8u;
label_24e8c8:
    // 0x24e8c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24e8c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e8cc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x24e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24e8d0: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x24E8D0u;
    {
        const bool branch_taken_0x24e8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8D0u;
        // 0x24e8d4: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8d0) {
            ctx->pc = 0x24E9BCu;
            goto label_24e9bc;
        }
    }
    ctx->pc = 0x24E8D8u;
    // 0x24e8d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E8D8u;
    {
        const bool branch_taken_0x24e8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8D8u;
        // 0x24e8dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8d8) {
            ctx->pc = 0x24E8F0u;
            goto label_24e8f0;
        }
    }
    ctx->pc = 0x24E8E0u;
    // 0x24e8e0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24E8E0u;
    {
        const bool branch_taken_0x24e8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8E0u;
        // 0x24e8e4: 0x9382b854  lbu         $v0, -0x47AC($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8e0) {
            ctx->pc = 0x24E904u;
            goto label_24e904;
        }
    }
    ctx->pc = 0x24E8E8u;
    // 0x24e8e8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x24E8E8u;
    {
        const bool branch_taken_0x24e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e8e8) {
            ctx->pc = 0x24E9F8u;
            goto label_24e9f8;
        }
    }
    ctx->pc = 0x24E8F0u;
label_24e8f0:
    // 0x24e8f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24e8f4: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x24E8F4u;
    {
        const bool branch_taken_0x24e8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e8f4) {
            ctx->pc = 0x24E9E8u;
            goto label_24e9e8;
        }
    }
    ctx->pc = 0x24E8FCu;
    // 0x24e8fc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x24E8FCu;
    {
        const bool branch_taken_0x24e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e8fc) {
            ctx->pc = 0x24E9F8u;
            goto label_24e9f8;
        }
    }
    ctx->pc = 0x24E904u;
label_24e904:
    // 0x24e904: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E904u;
    {
        const bool branch_taken_0x24e904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E904u;
        // 0x24e908: 0x8f82b858  lw          $v0, -0x47A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e904) {
            ctx->pc = 0x24E920u;
            goto label_24e920;
        }
    }
    ctx->pc = 0x24E90Cu;
    // 0x24e90c: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x24e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x24e910: 0xc094ea6  jal         func_253A98
    ctx->pc = 0x24E910u;
    SET_GPR_U32(ctx, 31, 0x24E918u);
    ctx->pc = 0x24E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E910u;
    // 0x24e914: 0x24844018  addiu       $a0, $a0, 0x4018 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253A98u, 0x24E910u, 0x24E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E918u;
label_24e918:
    // 0x24e918: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24E918u;
    {
        const bool branch_taken_0x24e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E918u;
        // 0x24e91c: 0xaf82b858  sw          $v0, -0x47A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e918) {
            ctx->pc = 0x24E988u;
            goto label_24e988;
        }
    }
    ctx->pc = 0x24E920u;
label_24e920:
    // 0x24e920: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x24e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x24e924: 0x8f84a22c  lw          $a0, -0x5DD4($gp)
    ctx->pc = 0x24e924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24e928: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x24e928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x24e92c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x24e92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24e930: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24e934: 0x24a74018  addiu       $a3, $a1, 0x4018
    ctx->pc = 0x24e934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16408));
    // 0x24e938: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x24e938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x24e93c: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x24e93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24e940: 0x68e4000f  ldl         $a0, 0xF($a3)
    ctx->pc = 0x24e940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x24e944: 0x6ce40008  ldr         $a0, 0x8($a3)
    ctx->pc = 0x24e944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x24e948: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x24e948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x24e94c: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x24e94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x24e950: 0xb0430013  sdl         $v1, 0x13($v0)
    ctx->pc = 0x24e950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e954: 0xb443000c  sdr         $v1, 0xC($v0)
    ctx->pc = 0x24e954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e958: 0xb044001b  sdl         $a0, 0x1B($v0)
    ctx->pc = 0x24e958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e95c: 0xb4440014  sdr         $a0, 0x14($v0)
    ctx->pc = 0x24e95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e960: 0xb0460023  sdl         $a2, 0x23($v0)
    ctx->pc = 0x24e960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e964: 0xb446001c  sdr         $a2, 0x1C($v0)
    ctx->pc = 0x24e964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e968: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x24e968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x24e96c: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x24e96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24e970: 0x68e40027  ldl         $a0, 0x27($a3)
    ctx->pc = 0x24e970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x24e974: 0x6ce40020  ldr         $a0, 0x20($a3)
    ctx->pc = 0x24e974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x24e978: 0xb043002b  sdl         $v1, 0x2B($v0)
    ctx->pc = 0x24e978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e97c: 0xb4430024  sdr         $v1, 0x24($v0)
    ctx->pc = 0x24e97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e980: 0xb0440033  sdl         $a0, 0x33($v0)
    ctx->pc = 0x24e980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e984: 0xb444002c  sdr         $a0, 0x2C($v0)
    ctx->pc = 0x24e984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24e988:
    // 0x24e988: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24e988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24e98c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24e98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e990: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24e990u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24e994: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24e994u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24e998: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24e998u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24e99c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24e99cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e9a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24e9a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e9a4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24e9a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e9a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24e9a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e9ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24e9acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e9b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24e9b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e9b4: 0x80934b6  j           func_24D2D8
    ctx->pc = 0x24E9B4u;
    ctx->pc = 0x24E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9B4u;
    // 0x24e9b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D2D8u;
    updateDir_0x24d2d8(rdram, ctx, runtime); return;
    ctx->pc = 0x24E9BCu;
label_24e9bc:
    // 0x24e9bc: 0xc091298  jal         func_244A60
    ctx->pc = 0x24E9BCu;
    SET_GPR_U32(ctx, 31, 0x24E9C4u);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x24E9BCu, 0x24E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9C4u;
label_24e9c4:
    // 0x24e9c4: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x24E9C4u;
    SET_GPR_U32(ctx, 31, 0x24E9CCu);
    ctx->pc = 0x24E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9C4u;
    // 0x24e9c8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x24E9C4u, 0x24E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9CCu;
label_24e9cc:
    // 0x24e9cc: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24e9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24e9d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9d4: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x24e9d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x24e9d8: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24E9D8u;
    SET_GPR_U32(ctx, 31, 0x24E9E0u);
    ctx->pc = 0x24E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9D8u;
    // 0x24e9dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24E9D8u, 0x24E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9E0u;
label_24e9e0:
    // 0x24e9e0: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x24E9E0u;
    {
        const bool branch_taken_0x24e9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9E0u;
        // 0x24e9e4: 0xa390b848  sb          $s0, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9e0) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24E9E8u;
label_24e9e8:
    // 0x24e9e8: 0xc091298  jal         func_244A60
    ctx->pc = 0x24E9E8u;
    SET_GPR_U32(ctx, 31, 0x24E9F0u);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x24E9E8u, 0x24E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9F0u;
label_24e9f0:
    // 0x24e9f0: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x24E9F0u;
    {
        const bool branch_taken_0x24e9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9F0u;
        // 0x24e9f4: 0xa390b848  sb          $s0, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9f0) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24E9F8u;
label_24e9f8:
    // 0x24e9f8: 0xc091298  jal         func_244A60
    ctx->pc = 0x24E9F8u;
    SET_GPR_U32(ctx, 31, 0x24EA00u);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x24E9F8u, 0x24EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA00u;
label_24ea00:
    // 0x24ea00: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x24EA00u;
    SET_GPR_U32(ctx, 31, 0x24EA08u);
    ctx->pc = 0x24EA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EA00u;
    // 0x24ea04: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x24EA00u, 0x24EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA08u;
label_24ea08:
    // 0x24ea08: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x24ea08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x24ea0c: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24ea0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24ea10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24ea10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea14: 0x24c6d268  addiu       $a2, $a2, -0x2D98
    ctx->pc = 0x24ea14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955624));
    // 0x24ea18: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24EA18u;
    SET_GPR_U32(ctx, 31, 0x24EA20u);
    ctx->pc = 0x24EA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EA18u;
    // 0x24ea1c: 0x34a5647f  ori         $a1, $a1, 0x647F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24EA18u, 0x24EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA20u;
label_24ea20:
    // 0x24ea20: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x24ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24ea24: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x24EA24u;
    {
        const bool branch_taken_0x24ea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA24u;
        // 0x24ea28: 0xa382b848  sb          $v0, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea24) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24EA2Cu;
label_24ea2c:
    // 0x24ea2c: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x24EA2Cu;
    SET_GPR_U32(ctx, 31, 0x24EA34u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x24EA2Cu, 0x24EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA34u;
label_24ea34:
    // 0x24ea34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ea38: 0x144300d5  bne         $v0, $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x24EA38u;
    {
        const bool branch_taken_0x24ea38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA38u;
        // 0x24ea3c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea38) {
            ctx->pc = 0x24ED90u;
            goto label_24ed90;
        }
    }
    ctx->pc = 0x24EA40u;
    // 0x24ea40: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x24EA40u;
    SET_GPR_U32(ctx, 31, 0x24EA48u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x24EA40u, 0x24EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA48u;
label_24ea48:
    // 0x24ea48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ea4c: 0x1443002b  bne         $v0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x24EA4Cu;
    {
        const bool branch_taken_0x24ea4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA4Cu;
        // 0x24ea50: 0x9382b854  lbu         $v0, -0x47AC($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea4c) {
            ctx->pc = 0x24EAFCu;
            goto label_24eafc;
        }
    }
    ctx->pc = 0x24EA54u;
    // 0x24ea54: 0xc091298  jal         func_244A60
    ctx->pc = 0x24EA54u;
    SET_GPR_U32(ctx, 31, 0x24EA5Cu);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x24EA54u, 0x24EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA5Cu;
label_24ea5c:
    // 0x24ea5c: 0x8f84a0d8  lw          $a0, -0x5F28($gp)
    ctx->pc = 0x24ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24ea60: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x24ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x24ea64: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24ea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24ea68: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x24EA68u;
    {
        const bool branch_taken_0x24ea68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA68u;
        // 0x24ea6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea68) {
            ctx->pc = 0x24EAF0u;
            goto label_24eaf0;
        }
    }
    ctx->pc = 0x24EA70u;
    // 0x24ea70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24ea74: 0x8f83b858  lw          $v1, -0x47A8($gp)
    ctx->pc = 0x24ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948952)));
    // 0x24ea78: 0x8f85b864  lw          $a1, -0x479C($gp)
    ctx->pc = 0x24ea78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948964)));
    // 0x24ea7c: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x24ea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x24ea80: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x24ea80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24ea84: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x24ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24ea88: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ea8c: 0xaf86a0d8  sw          $a2, -0x5F28($gp)
    ctx->pc = 0x24ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 6));
    // 0x24ea90: 0xc092e82  jal         func_24BA08
    ctx->pc = 0x24EA90u;
    SET_GPR_U32(ctx, 31, 0x24EA98u);
    ctx->pc = 0x24EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EA90u;
    // 0x24ea94: 0xaf83b85c  sw          $v1, -0x47A4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948956), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA08u, 0x24EA90u, 0x24EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA98u;
label_24ea98:
    // 0x24ea98: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24ea9c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24eaa0: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24eaa4: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24eaa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24eaac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24eaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24eab0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24eab4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24eab4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24eab8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24eabc: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x24eabcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x24eac0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24eac0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24eac4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24eac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eac8: 0x8c440f4c  lw          $a0, 0xF4C($v0)
    ctx->pc = 0x24eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3916)));
    // 0x24eacc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24eaccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24ead0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24ead0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24ead4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24ead4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24ead8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24ead8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24eadc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24eadcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24eae0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24eae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24eae4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24eae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24eae8: 0x80932a0  j           func_24CA80
    ctx->pc = 0x24EAE8u;
    ctx->pc = 0x24EAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EAE8u;
    // 0x24eaec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    mmStartMessage_0x24ca80(rdram, ctx, runtime); return;
    ctx->pc = 0x24EAF0u;
label_24eaf0:
    // 0x24eaf0: 0xaf80a1cc  sw          $zero, -0x5E34($gp)
    ctx->pc = 0x24eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943180), GPR_U32(ctx, 0));
    // 0x24eaf4: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x24EAF4u;
    {
        const bool branch_taken_0x24eaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAF4u;
        // 0x24eaf8: 0xa382b848  sb          $v0, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eaf4) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24EAFCu;
label_24eafc:
    // 0x24eafc: 0x1040ffbe  beqz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x24EAFCu;
    {
        const bool branch_taken_0x24eafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eafc) {
            ctx->pc = 0x24E9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e9f8;
        }
    }
    ctx->pc = 0x24EB04u;
    // 0x24eb04: 0xc094ec8  jal         func_253B20
    ctx->pc = 0x24EB04u;
    SET_GPR_U32(ctx, 31, 0x24EB0Cu);
    ctx->pc = 0x24EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB04u;
    // 0x24eb08: 0x8f84b858  lw          $a0, -0x47A8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B20u, 0x24EB04u, 0x24EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB0Cu;
label_24eb0c:
    // 0x24eb0c: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x24EB0Cu;
    {
        const bool branch_taken_0x24eb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eb0c) {
            ctx->pc = 0x24E9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e9f8;
        }
    }
    ctx->pc = 0x24EB14u;
label_24eb14:
    // 0x24eb14: 0xc093242  jal         func_24C908
    ctx->pc = 0x24EB14u;
    SET_GPR_U32(ctx, 31, 0x24EB1Cu);
    ctx->pc = 0x24C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C908u, 0x24EB14u, 0x24EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB1Cu;
label_24eb1c:
    // 0x24eb1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24eb1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24eb24: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24EB24u;
    {
        const bool branch_taken_0x24eb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB24u;
        // 0x24eb28: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb24) {
            ctx->pc = 0x24EB48u;
            goto label_24eb48;
        }
    }
    ctx->pc = 0x24EB2Cu;
    // 0x24eb2c: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x24EB2Cu;
    {
        const bool branch_taken_0x24eb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB2Cu;
        // 0x24eb30: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb2c) {
            ctx->pc = 0x24ED90u;
            goto label_24ed90;
        }
    }
    ctx->pc = 0x24EB34u;
    // 0x24eb34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24eb38: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24EB38u;
    {
        const bool branch_taken_0x24eb38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB38u;
        // 0x24eb3c: 0xdfbe0090  ld          $fp, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb38) {
            ctx->pc = 0x24EB9Cu;
            goto label_24eb9c;
        }
    }
    ctx->pc = 0x24EB40u;
    // 0x24eb40: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x24EB40u;
    {
        const bool branch_taken_0x24eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eb40) {
            ctx->pc = 0x24ED94u;
            goto label_24ed94;
        }
    }
    ctx->pc = 0x24EB48u;
label_24eb48:
    // 0x24eb48: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24eb4c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24eb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24eb50: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24eb50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24eb54: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24eb54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24eb58: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24eb58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24eb5c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24eb5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24eb60: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24eb60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24eb64: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24eb64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24eb68: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24eb68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24eb6c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24eb6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24eb70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24eb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24eb74: 0x8092e82  j           func_24BA08
    ctx->pc = 0x24EB74u;
    ctx->pc = 0x24EB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB74u;
    // 0x24eb78: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    mmExitMenu_0x24ba08(rdram, ctx, runtime); return;
    ctx->pc = 0x24EB7Cu;
label_24eb7c:
    // 0x24eb7c: 0xc093242  jal         func_24C908
    ctx->pc = 0x24EB7Cu;
    SET_GPR_U32(ctx, 31, 0x24EB84u);
    ctx->pc = 0x24C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C908u, 0x24EB7Cu, 0x24EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB84u;
label_24eb84:
    // 0x24eb84: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x24EB84u;
    {
        const bool branch_taken_0x24eb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB84u;
        // 0x24eb88: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb84) {
            ctx->pc = 0x24ED90u;
            goto label_24ed90;
        }
    }
    ctx->pc = 0x24EB8Cu;
    // 0x24eb8c: 0x4400080  bltz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x24EB8Cu;
    {
        const bool branch_taken_0x24eb8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB8Cu;
        // 0x24eb90: 0x28420003  slti        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb8c) {
            ctx->pc = 0x24ED90u;
            goto label_24ed90;
        }
    }
    ctx->pc = 0x24EB94u;
    // 0x24eb94: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x24EB94u;
    {
        const bool branch_taken_0x24eb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB94u;
        // 0x24eb98: 0xdfbe0090  ld          $fp, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb94) {
            ctx->pc = 0x24ED94u;
            goto label_24ed94;
        }
    }
    ctx->pc = 0x24EB9Cu;
label_24eb9c:
    // 0x24eb9c: 0xc094e46  jal         func_253918
    ctx->pc = 0x24EB9Cu;
    SET_GPR_U32(ctx, 31, 0x24EBA4u);
    ctx->pc = 0x253918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253918u, 0x24EB9Cu, 0x24EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBA4u;
label_24eba4:
    // 0x24eba4: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x24EBA4u;
    {
        const bool branch_taken_0x24eba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBA4u;
        // 0x24eba8: 0xa380b848  sb          $zero, -0x47B8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eba4) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24EBACu;
label_24ebac:
    // 0x24ebac: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x24EBACu;
    SET_GPR_U32(ctx, 31, 0x24EBB4u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x24EBACu, 0x24EBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBB4u;
label_24ebb4:
    // 0x24ebb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24ebb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ebb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ebbc: 0x1602006d  bne         $s0, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x24EBBCu;
    {
        const bool branch_taken_0x24ebbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x24EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBBCu;
        // 0x24ebc0: 0x8fa80000  lw          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ebbc) {
            ctx->pc = 0x24ED74u;
            goto label_24ed74;
        }
    }
    ctx->pc = 0x24EBC4u;
    // 0x24ebc4: 0xc091298  jal         func_244A60
    ctx->pc = 0x24EBC4u;
    SET_GPR_U32(ctx, 31, 0x24EBCCu);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x24EBC4u, 0x24EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBCCu;
label_24ebcc:
    // 0x24ebcc: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x24EBCCu;
    SET_GPR_U32(ctx, 31, 0x24EBD4u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x24EBCCu, 0x24EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBD4u;
label_24ebd4:
    // 0x24ebd4: 0x1450005b  bne         $v0, $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x24EBD4u;
    {
        const bool branch_taken_0x24ebd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x24EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBD4u;
        // 0x24ebd8: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ebd4) {
            ctx->pc = 0x24ED44u;
            goto label_24ed44;
        }
    }
    ctx->pc = 0x24EBDCu;
    // 0x24ebdc: 0x8f83a0d0  lw          $v1, -0x5F30($gp)
    ctx->pc = 0x24ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x24ebe0: 0x24504018  addiu       $s0, $v0, 0x4018
    ctx->pc = 0x24ebe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16408));
    // 0x24ebe4: 0x96050026  lhu         $a1, 0x26($s0)
    ctx->pc = 0x24ebe4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x24ebe8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x24ebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ebec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24ebf0: 0x8c66fffc  lw          $a2, -0x4($v1)
    ctx->pc = 0x24ebf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x24ebf4: 0xc0acf54  jal         func_2B3D50
    ctx->pc = 0x24EBF4u;
    SET_GPR_U32(ctx, 31, 0x24EBFCu);
    ctx->pc = 0x24EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EBF4u;
    // 0x24ebf8: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3D50u, 0x24EBF4u, 0x24EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBFCu;
label_24ebfc:
    // 0x24ebfc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x24EBFCu;
    {
        const bool branch_taken_0x24ebfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ebfc) {
            ctx->pc = 0x24EC84u;
            goto label_24ec84;
        }
    }
    ctx->pc = 0x24EC04u;
    // 0x24ec04: 0xc092e82  jal         func_24BA08
    ctx->pc = 0x24EC04u;
    SET_GPR_U32(ctx, 31, 0x24EC0Cu);
    ctx->pc = 0x24EC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EC04u;
    // 0x24ec08: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA08u, 0x24EC04u, 0x24EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC0Cu;
label_24ec0c:
    // 0x24ec0c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24ec10: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24ec14: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24ec18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x24ec1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24ec20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24ec20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ec24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24ec28: 0x24842180  addiu       $a0, $a0, 0x2180
    ctx->pc = 0x24ec28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8576));
    // 0x24ec2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ec30: 0x8c490f5c  lw          $t1, 0xF5C($v0)
    ctx->pc = 0x24ec30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3932)));
    // 0x24ec34: 0x8c450f50  lw          $a1, 0xF50($v0)
    ctx->pc = 0x24ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3920)));
    // 0x24ec38: 0x8c470f54  lw          $a3, 0xF54($v0)
    ctx->pc = 0x24ec38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
    // 0x24ec3c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x24EC3Cu;
    SET_GPR_U32(ctx, 31, 0x24EC44u);
    ctx->pc = 0x24EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EC3Cu;
    // 0x24ec40: 0x8c480f58  lw          $t0, 0xF58($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x24EC3Cu, 0x24EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC44u;
label_24ec44:
    // 0x24ec44: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24ec48: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24ec48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24ec4c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24ec4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24ec50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24ec50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ec54: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24ec54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24ec58: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x24ec58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x24ec5c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24ec5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24ec60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24ec60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ec64: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24ec64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24ec68: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24ec68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24ec6c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24ec6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24ec70: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24ec70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ec74: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24ec74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ec78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24ec78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ec7c: 0x80932a0  j           func_24CA80
    ctx->pc = 0x24EC7Cu;
    ctx->pc = 0x24EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EC7Cu;
    // 0x24ec80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    mmStartMessage_0x24ca80(rdram, ctx, runtime); return;
    ctx->pc = 0x24EC84u;
label_24ec84:
    // 0x24ec84: 0xc092e82  jal         func_24BA08
    ctx->pc = 0x24EC84u;
    SET_GPR_U32(ctx, 31, 0x24EC8Cu);
    ctx->pc = 0x24EC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EC84u;
    // 0x24ec88: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA08u, 0x24EC84u, 0x24EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC8Cu;
label_24ec8c:
    // 0x24ec8c: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x24ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x24ec90: 0xc092018  jal         func_248060
    ctx->pc = 0x24EC90u;
    SET_GPR_U32(ctx, 31, 0x24EC98u);
    ctx->pc = 0x24EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EC90u;
    // 0x24ec94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248060u, 0x24EC90u, 0x24EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC98u;
label_24ec98:
    // 0x24ec98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24EC98u;
    {
        const bool branch_taken_0x24ec98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC98u;
        // 0x24ec9c: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec98) {
            ctx->pc = 0x24ECF0u;
            goto label_24ecf0;
        }
    }
    ctx->pc = 0x24ECA0u;
    // 0x24eca0: 0xc092632  jal         func_2498C8
    ctx->pc = 0x24ECA0u;
    SET_GPR_U32(ctx, 31, 0x24ECA8u);
    ctx->pc = 0x2498C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498C8u, 0x24ECA0u, 0x24ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ECA8u;
label_24eca8:
    // 0x24eca8: 0xc09258a  jal         func_249628
    ctx->pc = 0x24ECA8u;
    SET_GPR_U32(ctx, 31, 0x24ECB0u);
    ctx->pc = 0x249628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249628u, 0x24ECA8u, 0x24ECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ECB0u;
label_24ecb0:
    // 0x24ecb0: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24ecb4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24ecb8: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24ecbc: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24ecc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24ecc4: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x24ecc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x24ecc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24eccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24ecccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ecd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ecd4: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24ECD4u;
    SET_GPR_U32(ctx, 31, 0x24ECDCu);
    ctx->pc = 0x24ECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ECD4u;
    // 0x24ecd8: 0x8c440f60  lw          $a0, 0xF60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3936)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24ECD4u, 0x24ECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ECDCu;
label_24ecdc:
    // 0x24ecdc: 0x8f82b858  lw          $v0, -0x47A8($gp)
    ctx->pc = 0x24ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948952)));
    // 0x24ece0: 0x8f83b864  lw          $v1, -0x479C($gp)
    ctx->pc = 0x24ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948964)));
    // 0x24ece4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x24ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24ece8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x24ECE8u;
    {
        const bool branch_taken_0x24ece8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECE8u;
        // 0x24ecec: 0xaf82b85c  sw          $v0, -0x47A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ece8) {
            ctx->pc = 0x24ED8Cu;
            goto label_24ed8c;
        }
    }
    ctx->pc = 0x24ECF0u;
label_24ecf0:
    // 0x24ecf0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24ecf4: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24ecf8: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24ecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24ecfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24ed00: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24ed00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24ed04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24ed08: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24ed08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24ed0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ed10: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x24ed10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x24ed14: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24ed14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24ed18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24ed18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ed1c: 0x8c440f64  lw          $a0, 0xF64($v0)
    ctx->pc = 0x24ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3940)));
    // 0x24ed20: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24ed20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24ed24: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24ed24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24ed28: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24ed28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24ed2c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24ed2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24ed30: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24ed30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ed34: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24ed34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ed38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24ed38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ed3c: 0x80932a0  j           func_24CA80
    ctx->pc = 0x24ED3Cu;
    ctx->pc = 0x24ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED3Cu;
    // 0x24ed40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    mmStartMessage_0x24ca80(rdram, ctx, runtime); return;
    ctx->pc = 0x24ED44u;
label_24ed44:
    // 0x24ed44: 0xc092e82  jal         func_24BA08
    ctx->pc = 0x24ED44u;
    SET_GPR_U32(ctx, 31, 0x24ED4Cu);
    ctx->pc = 0x24ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED44u;
    // 0x24ed48: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA08u, 0x24ED44u, 0x24ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED4Cu;
label_24ed4c:
    // 0x24ed4c: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x24ED4Cu;
    SET_GPR_U32(ctx, 31, 0x24ED54u);
    ctx->pc = 0x24ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED4Cu;
    // 0x24ed50: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x24ED4Cu, 0x24ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED54u;
label_24ed54:
    // 0x24ed54: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24ed54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24ed58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24ed58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ed5c: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x24ed5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x24ed60: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24ED60u;
    SET_GPR_U32(ctx, 31, 0x24ED68u);
    ctx->pc = 0x24ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED60u;
    // 0x24ed64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24ED60u, 0x24ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED68u;
label_24ed68:
    // 0x24ed68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24ed6c:
    // 0x24ed6c: 0xa382b848  sb          $v0, -0x47B8($gp)
    ctx->pc = 0x24ed6cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 2));
label_24ed70:
    // 0x24ed70: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x24ed70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_24ed74:
    // 0x24ed74: 0x3c0a0035  lui         $t2, 0x35
    ctx->pc = 0x24ed74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)53 << 16));
label_24ed78:
    // 0x24ed78: 0x25456ba8  addiu       $a1, $t2, 0x6BA8
    ctx->pc = 0x24ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 27560));
    // 0x24ed7c: 0xc09309c  jal         func_24C270
    ctx->pc = 0x24ED7Cu;
    SET_GPR_U32(ctx, 31, 0x24ED84u);
    ctx->pc = 0x24ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED7Cu;
    // 0x24ed80: 0x8d040008  lw          $a0, 0x8($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C270u, 0x24ED7Cu, 0x24ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED84u;
label_24ed84:
    // 0x24ed84: 0x8fac0000  lw          $t4, 0x0($sp)
    ctx->pc = 0x24ed84u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ed88: 0xad82000c  sw          $v0, 0xC($t4)
    ctx->pc = 0x24ed88u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 2));
label_24ed8c:
    // 0x24ed8c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24ed8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24ed90:
    // 0x24ed90: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24ed90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24ed94:
    // 0x24ed94: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24ed94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24ed98: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24ed98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24ed9c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24ed9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24eda0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24eda0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24eda4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24eda4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24eda8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24eda8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24edac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24edacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24edb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24edb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24edb4: 0x3e00008  jr          $ra
    ctx->pc = 0x24EDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDB4u;
        // 0x24edb8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EDBCu;
}
