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

// Function: mmMakeTileRotations
// Address: 0x248fa0 - 0x249274
void mmMakeTileRotations_0x248fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmMakeTileRotations_0x248fa0");
#endif

    switch (ctx->pc) {
        case 0x248fb8u: goto label_248fb8;
        case 0x248fc8u: goto label_248fc8;
        case 0x249010u: goto label_249010;
        case 0x249030u: goto label_249030;
        case 0x249048u: goto label_249048;
        case 0x2490ecu: goto label_2490ec;
        case 0x249148u: goto label_249148;
        case 0x2491c0u: goto label_2491c0;
        default: break;
    }

    ctx->pc = 0x248fa0u;

    // 0x248fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x248fa4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x248fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x248fa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248fac: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x248facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248fb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x248fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x248fb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248fb8:
    // 0x248fb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x248fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x248fbc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x248fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x248fc0: 0xc0923c6  jal         func_248F18
    ctx->pc = 0x248FC0u;
    SET_GPR_U32(ctx, 31, 0x248FC8u);
    ctx->pc = 0x248FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248FC0u;
    // 0x248fc4: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248F18u, 0x248FC0u, 0x248FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FC8u;
label_248fc8:
    // 0x248fc8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x248fc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248fcc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x248fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x248fd0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x248fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x248fd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x248fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x248fd8: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x248fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x248fdc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x248fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x248fe0: 0xad420008  sw          $v0, 0x8($t2)
    ctx->pc = 0x248fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
    // 0x248fe4: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x248fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x248fe8: 0x19000035  blez        $t0, . + 4 + (0x35 << 2)
    ctx->pc = 0x248FE8u;
    {
        const bool branch_taken_0x248fe8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x248FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FE8u;
        // 0x248fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248fe8) {
            ctx->pc = 0x2490C0u;
            goto label_2490c0;
        }
    }
    ctx->pc = 0x248FF0u;
    // 0x248ff0: 0x26380001  addiu       $t8, $s1, 0x1
    ctx->pc = 0x248ff0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x248ff4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x248ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x248ff8: 0x2551000c  addiu       $s1, $t2, 0xC
    ctx->pc = 0x248ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x248ffc: 0x260f000c  addiu       $t7, $s0, 0xC
    ctx->pc = 0x248ffcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x249000: 0x254e0020  addiu       $t6, $t2, 0x20
    ctx->pc = 0x249000u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x249004: 0x260d0020  addiu       $t5, $s0, 0x20
    ctx->pc = 0x249004u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x249008: 0x260c0060  addiu       $t4, $s0, 0x60
    ctx->pc = 0x249008u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x24900c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24900cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_249010:
    // 0x249010: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249014: 0x1e21821  addu        $v1, $t7, $v0
    ctx->pc = 0x249014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x249018: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x249018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24901c: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x24901cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249020: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x249020u;
    {
        const bool branch_taken_0x249020 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x249024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249020u;
        // 0x249024: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249020) {
            ctx->pc = 0x2490A4u;
            goto label_2490a4;
        }
    }
    ctx->pc = 0x249028u;
    // 0x249028: 0x24a90001  addiu       $t1, $a1, 0x1
    ctx->pc = 0x249028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24902c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_249030:
    // 0x249030: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x249030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x249034: 0x4a00015  bltz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x249034u;
    {
        const bool branch_taken_0x249034 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x249038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249034u;
        // 0x249038: 0x24c80001  addiu       $t0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249034) {
            ctx->pc = 0x24908Cu;
            goto label_24908c;
        }
    }
    ctx->pc = 0x24903Cu;
    // 0x24903c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24903Cu;
    {
        const bool branch_taken_0x24903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24903Cu;
        // 0x249040: 0xa41018  mult        $v0, $a1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24903c) {
            ctx->pc = 0x249050u;
            goto label_249050;
        }
    }
    ctx->pc = 0x249044u;
    // 0x249044: 0x0  nop
    ctx->pc = 0x249044u;
    // NOP
