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

// Function: propCalculateWallsFloorsOriginal
// Address: 0x2677a8 - 0x267f08
void propCalculateWallsFloorsOriginal_0x2677a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propCalculateWallsFloorsOriginal_0x2677a8");
#endif

    switch (ctx->pc) {
        case 0x2678f0u: goto label_2678f0;
        case 0x267938u: goto label_267938;
        case 0x267ac0u: goto label_267ac0;
        case 0x267b88u: goto label_267b88;
        case 0x267ba8u: goto label_267ba8;
        case 0x267bc0u: goto label_267bc0;
        case 0x267c78u: goto label_267c78;
        case 0x267c98u: goto label_267c98;
        case 0x267cb0u: goto label_267cb0;
        default: break;
    }

    ctx->pc = 0x2677a8u;

    // 0x2677a8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2677a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2677ac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2677acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2677b0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2677b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2677b4: 0x246390c0  addiu       $v1, $v1, -0x6F40
    ctx->pc = 0x2677b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938816));
    // 0x2677b8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2677b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2677bc: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2677bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2677c0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2677c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2677c4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2677c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2677c8: 0x2c52818  mult        $a1, $s6, $a1
    ctx->pc = 0x2677c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2677cc: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2677ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2677d0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2677d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2677d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2677d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2677d8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2677d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2677dc: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2677dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2677e0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2677e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2677e4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2677e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2677e8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2677e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2677ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2677ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2677f0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2677f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2677f4: 0x2442ebd8  addiu       $v0, $v0, -0x1428
    ctx->pc = 0x2677f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962136));
    // 0x2677f8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2677f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2677fc: 0x163900  sll         $a3, $s6, 4
    ctx->pc = 0x2677fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x267800: 0xe2a821  addu        $s5, $a3, $v0
    ctx->pc = 0x267800u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x267804: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x267804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x267808: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x267808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26780c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x26780cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x267810: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x267810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267814: 0x863018  mult        $a2, $a0, $a2
    ctx->pc = 0x267814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x267818: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x267818u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26781c: 0x1242000f  beq         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26781Cu;
    {
        const bool branch_taken_0x26781c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x267820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26781Cu;
        // 0x267820: 0xafa60028  sw          $a2, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26781c) {
            ctx->pc = 0x26785Cu;
            goto label_26785c;
        }
    }
    ctx->pc = 0x267824u;
    // 0x267824: 0x2a420081  slti        $v0, $s2, 0x81
    ctx->pc = 0x267824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x267828: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267828u;
    {
        const bool branch_taken_0x267828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267828u;
        // 0x26782c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267828) {
            ctx->pc = 0x267848u;
            goto label_267848;
        }
    }
    ctx->pc = 0x267830u;
    // 0x267830: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x267830u;
    {
        const bool branch_taken_0x267830 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x267834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267830u;
        // 0x267834: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267830) {
            ctx->pc = 0x26785Cu;
            goto label_26785c;
        }
    }
    ctx->pc = 0x267838u;
    // 0x267838: 0x12420014  beq         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x267838u;
    {
        const bool branch_taken_0x267838 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x26783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267838u;
        // 0x26783c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267838) {
            ctx->pc = 0x26788Cu;
            goto label_26788c;
        }
    }
    ctx->pc = 0x267840u;
    // 0x267840: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x267840u;
    {
        const bool branch_taken_0x267840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267840u;
        // 0x267844: 0xdfbe00c0  ld          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267840) {
            ctx->pc = 0x267EE0u;
            goto label_267ee0;
        }
    }
    ctx->pc = 0x267848u;
label_267848:
    // 0x267848: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x267848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26784c: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26784Cu;
    {
        const bool branch_taken_0x26784c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x267850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26784Cu;
        // 0x267850: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26784c) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x267854u;
    // 0x267854: 0x164201a1  bne         $s2, $v0, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x267854u;
    {
        const bool branch_taken_0x267854 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x267858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267854u;
        // 0x267858: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267854) {
            ctx->pc = 0x267EDCu;
            goto label_267edc;
        }
    }
    ctx->pc = 0x26785Cu;
label_26785c:
    // 0x26785c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267860: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x267860u;
    {
        const bool branch_taken_0x267860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267860u;
        // 0x267864: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267860) {
            ctx->pc = 0x267890u;
            goto label_267890;
        }
    }
    ctx->pc = 0x267868u;
label_267868:
    // 0x267868: 0x24020136  addiu       $v0, $zero, 0x136
    ctx->pc = 0x267868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x26786c: 0x12c20006  beq         $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26786Cu;
    {
        const bool branch_taken_0x26786c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x267870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26786Cu;
        // 0x267870: 0x24020137  addiu       $v0, $zero, 0x137 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26786c) {
            ctx->pc = 0x267888u;
            goto label_267888;
        }
    }
    ctx->pc = 0x267874u;
    // 0x267874: 0x16c20199  bne         $s6, $v0, . + 4 + (0x199 << 2)
    ctx->pc = 0x267874u;
    {
        const bool branch_taken_0x267874 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x267878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267874u;
        // 0x267878: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267874) {
            ctx->pc = 0x267EDCu;
            goto label_267edc;
        }
    }
    ctx->pc = 0x26787Cu;
    // 0x26787c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26787cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267880: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267880u;
    {
        const bool branch_taken_0x267880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267880u;
        // 0x267884: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267880) {
            ctx->pc = 0x267890u;
            goto label_267890;
        }
    }
    ctx->pc = 0x267888u;
