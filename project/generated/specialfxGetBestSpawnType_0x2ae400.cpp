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

// Function: specialfxGetBestSpawnType
// Address: 0x2ae400 - 0x2ae570
void specialfxGetBestSpawnType_0x2ae400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxGetBestSpawnType_0x2ae400");
#endif

    switch (ctx->pc) {
        case 0x2ae43cu: goto label_2ae43c;
        case 0x2ae478u: goto label_2ae478;
        case 0x2ae49cu: goto label_2ae49c;
        case 0x2ae518u: goto label_2ae518;
        default: break;
    }

    ctx->pc = 0x2ae400u;

    // 0x2ae400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ae400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ae404: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2ae404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2ae408: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae40c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ae40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ae410: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ae410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ae414: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2ae414u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ae418: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ae418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ae41c: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x2ae41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ae420: 0x64800b  movn        $s0, $v1, $a0
    ctx->pc = 0x2ae420u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2ae424: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ae424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ae428: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ae428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ae42c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ae42cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae430: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2ae430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ae434: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AE434u;
    SET_GPR_U32(ctx, 31, 0x2AE43Cu);
    ctx->pc = 0x2AE438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE434u;
    // 0x2ae438: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AE434u, 0x2AE43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE43Cu;
label_2ae43c:
    // 0x2ae43c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2ae43cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae440: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2ae440u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2ae444: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE444u;
    {
        const bool branch_taken_0x2ae444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae444) {
            ctx->pc = 0x2AE448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE444u;
            // 0x2ae448: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE44Cu;
            goto label_2ae44c;
        }
    }
    ctx->pc = 0x2AE44Cu;
label_2ae44c:
    // 0x2ae44c: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2ae44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2ae450: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2ae450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ae454: 0x1810  mfhi        $v1
    ctx->pc = 0x2ae454u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ae458: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE458u;
    {
        const bool branch_taken_0x2ae458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE458u;
        // 0x2ae45c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae458) {
            ctx->pc = 0x2AE468u;
            goto label_2ae468;
        }
    }
    ctx->pc = 0x2AE460u;
    // 0x2ae460: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE460u;
    {
        const bool branch_taken_0x2ae460 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE460u;
        // 0x2ae464: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae460) {
            ctx->pc = 0x2AE470u;
            goto label_2ae470;
        }
    }
    ctx->pc = 0x2AE468u;
label_2ae468:
    // 0x2ae468: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2AE468u;
    {
        const bool branch_taken_0x2ae468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE468u;
        // 0x2ae46c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae468) {
            ctx->pc = 0x2AE54Cu;
            goto label_2ae54c;
        }
    }
    ctx->pc = 0x2AE470u;
label_2ae470:
    // 0x2ae470: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ae470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ae474: 0x0  nop
    ctx->pc = 0x2ae474u;
    // NOP
label_2ae478:
    // 0x2ae478: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AE478u;
    {
        const bool branch_taken_0x2ae478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE478u;
        // 0x2ae47c: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae478) {
            ctx->pc = 0x2AE4A4u;
            goto label_2ae4a4;
        }
    }
    ctx->pc = 0x2AE480u;
    // 0x2ae480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae484: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2ae484u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae488: 0x0  nop
    ctx->pc = 0x2ae488u;
    // NOP
    // 0x2ae48c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE48Cu;
    {
        const bool branch_taken_0x2ae48c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE48Cu;
        // 0x2ae490: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae48c) {
            ctx->pc = 0x2AE4A4u;
            goto label_2ae4a4;
        }
    }
    ctx->pc = 0x2AE494u;
    // 0x2ae494: 0xc0ab890  jal         func_2AE240
    ctx->pc = 0x2AE494u;
    SET_GPR_U32(ctx, 31, 0x2AE49Cu);
    ctx->pc = 0x2AE498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE494u;
    // 0x2ae498: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE240u, 0x2AE494u, 0x2AE49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE49Cu;
