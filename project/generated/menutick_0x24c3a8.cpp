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

// Function: menutick
// Address: 0x24c3a8 - 0x24c670
void menutick_0x24c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menutick_0x24c3a8");
#endif

    switch (ctx->pc) {
        case 0x24c3dcu: goto label_24c3dc;
        case 0x24c3f8u: goto label_24c3f8;
        case 0x24c3fcu: goto label_24c3fc;
        case 0x24c434u: goto label_24c434;
        case 0x24c448u: goto label_24c448;
        case 0x24c544u: goto label_24c544;
        case 0x24c574u: goto label_24c574;
        case 0x24c58cu: goto label_24c58c;
        case 0x24c5b0u: goto label_24c5b0;
        case 0x24c5e4u: goto label_24c5e4;
        case 0x24c5f4u: goto label_24c5f4;
        case 0x24c60cu: goto label_24c60c;
        case 0x24c620u: goto label_24c620;
        case 0x24c634u: goto label_24c634;
        default: break;
    }

    ctx->pc = 0x24c3a8u;

    // 0x24c3a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24c3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24c3ac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24c3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24c3b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24c3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24c3b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24c3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24c3b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24c3b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c3bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24c3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24c3c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c3c4: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x24c3c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24c3c8: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x24C3C8u;
    {
        const bool branch_taken_0x24c3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3C8u;
        // 0x24c3cc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3c8) {
            ctx->pc = 0x24C654u;
            goto label_24c654;
        }
    }
    ctx->pc = 0x24C3D0u;
    // 0x24c3d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24c3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c3d4: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x24C3D4u;
    SET_GPR_U32(ctx, 31, 0x24C3DCu);
    ctx->pc = 0x24C3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C3D4u;
    // 0x24c3d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x24C3D4u, 0x24C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3DCu;
label_24c3dc:
    // 0x24c3dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24c3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c3e0: 0x1220009c  beqz        $s1, . + 4 + (0x9C << 2)
    ctx->pc = 0x24C3E0u;
    {
        const bool branch_taken_0x24c3e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3E0u;
        // 0x24c3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3e0) {
            ctx->pc = 0x24C654u;
            goto label_24c654;
        }
    }
    ctx->pc = 0x24C3E8u;
    // 0x24c3e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24c3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24c3ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24C3ECu;
    {
        const bool branch_taken_0x24c3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3ECu;
        // 0x24c3f0: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3ec) {
            ctx->pc = 0x24C400u;
            goto label_24c400;
        }
    }
    ctx->pc = 0x24C3F4u;
    // 0x24c3f4: 0x0  nop
    ctx->pc = 0x24c3f4u;
    // NOP
label_24c3f8:
    // 0x24c3f8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x24c3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_24c3fc:
    // 0x24c3fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24c3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24c400:
    // 0x24c400: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x24c400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24c404: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24C404u;
    {
        const bool branch_taken_0x24c404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C404u;
        // 0x24c408: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c404) {
            ctx->pc = 0x24C43Cu;
            goto label_24c43c;
        }
    }
    ctx->pc = 0x24C40Cu;
    // 0x24c40c: 0xa62004  sllv        $a0, $a2, $a1
    ctx->pc = 0x24c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x24c410: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24c414: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x24c414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24c418: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24C418u;
    {
        const bool branch_taken_0x24c418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c418) {
            ctx->pc = 0x24C41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C418u;
            // 0x24c41c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C3FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c3fc;
        }
    }
    ctx->pc = 0x24C420u;
    // 0x24c420: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x24c420u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24c424: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x24C424u;
    {
        const bool branch_taken_0x24c424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C424u;
        // 0x24c428: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c424) {
            ctx->pc = 0x24C3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c3f8;
        }
    }
    ctx->pc = 0x24C42Cu;
    // 0x24c42c: 0xc081546  jal         func_205518
    ctx->pc = 0x24C42Cu;
    SET_GPR_U32(ctx, 31, 0x24C434u);
    ctx->pc = 0x24C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C42Cu;
    // 0x24c430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x24C42Cu, 0x24C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C434u;