label_267888:
    // 0x267888: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x267888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26788c:
    // 0x26788c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_267890:
    // 0x267890: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x267890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267894: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x267894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x267898: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x267898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x26789c: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x26789cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2678a0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2678a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2678a4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2678a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2678a8: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x2678a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2678ac: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2678acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2678b0: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x2678b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2678b4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2678b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2678b8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x2678b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x2678bc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2678bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2678c0: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x2678c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2678c4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2678c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2678c8: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x2678c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x2678cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2678ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2678d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2678d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2678d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2678d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2678d8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2678d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2678dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2678dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2678e0: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x2678e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x2678e4: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x2678e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2678e8: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2678E8u;
    SET_GPR_U32(ctx, 31, 0x2678F0u);
    ctx->pc = 0x2678ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2678E8u;
    // 0x2678ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2678E8u, 0x2678F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2678F0u;
label_2678f0:
    // 0x2678f0: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x2678f0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2678f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678f8: 0xaeb80000  sw          $t8, 0x0($s5)
    ctx->pc = 0x2678f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 24));
    // 0x2678fc: 0x310c021  addu        $t8, $t8, $s0
    ctx->pc = 0x2678fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 16)));
    // 0x267900: 0xaeb80004  sw          $t8, 0x4($s5)
    ctx->pc = 0x267900u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 24));
    // 0x267904: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x267904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267908: 0x304c021  addu        $t8, $t8, $a0
    ctx->pc = 0x267908u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x26790c: 0xaeb80008  sw          $t8, 0x8($s5)
    ctx->pc = 0x26790cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 24));
    // 0x267910: 0x311c021  addu        $t8, $t8, $s1
    ctx->pc = 0x267910u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 17)));
    // 0x267914: 0xaeb8000c  sw          $t8, 0xC($s5)
    ctx->pc = 0x267914u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 24));
    // 0x267918: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x267918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x26791c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x26791cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267920: 0x18c00162  blez        $a2, . + 4 + (0x162 << 2)
    ctx->pc = 0x267920u;
    {
        const bool branch_taken_0x267920 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x267924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267920u;
        // 0x267924: 0x305c021  addu        $t8, $t8, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267920) {
            ctx->pc = 0x267EACu;
            goto label_267eac;
        }
    }
    ctx->pc = 0x267928u;
    // 0x267928: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x267928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x26792c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x26792cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x267930: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x267930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x267934: 0x0  nop
    ctx->pc = 0x267934u;
    // NOP
label_267938:
    // 0x267938: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x267938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26793c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x26793cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x267940: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x267940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x267944: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x267944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x267948: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x267948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26794c: 0xacf80000  sw          $t8, 0x0($a3)
    ctx->pc = 0x26794cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 24));
    // 0x267950: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x267950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x267954: 0x27180024  addiu       $t8, $t8, 0x24
    ctx->pc = 0x267954u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 36));
    // 0x267958: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x267958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26795c: 0xacf80004  sw          $t8, 0x4($a3)
    ctx->pc = 0x26795cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 24));
    // 0x267960: 0x27180024  addiu       $t8, $t8, 0x24
    ctx->pc = 0x267960u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 36));
    // 0x267964: 0xacf80008  sw          $t8, 0x8($a3)
    ctx->pc = 0x267964u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 24));
    // 0x267968: 0x27180024  addiu       $t8, $t8, 0x24
    ctx->pc = 0x267968u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 36));
    // 0x26796c: 0xacf8000c  sw          $t8, 0xC($a3)
    ctx->pc = 0x26796cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 24));
    // 0x267970: 0x27180024  addiu       $t8, $t8, 0x24
    ctx->pc = 0x267970u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 36));
    // 0x267974: 0xad180000  sw          $t8, 0x0($t0)
    ctx->pc = 0x267974u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 24));
    // 0x267978: 0x12420023  beq         $s2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x267978u;
    {
        const bool branch_taken_0x267978 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x26797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267978u;
        // 0x26797c: 0x27180038  addiu       $t8, $t8, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267978) {
            ctx->pc = 0x267A08u;
            goto label_267a08;
        }
    }
    ctx->pc = 0x267980u;
    // 0x267980: 0x2a420081  slti        $v0, $s2, 0x81
    ctx->pc = 0x267980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x267984: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267984u;
    {
        const bool branch_taken_0x267984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267984u;
        // 0x267988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267984) {
            ctx->pc = 0x2679A4u;
            goto label_2679a4;
        }
    }
    ctx->pc = 0x26798Cu;
    // 0x26798c: 0x1242001e  beq         $s2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x26798Cu;
    {
        const bool branch_taken_0x26798c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x267990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26798Cu;
        // 0x267990: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26798c) {
            ctx->pc = 0x267A08u;
            goto label_267a08;
        }
    }
    ctx->pc = 0x267994u;
    // 0x267994: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x267994u;
    {
        const bool branch_taken_0x267994 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x267998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267994u;
        // 0x267998: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267994) {
            ctx->pc = 0x2679C0u;
            goto label_2679c0;
        }
    }
    ctx->pc = 0x26799Cu;
    // 0x26799c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x26799Cu;
    {
        const bool branch_taken_0x26799c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2679A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26799Cu;
        // 0x2679a0: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26799c) {
            ctx->pc = 0x267A74u;
            goto label_267a74;
        }
    }
    ctx->pc = 0x2679A4u;