label_249048:
    // 0x249048: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x249048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24904c: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x24904cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_249050:
    // 0x249050: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x249050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x249054: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x249054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x249058: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x249058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x24905c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x24905cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249060: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x249060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x249064: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x249064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x249068: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x249068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24906c: 0x308400f0  andi        $a0, $a0, 0xF0
    ctx->pc = 0x24906cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x249070: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x249070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x249074: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x249074u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x249078: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x249078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24907c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x24907cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x249080: 0x4a1fff1  bgez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x249080u;
    {
        const bool branch_taken_0x249080 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x249084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249080u;
        // 0x249084: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249080) {
            ctx->pc = 0x249048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249048;
        }
    }
    ctx->pc = 0x249088u;
    // 0x249088: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x249088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24908c:
    // 0x24908c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x24908cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249090: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x249090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x249094: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x249094u;
    {
        const bool branch_taken_0x249094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249094) {
            ctx->pc = 0x249098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249094u;
            // 0x249098: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249030;
        }
    }
    ctx->pc = 0x24909Cu;
    // 0x24909c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24909Cu;
    {
        const bool branch_taken_0x24909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2490A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24909Cu;
        // 0x2490a0: 0x8e080008  lw          $t0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24909c) {
            ctx->pc = 0x2490A8u;
            goto label_2490a8;
        }
    }
    ctx->pc = 0x2490A4u;
label_2490a4:
    // 0x2490a4: 0x24a90001  addiu       $t1, $a1, 0x1
    ctx->pc = 0x2490a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2490a8:
    // 0x2490a8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2490a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490ac: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x2490acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2490b0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2490B0u;
    {
        const bool branch_taken_0x2490b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2490B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490B0u;
        // 0x2490b4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2490b0) {
            ctx->pc = 0x249010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249010;
        }
    }
    ctx->pc = 0x2490B8u;
    // 0x2490b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2490B8u;
    {
        const bool branch_taken_0x2490b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2490BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490B8u;
        // 0x2490bc: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2490b8) {
            ctx->pc = 0x2490D4u;
            goto label_2490d4;
        }
    }
    ctx->pc = 0x2490C0u;
label_2490c0:
    // 0x2490c0: 0x26380001  addiu       $t8, $s1, 0x1
    ctx->pc = 0x2490c0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2490c4: 0x254e0020  addiu       $t6, $t2, 0x20
    ctx->pc = 0x2490c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x2490c8: 0x260d0020  addiu       $t5, $s0, 0x20
    ctx->pc = 0x2490c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2490cc: 0x260c0060  addiu       $t4, $s0, 0x60
    ctx->pc = 0x2490ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2490d0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2490d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2490d4:
    // 0x2490d4: 0x1ae1025  or          $v0, $t5, $t6
    ctx->pc = 0x2490d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x2490d8: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x2490d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490dc: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x2490dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490e0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2490e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2490e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2490E4u;
    {
        const bool branch_taken_0x2490e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2490E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490E4u;
        // 0x2490e8: 0xad43001c  sw          $v1, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2490e4) {
            ctx->pc = 0x249148u;
            goto label_249148;
        }
    }
    ctx->pc = 0x2490ECu;
label_2490ec:
    // 0x2490ec: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x2490ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2490f0: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x2490f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2490f4: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x2490f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2490f8: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x2490f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2490fc: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x2490fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x249100: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x249100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x249104: 0x6882001f  ldl         $v0, 0x1F($a0)
    ctx->pc = 0x249104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x249108: 0x6c820018  ldr         $v0, 0x18($a0)
    ctx->pc = 0x249108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x24910c: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x24910cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249110: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x249110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249114: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x249114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249118: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x249118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24911c: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x24911cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249120: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x249120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249124: 0xb0a2001f  sdl         $v0, 0x1F($a1)
    ctx->pc = 0x249124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249128: 0xb4a20018  sdr         $v0, 0x18($a1)
    ctx->pc = 0x249128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24912c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x24912cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x249130: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x249130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x249134: 0x0  nop
    ctx->pc = 0x249134u;
    // NOP
    // 0x249138: 0x148cffec  bne         $a0, $t4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x249138u;
    {
        const bool branch_taken_0x249138 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        if (branch_taken_0x249138) {
            ctx->pc = 0x2490ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2490ec;
        }
    }
    ctx->pc = 0x249140u;
    // 0x249140: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x249140u;
    {
        const bool branch_taken_0x249140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249140) {
            ctx->pc = 0x24917Cu;
            goto label_24917c;
        }
    }
    ctx->pc = 0x249148u;
label_249148:
    // 0x249148: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x249148u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24914c: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x24914cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x249150: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x249150u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x249154: 0xdc820018  ld          $v0, 0x18($a0)
    ctx->pc = 0x249154u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x249158: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x249158u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x24915c: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x24915cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x249160: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x249160u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x249164: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x249164u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
    // 0x249168: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x249168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x24916c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x24916cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x249170: 0x0  nop
    ctx->pc = 0x249170u;
    // NOP
    // 0x249174: 0x148cfff4  bne         $a0, $t4, . + 4 + (-0xC << 2)
    ctx->pc = 0x249174u;
    {
        const bool branch_taken_0x249174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        if (branch_taken_0x249174) {
            ctx->pc = 0x249148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249148;
        }
    }
    ctx->pc = 0x24917Cu;
