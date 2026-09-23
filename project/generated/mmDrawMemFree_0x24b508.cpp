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

// Function: mmDrawMemFree
// Address: 0x24b508 - 0x24b688
void mmDrawMemFree_0x24b508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawMemFree_0x24b508");
#endif

    switch (ctx->pc) {
        case 0x24b5a4u: goto label_24b5a4;
        case 0x24b5c4u: goto label_24b5c4;
        case 0x24b5e8u: goto label_24b5e8;
        case 0x24b5f0u: goto label_24b5f0;
        case 0x24b624u: goto label_24b624;
        case 0x24b658u: goto label_24b658;
        default: break;
    }

    ctx->pc = 0x24b508u;

    // 0x24b508: 0x8f83a0ec  lw          $v1, -0x5F14($gp)
    ctx->pc = 0x24b508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942956)));
    // 0x24b50c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x24b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x24b510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24b514: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x24b514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24b518: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x24b518u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24b51c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24b51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24b520: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24b520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24b524: 0x3c140064  lui         $s4, 0x64
    ctx->pc = 0x24b524u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)100 << 16));
    // 0x24b528: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24b528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24b52c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24b52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b530: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24b530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24b534: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24b534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b53c: 0x24115080  addiu       $s1, $zero, 0x5080
    ctx->pc = 0x24b53cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x24b540: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24b540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24b544: 0x36946480  ori         $s4, $s4, 0x6480
    ctx->pc = 0x24b544u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)25728);
    // 0x24b548: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24B548u;
    {
        const bool branch_taken_0x24b548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b548) {
            ctx->pc = 0x24B54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B548u;
            // 0x24b54c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B550u;
            goto label_24b550;
        }
    }
    ctx->pc = 0x24B550u;
label_24b550:
    // 0x24b550: 0x8f84a0d8  lw          $a0, -0x5F28($gp)
    ctx->pc = 0x24b550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24b554: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x24b554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x24b558: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x24b558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24b55c: 0x1812  mflo        $v1
    ctx->pc = 0x24b55cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x24b560: 0x2463ff9d  addiu       $v1, $v1, -0x63
    ctx->pc = 0x24b560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967197));
    // 0x24b564: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x24B564u;
    {
        const bool branch_taken_0x24b564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B564u;
        // 0x24b568: 0x2438023  subu        $s0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b564) {
            ctx->pc = 0x24B590u;
            goto label_24b590;
        }
    }
    ctx->pc = 0x24B56Cu;
    // 0x24b56c: 0x8f83b45c  lw          $v1, -0x4BA4($gp)
    ctx->pc = 0x24b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x24b570: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x24b570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x24b574: 0x3c118080  lui         $s1, 0x8080
    ctx->pc = 0x24b574u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32896 << 16));
    // 0x24b578: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x24b578u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x24b57c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x24b57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x24b580: 0x34427f80  ori         $v0, $v0, 0x7F80
    ctx->pc = 0x24b580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32640);
    // 0x24b584: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x24b584u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x24b588: 0x36310080  ori         $s1, $s1, 0x80
    ctx->pc = 0x24b588u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)128);
    // 0x24b58c: 0x36940080  ori         $s4, $s4, 0x80
    ctx->pc = 0x24b58cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)128);
label_24b590:
    // 0x24b590: 0x2644fffe  addiu       $a0, $s2, -0x2
    ctx->pc = 0x24b590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x24b594: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24b594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b598: 0x26460065  addiu       $a2, $s2, 0x65
    ctx->pc = 0x24b598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 101));
    // 0x24b59c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x24B59Cu;
    SET_GPR_U32(ctx, 31, 0x24B5A4u);
    ctx->pc = 0x24B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B59Cu;
    // 0x24b5a0: 0x26670009  addiu       $a3, $s3, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x24B59Cu, 0x24B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5A4u;