label_2679a4:
    // 0x2679a4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2679a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2679a8: 0x12420012  beq         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2679A8u;
    {
        const bool branch_taken_0x2679a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2679ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679A8u;
        // 0x2679ac: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679a8) {
            ctx->pc = 0x2679F4u;
            goto label_2679f4;
        }
    }
    ctx->pc = 0x2679B0u;
    // 0x2679b0: 0x1642002f  bne         $s2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2679B0u;
    {
        const bool branch_taken_0x2679b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2679B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679B0u;
        // 0x2679b4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679b0) {
            ctx->pc = 0x267A70u;
            goto label_267a70;
        }
    }
    ctx->pc = 0x2679B8u;
    // 0x2679b8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2679B8u;
    {
        const bool branch_taken_0x2679b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2679BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679B8u;
        // 0x2679bc: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679b8) {
            ctx->pc = 0x267A0Cu;
            goto label_267a0c;
        }
    }
    ctx->pc = 0x2679C0u;
label_2679c0:
    // 0x2679c0: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x2679c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2679c4: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x2679c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2679c8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2679c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2679cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2679ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2679d0: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x2679d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2679d4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2679d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2679d8: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2679d8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2679dc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2679dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2679e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2679e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2679e4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2679e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2679e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2679e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2679ec: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2679ECu;
    {
        const bool branch_taken_0x2679ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2679F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679ECu;
        // 0x2679f0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679ec) {
            ctx->pc = 0x267A6Cu;
            goto label_267a6c;
        }
    }
    ctx->pc = 0x2679F4u;
label_2679f4:
    // 0x2679f4: 0x24020136  addiu       $v0, $zero, 0x136
    ctx->pc = 0x2679f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x2679f8: 0x12c2000b  beq         $s6, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2679F8u;
    {
        const bool branch_taken_0x2679f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2679FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679F8u;
        // 0x2679fc: 0x24020137  addiu       $v0, $zero, 0x137 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679f8) {
            ctx->pc = 0x267A28u;
            goto label_267a28;
        }
    }
    ctx->pc = 0x267A00u;
    // 0x267a00: 0x16c2001b  bne         $s6, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x267A00u;
    {
        const bool branch_taken_0x267a00 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x267A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A00u;
        // 0x267a04: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a00) {
            ctx->pc = 0x267A70u;
            goto label_267a70;
        }
    }
    ctx->pc = 0x267A08u;
label_267a08:
    // 0x267a08: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x267a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_267a0c:
    // 0x267a0c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x267a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x267a10: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x267a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x267a14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x267a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x267a18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x267a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x267a1c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x267a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x267a20: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x267A20u;
    {
        const bool branch_taken_0x267a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A20u;
        // 0x267a24: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a20) {
            ctx->pc = 0x267A6Cu;
            goto label_267a6c;
        }
    }
    ctx->pc = 0x267A28u;
label_267a28:
    // 0x267a28: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x267A28u;
    {
        const bool branch_taken_0x267a28 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x267A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A28u;
        // 0x267a2c: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a28) {
            ctx->pc = 0x267A50u;
            goto label_267a50;
        }
    }
    ctx->pc = 0x267A30u;
    // 0x267a30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x267a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267a34: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x267a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x267a38: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x267a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x267a3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x267a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x267a40: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x267a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x267a44: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x267a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x267a48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267A48u;
    {
        const bool branch_taken_0x267a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A48u;
        // 0x267a4c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a48) {
            ctx->pc = 0x267A6Cu;
            goto label_267a6c;
        }
    }
    ctx->pc = 0x267A50u;
