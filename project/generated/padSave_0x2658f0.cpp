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

// Function: padSave
// Address: 0x2658f0 - 0x265c40
void padSave_0x2658f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padSave_0x2658f0");
#endif

    switch (ctx->pc) {
        case 0x265920u: goto label_265920;
        case 0x26593cu: goto label_26593c;
        case 0x265968u: goto label_265968;
        case 0x2659c0u: goto label_2659c0;
        case 0x2659f4u: goto label_2659f4;
        case 0x265a00u: goto label_265a00;
        case 0x265a18u: goto label_265a18;
        case 0x265a20u: goto label_265a20;
        case 0x265a30u: goto label_265a30;
        case 0x265a38u: goto label_265a38;
        case 0x265a50u: goto label_265a50;
        case 0x265a88u: goto label_265a88;
        case 0x265a94u: goto label_265a94;
        case 0x265aa8u: goto label_265aa8;
        case 0x265abcu: goto label_265abc;
        case 0x265ae8u: goto label_265ae8;
        case 0x265af0u: goto label_265af0;
        case 0x265b1cu: goto label_265b1c;
        case 0x265b24u: goto label_265b24;
        case 0x265b40u: goto label_265b40;
        case 0x265b78u: goto label_265b78;
        case 0x265b98u: goto label_265b98;
        case 0x265ba0u: goto label_265ba0;
        case 0x265bccu: goto label_265bcc;
        case 0x265bd4u: goto label_265bd4;
        case 0x265be4u: goto label_265be4;
        case 0x265bf4u: goto label_265bf4;
        case 0x265c08u: goto label_265c08;
        case 0x265c10u: goto label_265c10;
        default: break;
    }

    ctx->pc = 0x2658f0u;

    // 0x2658f0: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x2658f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x2658f4: 0xffbe0490  sd          $fp, 0x490($sp)
    ctx->pc = 0x2658f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 30));
    // 0x2658f8: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x2658f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x2658fc: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x2658fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
    // 0x265900: 0xffb70480  sd          $s7, 0x480($sp)
    ctx->pc = 0x265900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 23));
    // 0x265904: 0xffb60470  sd          $s6, 0x470($sp)
    ctx->pc = 0x265904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 22));
    // 0x265908: 0xffb50460  sd          $s5, 0x460($sp)
    ctx->pc = 0x265908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 21));
    // 0x26590c: 0xffb40450  sd          $s4, 0x450($sp)
    ctx->pc = 0x26590cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 20));
    // 0x265910: 0xffb30440  sd          $s3, 0x440($sp)
    ctx->pc = 0x265910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 19));
    // 0x265914: 0xffb20430  sd          $s2, 0x430($sp)
    ctx->pc = 0x265914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 18));
    // 0x265918: 0xc09903a  jal         func_2640E8
    ctx->pc = 0x265918u;
    SET_GPR_U32(ctx, 31, 0x265920u);
    ctx->pc = 0x26591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265918u;
    // 0x26591c: 0xffb10420  sd          $s1, 0x420($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2640E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2640E8u, 0x265918u, 0x265920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265920u;
label_265920:
    // 0x265920: 0xafa20400  sw          $v0, 0x400($sp)
    ctx->pc = 0x265920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 2));
    // 0x265924: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x265924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x265928: 0x8f83b8b4  lw          $v1, -0x474C($gp)
    ctx->pc = 0x265928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949044)));
    // 0x26592c: 0x34844240  ori         $a0, $a0, 0x4240
    ctx->pc = 0x26592cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
    // 0x265930: 0x8f82b8b8  lw          $v0, -0x4748($gp)
    ctx->pc = 0x265930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949048)));
    // 0x265934: 0xc0b9294  jal         func_2E4A50
    ctx->pc = 0x265934u;
    SET_GPR_U32(ctx, 31, 0x26593Cu);
    ctx->pc = 0x265938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265934u;
    // 0x265938: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4A50u, 0x265934u, 0x26593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26593Cu;
label_26593c:
    // 0x26593c: 0x8f8aa348  lw          $t2, -0x5CB8($gp)
    ctx->pc = 0x26593cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x265940: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x265940u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x265944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265948: 0x19400012  blez        $t2, . + 4 + (0x12 << 2)
    ctx->pc = 0x265948u;
    {
        const bool branch_taken_0x265948 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x26594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265948u;
        // 0x26594c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265948) {
            ctx->pc = 0x265994u;
            goto label_265994;
        }
    }
    ctx->pc = 0x265950u;
    // 0x265950: 0x8f88a2ec  lw          $t0, -0x5D14($gp)
    ctx->pc = 0x265950u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x265954: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x265954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x265958: 0x8f8bb8b0  lw          $t3, -0x4750($gp)
    ctx->pc = 0x265958u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949040)));
    // 0x26595c: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x26595cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x265960: 0x8f89a34c  lw          $t1, -0x5CB4($gp)
    ctx->pc = 0x265960u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x265964: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x265964u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