label_24917c:
    // 0x24917c: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x24917cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x249180: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x249180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x249184: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x249184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x249188: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x249188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x24918c: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x24918cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249190: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x249190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249194: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x249194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249198: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x249198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24919c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x24919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2491a0: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2491A0u;
    {
        const bool branch_taken_0x2491a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2491A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491A0u;
        // 0x2491a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491a0) {
            ctx->pc = 0x249248u;
            goto label_249248;
        }
    }
    ctx->pc = 0x2491A8u;
    // 0x2491a8: 0x254f0021  addiu       $t7, $t2, 0x21
    ctx->pc = 0x2491a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), 33));
    // 0x2491ac: 0x260c0022  addiu       $t4, $s0, 0x22
    ctx->pc = 0x2491acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 34));
    // 0x2491b0: 0x254b0022  addiu       $t3, $t2, 0x22
    ctx->pc = 0x2491b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 34));
    // 0x2491b4: 0x26090021  addiu       $t1, $s0, 0x21
    ctx->pc = 0x2491b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 33));
    // 0x2491b8: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2491b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2491bc: 0x0  nop
    ctx->pc = 0x2491bcu;
    // NOP
label_2491c0:
    // 0x2491c0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2491c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2491c4: 0x1c22821  addu        $a1, $t6, $v0
    ctx->pc = 0x2491c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2491c8: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x2491c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2491cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2491ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2491d0: 0x2c430004  sltiu       $v1, $v0, 0x4
    ctx->pc = 0x2491d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2491d4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2491D4u;
    {
        const bool branch_taken_0x2491d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2491D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491D4u;
        // 0x2491d8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491d4) {
            ctx->pc = 0x2491E0u;
            goto label_2491e0;
        }
    }
    ctx->pc = 0x2491DCu;
    // 0x2491dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2491dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2491e0:
    // 0x2491e0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2491e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2491e4: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x2491e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2491e8: 0x1851021  addu        $v0, $t4, $a1
    ctx->pc = 0x2491e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x2491ec: 0x1e54021  addu        $t0, $t7, $a1
    ctx->pc = 0x2491ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x2491f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2491f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2491f4: 0x1a52021  addu        $a0, $t5, $a1
    ctx->pc = 0x2491f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x2491f8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x2491f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2491fc: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x2491fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x249200: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x249200u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x249204: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x249204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x249208: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x249208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24920c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24920Cu;
    {
        const bool branch_taken_0x24920c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24920Cu;
        // 0x249210: 0x1251021  addu        $v0, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24920c) {
            ctx->pc = 0x249228u;
            goto label_249228;
        }
    }
    ctx->pc = 0x249214u;
    // 0x249214: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x249214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x249218: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x249218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x24921c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x24921cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x249220: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x249220u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x249224: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x249224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_249228:
    // 0x249228: 0x1652021  addu        $a0, $t3, $a1
    ctx->pc = 0x249228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x24922c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24922cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249230: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x249234: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x249234u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x249238: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x249238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x24923c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x24923cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249240: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x249240u;
    {
        const bool branch_taken_0x249240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249240u;
        // 0x249244: 0x72080  sll         $a0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249240) {
            ctx->pc = 0x2491C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2491c0;
        }
    }
    ctx->pc = 0x249248u;
label_249248:
    // 0x249248: 0xae0a0070  sw          $t2, 0x70($s0)
    ctx->pc = 0x249248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 10));
    // 0x24924c: 0x300882d  daddu       $s1, $t8, $zero
    ctx->pc = 0x24924cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249250: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x249250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x249254: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x249254u;
    {
        const bool branch_taken_0x249254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249254u;
        // 0x249258: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249254) {
            ctx->pc = 0x248FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248fb8;
        }
    }
    ctx->pc = 0x24925Cu;
    // 0x24925c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24925cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249260: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x249260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249264: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249268: 0xad400070  sw          $zero, 0x70($t2)
    ctx->pc = 0x249268u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 112), GPR_U32(ctx, 0));
    // 0x24926c: 0x3e00008  jr          $ra
    ctx->pc = 0x24926Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24926Cu;
        // 0x249270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24926Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249274u;
}