label_267a50:
    // 0x267a50: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x267a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x267a54: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x267a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x267a58: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x267a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x267a5c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x267a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x267a60: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x267a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x267a64: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x267a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x267a68: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x267a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_267a6c:
    // 0x267a6c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x267a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_267a70:
    // 0x267a70: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x267a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_267a74:
    // 0x267a74: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x267a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x267a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a7c: 0xc440f900  lwc1        $f0, -0x700($v0)
    ctx->pc = 0x267a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267a80: 0xc461f904  lwc1        $f1, -0x6FC($v1)
    ctx->pc = 0x267a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267a84: 0x8c970000  lw          $s7, 0x0($a0)
    ctx->pc = 0x267a84u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x267a88: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x267a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x267a8c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x267a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x267a90: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x267a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x267a94: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x267a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x267a98: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x267a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x267a9c: 0x1ae000aa  blez        $s7, . + 4 + (0xAA << 2)
    ctx->pc = 0x267A9Cu;
    {
        const bool branch_taken_0x267a9c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x267AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A9Cu;
        // 0x267aa0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a9c) {
            ctx->pc = 0x267D48u;
            goto label_267d48;
        }
    }
    ctx->pc = 0x267AA4u;
    // 0x267aa4: 0x8cf3000c  lw          $s3, 0xC($a3)
    ctx->pc = 0x267aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x267aa8: 0x269e0001  addiu       $fp, $s4, 0x1
    ctx->pc = 0x267aa8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x267aac: 0x8d0e0000  lw          $t6, 0x0($t0)
    ctx->pc = 0x267aacu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x267ab0: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x267ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x267ab4: 0x8cf10004  lw          $s1, 0x4($a3)
    ctx->pc = 0x267ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x267ab8: 0x8cf90008  lw          $t9, 0x8($a3)
    ctx->pc = 0x267ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x267abc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x267abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_267ac0:
    // 0x267ac0: 0x12420021  beq         $s2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x267AC0u;
    {
        const bool branch_taken_0x267ac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x267AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AC0u;
        // 0x267ac4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ac0) {
            ctx->pc = 0x267B48u;
            goto label_267b48;
        }
    }
    ctx->pc = 0x267AC8u;
    // 0x267ac8: 0x2a420081  slti        $v0, $s2, 0x81
    ctx->pc = 0x267ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x267acc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267ACCu;
    {
        const bool branch_taken_0x267acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267ACCu;
        // 0x267ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267acc) {
            ctx->pc = 0x267AECu;
            goto label_267aec;
        }
    }
    ctx->pc = 0x267AD4u;
    // 0x267ad4: 0x1242001c  beq         $s2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x267AD4u;
    {
        const bool branch_taken_0x267ad4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x267AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AD4u;
        // 0x267ad8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ad4) {
            ctx->pc = 0x267B48u;
            goto label_267b48;
        }
    }
    ctx->pc = 0x267ADCu;
    // 0x267adc: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x267ADCu;
    {
        const bool branch_taken_0x267adc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x267AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267ADCu;
        // 0x267ae0: 0xd41026  xor         $v0, $a2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267adc) {
            ctx->pc = 0x267B08u;
            goto label_267b08;
        }
    }
    ctx->pc = 0x267AE4u;
    // 0x267ae4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x267AE4u;
    {
        const bool branch_taken_0x267ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267ae4) {
            ctx->pc = 0x267B4Cu;
            goto label_267b4c;
        }
    }
    ctx->pc = 0x267AECu;
label_267aec:
    // 0x267aec: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x267aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x267af0: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267AF0u;
    {
        const bool branch_taken_0x267af0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x267AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AF0u;
        // 0x267af4: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267af0) {
            ctx->pc = 0x267B10u;
            goto label_267b10;
        }
    }
    ctx->pc = 0x267AF8u;
    // 0x267af8: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x267AF8u;
    {
        const bool branch_taken_0x267af8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x267af8) {
            ctx->pc = 0x267B4Cu;
            goto label_267b4c;
        }
    }
    ctx->pc = 0x267B00u;
    // 0x267b00: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x267B00u;
    {
        const bool branch_taken_0x267b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B00u;
        // 0x267b04: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b00) {
            ctx->pc = 0x267B4Cu;
            goto label_267b4c;
        }
    }
    ctx->pc = 0x267B08u;
label_267b08:
    // 0x267b08: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x267B08u;
    {
        const bool branch_taken_0x267b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B08u;
        // 0x267b0c: 0x2c430001  sltiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b08) {
            ctx->pc = 0x267B4Cu;
            goto label_267b4c;
        }
    }
    ctx->pc = 0x267B10u;
label_267b10:
    // 0x267b10: 0x24020136  addiu       $v0, $zero, 0x136
    ctx->pc = 0x267b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x267b14: 0x12c20003  beq         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267B14u;
    {
        const bool branch_taken_0x267b14 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x267B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B14u;
        // 0x267b18: 0x3ac20137  xori        $v0, $s6, 0x137 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)311);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b14) {
            ctx->pc = 0x267B24u;
            goto label_267b24;
        }
    }
    ctx->pc = 0x267B1Cu;
    // 0x267b1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x267B1Cu;
    {
        const bool branch_taken_0x267b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B1Cu;
        // 0x267b20: 0x2c430001  sltiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b1c) {
            ctx->pc = 0x267B4Cu;
            goto label_267b4c;
        }
    }
    ctx->pc = 0x267B24u;