label_24c434:
    // 0x24c434: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x24c434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24c438: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x24c438u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
label_24c43c:
    // 0x24c43c: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x24c43cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24c440: 0xc08b7b2  jal         func_22DEC8
    ctx->pc = 0x24C440u;
    SET_GPR_U32(ctx, 31, 0x24C448u);
    ctx->pc = 0x24C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C440u;
    // 0x24c444: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DEC8u, 0x24C440u, 0x24C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C448u;
label_24c448:
    // 0x24c448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24c448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c44c: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x24C44Cu;
    {
        const bool branch_taken_0x24c44c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C44Cu;
        // 0x24c450: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c44c) {
            ctx->pc = 0x24C4E8u;
            goto label_24c4e8;
        }
    }
    ctx->pc = 0x24C454u;
    // 0x24c454: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x24c454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x24c458: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x24c458u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24c45c: 0x24a9000c  addiu       $t1, $a1, 0xC
    ctx->pc = 0x24c45cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x24c460: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24c460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24c464: 0x24143  sra         $t0, $v0, 5
    ctx->pc = 0x24c464u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 5));
    // 0x24c468: 0x1233821  addu        $a3, $t1, $v1
    ctx->pc = 0x24c468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x24c46c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x24c46cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24c470: 0x1023023  subu        $a2, $t0, $v0
    ctx->pc = 0x24c470u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x24c474: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x24c474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24c478: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C478u;
    {
        const bool branch_taken_0x24c478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C478u;
        // 0x24c47c: 0x2503fffe  addiu       $v1, $t0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c478) {
            ctx->pc = 0x24C494u;
            goto label_24c494;
        }
    }
    ctx->pc = 0x24C480u;
    // 0x24c480: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24c484: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24c484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24c488: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x24c488u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x24c48c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24C48Cu;
    {
        const bool branch_taken_0x24c48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C48Cu;
        // 0x24c490: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c48c) {
            ctx->pc = 0x24C4B8u;
            goto label_24c4b8;
        }
    }
    ctx->pc = 0x24C494u;
label_24c494:
    // 0x24c494: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x24c494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x24c498: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x24c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x24c49c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x24c49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24c4a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C4A0u;
    {
        const bool branch_taken_0x24c4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c4a0) {
            ctx->pc = 0x24C4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C4A0u;
            // 0x24c4a4: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C4C0u;
            goto label_24c4c0;
        }
    }
    ctx->pc = 0x24C4A8u;
    // 0x24c4a8: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x24c4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x24c4ac: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x24c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x24c4b0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x24c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x24c4b4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x24c4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_24c4b8:
    // 0x24c4b8: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x24c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24c4bc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x24c4bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_24c4c0:
    // 0x24c4c0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x24c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x24c4c4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x24c4c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24c4c8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C4C8u;
    {
        const bool branch_taken_0x24c4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c4c8) {
            ctx->pc = 0x24C4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C4C8u;
            // 0x24c4cc: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C4F0u;
            goto label_24c4f0;
        }
    }
    ctx->pc = 0x24C4D0u;
    // 0x24c4d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24c4d4: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x24c4d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x24c4d8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x24c4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c4dc: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x24c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x24c4e0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x24c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24c4e4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x24c4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_24c4e8:
    // 0x24c4e8: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x24c4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24c4ec: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x24c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_24c4f0:
    // 0x24c4f0: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x24c4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x24c4f4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x24C4F4u;
    {
        const bool branch_taken_0x24c4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4F4u;
        // 0x24c4f8: 0x9625000a  lhu         $a1, 0xA($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4f4) {
            ctx->pc = 0x24C578u;
            goto label_24c578;
        }
    }
    ctx->pc = 0x24C4FCu;
    // 0x24c4fc: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x24c4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x24c500: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x24C500u;
    {
        const bool branch_taken_0x24c500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C500u;
        // 0x24c504: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c500) {
            ctx->pc = 0x24C578u;
            goto label_24c578;
        }
    }
    ctx->pc = 0x24C508u;
    // 0x24c508: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x24C508u;
    {
        const bool branch_taken_0x24c508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c508) {
            ctx->pc = 0x24C50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C508u;
            // 0x24c50c: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C56Cu;
            goto label_24c56c;
        }
    }
    ctx->pc = 0x24C510u;
    // 0x24c510: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x24c510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24c514: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24c518: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24c518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24c51c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C51Cu;
    {
        const bool branch_taken_0x24c51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C51Cu;
        // 0x24c520: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c51c) {
            ctx->pc = 0x24C52Cu;
            goto label_24c52c;
        }
    }
    ctx->pc = 0x24C524u;
    // 0x24c524: 0x2402028f  addiu       $v0, $zero, 0x28F
    ctx->pc = 0x24c524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    // 0x24c528: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x24c528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_24c52c:
    // 0x24c52c: 0x108143  sra         $s0, $s0, 5
    ctx->pc = 0x24c52cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 5));
    // 0x24c530: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24C530u;
    {
        const bool branch_taken_0x24c530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C530u;
        // 0x24c534: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c530) {
            ctx->pc = 0x24C57Cu;
            goto label_24c57c;
        }
    }
    ctx->pc = 0x24C538u;
    // 0x24c538: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x24c538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x24c53c: 0xc081546  jal         func_205518
    ctx->pc = 0x24C53Cu;
    SET_GPR_U32(ctx, 31, 0x24C544u);
    ctx->pc = 0x24C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C53Cu;
    // 0x24c540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x24C53Cu, 0x24C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C544u;