label_265968:
    // 0x265968: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x265968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26596c: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x26596cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x265970: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x265970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x265974: 0xca202a  slt         $a0, $a2, $t2
    ctx->pc = 0x265974u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x265978: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x265978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x26597c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x265980: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x265980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x265984: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x265984u;
    {
        const bool branch_taken_0x265984 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x265988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265984u;
        // 0x265988: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265984) {
            ctx->pc = 0x265968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265968;
        }
    }
    ctx->pc = 0x26598Cu;
    // 0x26598c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26598Cu;
    {
        const bool branch_taken_0x26598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26598c) {
            ctx->pc = 0x2659A8u;
            goto label_2659a8;
        }
    }
    ctx->pc = 0x265994u;
label_265994:
    // 0x265994: 0x8f8bb8b0  lw          $t3, -0x4750($gp)
    ctx->pc = 0x265994u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949040)));
    // 0x265998: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x265998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x26599c: 0x8f89a34c  lw          $t1, -0x5CB4($gp)
    ctx->pc = 0x26599cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x2659a0: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2659a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x2659a4: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x2659a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
label_2659a8:
    // 0x2659a8: 0x55670001  bnel        $t3, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x2659A8u;
    {
        const bool branch_taken_0x2659a8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 7));
        if (branch_taken_0x2659a8) {
            ctx->pc = 0x2659ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2659A8u;
            // 0x2659ac: 0xaf87b8b0  sw          $a3, -0x4750($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294949040), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2659B0u;
            goto label_2659b0;
        }
    }
    ctx->pc = 0x2659B0u;
label_2659b0:
    // 0x2659b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2659b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2659b4: 0x1920000b  blez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x2659B4u;
    {
        const bool branch_taken_0x2659b4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2659B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659B4u;
        // 0x2659b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659b4) {
            ctx->pc = 0x2659E4u;
            goto label_2659e4;
        }
    }
    ctx->pc = 0x2659BCu;
    // 0x2659bc: 0x8f88a2f0  lw          $t0, -0x5D10($gp)
    ctx->pc = 0x2659bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
label_2659c0:
    // 0x2659c0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2659c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2659c4: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2659c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2659c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2659c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2659cc: 0xc9202a  slt         $a0, $a2, $t1
    ctx->pc = 0x2659ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2659d0: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x2659d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2659d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2659d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2659d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2659d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2659dc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2659DCu;
    {
        const bool branch_taken_0x2659dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2659E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659DCu;
        // 0x2659e0: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659dc) {
            ctx->pc = 0x2659C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2659c0;
        }
    }
    ctx->pc = 0x2659E4u;
label_2659e4:
    // 0x2659e4: 0x24a527d0  addiu       $a1, $a1, 0x27D0
    ctx->pc = 0x2659e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10192));
    // 0x2659e8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2659e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2659ec: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2659ECu;
    SET_GPR_U32(ctx, 31, 0x2659F4u);
    ctx->pc = 0x2659F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2659ECu;
    // 0x2659f0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2659ECu, 0x2659F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2659F4u;
label_2659f4:
    // 0x2659f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2659f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2659f8: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x2659F8u;
    SET_GPR_U32(ctx, 31, 0x265A00u);
    ctx->pc = 0x2659FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2659F8u;
    // 0x2659fc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x2659F8u, 0x265A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265A00u;
label_265a00:
    // 0x265a00: 0x3c2a021  addu        $s4, $fp, $v0
    ctx->pc = 0x265a00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x265a04: 0x8f86b8b0  lw          $a2, -0x4750($gp)
    ctx->pc = 0x265a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949040)));
    // 0x265a08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x265a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a0c: 0x26252808  addiu       $a1, $s1, 0x2808
    ctx->pc = 0x265a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10248));
    // 0x265a10: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x265A10u;
    SET_GPR_U32(ctx, 31, 0x265A18u);
    ctx->pc = 0x265A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265A10u;
    // 0x265a14: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x265A10u, 0x265A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265A18u;
label_265a18:
    // 0x265a18: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x265A18u;
    SET_GPR_U32(ctx, 31, 0x265A20u);
    ctx->pc = 0x265A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265A18u;
    // 0x265a1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x265A18u, 0x265A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265A20u;