label_267b24:
    // 0x267b24: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x267b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x267b28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x267B28u;
    {
        const bool branch_taken_0x267b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b28) {
            ctx->pc = 0x267B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267B28u;
            // 0x267b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267B40u;
            goto label_267b40;
        }
    }
    ctx->pc = 0x267B30u;
    // 0x267b30: 0x52800006  beql        $s4, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x267B30u;
    {
        const bool branch_taken_0x267b30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b30) {
            ctx->pc = 0x267B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267B30u;
            // 0x267b34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267B4Cu;
            goto label_267b4c;
        }
    }
    ctx->pc = 0x267B38u;
    // 0x267b38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x267B38u;
    {
        const bool branch_taken_0x267b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b38) {
            ctx->pc = 0x267B4Cu;
            goto label_267b4c;
        }
    }
    ctx->pc = 0x267B40u;
label_267b40:
    // 0x267b40: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x267B40u;
    {
        const bool branch_taken_0x267b40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x267b40) {
            ctx->pc = 0x267B4Cu;
            goto label_267b4c;
        }
    }
    ctx->pc = 0x267B48u;
label_267b48:
    // 0x267b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x267b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267b4c:
    // 0x267b4c: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x267B4Cu;
    {
        const bool branch_taken_0x267b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B4Cu;
        // 0x267b50: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b4c) {
            ctx->pc = 0x267D2Cu;
            goto label_267d2c;
        }
    }
    ctx->pc = 0x267B54u;
    // 0x267b54: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x267b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x267b58: 0x800013  mtlo        $a0
    ctx->pc = 0x267b58u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x267b5c: 0x70c21800  madd        $v1, $a2, $v0
    ctx->pc = 0x267b5cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x267b60: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x267b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x267b64: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x267B64u;
    {
        const bool branch_taken_0x267b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B64u;
        // 0x267b68: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b64) {
            ctx->pc = 0x267C3Cu;
            goto label_267c3c;
        }
    }
    ctx->pc = 0x267B6Cu;
    // 0x267b6c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x267b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x267b70: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x267B70u;
    {
        const bool branch_taken_0x267b70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x267B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B70u;
        // 0x267b74: 0x246c002c  addiu       $t4, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b70) {
            ctx->pc = 0x267C4Cu;
            goto label_267c4c;
        }
    }
    ctx->pc = 0x267B78u;
    // 0x267b78: 0x8cad0004  lw          $t5, 0x4($a1)
    ctx->pc = 0x267b78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x267b7c: 0x8c6b000c  lw          $t3, 0xC($v1)
    ctx->pc = 0x267b7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x267b80: 0x24cf0001  addiu       $t7, $a2, 0x1
    ctx->pc = 0x267b80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x267b84: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x267b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_267b88:
    // 0x267b88: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x267b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x267b8c: 0x8c8a0010  lw          $t2, 0x10($a0)
    ctx->pc = 0x267b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x267b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b94: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x267b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x267b98: 0x19400021  blez        $t2, . + 4 + (0x21 << 2)
    ctx->pc = 0x267B98u;
    {
        const bool branch_taken_0x267b98 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x267B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B98u;
        // 0x267b9c: 0xcd1821  addu        $v1, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b98) {
            ctx->pc = 0x267C20u;
            goto label_267c20;
        }
    }
    ctx->pc = 0x267BA0u;
    // 0x267ba0: 0x24870018  addiu       $a3, $a0, 0x18
    ctx->pc = 0x267ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x267ba4: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x267ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_267ba8:
    // 0x267ba8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x267ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x267bac: 0x2469000c  addiu       $t1, $v1, 0xC
    ctx->pc = 0x267bacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x267bb0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x267bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bb4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x267bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bb8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x267bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bbc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x267bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_267bc0:
    // 0x267bc0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x267bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267bc4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x267bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267bc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x267bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267bcc: 0x0  nop
    ctx->pc = 0x267bccu;
    // NOP
    // 0x267bd0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x267BD0u;
    {
        const bool branch_taken_0x267bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x267bd0) {
            ctx->pc = 0x267BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267BD0u;
            // 0x267bd4: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x267BE4u;
            goto label_267be4;
        }
    }
    ctx->pc = 0x267BD8u;
    // 0x267bd8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x267bd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x267bdc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x267bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267be0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x267be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_267be4:
    // 0x267be4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x267be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267be8: 0x0  nop
    ctx->pc = 0x267be8u;
    // NOP
    // 0x267bec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x267BECu;
    {
        const bool branch_taken_0x267bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267bec) {
            ctx->pc = 0x267BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267BECu;
            // 0x267bf0: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x267BF4u;
            goto label_267bf4;
        }
    }
    ctx->pc = 0x267BF4u;
