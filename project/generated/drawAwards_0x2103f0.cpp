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

// Function: drawAwards
// Address: 0x2103f0 - 0x21076c
void drawAwards_0x2103f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawAwards_0x2103f0");
#endif

    switch (ctx->pc) {
        case 0x210428u: goto label_210428;
        case 0x210434u: goto label_210434;
        case 0x210494u: goto label_210494;
        case 0x210538u: goto label_210538;
        case 0x210564u: goto label_210564;
        case 0x210568u: goto label_210568;
        case 0x210574u: goto label_210574;
        case 0x210588u: goto label_210588;
        case 0x210594u: goto label_210594;
        case 0x2105a0u: goto label_2105a0;
        case 0x2105ccu: goto label_2105cc;
        case 0x210600u: goto label_210600;
        case 0x21062cu: goto label_21062c;
        case 0x21063cu: goto label_21063c;
        case 0x210660u: goto label_210660;
        case 0x2106b0u: goto label_2106b0;
        case 0x2106f0u: goto label_2106f0;
        case 0x210710u: goto label_210710;
        case 0x210738u: goto label_210738;
        default: break;
    }

    ctx->pc = 0x2103f0u;

    // 0x2103f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2103f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2103f4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2103f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2103f8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2103f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2103fc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2103fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x210400: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x210400u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x210404: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x210404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x210408: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x210408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21040c: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x21040cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x210410: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x210410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x210414: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x210414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x210418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21041c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x21041cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x210420: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x210420u;
    SET_GPR_U32(ctx, 31, 0x210428u);
    ctx->pc = 0x210424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210420u;
    // 0x210424: 0xffb70070  sd          $s7, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x210420u, 0x210428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210428u;
label_210428:
    // 0x210428: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x210428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21042c: 0xc08089c  jal         func_202270
    ctx->pc = 0x21042Cu;
    SET_GPR_U32(ctx, 31, 0x210434u);
    ctx->pc = 0x210430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21042Cu;
    // 0x210430: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x21042Cu, 0x210434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210434u;
label_210434:
    // 0x210434: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x210434u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x210438: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x210438u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21043c: 0x24d299f0  addiu       $s2, $a2, -0x6610
    ctx->pc = 0x21043cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
    // 0x210440: 0x8cc499f0  lw          $a0, -0x6610($a2)
    ctx->pc = 0x210440u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F0u));
    // 0x210444: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x210444u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3299FCu));
    // 0x210448: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x210448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21044c: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x21044cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A4Cu));
    // 0x210450: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x210450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x210454: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x210454u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210458: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x210458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x21045c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210460: 0x8f88b234  lw          $t0, -0x4DCC($gp)
    ctx->pc = 0x210460u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x210464: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x210464u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x210468: 0x125a00b  movn        $s4, $t1, $a1
    ctx->pc = 0x210468u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 9));
    // 0x21046c: 0x82a821  addu        $s5, $a0, $v0
    ctx->pc = 0x21046cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x210470: 0x24e30014  addiu       $v1, $a3, 0x14
    ctx->pc = 0x210470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x210474: 0x24f10026  addiu       $s1, $a3, 0x26
    ctx->pc = 0x210474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 38));
    // 0x210478: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x210478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x21047c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x21047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x210480: 0x26900003  addiu       $s0, $s4, 0x3
    ctx->pc = 0x210480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
    // 0x210484: 0x65880b  movn        $s1, $v1, $a1
    ctx->pc = 0x210484u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x210488: 0x125b00b  movn        $s6, $t1, $a1
    ctx->pc = 0x210488u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 9));
    // 0x21048c: 0xc0892d8  jal         func_224B60
    ctx->pc = 0x21048Cu;
    SET_GPR_U32(ctx, 31, 0x210494u);
    ctx->pc = 0x210490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21048Cu;
    // 0x210490: 0x45800a  movz        $s0, $v0, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224B60u, 0x21048Cu, 0x210494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210494u;