label_265a20:
    // 0x265a20: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x265a20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x265a24: 0x26452830  addiu       $a1, $s2, 0x2830
    ctx->pc = 0x265a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 10288));
    // 0x265a28: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x265A28u;
    SET_GPR_U32(ctx, 31, 0x265A30u);
    ctx->pc = 0x265A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265A28u;
    // 0x265a2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x265A28u, 0x265A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265A30u;
label_265a30:
    // 0x265a30: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x265A30u;
    SET_GPR_U32(ctx, 31, 0x265A38u);
    ctx->pc = 0x265A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265A30u;
    // 0x265a34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x265A30u, 0x265A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265A38u;
label_265a38:
    // 0x265a38: 0x8f83a348  lw          $v1, -0x5CB8($gp)
    ctx->pc = 0x265a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x265a3c: 0x18600032  blez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x265A3Cu;
    {
        const bool branch_taken_0x265a3c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x265A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A3Cu;
        // 0x265a40: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a3c) {
            ctx->pc = 0x265B08u;
            goto label_265b08;
        }
    }
    ctx->pc = 0x265A44u;
    // 0x265a44: 0x3c17fffe  lui         $s7, 0xFFFE
    ctx->pc = 0x265a44u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65534 << 16));
    // 0x265a48: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x265a48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a4c: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x265a4cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
label_265a50:
    // 0x265a50: 0x8f82a2ec  lw          $v0, -0x5D14($gp)
    ctx->pc = 0x265a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x265a54: 0x2c29821  addu        $s3, $s6, $v0
    ctx->pc = 0x265a54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x265a58: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x265a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x265a5c: 0x771024  and         $v0, $v1, $s7
    ctx->pc = 0x265a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x265a60: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x265a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x265a64: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x265A64u;
    {
        const bool branch_taken_0x265a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A64u;
        // 0x265a68: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a64) {
            ctx->pc = 0x265AF4u;
            goto label_265af4;
        }
    }
    ctx->pc = 0x265A6Cu;
    // 0x265a6c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x265a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x265a70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265a74: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x265A74u;
    {
        const bool branch_taken_0x265a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x265A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A74u;
        // 0x265a78: 0x8f82a348  lw          $v0, -0x5CB8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a74) {
            ctx->pc = 0x265AF8u;
            goto label_265af8;
        }
    }
    ctx->pc = 0x265A7Cu;
    // 0x265a7c: 0xc66c000c  lwc1        $f12, 0xC($s3)
    ctx->pc = 0x265a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x265a80: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x265A80u;
    SET_GPR_U32(ctx, 31, 0x265A88u);
    ctx->pc = 0x265A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265A80u;
    // 0x265a84: 0x86720008  lh          $s2, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x265A80u, 0x265A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265A88u;
label_265a88:
    // 0x265a88: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x265a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x265a8c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x265A8Cu;
    SET_GPR_U32(ctx, 31, 0x265A94u);
    ctx->pc = 0x265A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265A8Cu;
    // 0x265a90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x265A8Cu, 0x265A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265A94u;
label_265a94:
    // 0x265a94: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x265a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x265a98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a9c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x265a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x265aa0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x265AA0u;
    SET_GPR_U32(ctx, 31, 0x265AA8u);
    ctx->pc = 0x265AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265AA0u;
    // 0x265aa4: 0xc46c0014  lwc1        $f12, 0x14($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x265AA0u, 0x265AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265AA8u;
label_265aa8:
    // 0x265aa8: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x265aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x265aac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x265aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x265ab0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x265ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x265ab4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x265AB4u;
    SET_GPR_U32(ctx, 31, 0x265ABCu);
    ctx->pc = 0x265AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265AB4u;
    // 0x265ab8: 0xc46c0018  lwc1        $f12, 0x18($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x265AB4u, 0x265ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265ABCu;
label_265abc:
    // 0x265abc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x265abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x265ac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x265ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ac4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x265ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x265ac8: 0x8f86a2e8  lw          $a2, -0x5D18($gp)
    ctx->pc = 0x265ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
    // 0x265acc: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x265accu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x265ad0: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x265ad0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ad4: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x265ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x265ad8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x265ad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265adc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x265adcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ae0: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x265AE0u;
    SET_GPR_U32(ctx, 31, 0x265AE8u);
    ctx->pc = 0x265AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265AE0u;
    // 0x265ae4: 0x24452848  addiu       $a1, $v0, 0x2848 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x265AE0u, 0x265AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265AE8u;
