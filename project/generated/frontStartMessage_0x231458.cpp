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

// Function: frontStartMessage
// Address: 0x231458 - 0x2315ac
void frontStartMessage_0x231458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontStartMessage_0x231458");
#endif

    switch (ctx->pc) {
        case 0x2314b8u: goto label_2314b8;
        case 0x231518u: goto label_231518;
        case 0x231588u: goto label_231588;
        case 0x231598u: goto label_231598;
        default: break;
    }

    ctx->pc = 0x231458u;

    // 0x231458: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x231458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23145c: 0x8f88a004  lw          $t0, -0x5FFC($gp)
    ctx->pc = 0x23145cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x231460: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x231460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x231464: 0x24090410  addiu       $t1, $zero, 0x410
    ctx->pc = 0x231464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x231468: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x231468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x23146c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x23146cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231470: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x231470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x231474: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x231474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x231478: 0x246319c0  addiu       $v1, $v1, 0x19C0
    ctx->pc = 0x231478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6592));
    // 0x23147c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x23147cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231480: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x231480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x231484: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x231484u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231488: 0x91450000  lbu         $a1, 0x0($t2)
    ctx->pc = 0x231488u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x23148c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23148cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231490: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x231490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x231494: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x231494u;
    {
        const bool branch_taken_0x231494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x231498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231494u;
        // 0x231498: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231494) {
            ctx->pc = 0x2314E8u;
            goto label_2314e8;
        }
    }
    ctx->pc = 0x23149Cu;
    // 0x23149c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x23149cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314a0: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2314a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2314a4: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x2314a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2314a8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x2314a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x2314ac: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x2314acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
    // 0x2314b0: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x2314b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2314b4: 0x0  nop
    ctx->pc = 0x2314b4u;
    // NOP
label_2314b8:
    // 0x2314b8: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2314b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2314bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2314bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2314c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2314c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2314c4: 0x1461021  addu        $v0, $t2, $a2
    ctx->pc = 0x2314c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2314c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2314c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314cc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2314ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2314d0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2314D0u;
    {
        const bool branch_taken_0x2314d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314D0u;
        // 0x2314d4: 0x28c203ff  slti        $v0, $a2, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1023) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314d0) {
            ctx->pc = 0x2314F8u;
            goto label_2314f8;
        }
    }
    ctx->pc = 0x2314D8u;
    // 0x2314d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2314D8u;
    {
        const bool branch_taken_0x2314d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2314DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314D8u;
        // 0x2314dc: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314d8) {
            ctx->pc = 0x2314B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2314b8;
        }
    }
    ctx->pc = 0x2314E0u;
    // 0x2314e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2314E0u;
    {
        const bool branch_taken_0x2314e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314E0u;
        // 0x2314e4: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314e0) {
            ctx->pc = 0x2314FCu;
            goto label_2314fc;
        }
    }
    ctx->pc = 0x2314E8u;
label_2314e8:
    // 0x2314e8: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2314e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2314ec: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x2314ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2314f0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x2314f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x2314f4: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x2314f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
label_2314f8:
    // 0x2314f8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x2314f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2314fc:
    // 0x2314fc: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2314fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231500: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x231500u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x231504: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x231504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231508: 0xad0b0408  sw          $t3, 0x408($t0)
    ctx->pc = 0x231508u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1032), GPR_U32(ctx, 11));
    // 0x23150c: 0xad070400  sw          $a3, 0x400($t0)
    ctx->pc = 0x23150cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1024), GPR_U32(ctx, 7));
    // 0x231510: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x231510u;
    SET_GPR_U32(ctx, 31, 0x231518u);
    ctx->pc = 0x231514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231510u;
    // 0x231514: 0xad0c0404  sw          $t4, 0x404($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 1028), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x231510u, 0x231518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231518u;
label_231518:
    // 0x231518: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x231518u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23151c: 0x260699f0  addiu       $a2, $s0, -0x6610
    ctx->pc = 0x23151cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941168));
    // 0x231520: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x231520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x231524: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x231524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231528: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x231528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x23152c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x23152cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x231530: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x231530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x231534: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x231534u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x231538: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x231538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x23153c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x23153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x231540: 0x8cc9001c  lw          $t1, 0x1C($a2)
    ctx->pc = 0x231540u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x231544: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x231544u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x231548: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x231548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x23154c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x23154cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x231550: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x231550u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x231554: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x231554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x231558: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x231558u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x23155c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x23155cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x231560: 0x1271821  addu        $v1, $t1, $a3
    ctx->pc = 0x231560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x231564: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x231564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x231568: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x231568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x23156c: 0x24062880  addiu       $a2, $zero, 0x2880
    ctx->pc = 0x23156cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    // 0x231570: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x231570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x231574: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x231574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x231578: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x231578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x23157c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x231580: 0xc08bbc4  jal         func_22EF10
    ctx->pc = 0x231580u;
    SET_GPR_U32(ctx, 31, 0x231588u);
    ctx->pc = 0x231584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231580u;
    // 0x231584: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF10u, 0x231580u, 0x231588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231588u;
label_231588:
    // 0x231588: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x231588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23158c: 0x26253a80  addiu       $a1, $s1, 0x3A80
    ctx->pc = 0x23158cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14976));
    // 0x231590: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x231590u;
    SET_GPR_U32(ctx, 31, 0x231598u);
    ctx->pc = 0x231594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231590u;
    // 0x231594: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x231590u, 0x231598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231598u;
label_231598:
    // 0x231598: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x231598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23159c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x23159cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2315a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2315a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2315a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2315A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2315A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315A4u;
        // 0x2315a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2315A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2315ACu;
}