label_24c544:
    // 0x24c544: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x24c544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24c548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24c548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c54c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x24c54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24c550: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24c550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c554: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x24c554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x24c558: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24c558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c55c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24c55cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c564: 0x808b0c2  j           func_22C308
    ctx->pc = 0x24C564u;
    ctx->pc = 0x24C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C564u;
    // 0x24c568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    gvSetValue_0x22c308(rdram, ctx, runtime); return;
    ctx->pc = 0x24C56Cu;
label_24c56c:
    // 0x24c56c: 0xc081546  jal         func_205518
    ctx->pc = 0x24C56Cu;
    SET_GPR_U32(ctx, 31, 0x24C574u);
    ctx->pc = 0x24C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C56Cu;
    // 0x24c570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x24C56Cu, 0x24C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C574u;
label_24c574:
    // 0x24c574: 0x9625000a  lhu         $a1, 0xA($s1)
    ctx->pc = 0x24c574u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_24c578:
    // 0x24c578: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x24c578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_24c57c:
    // 0x24c57c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x24C57Cu;
    {
        const bool branch_taken_0x24c57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c57c) {
            ctx->pc = 0x24C604u;
            goto label_24c604;
        }
    }
    ctx->pc = 0x24C584u;
    // 0x24c584: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24C584u;
    SET_GPR_U32(ctx, 31, 0x24C58Cu);
    ctx->pc = 0x24C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C584u;
    // 0x24c588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24C584u, 0x24C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C58Cu;
label_24c58c:
    // 0x24c58c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24c58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x24c590: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x24C590u;
    {
        const bool branch_taken_0x24c590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C590u;
        // 0x24c594: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c590) {
            ctx->pc = 0x24C604u;
            goto label_24c604;
        }
    }
    ctx->pc = 0x24C598u;
    // 0x24c598: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x24c598u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24c59c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24C59Cu;
    {
        const bool branch_taken_0x24c59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c59c) {
            ctx->pc = 0x24C5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C59Cu;
            // 0x24c5a0: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5D0u;
            goto label_24c5d0;
        }
    }
    ctx->pc = 0x24C5A4u;
    // 0x24c5a4: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x24c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x24c5a8: 0xc081546  jal         func_205518
    ctx->pc = 0x24C5A8u;
    SET_GPR_U32(ctx, 31, 0x24C5B0u);
    ctx->pc = 0x24C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5A8u;
    // 0x24c5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x24C5A8u, 0x24C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C5B0u;