label_2ae49c:
    // 0x2ae49c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ae49cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2ae4a0: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x2ae4a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2ae4a4:
    // 0x2ae4a4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2AE4A4u;
    {
        const bool branch_taken_0x2ae4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4A4u;
        // 0x2ae4a8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4a4) {
            ctx->pc = 0x2AE53Cu;
            goto label_2ae53c;
        }
    }
    ctx->pc = 0x2AE4ACu;
    // 0x2ae4ac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ae4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ae4b0: 0x24429810  addiu       $v0, $v0, -0x67F0
    ctx->pc = 0x2ae4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940688));
    // 0x2ae4b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ae4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ae4b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ae4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ae4bc: 0x800008  jr          $a0
    ctx->pc = 0x2AE4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AE4C4u: goto label_2ae4c4;
            case 0x2AE4CCu: goto label_2ae4cc;
            case 0x2AE4ECu: goto label_2ae4ec;
            case 0x2AE50Cu: goto label_2ae50c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE4BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2AE4C4u;
label_2ae4c4:
    // 0x2ae4c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2AE4C4u;
    {
        const bool branch_taken_0x2ae4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4C4u;
        // 0x2ae4c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4c4) {
            ctx->pc = 0x2AE53Cu;
            goto label_2ae53c;
        }
    }
    ctx->pc = 0x2AE4CCu;
label_2ae4cc:
    // 0x2ae4cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ae4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ae4d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ae4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae4d4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ae4d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae4d8: 0x0  nop
    ctx->pc = 0x2ae4d8u;
    // NOP
    // 0x2ae4dc: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x2AE4DCu;
    {
        const bool branch_taken_0x2ae4dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ae4dc) {
            ctx->pc = 0x2AE4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE4DCu;
            // 0x2ae4e0: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE53Cu;
            goto label_2ae53c;
        }
    }
    ctx->pc = 0x2AE4E4u;
    // 0x2ae4e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2AE4E4u;
    {
        const bool branch_taken_0x2ae4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4E4u;
        // 0x2ae4e8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4e4) {
            ctx->pc = 0x2AE540u;
            goto label_2ae540;
        }
    }
    ctx->pc = 0x2AE4ECu;
label_2ae4ec:
    // 0x2ae4ec: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2ae4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x2ae4f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ae4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae4f4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ae4f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae4f8: 0x0  nop
    ctx->pc = 0x2ae4f8u;
    // NOP
    // 0x2ae4fc: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x2AE4FCu;
    {
        const bool branch_taken_0x2ae4fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ae4fc) {
            ctx->pc = 0x2AE500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE4FCu;
            // 0x2ae500: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE53Cu;
            goto label_2ae53c;
        }
    }
    ctx->pc = 0x2AE504u;
    // 0x2ae504: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2AE504u;
    {
        const bool branch_taken_0x2ae504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE504u;
        // 0x2ae508: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae504) {
            ctx->pc = 0x2AE540u;
            goto label_2ae540;
        }
    }
    ctx->pc = 0x2AE50Cu;
label_2ae50c:
    // 0x2ae50c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ae50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae510: 0xc0ab876  jal         func_2AE1D8
    ctx->pc = 0x2AE510u;
    SET_GPR_U32(ctx, 31, 0x2AE518u);
    ctx->pc = 0x2AE514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE510u;
    // 0x2ae514: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE1D8u, 0x2AE510u, 0x2AE518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE518u;
label_2ae518:
    // 0x2ae518: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE518u;
    {
        const bool branch_taken_0x2ae518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae518) {
            ctx->pc = 0x2AE51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE518u;
            // 0x2ae51c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE53Cu;
            goto label_2ae53c;
        }
    }
    ctx->pc = 0x2AE520u;
    // 0x2ae520: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ae520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ae524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ae524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae528: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ae528u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae52c: 0x0  nop
    ctx->pc = 0x2ae52cu;
    // NOP
    // 0x2ae530: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE530u;
    {
        const bool branch_taken_0x2ae530 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE530u;
        // 0x2ae534: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae530) {
            ctx->pc = 0x2AE53Cu;
            goto label_2ae53c;
        }
    }
    ctx->pc = 0x2AE538u;
    // 0x2ae538: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ae538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae53c:
    // 0x2ae53c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2ae53cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2ae540:
    // 0x2ae540: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ae540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae544: 0x1222ffcc  beq         $s1, $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2AE544u;
    {
        const bool branch_taken_0x2ae544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE544u;
        // 0x2ae548: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae544) {
            ctx->pc = 0x2AE478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae478;
        }
    }
    ctx->pc = 0x2AE54Cu;
label_2ae54c:
    // 0x2ae54c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ae54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae550: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ae550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae554: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ae554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae558: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ae558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae55c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ae55cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae564: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ae564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ae568: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE568u;
        // 0x2ae56c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE570u;
}
