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

// Function: enemyCreateNPC
// Address: 0x2cc510 - 0x2cc778
void enemyCreateNPC_0x2cc510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyCreateNPC_0x2cc510");
#endif

    switch (ctx->pc) {
        case 0x2cc588u: goto label_2cc588;
        case 0x2cc5fcu: goto label_2cc5fc;
        case 0x2cc614u: goto label_2cc614;
        case 0x2cc644u: goto label_2cc644;
        case 0x2cc664u: goto label_2cc664;
        case 0x2cc670u: goto label_2cc670;
        case 0x2cc710u: goto label_2cc710;
        case 0x2cc740u: goto label_2cc740;
        default: break;
    }

    ctx->pc = 0x2cc510u;

    // 0x2cc510: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2cc510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2cc514: 0x8f8c9f74  lw          $t4, -0x608C($gp)
    ctx->pc = 0x2cc514u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cc518: 0x8f8bb59c  lw          $t3, -0x4A64($gp)
    ctx->pc = 0x2cc518u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2cc51c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2cc51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2cc520: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2cc520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2cc524: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2cc524u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc528: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2cc528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2cc52c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cc52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc530: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2cc530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2cc534: 0x16c1821  addu        $v1, $t3, $t4
    ctx->pc = 0x2cc534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x2cc538: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2cc538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2cc53c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2cc53cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc540: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2cc540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2cc544: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x2cc544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc548: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cc548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cc54c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2cc54cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc550: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2cc550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cc554: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2cc554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc558: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2cc558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2cc55c: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2cc55cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cc560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc564: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2cc564u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc568: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2cc568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2cc56c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2cc56cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc570: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2cc570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cc574: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CC574u;
    {
        const bool branch_taken_0x2cc574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC574u;
        // 0x2cc578: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc574) {
            ctx->pc = 0x2CC5A8u;
            goto label_2cc5a8;
        }
    }
    ctx->pc = 0x2CC57Cu;
    // 0x2cc57c: 0x8f86b238  lw          $a2, -0x4DC8($gp)
    ctx->pc = 0x2cc57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cc580: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2cc580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc584: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2cc584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_2cc588:
    // 0x2cc588: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2cc588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cc58c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2cc58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cc590: 0x8c430a9c  lw          $v1, 0xA9C($v0)
    ctx->pc = 0x2cc590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2716)));
    // 0x2cc594: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x2cc594u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x2cc598: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2cc598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2cc59c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2cc59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2cc5a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CC5A0u;
    {
        const bool branch_taken_0x2cc5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5A0u;
        // 0x2cc5a4: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5a0) {
            ctx->pc = 0x2CC588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc588;
        }
    }
    ctx->pc = 0x2CC5A8u;
label_2cc5a8:
    // 0x2cc5a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cc5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc5ac: 0x5623000b  bnel        $s1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CC5ACu;
    {
        const bool branch_taken_0x2cc5ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cc5ac) {
            ctx->pc = 0x2CC5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC5ACu;
            // 0x2cc5b0: 0x24031210  addiu       $v1, $zero, 0x1210 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC5DCu;
            goto label_2cc5dc;
        }
    }
    ctx->pc = 0x2CC5B4u;
    // 0x2cc5b4: 0x28e20064  slti        $v0, $a3, 0x64
    ctx->pc = 0x2cc5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2cc5b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC5B8u;
    {
        const bool branch_taken_0x2cc5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc5b8) {
            ctx->pc = 0x2CC5CCu;
            goto label_2cc5cc;
        }
    }
    ctx->pc = 0x2CC5C0u;
    // 0x2cc5c0: 0x18b8821  addu        $s1, $t4, $t3
    ctx->pc = 0x2cc5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2cc5c4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2cc5c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2cc5c8: 0xaf8bb59c  sw          $t3, -0x4A64($gp)
    ctx->pc = 0x2cc5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948252), GPR_U32(ctx, 11));
label_2cc5cc:
    // 0x2cc5cc: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC5CCu;
    {
        const bool branch_taken_0x2cc5cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5CCu;
        // 0x2cc5d0: 0x24031210  addiu       $v1, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5cc) {
            ctx->pc = 0x2CC5DCu;
            goto label_2cc5dc;
        }
    }
    ctx->pc = 0x2CC5D4u;
    // 0x2cc5d4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2CC5D4u;
    {
        const bool branch_taken_0x2cc5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5D4u;
        // 0x2cc5d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5d4) {
            ctx->pc = 0x2CC744u;
            goto label_2cc744;
        }
    }
    ctx->pc = 0x2CC5DCu;