label_267bf4:
    // 0x267bf4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x267bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x267bf8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x267bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x267bfc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x267bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x267c00: 0x4c1ffef  bgez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x267C00u;
    {
        const bool branch_taken_0x267c00 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x267C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C00u;
        // 0x267c04: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c00) {
            ctx->pc = 0x267BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267bc0;
        }
    }
    ctx->pc = 0x267C08u;
    // 0x267c08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x267c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c0c: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x267c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x267c10: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x267C10u;
    {
        const bool branch_taken_0x267c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C10u;
        // 0x267c14: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c10) {
            ctx->pc = 0x267BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267ba8;
        }
    }
    ctx->pc = 0x267C18u;
    // 0x267c18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267C18u;
    {
        const bool branch_taken_0x267c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C18u;
        // 0x267c1c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c18) {
            ctx->pc = 0x267C28u;
            goto label_267c28;
        }
    }
    ctx->pc = 0x267C20u;
label_267c20:
    // 0x267c20: 0x24870018  addiu       $a3, $a0, 0x18
    ctx->pc = 0x267c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x267c24: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x267c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_267c28:
    // 0x267c28: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x267c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x267c2c: 0x443ffd6  bgezl       $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x267C2Cu;
    {
        const bool branch_taken_0x267c2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x267c2c) {
            ctx->pc = 0x267C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267C2Cu;
            // 0x267c30: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267b88;
        }
    }
    ctx->pc = 0x267C34u;
    // 0x267c34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267C34u;
    {
        const bool branch_taken_0x267c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C34u;
        // 0x267c38: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c34) {
            ctx->pc = 0x267C58u;
            goto label_267c58;
        }
    }
    ctx->pc = 0x267C3Cu;
label_267c3c:
    // 0x267c3c: 0x246c002c  addiu       $t4, $v1, 0x2C
    ctx->pc = 0x267c3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x267c40: 0x24cf0001  addiu       $t7, $a2, 0x1
    ctx->pc = 0x267c40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x267c44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267C44u;
    {
        const bool branch_taken_0x267c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C44u;
        // 0x267c48: 0x8c6b000c  lw          $t3, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c44) {
            ctx->pc = 0x267C54u;
            goto label_267c54;
        }
    }
    ctx->pc = 0x267C4Cu;
label_267c4c:
    // 0x267c4c: 0x8c6b000c  lw          $t3, 0xC($v1)
    ctx->pc = 0x267c4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x267c50: 0x24cf0001  addiu       $t7, $a2, 0x1
    ctx->pc = 0x267c50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_267c54:
    // 0x267c54: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x267c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_267c58:
    // 0x267c58: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x267C58u;
    {
        const bool branch_taken_0x267c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C58u;
        // 0x267c5c: 0x1e0302d  daddu       $a2, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c58) {
            ctx->pc = 0x267D34u;
            goto label_267d34;
        }
    }
    ctx->pc = 0x267C60u;
    // 0x267c60: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x267c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x267c64: 0x4400034  bltz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x267C64u;
    {
        const bool branch_taken_0x267c64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x267C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C64u;
        // 0x267c68: 0xd7102a  slt         $v0, $a2, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c64) {
            ctx->pc = 0x267D38u;
            goto label_267d38;
        }
    }
    ctx->pc = 0x267C6Cu;
    // 0x267c6c: 0x8d8d0004  lw          $t5, 0x4($t4)
    ctx->pc = 0x267c6cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x267c70: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x267c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x267c74: 0x0  nop
    ctx->pc = 0x267c74u;
    // NOP
label_267c78:
    // 0x267c78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x267c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x267c7c: 0x8c8a0010  lw          $t2, 0x10($a0)
    ctx->pc = 0x267c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x267c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c84: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x267c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x267c88: 0x19400021  blez        $t2, . + 4 + (0x21 << 2)
    ctx->pc = 0x267C88u;
    {
        const bool branch_taken_0x267c88 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x267C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C88u;
        // 0x267c8c: 0xcd1821  addu        $v1, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c88) {
            ctx->pc = 0x267D10u;
            goto label_267d10;
        }
    }
    ctx->pc = 0x267C90u;
    // 0x267c90: 0x24870018  addiu       $a3, $a0, 0x18
    ctx->pc = 0x267c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x267c94: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x267c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_267c98:
    // 0x267c98: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x267c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x267c9c: 0x2469000c  addiu       $t1, $v1, 0xC
    ctx->pc = 0x267c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x267ca0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x267ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ca4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x267ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ca8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x267ca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267cac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x267cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_267cb0:
    // 0x267cb0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x267cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267cb4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x267cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267cb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x267cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267cbc: 0x0  nop
    ctx->pc = 0x267cbcu;
    // NOP
    // 0x267cc0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x267CC0u;
    {
        const bool branch_taken_0x267cc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x267cc0) {
            ctx->pc = 0x267CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267CC0u;
            // 0x267cc4: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x267CD4u;
            goto label_267cd4;
        }
    }
    ctx->pc = 0x267CC8u;
    // 0x267cc8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x267cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x267ccc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x267cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267cd0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x267cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_267cd4:
    // 0x267cd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x267cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267cd8: 0x0  nop
    ctx->pc = 0x267cd8u;
    // NOP
    // 0x267cdc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x267CDCu;
    {
        const bool branch_taken_0x267cdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267cdc) {
            ctx->pc = 0x267CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267CDCu;
            // 0x267ce0: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x267CE4u;
            goto label_267ce4;
        }
    }
    ctx->pc = 0x267CE4u;
