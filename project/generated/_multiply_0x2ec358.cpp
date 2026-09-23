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

// Function: _multiply
// Address: 0x2ec358 - 0x2ec584
void _multiply_0x2ec358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_multiply_0x2ec358");
#endif

    switch (ctx->pc) {
        case 0x2ec3bcu: goto label_2ec3bc;
        case 0x2ec3e8u: goto label_2ec3e8;
        case 0x2ec438u: goto label_2ec438;
        case 0x2ec458u: goto label_2ec458;
        case 0x2ec4d8u: goto label_2ec4d8;
        case 0x2ec540u: goto label_2ec540;
        default: break;
    }

    ctx->pc = 0x2ec358u;

    // 0x2ec358: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ec358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ec35c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ec35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ec360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec364: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ec364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec368: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ec368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ec36c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ec36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec370: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ec370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ec374: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ec374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ec378: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ec378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ec37c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ec37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ec380: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x2ec380u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ec384: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x2ec384u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ec388: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x2ec388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2ec38c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC38Cu;
    {
        const bool branch_taken_0x2ec38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC38Cu;
        // 0x2ec390: 0x200c82d  daddu       $t9, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec38c) {
            ctx->pc = 0x2EC3A4u;
            goto label_2ec3a4;
        }
    }
    ctx->pc = 0x2EC394u;
    // 0x2ec394: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2ec394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec398: 0x320882d  daddu       $s1, $t9, $zero
    ctx->pc = 0x2ec398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec39c: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x2ec39cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ec3a0: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x2ec3a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ec3a4:
    // 0x2ec3a4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ec3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ec3a8: 0x253a021  addu        $s4, $s2, $s3
    ctx->pc = 0x2ec3a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2ec3ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ec3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ec3b0: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x2ec3b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2ec3b4: 0xc0bafa8  jal         func_2EBEA0
    ctx->pc = 0x2EC3B4u;
    SET_GPR_U32(ctx, 31, 0x2EC3BCu);
    ctx->pc = 0x2EC3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC3B4u;
    // 0x2ec3b8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBEA0u, 0x2EC3B4u, 0x2EC3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC3BCu;
label_2ec3bc:
    // 0x2ec3bc: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x2ec3bcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3c0: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x2ec3c0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2ec3c4: 0x27380014  addiu       $t8, $t9, 0x14
    ctx->pc = 0x2ec3c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 20));
    // 0x2ec3c8: 0x3152021  addu        $a0, $t8, $s5
    ctx->pc = 0x2ec3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x2ec3cc: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x2ec3ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ec3d0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EC3D0u;
    {
        const bool branch_taken_0x2ec3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC3D0u;
        // 0x2ec3d4: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3d0) {
            ctx->pc = 0x2EC40Cu;
            goto label_2ec40c;
        }
    }
    ctx->pc = 0x2EC3D8u;
    // 0x2ec3d8: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x2ec3d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2ec3dc: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x2ec3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ec3e0: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x2ec3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2ec3e4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2ec3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2ec3e8:
    // 0x2ec3e8: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2ec3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2ec3ec: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ec3ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ec3f0: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x2ec3f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ec3f4: 0x0  nop
    ctx->pc = 0x2ec3f4u;
    // NOP
    // 0x2ec3f8: 0x0  nop
    ctx->pc = 0x2ec3f8u;
    // NOP
    // 0x2ec3fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EC3FCu;
    {
        const bool branch_taken_0x2ec3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec3fc) {
            ctx->pc = 0x2EC3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec3e8;
        }
    }
    ctx->pc = 0x2EC404u;
    // 0x2ec404: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC404u;
    {
        const bool branch_taken_0x2ec404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC404u;
        // 0x2ec408: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec404) {
            ctx->pc = 0x2EC420u;
            goto label_2ec420;
        }
    }
    ctx->pc = 0x2EC40Cu;
label_2ec40c:
    // 0x2ec40c: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x2ec40cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2ec410: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x2ec410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ec414: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x2ec414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2ec418: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2ec418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2ec41c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2ec41cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ec420:
    // 0x2ec420: 0x1c58821  addu        $s1, $t6, $a1
    ctx->pc = 0x2ec420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x2ec424: 0x1839021  addu        $s2, $t4, $v1
    ctx->pc = 0x2ec424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2ec428: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x2ec428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2ec42c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2EC42Cu;
    {
        const bool branch_taken_0x2ec42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC42Cu;
        // 0x2ec430: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec42c) {
            ctx->pc = 0x2EC53Cu;
            goto label_2ec53c;
        }
    }
    ctx->pc = 0x2EC434u;
    // 0x2ec434: 0x0  nop
    ctx->pc = 0x2ec434u;
    // NOP