label_2cc5dc:
    // 0x2cc5dc: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x2cc5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cc5e0: 0x2238018  mult        $s0, $s1, $v1
    ctx->pc = 0x2cc5e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2cc5e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2cc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2cc5e8: 0x8c440bcc  lw          $a0, 0xBCC($v0)
    ctx->pc = 0x2cc5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x2cc5ec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC5ECu;
    {
        const bool branch_taken_0x2cc5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc5ec) {
            ctx->pc = 0x2CC608u;
            goto label_2cc608;
        }
    }
    ctx->pc = 0x2CC5F4u;
    // 0x2cc5f4: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x2CC5F4u;
    SET_GPR_U32(ctx, 31, 0x2CC5FCu);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x2CC5F4u, 0x2CC5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC5FCu;
label_2cc5fc:
    // 0x2cc5fc: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x2cc5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cc600: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2cc600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2cc604: 0xac400bcc  sw          $zero, 0xBCC($v0)
    ctx->pc = 0x2cc604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3020), GPR_U32(ctx, 0));
label_2cc608:
    // 0x2cc608: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2cc608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2cc60c: 0xc099380  jal         func_264E00
    ctx->pc = 0x2CC60Cu;
    SET_GPR_U32(ctx, 31, 0x2CC614u);
    ctx->pc = 0x2CC610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC60Cu;
    // 0x2cc610: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2CC60Cu, 0x2CC614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC614u;
label_2cc614:
    // 0x2cc614: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x2cc614u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x2cc618: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cc618u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2cc61c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2cc61cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc624: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2cc624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc628: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2cc628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc62c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cc62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc630: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2cc630u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2cc634: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2cc634u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2cc638: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x2cc638u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x2cc63c: 0xc0a1f30  jal         func_287CC0
    ctx->pc = 0x2CC63Cu;
    SET_GPR_U32(ctx, 31, 0x2CC644u);
    ctx->pc = 0x2CC640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC63Cu;
    // 0x2cc640: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287CC0u, 0x2CC63Cu, 0x2CC644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC644u;
label_2cc644:
    // 0x2cc644: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x2cc644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cc648: 0x26652058  addiu       $a1, $s3, 0x2058
    ctx->pc = 0x2cc648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8280));
    // 0x2cc64c: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x2cc64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2cc650: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x2cc650u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2cc654: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cc654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cc658: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cc658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cc65c: 0xc0a21c4  jal         func_288710
    ctx->pc = 0x2CC65Cu;
    SET_GPR_U32(ctx, 31, 0x2CC664u);
    ctx->pc = 0x2CC660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC65Cu;
    // 0x2cc660: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288710u, 0x2CC65Cu, 0x2CC664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC664u;
label_2cc664:
    // 0x2cc664: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x2cc664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cc668: 0xc0a224a  jal         func_288928
    ctx->pc = 0x2CC668u;
    SET_GPR_U32(ctx, 31, 0x2CC670u);
    ctx->pc = 0x2CC66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC668u;
    // 0x2cc66c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288928u, 0x2CC668u, 0x2CC670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC670u;
label_2cc670:
    // 0x2cc670: 0x8f85b238  lw          $a1, -0x4DC8($gp)
    ctx->pc = 0x2cc670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cc674: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cc674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc678: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x2cc678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2cc67c: 0x8c820a90  lw          $v0, 0xA90($a0)
    ctx->pc = 0x2cc67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2704)));
    // 0x2cc680: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2cc680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2cc684: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC684u;
    {
        const bool branch_taken_0x2cc684 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC684u;
        // 0x2cc688: 0xac820a90  sw          $v0, 0xA90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc684) {
            ctx->pc = 0x2CC694u;
            goto label_2cc694;
        }
    }
    ctx->pc = 0x2CC68Cu;
    // 0x2cc68c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC68Cu;
    {
        const bool branch_taken_0x2cc68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC68Cu;
        // 0x2cc690: 0xac940104  sw          $s4, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc68c) {
            ctx->pc = 0x2CC698u;
            goto label_2cc698;
        }
    }
    ctx->pc = 0x2CC694u;
label_2cc694:
    // 0x2cc694: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x2cc694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