label_24c5b0:
    // 0x24c5b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c5b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24c5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c5b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24c5b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c5bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24c5bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c5c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24c5c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c5c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c5c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c5c8: 0x8092e82  j           func_24BA08
    ctx->pc = 0x24C5C8u;
    ctx->pc = 0x24C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5C8u;
    // 0x24c5cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    mmExitMenu_0x24ba08(rdram, ctx, runtime); return;
    ctx->pc = 0x24C5D0u;
label_24c5d0:
    // 0x24c5d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24c5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c5d4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x24C5D4u;
    {
        const bool branch_taken_0x24c5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5D4u;
        // 0x24c5d8: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5d4) {
            ctx->pc = 0x24C654u;
            goto label_24c654;
        }
    }
    ctx->pc = 0x24C5DCu;
    // 0x24c5dc: 0xc081546  jal         func_205518
    ctx->pc = 0x24C5DCu;
    SET_GPR_U32(ctx, 31, 0x24C5E4u);
    ctx->pc = 0x24C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5DCu;
    // 0x24c5e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x24C5DCu, 0x24C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C5E4u;
label_24c5e4:
    // 0x24c5e4: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x24c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24c5e8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x24c5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24c5ec: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x24C5ECu;
    SET_GPR_U32(ctx, 31, 0x24C5F4u);
    ctx->pc = 0x24C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5ECu;
    // 0x24c5f0: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x24C5ECu, 0x24C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C5F4u;
label_24c5f4:
    // 0x24c5f4: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x24c5f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24c5f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24c5fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24C5FCu;
    {
        const bool branch_taken_0x24c5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5FCu;
        // 0x24c600: 0xa4430008  sh          $v1, 0x8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5fc) {
            ctx->pc = 0x24C654u;
            goto label_24c654;
        }
    }
    ctx->pc = 0x24C604u;
label_24c604:
    // 0x24c604: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24C604u;
    SET_GPR_U32(ctx, 31, 0x24C60Cu);
    ctx->pc = 0x24C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C604u;
    // 0x24c608: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24C604u, 0x24C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C60Cu;
label_24c60c:
    // 0x24c60c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24c60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x24c610: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24C610u;
    {
        const bool branch_taken_0x24c610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C610u;
        // 0x24c614: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c610) {
            ctx->pc = 0x24C654u;
            goto label_24c654;
        }
    }
    ctx->pc = 0x24C618u;
    // 0x24c618: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x24C618u;
    SET_GPR_U32(ctx, 31, 0x24C620u);
    ctx->pc = 0x24C61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C618u;
    // 0x24c61c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x24C618u, 0x24C620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C620u;
label_24c620:
    // 0x24c620: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24C620u;
    {
        const bool branch_taken_0x24c620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C620u;
        // 0x24c624: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c620) {
            ctx->pc = 0x24C658u;
            goto label_24c658;
        }
    }
    ctx->pc = 0x24C628u;
    // 0x24c628: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x24c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x24c62c: 0xc081546  jal         func_205518
    ctx->pc = 0x24C62Cu;
    SET_GPR_U32(ctx, 31, 0x24C634u);
    ctx->pc = 0x24C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C62Cu;
    // 0x24c630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x24C62Cu, 0x24C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C634u;
label_24c634:
    // 0x24c634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24c634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c638: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24c638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c63c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24c63cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c640: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24c640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c644: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24c644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c64c: 0x8092e82  j           func_24BA08
    ctx->pc = 0x24C64Cu;
    ctx->pc = 0x24C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C64Cu;
    // 0x24c650: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    mmExitMenu_0x24ba08(rdram, ctx, runtime); return;
    ctx->pc = 0x24C654u;
label_24c654:
    // 0x24c654: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24c654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24c658:
    // 0x24c658: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24c658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c65c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24c65cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c660: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24c660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c668: 0x3e00008  jr          $ra
    ctx->pc = 0x24C668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C668u;
        // 0x24c66c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C670u;
}