label_265ae8:
    // 0x265ae8: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x265AE8u;
    SET_GPR_U32(ctx, 31, 0x265AF0u);
    ctx->pc = 0x265AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265AE8u;
    // 0x265aec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x265AE8u, 0x265AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265AF0u;
label_265af0:
    // 0x265af0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x265af0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_265af4:
    // 0x265af4: 0x8f82a348  lw          $v0, -0x5CB8($gp)
    ctx->pc = 0x265af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
label_265af8:
    // 0x265af8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x265af8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x265afc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x265afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x265b00: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x265B00u;
    {
        const bool branch_taken_0x265b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B00u;
        // 0x265b04: 0x26d6001c  addiu       $s6, $s6, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b00) {
            ctx->pc = 0x265A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265a50;
        }
    }
    ctx->pc = 0x265B08u;
label_265b08:
    // 0x265b08: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x265b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x265b0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x265b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b10: 0x24652870  addiu       $a1, $v1, 0x2870
    ctx->pc = 0x265b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10352));
    // 0x265b14: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x265B14u;
    SET_GPR_U32(ctx, 31, 0x265B1Cu);
    ctx->pc = 0x265B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265B14u;
    // 0x265b18: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x265B14u, 0x265B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265B1Cu;
label_265b1c:
    // 0x265b1c: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x265B1Cu;
    SET_GPR_U32(ctx, 31, 0x265B24u);
    ctx->pc = 0x265B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265B1Cu;
    // 0x265b20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x265B1Cu, 0x265B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265B24u;
label_265b24:
    // 0x265b24: 0x8f89a34c  lw          $t1, -0x5CB4($gp)
    ctx->pc = 0x265b24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x265b28: 0x19200023  blez        $t1, . + 4 + (0x23 << 2)
    ctx->pc = 0x265B28u;
    {
        const bool branch_taken_0x265b28 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x265B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B28u;
        // 0x265b2c: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b28) {
            ctx->pc = 0x265BB8u;
            goto label_265bb8;
        }
    }
    ctx->pc = 0x265B30u;
    // 0x265b30: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x265b30u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x265b34: 0x2416001c  addiu       $s6, $zero, 0x1C
    ctx->pc = 0x265b34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x265b38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x265b38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b3c: 0x0  nop
    ctx->pc = 0x265b3cu;
    // NOP
label_265b40:
    // 0x265b40: 0x8f83a2f0  lw          $v1, -0x5D10($gp)
    ctx->pc = 0x265b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x265b44: 0x2639021  addu        $s2, $s3, $v1
    ctx->pc = 0x265b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x265b48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x265b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x265b4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x265b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x265b50: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x265B50u;
    {
        const bool branch_taken_0x265b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B50u;
        // 0x265b54: 0x8f82a2ec  lw          $v0, -0x5D14($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b50) {
            ctx->pc = 0x265BA8u;
            goto label_265ba8;
        }
    }
    ctx->pc = 0x265B58u;
    // 0x265b58: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x265b58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x265b5c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x265b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x265b60: 0x2361818  mult        $v1, $s1, $s6
    ctx->pc = 0x265b60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x265b64: 0x2168018  mult        $s0, $s0, $s6
    ctx->pc = 0x265b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x265b68: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x265b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x265b6c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x265b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265b70: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x265B70u;
    SET_GPR_U32(ctx, 31, 0x265B78u);
    ctx->pc = 0x265B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265B70u;
    // 0x265b74: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x265B70u, 0x265B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265B78u;
label_265b78:
    // 0x265b78: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x265b78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x265b7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x265b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b80: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x265b80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x265b84: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x265b84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b88: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x265b88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265b8c: 0x26e52890  addiu       $a1, $s7, 0x2890
    ctx->pc = 0x265b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 10384));
    // 0x265b90: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x265B90u;
    SET_GPR_U32(ctx, 31, 0x265B98u);
    ctx->pc = 0x265B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265B90u;
    // 0x265b94: 0x8f86a2e8  lw          $a2, -0x5D18($gp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x265B90u, 0x265B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265B98u;
label_265b98:
    // 0x265b98: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x265B98u;
    SET_GPR_U32(ctx, 31, 0x265BA0u);
    ctx->pc = 0x265B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265B98u;
    // 0x265b9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x265B98u, 0x265BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265BA0u;
label_265ba0:
    // 0x265ba0: 0x8f89a34c  lw          $t1, -0x5CB4($gp)
    ctx->pc = 0x265ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x265ba4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x265ba4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_265ba8:
    // 0x265ba8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x265ba8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x265bac: 0x2a9102a  slt         $v0, $s5, $t1
    ctx->pc = 0x265bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x265bb0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x265BB0u;
    {
        const bool branch_taken_0x265bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265BB0u;
        // 0x265bb4: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265bb0) {
            ctx->pc = 0x265B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265b40;
        }
    }
    ctx->pc = 0x265BB8u;
