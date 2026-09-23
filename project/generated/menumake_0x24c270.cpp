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

// Function: menumake
// Address: 0x24c270 - 0x24c3a8
void menumake_0x24c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menumake_0x24c270");
#endif

    switch (ctx->pc) {
        case 0x24c2b0u: goto label_24c2b0;
        case 0x24c2ccu: goto label_24c2cc;
        case 0x24c35cu: goto label_24c35c;
        default: break;
    }

    ctx->pc = 0x24c270u;

    // 0x24c270: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24c274: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24c274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24c278: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24c27c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24c27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24c280: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24c280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c284: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24c284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24c288: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24c288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c28c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24c28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24c290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c294: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x24c298: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x24c298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c29c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x24c29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x24c2a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24c2a4: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x24C2A4u;
    {
        const bool branch_taken_0x24c2a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2A4u;
        // 0x24c2a8: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2a4) {
            ctx->pc = 0x24C370u;
            goto label_24c370;
        }
    }
    ctx->pc = 0x24C2ACu;
    // 0x24c2ac: 0x24150018  addiu       $s5, $zero, 0x18
    ctx->pc = 0x24c2acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_24c2b0:
    // 0x24c2b0: 0x9604000a  lhu         $a0, 0xA($s0)
    ctx->pc = 0x24c2b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x24c2b4: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x24c2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x24c2b8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C2B8u;
    {
        const bool branch_taken_0x24c2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c2b8) {
            ctx->pc = 0x24C2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C2B8u;
            // 0x24c2bc: 0x96420004  lhu         $v0, 0x4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C2D8u;
            goto label_24c2d8;
        }
    }
    ctx->pc = 0x24C2C0u;
    // 0x24c2c0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x24c2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24c2c4: 0xc09305a  jal         func_24C168
    ctx->pc = 0x24C2C4u;
    SET_GPR_U32(ctx, 31, 0x24C2CCu);
    ctx->pc = 0x24C2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2C4u;
    // 0x24c2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C168u, 0x24C2C4u, 0x24C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2CCu;
label_24c2cc:
    // 0x24c2cc: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x24c2ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24c2d0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x24C2D0u;
    {
        const bool branch_taken_0x24c2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2D0u;
        // 0x24c2d4: 0x718821  addu        $s1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2d0) {
            ctx->pc = 0x24C35Cu;
            goto label_24c35c;
        }
    }
    ctx->pc = 0x24C2D8u;
label_24c2d8:
    // 0x24c2d8: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x24c2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x24c2dc: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x24c2dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24c2e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24c2e4: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24C2E4u;
    {
        const bool branch_taken_0x24c2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2E4u;
        // 0x24c2e8: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2e4) {
            ctx->pc = 0x24C338u;
            goto label_24c338;
        }
    }
    ctx->pc = 0x24C2ECu;
    // 0x24c2ec: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x24c2ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x24c2f0: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x24c2f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x24c2f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24c2f8: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x24c2f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x24c2fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x24c2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x24c300: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C300u;
    {
        const bool branch_taken_0x24c300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C300u;
        // 0x24c304: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c300) {
            ctx->pc = 0x24C31Cu;
            goto label_24c31c;
        }
    }
    ctx->pc = 0x24C308u;
    // 0x24c308: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x24c308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x24c30c: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x24c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x24c310: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24c310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24c314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24C314u;
    {
        const bool branch_taken_0x24c314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C314u;
        // 0x24c318: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c314) {
            ctx->pc = 0x24C328u;
            goto label_24c328;
        }
    }
    ctx->pc = 0x24C31Cu;
label_24c31c:
    // 0x24c31c: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x24c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x24c320: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x24c320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x24c324: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24c324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24c328:
    // 0x24c328: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x24c328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24c32c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24c330: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24C330u;
    {
        const bool branch_taken_0x24c330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C330u;
        // 0x24c334: 0xa7a40002  sh          $a0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c330) {
            ctx->pc = 0x24C348u;
            goto label_24c348;
        }
    }
    ctx->pc = 0x24C338u;
label_24c338:
    // 0x24c338: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x24c338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x24c33c: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x24c33cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x24c340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24c344: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x24c344u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
label_24c348:
    // 0x24c348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c34c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24c34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c350: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x24c350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x24c354: 0xc092ffe  jal         func_24BFF8
    ctx->pc = 0x24C354u;
    SET_GPR_U32(ctx, 31, 0x24C35Cu);
    ctx->pc = 0x24C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C354u;
    // 0x24c358: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFF8u, 0x24C354u, 0x24C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C35Cu;
label_24c35c:
    // 0x24c35c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24c360: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24c360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x24c364: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x24c364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24c368: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x24C368u;
    {
        const bool branch_taken_0x24c368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C368u;
        // 0x24c36c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c368) {
            ctx->pc = 0x24C2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c2b0;
        }
    }
    ctx->pc = 0x24C370u;
label_24c370:
    // 0x24c370: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x24c370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x24c374: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x24c374u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x24c378: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x24c378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x24c37c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24c37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24c380: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x24c380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24c384: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24c384u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24c388: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24c388u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24c38c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24c38cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c390: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24c390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c394: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24c394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c398: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x24c398u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x24c39c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24c39cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x24C3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3A0u;
        // 0x24c3a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C3A8u;
}