label_2ec438:
    // 0x2ec438: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x2ec438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2ec43c: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x2ec43cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ec440: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EC440u;
    {
        const bool branch_taken_0x2ec440 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC440u;
        // 0x2ec444: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec440) {
            ctx->pc = 0x2EC4B4u;
            goto label_2ec4b4;
        }
    }
    ctx->pc = 0x2EC448u;
    // 0x2ec448: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x2ec448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec44c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ec44cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec450: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x2ec450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2ec454: 0x250f0004  addiu       $t7, $t0, 0x4
    ctx->pc = 0x2ec454u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_2ec458:
    // 0x2ec458: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2ec458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ec45c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2ec45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ec460: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ec460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ec464: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ec464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec468: 0x131302b  sltu        $a2, $t1, $s1
    ctx->pc = 0x2ec468u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ec46c: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x2ec46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ec470: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x2ec470u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2ec474: 0x706a1818  mult1       $v1, $v1, $t2
    ctx->pc = 0x2ec474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ec478: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2ec478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ec47c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2ec47cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2ec480: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ec480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ec484: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2ec484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2ec488: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ec488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ec48c: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x2ec48cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ec490: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2ec490u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ec494: 0x6b3821  addu        $a3, $v1, $t3
    ctx->pc = 0x2ec494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2ec498: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x2ec498u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x2ec49c: 0x75c02  srl         $t3, $a3, 16
    ctx->pc = 0x2ec49cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x2ec4a0: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2EC4A0u;
    {
        const bool branch_taken_0x2ec4a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4A0u;
        // 0x2ec4a4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4a0) {
            ctx->pc = 0x2EC458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec458;
        }
    }
    ctx->pc = 0x2EC4A8u;
    // 0x2ec4a8: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x2ec4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x2ec4ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC4ACu;
    {
        const bool branch_taken_0x2ec4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4ACu;
        // 0x2ec4b0: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4ac) {
            ctx->pc = 0x2EC4BCu;
            goto label_2ec4bc;
        }
    }
    ctx->pc = 0x2EC4B4u;
label_2ec4b4:
    // 0x2ec4b4: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x2ec4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2ec4b8: 0x25af0004  addiu       $t7, $t5, 0x4
    ctx->pc = 0x2ec4b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_2ec4bc:
    // 0x2ec4bc: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x2ec4bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ec4c0: 0x1140001a  beqz        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EC4C0u;
    {
        const bool branch_taken_0x2ec4c0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4C0u;
        // 0x2ec4c4: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4c0) {
            ctx->pc = 0x2EC52Cu;
            goto label_2ec52c;
        }
    }
    ctx->pc = 0x2EC4C8u;
    // 0x2ec4c8: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x2ec4c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec4cc: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x2ec4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ec4d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ec4d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec4d4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2ec4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ec4d8:
    // 0x2ec4d8: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x2ec4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ec4dc: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x2ec4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ec4e0: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x2ec4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2ec4e4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ec4e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ec4e8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2ec4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ec4ec: 0x131282b  sltu        $a1, $t1, $s1
    ctx->pc = 0x2ec4ecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ec4f0: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x2ec4f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ec4f4: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2ec4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2ec4f8: 0x708a2018  mult1       $a0, $a0, $t2
    ctx->pc = 0x2ec4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ec4fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec500: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2ec500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2ec504: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x2ec504u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ec508: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x2ec508u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ec50c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2ec50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2ec510: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2ec510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ec514: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ec514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ec518: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2ec518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ec51c: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x2ec51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2ec520: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2EC520u;
    {
        const bool branch_taken_0x2ec520 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC520u;
        // 0x2ec524: 0x75c02  srl         $t3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec520) {
            ctx->pc = 0x2EC4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec4d8;
        }
    }
    ctx->pc = 0x2EC528u;
    // 0x2ec528: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2ec528u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_2ec52c:
    // 0x2ec52c: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x2ec52cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec530: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x2ec530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2ec534: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2EC534u;
    {
        const bool branch_taken_0x2ec534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC534u;
        // 0x2ec538: 0x1e0682d  daddu       $t5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec534) {
            ctx->pc = 0x2EC438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec438;
        }
    }
    ctx->pc = 0x2EC53Cu;
label_2ec53c:
    // 0x2ec53c: 0x3154021  addu        $t0, $t8, $s5
    ctx->pc = 0x2ec53cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
label_2ec540:
    // 0x2ec540: 0x5a800006  blezl       $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC540u;
    {
        const bool branch_taken_0x2ec540 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2ec540) {
            ctx->pc = 0x2EC544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC540u;
            // 0x2ec544: 0xaf340010  sw          $s4, 0x10($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC55Cu;
            goto label_2ec55c;
        }
    }
    ctx->pc = 0x2EC548u;
    // 0x2ec548: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x2ec548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x2ec54c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2ec54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ec550: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2EC550u;
    {
        const bool branch_taken_0x2ec550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec550) {
            ctx->pc = 0x2EC554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC550u;
            // 0x2ec554: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec540;
        }
    }
    ctx->pc = 0x2EC558u;
    // 0x2ec558: 0xaf340010  sw          $s4, 0x10($t9)
    ctx->pc = 0x2ec558u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
label_2ec55c:
    // 0x2ec55c: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x2ec55cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec560: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ec560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ec564: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ec564u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ec568: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ec568u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec56c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ec56cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec570: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ec570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec574: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ec574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec57c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC57Cu;
        // 0x2ec580: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC584u;
}