label_267ce4:
    // 0x267ce4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x267ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x267ce8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x267ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x267cec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x267cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x267cf0: 0x4c1ffef  bgez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x267CF0u;
    {
        const bool branch_taken_0x267cf0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x267CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CF0u;
        // 0x267cf4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cf0) {
            ctx->pc = 0x267CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267cb0;
        }
    }
    ctx->pc = 0x267CF8u;
    // 0x267cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x267cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267cfc: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x267cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x267d00: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x267D00u;
    {
        const bool branch_taken_0x267d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D00u;
        // 0x267d04: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d00) {
            ctx->pc = 0x267C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267c98;
        }
    }
    ctx->pc = 0x267D08u;
    // 0x267d08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267D08u;
    {
        const bool branch_taken_0x267d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D08u;
        // 0x267d0c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d08) {
            ctx->pc = 0x267D18u;
            goto label_267d18;
        }
    }
    ctx->pc = 0x267D10u;
label_267d10:
    // 0x267d10: 0x24870018  addiu       $a3, $a0, 0x18
    ctx->pc = 0x267d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x267d14: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x267d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_267d18:
    // 0x267d18: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x267d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x267d1c: 0x443ffd6  bgezl       $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x267D1Cu;
    {
        const bool branch_taken_0x267d1c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x267d1c) {
            ctx->pc = 0x267D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267D1Cu;
            // 0x267d20: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267c78;
        }
    }
    ctx->pc = 0x267D24u;
    // 0x267d24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267D24u;
    {
        const bool branch_taken_0x267d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D24u;
        // 0x267d28: 0x1e0302d  daddu       $a2, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d24) {
            ctx->pc = 0x267D34u;
            goto label_267d34;
        }
    }
    ctx->pc = 0x267D2Cu;
label_267d2c:
    // 0x267d2c: 0x24cf0001  addiu       $t7, $a2, 0x1
    ctx->pc = 0x267d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x267d30: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x267d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_267d34:
    // 0x267d34: 0xd7102a  slt         $v0, $a2, $s7
    ctx->pc = 0x267d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_267d38:
    // 0x267d38: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x267D38u;
    {
        const bool branch_taken_0x267d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D38u;
        // 0x267d3c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d38) {
            ctx->pc = 0x267AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267ac0;
        }
    }
    ctx->pc = 0x267D40u;
    // 0x267d40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267D40u;
    {
        const bool branch_taken_0x267d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D40u;
        // 0x267d44: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d40) {
            ctx->pc = 0x267D64u;
            goto label_267d64;
        }
    }
    ctx->pc = 0x267D48u;