label_210494:
    // 0x210494: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x210494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210498: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x210498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21049c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21049Cu;
    {
        const bool branch_taken_0x21049c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2104A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21049Cu;
        // 0x2104a0: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21049c) {
            ctx->pc = 0x2104E4u;
            goto label_2104e4;
        }
    }
    ctx->pc = 0x2104A4u;
    // 0x2104a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2104A4u;
    {
        const bool branch_taken_0x2104a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104A4u;
        // 0x2104a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104a4) {
            ctx->pc = 0x2104BCu;
            goto label_2104bc;
        }
    }
    ctx->pc = 0x2104ACu;
    // 0x2104ac: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2104ACu;
    {
        const bool branch_taken_0x2104ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2104B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104ACu;
        // 0x2104b0: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104ac) {
            ctx->pc = 0x2104D0u;
            goto label_2104d0;
        }
    }
    ctx->pc = 0x2104B4u;
    // 0x2104b4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2104B4u;
    {
        const bool branch_taken_0x2104b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104B4u;
        // 0x2104b8: 0x3c17002f  lui         $s7, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104b4) {
            ctx->pc = 0x210510u;
            goto label_210510;
        }
    }
    ctx->pc = 0x2104BCu;
label_2104bc:
    // 0x2104bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2104bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2104c0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2104C0u;
    {
        const bool branch_taken_0x2104c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2104C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104C0u;
        // 0x2104c4: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104c0) {
            ctx->pc = 0x2104F8u;
            goto label_2104f8;
        }
    }
    ctx->pc = 0x2104C8u;
    // 0x2104c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2104C8u;
    {
        const bool branch_taken_0x2104c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104C8u;
        // 0x2104cc: 0x3c17002f  lui         $s7, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104c8) {
            ctx->pc = 0x210510u;
            goto label_210510;
        }
    }
    ctx->pc = 0x2104D0u;
label_2104d0:
    // 0x2104d0: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x2104d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2104d4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2104D4u;
    {
        const bool branch_taken_0x2104d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2104d4) {
            ctx->pc = 0x2104D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2104D4u;
            // 0x2104d8: 0x2610fffb  addiu       $s0, $s0, -0x5 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210508u;
            goto label_210508;
        }
    }
    ctx->pc = 0x2104DCu;
    // 0x2104dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2104DCu;
    {
        const bool branch_taken_0x2104dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104DCu;
        // 0x2104e0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104dc) {
            ctx->pc = 0x210508u;
            goto label_210508;
        }
    }
    ctx->pc = 0x2104E4u;
label_2104e4:
    // 0x2104e4: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x2104e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2104e8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2104E8u;
    {
        const bool branch_taken_0x2104e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2104e8) {
            ctx->pc = 0x2104ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2104E8u;
            // 0x2104ec: 0x2610fff6  addiu       $s0, $s0, -0xA (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210508u;
            goto label_210508;
        }
    }
    ctx->pc = 0x2104F0u;
    // 0x2104f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2104F0u;
    {
        const bool branch_taken_0x2104f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104F0u;
        // 0x2104f4: 0x2610fffa  addiu       $s0, $s0, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104f0) {
            ctx->pc = 0x210508u;
            goto label_210508;
        }
    }
    ctx->pc = 0x2104F8u;
label_2104f8:
    // 0x2104f8: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x2104f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2104fc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2104FCu;
    {
        const bool branch_taken_0x2104fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2104fc) {
            ctx->pc = 0x210500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2104FCu;
            // 0x210500: 0x2610fff1  addiu       $s0, $s0, -0xF (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967281));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210508u;
            goto label_210508;
        }
    }
    ctx->pc = 0x210504u;
    // 0x210504: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x210504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_210508:
    // 0x210508: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x210508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21050c: 0x3c17002f  lui         $s7, 0x2F
    ctx->pc = 0x21050cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)47 << 16));
label_210510:
    // 0x210510: 0x26e22c18  addiu       $v0, $s7, 0x2C18
    ctx->pc = 0x210510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x210514: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x210514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x210518: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x210518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21051c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21051cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210520: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210524: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x210524u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x210528: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x210528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21052c: 0x8c5011b4  lw          $s0, 0x11B4($v0)
    ctx->pc = 0x21052cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4532)));
    // 0x210530: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210530u;
    SET_GPR_U32(ctx, 31, 0x210538u);
    ctx->pc = 0x210534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210530u;
    // 0x210534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210530u, 0x210538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210538u;
label_210538:
    // 0x210538: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x210538u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x21053c: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x21053cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x210540: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x210540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x210544: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x210544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210548: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x210548u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x21054c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21054cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210550: 0x2a42023  subu        $a0, $s5, $a0
    ctx->pc = 0x210550u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x210554: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x210554u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x210558: 0x24085080  addiu       $t0, $zero, 0x5080
    ctx->pc = 0x210558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x21055c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x21055Cu;
    SET_GPR_U32(ctx, 31, 0x210564u);
    ctx->pc = 0x210560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21055Cu;
    // 0x210560: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x21055Cu, 0x210564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210564u;