label_24b5a4:
    // 0x24b5a4: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x24b5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x24b5a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B5A8u;
    {
        const bool branch_taken_0x24b5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5A8u;
        // 0x24b5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5a8) {
            ctx->pc = 0x24B5C4u;
            goto label_24b5c4;
        }
    }
    ctx->pc = 0x24B5B0u;
    // 0x24b5b0: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x24b5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x24b5b4: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x24b5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x24b5b8: 0x26670008  addiu       $a3, $s3, 0x8
    ctx->pc = 0x24b5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x24b5bc: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x24B5BCu;
    SET_GPR_U32(ctx, 31, 0x24B5C4u);
    ctx->pc = 0x24B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5BCu;
    // 0x24b5c0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x24B5BCu, 0x24B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5C4u;
label_24b5c4:
    // 0x24b5c4: 0x26420064  addiu       $v0, $s2, 0x64
    ctx->pc = 0x24b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x24b5c8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x24b5c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24b5cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B5CCu;
    {
        const bool branch_taken_0x24b5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5CCu;
        // 0x24b5d0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5cc) {
            ctx->pc = 0x24B5E8u;
            goto label_24b5e8;
        }
    }
    ctx->pc = 0x24B5D4u;
    // 0x24b5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b5d8: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x24b5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x24b5dc: 0x26460063  addiu       $a2, $s2, 0x63
    ctx->pc = 0x24b5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 99));
    // 0x24b5e0: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x24B5E0u;
    SET_GPR_U32(ctx, 31, 0x24B5E8u);
    ctx->pc = 0x24B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5E0u;
    // 0x24b5e4: 0x26670008  addiu       $a3, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x24B5E0u, 0x24B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5E8u;
label_24b5e8:
    // 0x24b5e8: 0xc08089c  jal         func_202270
    ctx->pc = 0x24B5E8u;
    SET_GPR_U32(ctx, 31, 0x24B5F0u);
    ctx->pc = 0x24B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5E8u;
    // 0x24b5ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x24B5E8u, 0x24B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5F0u;
label_24b5f0:
    // 0x24b5f0: 0x93859ab5  lbu         $a1, -0x654B($gp)
    ctx->pc = 0x24b5f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x24b5f4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x24b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x24b5f8: 0x8f849354  lw          $a0, -0x6CAC($gp)
    ctx->pc = 0x24b5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24b5fc: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x24b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x24b600: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x24b600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x24b604: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24b604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b608: 0xa3859ab5  sb          $a1, -0x654B($gp)
    ctx->pc = 0x24b608u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 5));
    // 0x24b60c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24b610: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24b610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24b614: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24b618: 0x8c500dfc  lw          $s0, 0xDFC($v0)
    ctx->pc = 0x24b618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3580)));
    // 0x24b61c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24B61Cu;
    SET_GPR_U32(ctx, 31, 0x24B624u);
    ctx->pc = 0x24B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B61Cu;
    // 0x24b620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24B61Cu, 0x24B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B624u;
label_24b624:
    // 0x24b624: 0x8f85a0f0  lw          $a1, -0x5F10($gp)
    ctx->pc = 0x24b624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942960)));
    // 0x24b628: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x24b628u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x24b62c: 0x8f83a0ec  lw          $v1, -0x5F14($gp)
    ctx->pc = 0x24b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942956)));
    // 0x24b630: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x24b630u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x24b634: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x24b634u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x24b638: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24b638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b63c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24b640: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x24b640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x24b644: 0x28631389  slti        $v1, $v1, 0x1389
    ctx->pc = 0x24b644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x24b648: 0x26650002  addiu       $a1, $s3, 0x2
    ctx->pc = 0x24b648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x24b64c: 0x283380a  movz        $a3, $s4, $v1
    ctx->pc = 0x24b64cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 20));
    // 0x24b650: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24B650u;
    SET_GPR_U32(ctx, 31, 0x24B658u);
    ctx->pc = 0x24B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B650u;
    // 0x24b654: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24B650u, 0x24B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B658u;
label_24b658:
    // 0x24b658: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x24b658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x24b65c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b660: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24b660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24b664: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x24b664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x24b668: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24b668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b66c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24b66cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b670: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24b670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b674: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24b674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b67c: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x24b67cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    // 0x24b680: 0x808089c  j           func_202270
    ctx->pc = 0x24B680u;
    ctx->pc = 0x24B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B680u;
    // 0x24b684: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x24B688u;
}
