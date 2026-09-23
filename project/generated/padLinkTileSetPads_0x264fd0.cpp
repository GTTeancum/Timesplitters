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

// Function: padLinkTileSetPads
// Address: 0x264fd0 - 0x2650e4
void padLinkTileSetPads_0x264fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padLinkTileSetPads_0x264fd0");
#endif

    switch (ctx->pc) {
        case 0x264ff8u: goto label_264ff8;
        case 0x265038u: goto label_265038;
        default: break;
    }

    ctx->pc = 0x264fd0u;

    // 0x264fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x264fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x264fd4: 0x8f83a348  lw          $v1, -0x5CB8($gp)
    ctx->pc = 0x264fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x264fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264fdc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x264fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x264fe0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x264fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264fe4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x264fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x264fe8: 0x18600038  blez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x264FE8u;
    {
        const bool branch_taken_0x264fe8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x264FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264FE8u;
        // 0x264fec: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264fe8) {
            ctx->pc = 0x2650CCu;
            goto label_2650cc;
        }
    }
    ctx->pc = 0x264FF0u;
    // 0x264ff0: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x264ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x264ff4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x264ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264ff8:
    // 0x264ff8: 0x8f82a2ec  lw          $v0, -0x5D14($gp)
    ctx->pc = 0x264ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x264ffc: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x264ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x265000: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x265000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x265004: 0x30a201e0  andi        $v0, $a1, 0x1E0
    ctx->pc = 0x265004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)480);
    // 0x265008: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x265008u;
    {
        const bool branch_taken_0x265008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265008u;
        // 0x26500c: 0x30a20200  andi        $v0, $a1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265008) {
            ctx->pc = 0x2650BCu;
            goto label_2650bc;
        }
    }
    ctx->pc = 0x265010u;
    // 0x265010: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x265010u;
    {
        const bool branch_taken_0x265010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265010) {
            ctx->pc = 0x265014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265010u;
            // 0x265014: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2650C0u;
            goto label_2650c0;
        }
    }
    ctx->pc = 0x265018u;
    // 0x265018: 0x30a20060  andi        $v0, $a1, 0x60
    ctx->pc = 0x265018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)96);
    // 0x26501c: 0x84860008  lh          $a2, 0x8($a0)
    ctx->pc = 0x26501cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x265020: 0x30a50180  andi        $a1, $a1, 0x180
    ctx->pc = 0x265020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)384);
    // 0x265024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265028: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x265028u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x26502c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x26502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x265030: 0xc0993a4  jal         func_264E90
    ctx->pc = 0x265030u;
    SET_GPR_U32(ctx, 31, 0x265038u);
    ctx->pc = 0x265034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265030u;
    // 0x265034: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E90u, 0x265030u, 0x265038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265038u;
label_265038:
    // 0x265038: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x265038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26503c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265040: 0x1102001d  beq         $t0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x265040u;
    {
        const bool branch_taken_0x265040 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x265044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265040u;
        // 0x265044: 0x1122818  mult        $a1, $t0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x265040) {
            ctx->pc = 0x2650B8u;
            goto label_2650b8;
        }
    }
    ctx->pc = 0x265048u;
    // 0x265048: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x265048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x26504c: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x26504cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x265050: 0x85240008  lh          $a0, 0x8($t1)
    ctx->pc = 0x265050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x265054: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x265054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x265058: 0x84e20008  lh          $v0, 0x8($a3)
    ctx->pc = 0x265058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x26505c: 0x10440016  beq         $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26505Cu;
    {
        const bool branch_taken_0x26505c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x265060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26505Cu;
        // 0x265060: 0x8f83a34c  lw          $v1, -0x5CB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26505c) {
            ctx->pc = 0x2650B8u;
            goto label_2650b8;
        }
    }
    ctx->pc = 0x265064u;
    // 0x265064: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x265064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x265068: 0x8f82a2f0  lw          $v0, -0x5D10($gp)
    ctx->pc = 0x265068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x26506c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26506cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265070: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x265070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x265074: 0x8f85b8b8  lw          $a1, -0x4748($gp)
    ctx->pc = 0x265074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949048)));
    // 0x265078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x265078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26507c: 0xaf83a34c  sw          $v1, -0x5CB4($gp)
    ctx->pc = 0x26507cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943564), GPR_U32(ctx, 3));
    // 0x265080: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x265080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x265084: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x265084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x265088: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x265088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x26508c: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x26508cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x265090: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x265090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x265094: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x265094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x265098: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x265098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x26509c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x26509cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2650a0: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x2650a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x2650a4: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x2650a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x2650a8: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x2650a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2650ac: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2650acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2650b0: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2650b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2650b4: 0xaf85b8b8  sw          $a1, -0x4748($gp)
    ctx->pc = 0x2650b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949048), GPR_U32(ctx, 5));
label_2650b8:
    // 0x2650b8: 0x8f83a348  lw          $v1, -0x5CB8($gp)
    ctx->pc = 0x2650b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
label_2650bc:
    // 0x2650bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2650bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2650c0:
    // 0x2650c0: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2650c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2650c4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2650C4u;
    {
        const bool branch_taken_0x2650c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2650C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650C4u;
        // 0x2650c8: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650c4) {
            ctx->pc = 0x264FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264ff8;
        }
    }
    ctx->pc = 0x2650CCu;
label_2650cc:
    // 0x2650cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2650ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2650d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2650d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2650d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2650d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2650d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2650d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2650dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2650DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2650E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650DCu;
        // 0x2650e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2650DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2650E4u;
}