label_2cc698:
    // 0x2cc698: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x2cc698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2cc69c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x2cc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x2cc6a0: 0x2232018  mult        $a0, $s1, $v1
    ctx->pc = 0x2cc6a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cc6a4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2cc6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x2cc6a8: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2cc6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2cc6ac: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2cc6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cc6b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC6B0u;
    {
        const bool branch_taken_0x2cc6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6B0u;
        // 0x2cc6b4: 0xac720aa4  sw          $s2, 0xAA4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2724), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6b0) {
            ctx->pc = 0x2CC6D0u;
            goto label_2cc6d0;
        }
    }
    ctx->pc = 0x2CC6B8u;
    // 0x2cc6b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2cc6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc6bc: 0x12c40003  beq         $s6, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC6BCu;
    {
        const bool branch_taken_0x2cc6bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6BCu;
        // 0x2cc6c0: 0xac7e0aa8  sw          $fp, 0xAA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2728), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6bc) {
            ctx->pc = 0x2CC6CCu;
            goto label_2cc6cc;
        }
    }
    ctx->pc = 0x2CC6C4u;
    // 0x2cc6c4: 0x36c20010  ori         $v0, $s6, 0x10
    ctx->pc = 0x2cc6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)16);
    // 0x2cc6c8: 0xac620a90  sw          $v0, 0xA90($v1)
    ctx->pc = 0x2cc6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2704), GPR_U32(ctx, 2));
label_2cc6cc:
    // 0x2cc6cc: 0xac640ad0  sw          $a0, 0xAD0($v1)
    ctx->pc = 0x2cc6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2768), GPR_U32(ctx, 4));
label_2cc6d0:
    // 0x2cc6d0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2cc6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2cc6d4: 0x16e20010  bne         $s7, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CC6D4u;
    {
        const bool branch_taken_0x2cc6d4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6D4u;
        // 0x2cc6d8: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6d4) {
            ctx->pc = 0x2CC718u;
            goto label_2cc718;
        }
    }
    ctx->pc = 0x2CC6DCu;
    // 0x2cc6dc: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x2cc6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x2cc6e0: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2cc6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2cc6e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CC6E4u;
    {
        const bool branch_taken_0x2cc6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6E4u;
        // 0x2cc6e8: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6e4) {
            ctx->pc = 0x2CC718u;
            goto label_2cc718;
        }
    }
    ctx->pc = 0x2CC6ECu;
    // 0x2cc6ec: 0x26642058  addiu       $a0, $s3, 0x2058
    ctx->pc = 0x2cc6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8280));
    // 0x2cc6f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cc6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc6f4: 0x240501dc  addiu       $a1, $zero, 0x1DC
    ctx->pc = 0x2cc6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
    // 0x2cc6f8: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x2cc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2cc6fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cc6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cc700: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cc700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cc704: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cc704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc708: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2CC708u;
    SET_GPR_U32(ctx, 31, 0x2CC710u);
    ctx->pc = 0x2CC70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC708u;
    // 0x2cc70c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2CC708u, 0x2CC710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC710u;
label_2cc710:
    // 0x2cc710: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CC710u;
    {
        const bool branch_taken_0x2cc710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC710u;
        // 0x2cc714: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc710) {
            ctx->pc = 0x2CC744u;
            goto label_2cc744;
        }
    }
    ctx->pc = 0x2CC718u;
label_2cc718:
    // 0x2cc718: 0x26642058  addiu       $a0, $s3, 0x2058
    ctx->pc = 0x2cc718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8280));
    // 0x2cc71c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cc71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cc720: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cc720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc724: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2cc724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cc728: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x2cc728u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2cc72c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cc730: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cc730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cc734: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cc734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc738: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2CC738u;
    SET_GPR_U32(ctx, 31, 0x2CC740u);
    ctx->pc = 0x2CC73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC738u;
    // 0x2cc73c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2CC738u, 0x2CC740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC740u;
label_2cc740:
    // 0x2cc740: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cc740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc744:
    // 0x2cc744: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2cc744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cc748: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2cc748u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cc74c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2cc74cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cc750: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2cc750u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cc754: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2cc754u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc758: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2cc758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc75c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2cc75cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc760: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cc760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc764: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2cc764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cc768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc76c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2cc76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cc770: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC770u;
        // 0x2cc774: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC778u;
}