label_210564:
    // 0x210564: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x210564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_210568:
    // 0x210568: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21056c: 0xc0892c8  jal         func_224B20
    ctx->pc = 0x21056Cu;
    SET_GPR_U32(ctx, 31, 0x210574u);
    ctx->pc = 0x210570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21056Cu;
    // 0x210570: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224B20u, 0x21056Cu, 0x210574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210574u;
label_210574:
    // 0x210574: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x210574u;
    {
        const bool branch_taken_0x210574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210574u;
        // 0x210578: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210574) {
            ctx->pc = 0x2105CCu;
            goto label_2105cc;
        }
    }
    ctx->pc = 0x21057Cu;
    // 0x21057c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210580: 0xc0892c8  jal         func_224B20
    ctx->pc = 0x210580u;
    SET_GPR_U32(ctx, 31, 0x210588u);
    ctx->pc = 0x210584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210580u;
    // 0x210584: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224B20u, 0x210580u, 0x210588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210588u;
label_210588:
    // 0x210588: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x210588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21058c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21058Cu;
    SET_GPR_U32(ctx, 31, 0x210594u);
    ctx->pc = 0x210590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21058Cu;
    // 0x210590: 0x2664e530  addiu       $a0, $s3, -0x1AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21058Cu, 0x210594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210594u;
label_210594:
    // 0x210594: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x210594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210598: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210598u;
    SET_GPR_U32(ctx, 31, 0x2105A0u);
    ctx->pc = 0x21059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210598u;
    // 0x21059c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210598u, 0x2105A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2105A0u;
label_2105a0:
    // 0x2105a0: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2105a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2105a4: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x2105a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x2105a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2105a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2105ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2105acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105b0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2105b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2105b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2105b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105b8: 0x2a42023  subu        $a0, $s5, $a0
    ctx->pc = 0x2105b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2105bc: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x2105bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x2105c0: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x2105c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2105c4: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2105C4u;
    SET_GPR_U32(ctx, 31, 0x2105CCu);
    ctx->pc = 0x2105C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2105C4u;
    // 0x2105c8: 0x2368821  addu        $s1, $s1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2105C4u, 0x2105CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2105CCu;
label_2105cc:
    // 0x2105cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2105ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2105d0: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2105d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2105d4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2105D4u;
    {
        const bool branch_taken_0x2105d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2105D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105D4u;
        // 0x2105d8: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2105d4) {
            ctx->pc = 0x210568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210568;
        }
    }
    ctx->pc = 0x2105DCu;
    // 0x2105dc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2105dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2105e0: 0x26f22c18  addiu       $s2, $s7, 0x2C18
    ctx->pc = 0x2105e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x2105e4: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x2105e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2105e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2105e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2105ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2105ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2105f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2105f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2105f4: 0x8c701170  lw          $s0, 0x1170($v1)
    ctx->pc = 0x2105f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4464)));
    // 0x2105f8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2105F8u;
    SET_GPR_U32(ctx, 31, 0x210600u);
    ctx->pc = 0x2105FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2105F8u;
    // 0x2105fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2105F8u, 0x210600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210600u;
label_210600:
    // 0x210600: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x210600u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210604: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x210604u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x210608: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x210608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21060c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21060cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210610: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x210610u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x210614: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210618: 0x2a42023  subu        $a0, $s5, $a0
    ctx->pc = 0x210618u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x21061c: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x21061cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x210620: 0x24085080  addiu       $t0, $zero, 0x5080
    ctx->pc = 0x210620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x210624: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210624u;
    SET_GPR_U32(ctx, 31, 0x21062Cu);
    ctx->pc = 0x210628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210624u;
    // 0x210628: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210624u, 0x21062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21062Cu;
label_21062c:
    // 0x21062c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x21062cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x210630: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x210630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x210634: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x210634u;
    SET_GPR_U32(ctx, 31, 0x21063Cu);
    ctx->pc = 0x210638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210634u;
    // 0x210638: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x210634u, 0x21063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21063Cu;