label_267d48:
    // 0x267d48: 0x8cf3000c  lw          $s3, 0xC($a3)
    ctx->pc = 0x267d48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x267d4c: 0x269e0001  addiu       $fp, $s4, 0x1
    ctx->pc = 0x267d4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x267d50: 0x8d0e0000  lw          $t6, 0x0($t0)
    ctx->pc = 0x267d50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x267d54: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x267d54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x267d58: 0x8cf10004  lw          $s1, 0x4($a3)
    ctx->pc = 0x267d58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x267d5c: 0x8cf90008  lw          $t9, 0x8($a3)
    ctx->pc = 0x267d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x267d60: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x267d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_267d64:
    // 0x267d64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x267d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x267d68: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x267d68u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x267d6c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x267d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x267d70: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x267d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x267d74: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x267d74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d78: 0xe7200008  swc1        $f0, 0x8($t9)
    ctx->pc = 0x267d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 8), bits); }
    // 0x267d7c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x267d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267d80: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x267d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x267d84: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x267d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x267d88: 0x285202a  slt         $a0, $s4, $a1
    ctx->pc = 0x267d88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x267d8c: 0xa7200000  sh          $zero, 0x0($t9)
    ctx->pc = 0x267d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x267d90: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x267d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267d94: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x267d94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x267d98: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x267d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x267d9c: 0xe7200018  swc1        $f0, 0x18($t9)
    ctx->pc = 0x267d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 24), bits); }
    // 0x267da0: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x267da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x267da4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x267da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x267da8: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x267da8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x267dac: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x267dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267db0: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x267db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x267db4: 0xe7200010  swc1        $f0, 0x10($t9)
    ctx->pc = 0x267db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 16), bits); }
    // 0x267db8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x267db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x267dbc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x267dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x267dc0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x267dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267dc4: 0xe6610020  swc1        $f1, 0x20($s3)
    ctx->pc = 0x267dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x267dc8: 0xe7210020  swc1        $f1, 0x20($t9)
    ctx->pc = 0x267dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 32), bits); }
    // 0x267dcc: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x267dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x267dd0: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x267dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x267dd4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x267dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267dd8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x267dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x267ddc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x267ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x267de0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x267de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267de4: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x267de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x267de8: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x267de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x267dec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x267decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267df0: 0xe7200004  swc1        $f0, 0x4($t9)
    ctx->pc = 0x267df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4), bits); }
    // 0x267df4: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x267df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x267df8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x267df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267dfc: 0xe721000c  swc1        $f1, 0xC($t9)
    ctx->pc = 0x267dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 12), bits); }
    // 0x267e00: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x267e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x267e04: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x267e04u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x267e08: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x267e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e0c: 0xa5c30006  sh          $v1, 0x6($t6)
    ctx->pc = 0x267e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x267e10: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x267e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x267e14: 0xe7200014  swc1        $f0, 0x14($t9)
    ctx->pc = 0x267e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 20), bits); }
    // 0x267e18: 0xa5c00004  sh          $zero, 0x4($t6)
    ctx->pc = 0x267e18u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x267e1c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x267e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e20: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x267e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x267e24: 0xe720001c  swc1        $f0, 0x1C($t9)
    ctx->pc = 0x267e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 28), bits); }
    // 0x267e28: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x267e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267e2c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x267e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x267e30: 0xe6610014  swc1        $f1, 0x14($s3)
    ctx->pc = 0x267e30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x267e34: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x267e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x267e38: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x267e38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x267e3c: 0xe662001c  swc1        $f2, 0x1C($s3)
    ctx->pc = 0x267e3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x267e40: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x267e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e44: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x267e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x267e48: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x267e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267e4c: 0xe5c1000c  swc1        $f1, 0xC($t6)
    ctx->pc = 0x267e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
    // 0x267e50: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x267e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e54: 0xe5c00010  swc1        $f0, 0x10($t6)
    ctx->pc = 0x267e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 16), bits); }
    // 0x267e58: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x267e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267e5c: 0xe5c10014  swc1        $f1, 0x14($t6)
    ctx->pc = 0x267e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 20), bits); }
    // 0x267e60: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x267e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e64: 0xe5c00018  swc1        $f0, 0x18($t6)
    ctx->pc = 0x267e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 24), bits); }
    // 0x267e68: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x267e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267e6c: 0xe5c1001c  swc1        $f1, 0x1C($t6)
    ctx->pc = 0x267e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 28), bits); }
    // 0x267e70: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x267e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e74: 0xe5c00020  swc1        $f0, 0x20($t6)
    ctx->pc = 0x267e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 32), bits); }
    // 0x267e78: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x267e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267e7c: 0xe5c10024  swc1        $f1, 0x24($t6)
    ctx->pc = 0x267e7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 36), bits); }
    // 0x267e80: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x267e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e84: 0xe5c00028  swc1        $f0, 0x28($t6)
    ctx->pc = 0x267e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 40), bits); }
    // 0x267e88: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x267e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267e8c: 0xe5c1002c  swc1        $f1, 0x2C($t6)
    ctx->pc = 0x267e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 44), bits); }
    // 0x267e90: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x267e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e94: 0xe5c00030  swc1        $f0, 0x30($t6)
    ctx->pc = 0x267e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 48), bits); }
    // 0x267e98: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x267e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267e9c: 0x1480fea6  bnez        $a0, . + 4 + (-0x15A << 2)
    ctx->pc = 0x267E9Cu;
    {
        const bool branch_taken_0x267e9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x267EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E9Cu;
        // 0x267ea0: 0xe5c10034  swc1        $f1, 0x34($t6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e9c) {
            ctx->pc = 0x267938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267938;
        }
    }
    ctx->pc = 0x267EA4u;
    // 0x267ea4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x267EA4u;
    {
        const bool branch_taken_0x267ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EA4u;
        // 0x267ea8: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ea4) {
            ctx->pc = 0x267EBCu;
            goto label_267ebc;
        }
    }
    ctx->pc = 0x267EACu;
label_267eac:
    // 0x267eac: 0x8eb50008  lw          $s5, 0x8($s5)
    ctx->pc = 0x267eacu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x267eb0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x267eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x267eb4: 0xafb50034  sw          $s5, 0x34($sp)
    ctx->pc = 0x267eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 21));
    // 0x267eb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x267eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_267ebc:
    // 0x267ebc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x267ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267ec0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x267ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x267ec4: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x267ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x267ec8: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x267ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x267ecc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x267eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x267ed0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x267ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x267ed4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x267ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x267ed8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x267ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_267edc:
    // 0x267edc: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x267edcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_267ee0:
    // 0x267ee0: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x267ee0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x267ee4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x267ee4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x267ee8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x267ee8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x267eec: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x267eecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x267ef0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x267ef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267ef4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x267ef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267ef8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x267ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267efc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x267efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267f00: 0x3e00008  jr          $ra
    ctx->pc = 0x267F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F00u;
        // 0x267f04: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267F08u;
}