label_265bb8:
    // 0x265bb8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x265bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x265bbc: 0x8fa60400  lw          $a2, 0x400($sp)
    ctx->pc = 0x265bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x265bc0: 0x2445eb28  addiu       $a1, $v0, -0x14D8
    ctx->pc = 0x265bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961960));
    // 0x265bc4: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x265BC4u;
    SET_GPR_U32(ctx, 31, 0x265BCCu);
    ctx->pc = 0x265BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265BC4u;
    // 0x265bc8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x265BC4u, 0x265BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265BCCu;
label_265bcc:
    // 0x265bcc: 0xc0868ce  jal         func_21A338
    ctx->pc = 0x265BCCu;
    SET_GPR_U32(ctx, 31, 0x265BD4u);
    ctx->pc = 0x265BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265BCCu;
    // 0x265bd0: 0x8fa40400  lw          $a0, 0x400($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A338u, 0x265BCCu, 0x265BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265BD4u;
label_265bd4:
    // 0x265bd4: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x265BD4u;
    {
        const bool branch_taken_0x265bd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x265BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265BD4u;
        // 0x265bd8: 0x8fa40400  lw          $a0, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265bd4) {
            ctx->pc = 0x265BFCu;
            goto label_265bfc;
        }
    }
    ctx->pc = 0x265BDCu;
    // 0x265bdc: 0xc08697e  jal         func_21A5F8
    ctx->pc = 0x265BDCu;
    SET_GPR_U32(ctx, 31, 0x265BE4u);
    ctx->pc = 0x265BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265BDCu;
    // 0x265be0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5F8u, 0x265BDCu, 0x265BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265BE4u;
label_265be4:
    // 0x265be4: 0x8fa40400  lw          $a0, 0x400($sp)
    ctx->pc = 0x265be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x265be8: 0x29e3023  subu        $a2, $s4, $fp
    ctx->pc = 0x265be8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x265bec: 0xc086966  jal         func_21A598
    ctx->pc = 0x265BECu;
    SET_GPR_U32(ctx, 31, 0x265BF4u);
    ctx->pc = 0x265BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265BECu;
    // 0x265bf0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A598u, 0x265BECu, 0x265BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265BF4u;
label_265bf4:
    // 0x265bf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x265BF4u;
    {
        const bool branch_taken_0x265bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265bf4) {
            ctx->pc = 0x265C08u;
            goto label_265c08;
        }
    }
    ctx->pc = 0x265BFCu;
label_265bfc:
    // 0x265bfc: 0x29e3023  subu        $a2, $s4, $fp
    ctx->pc = 0x265bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x265c00: 0xc086966  jal         func_21A598
    ctx->pc = 0x265C00u;
    SET_GPR_U32(ctx, 31, 0x265C08u);
    ctx->pc = 0x265C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C00u;
    // 0x265c04: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A598u, 0x265C00u, 0x265C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C08u;
label_265c08:
    // 0x265c08: 0xc0b929e  jal         func_2E4A78
    ctx->pc = 0x265C08u;
    SET_GPR_U32(ctx, 31, 0x265C10u);
    ctx->pc = 0x265C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C08u;
    // 0x265c0c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4A78u, 0x265C08u, 0x265C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C10u;
label_265c10:
    // 0x265c10: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x265c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x265c14: 0xdfbe0490  ld          $fp, 0x490($sp)
    ctx->pc = 0x265c14u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x265c18: 0xdfb70480  ld          $s7, 0x480($sp)
    ctx->pc = 0x265c18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x265c1c: 0xdfb60470  ld          $s6, 0x470($sp)
    ctx->pc = 0x265c1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x265c20: 0xdfb50460  ld          $s5, 0x460($sp)
    ctx->pc = 0x265c20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x265c24: 0xdfb40450  ld          $s4, 0x450($sp)
    ctx->pc = 0x265c24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x265c28: 0xdfb30440  ld          $s3, 0x440($sp)
    ctx->pc = 0x265c28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x265c2c: 0xdfb20430  ld          $s2, 0x430($sp)
    ctx->pc = 0x265c2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x265c30: 0xdfb10420  ld          $s1, 0x420($sp)
    ctx->pc = 0x265c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x265c34: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x265c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x265c38: 0x3e00008  jr          $ra
    ctx->pc = 0x265C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C38u;
        // 0x265c3c: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265C40u;
}