label_21063c:
    // 0x21063c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21063cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210640: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x210640u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210644: 0x0  nop
    ctx->pc = 0x210644u;
    // NOP
    // 0x210648: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x210648u;
    {
        const bool branch_taken_0x210648 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210648u;
        // 0x21064c: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210648) {
            ctx->pc = 0x2106F8u;
            goto label_2106f8;
        }
    }
    ctx->pc = 0x210650u;
    // 0x210650: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x210650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x210654: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x210654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x210658: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x210658u;
    SET_GPR_U32(ctx, 31, 0x210660u);
    ctx->pc = 0x21065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210658u;
    // 0x21065c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x210658u, 0x210660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210660u;
label_210660:
    // 0x210660: 0x3c014204  lui         $at, 0x4204
    ctx->pc = 0x210660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16900 << 16));
    // 0x210664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x210664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210668: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x210668u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21066c: 0x0  nop
    ctx->pc = 0x21066cu;
    // NOP
    // 0x210670: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x210670u;
    {
        const bool branch_taken_0x210670 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210670u;
        // 0x210674: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210670) {
            ctx->pc = 0x210698u;
            goto label_210698;
        }
    }
    ctx->pc = 0x210678u;
    // 0x210678: 0x8783b274  lh          $v1, -0x4D8C($gp)
    ctx->pc = 0x210678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294947444)));
    // 0x21067c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21067cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210680: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x210680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x210684: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x210684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x210688: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x210688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21068c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x210690: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x210690u;
    {
        const bool branch_taken_0x210690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210690u;
        // 0x210694: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210690) {
            ctx->pc = 0x210708u;
            goto label_210708;
        }
    }
    ctx->pc = 0x210698u;
label_210698:
    // 0x210698: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x210698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x21069c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x21069cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2106a0: 0x2610e530  addiu       $s0, $s0, -0x1AD0
    ctx->pc = 0x2106a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960432));
    // 0x2106a4: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x2106a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2106a8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2106A8u;
    SET_GPR_U32(ctx, 31, 0x2106B0u);
    ctx->pc = 0x2106ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2106A8u;
    // 0x2106ac: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2106A8u, 0x2106B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2106B0u;
label_2106b0:
    // 0x2106b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2106b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2106b4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2106b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2106b8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2106b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2106bc: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2106bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2106c0: 0x24a590f8  addiu       $a1, $a1, -0x6F08
    ctx->pc = 0x2106c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938872));
    // 0x2106c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2106c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2106c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2106cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2106ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2106d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2106d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2106d4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2106d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2106d8: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x2106d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2106dc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2106dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2106e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2106e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2106e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2106e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2106e8: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2106E8u;
    SET_GPR_U32(ctx, 31, 0x2106F0u);
    ctx->pc = 0x2106ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2106E8u;
    // 0x2106ec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2106E8u, 0x2106F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2106F0u;
label_2106f0:
    // 0x2106f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2106F0u;
    {
        const bool branch_taken_0x2106f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2106F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106F0u;
        // 0x2106f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106f0) {
            ctx->pc = 0x210708u;
            goto label_210708;
        }
    }
    ctx->pc = 0x2106F8u;
label_2106f8:
    // 0x2106f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2106f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2106fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2106fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x210700: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210704: 0x8c701174  lw          $s0, 0x1174($v1)
    ctx->pc = 0x210704u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4468)));
label_210708:
    // 0x210708: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210708u;
    SET_GPR_U32(ctx, 31, 0x210710u);
    ctx->pc = 0x21070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210708u;
    // 0x21070c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210708u, 0x210710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210710u;
label_210710:
    // 0x210710: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x210710u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210714: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x210714u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x210718: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x210718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21071c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21071cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210720: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x210720u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x210724: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210728: 0x2a42023  subu        $a0, $s5, $a0
    ctx->pc = 0x210728u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x21072c: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x21072cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x210730: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210730u;
    SET_GPR_U32(ctx, 31, 0x210738u);
    ctx->pc = 0x210734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210730u;
    // 0x210734: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210730u, 0x210738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210738u;
label_210738:
    // 0x210738: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x210738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21073c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21073cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x210740: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x210740u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x210744: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x210744u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210748: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x210748u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21074c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21074cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210750: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x210750u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210754: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x210754u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210758: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x210758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21075c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21075cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210764: 0x808089c  j           func_202270
    ctx->pc = 0x210764u;
    ctx->pc = 0x210768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210764u;
    // 0x210768: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x21076Cu;
}
