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

// Function: lvAllocTileSetSetup
// Address: 0x226fd0 - 0x227154
void lvAllocTileSetSetup_0x226fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvAllocTileSetSetup_0x226fd0");
#endif

    switch (ctx->pc) {
        case 0x226ff0u: goto label_226ff0;
        case 0x227028u: goto label_227028;
        case 0x227060u: goto label_227060;
        case 0x227070u: goto label_227070;
        case 0x227124u: goto label_227124;
        case 0x22713cu: goto label_22713c;
        default: break;
    }

    ctx->pc = 0x226fd0u;

    // 0x226fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226fdc: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x226fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x226fe0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x226fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x226fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x226fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x226fe8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x226FE8u;
    SET_GPR_U32(ctx, 31, 0x226FF0u);
    ctx->pc = 0x226FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FE8u;
    // 0x226fec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x226FE8u, 0x226FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FF0u;
label_226ff0:
    // 0x226ff0: 0x8f8ba0d0  lw          $t3, -0x5F30($gp)
    ctx->pc = 0x226ff0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x226ff4: 0x25680008  addiu       $t0, $t3, 0x8
    ctx->pc = 0x226ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x226ff8: 0x25621ffc  addiu       $v0, $t3, 0x1FFC
    ctx->pc = 0x226ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 8188));
    // 0x226ffc: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x226ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x227000: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x227000u;
    {
        const bool branch_taken_0x227000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227000u;
        // 0x227004: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227000) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x227008u;
    // 0x227008: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x227008u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22700c: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x22700cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x227010: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x227010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x227014: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x227014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x227018: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x227018u;
    {
        const bool branch_taken_0x227018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227018u;
        // 0x22701c: 0x25680010  addiu       $t0, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227018) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x227020u;
    // 0x227020: 0x8e090014  lw          $t1, 0x14($s0)
    ctx->pc = 0x227020u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x227024: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x227024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_227028:
    // 0x227028: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x227028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x22702c: 0x34424627  ori         $v0, $v0, 0x4627
    ctx->pc = 0x22702cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17959);
    // 0x227030: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227030u;
    {
        const bool branch_taken_0x227030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x227034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227030u;
        // 0x227034: 0x3c020132  lui         $v0, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227030) {
            ctx->pc = 0x227040u;
            goto label_227040;
        }
    }
    ctx->pc = 0x227038u;
    // 0x227038: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x227038u;
    {
        const bool branch_taken_0x227038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227038u;
        // 0x22703c: 0x8d110004  lw          $s1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227038) {
            ctx->pc = 0x2270D4u;
            goto label_2270d4;
        }
    }
    ctx->pc = 0x227040u;
label_227040:
    // 0x227040: 0x34424628  ori         $v0, $v0, 0x4628
    ctx->pc = 0x227040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17960);
    // 0x227044: 0x54820024  bnel        $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x227044u;
    {
        const bool branch_taken_0x227044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x227044) {
            ctx->pc = 0x227048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227044u;
            // 0x227048: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2270D8u;
            goto label_2270d8;
        }
    }
    ctx->pc = 0x22704Cu;
    // 0x22704c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x22704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227050: 0x1a200020  blez        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x227050u;
    {
        const bool branch_taken_0x227050 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x227054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227050u;
        // 0x227054: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227050) {
            ctx->pc = 0x2270D4u;
            goto label_2270d4;
        }
    }
    ctx->pc = 0x227058u;
    // 0x227058: 0x9487000a  lhu         $a3, 0xA($a0)
    ctx->pc = 0x227058u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x22705c: 0x0  nop
    ctx->pc = 0x22705cu;
    // NOP
label_227060:
    // 0x227060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227064: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x227064u;
    {
        const bool branch_taken_0x227064 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x227068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227064u;
        // 0x227068: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227064) {
            ctx->pc = 0x2270C0u;
            goto label_2270c0;
        }
    }
    ctx->pc = 0x22706Cu;
    // 0x22706c: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x22706cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_227070:
    // 0x227070: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x227070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x227074: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x227074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x227078: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227078u;
    {
        const bool branch_taken_0x227078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227078u;
        // 0x22707c: 0x2462fffb  addiu       $v0, $v1, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227078) {
            ctx->pc = 0x227090u;
            goto label_227090;
        }
    }
    ctx->pc = 0x227080u;
    // 0x227080: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x227080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x227084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x227084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x227088: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x227088u;
    {
        const bool branch_taken_0x227088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227088u;
        // 0x22708c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227088) {
            ctx->pc = 0x2270A8u;
            goto label_2270a8;
        }
    }
    ctx->pc = 0x227090u;
label_227090:
    // 0x227090: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x227090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x227094: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x227094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x227098: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227098u;
    {
        const bool branch_taken_0x227098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227098u;
        // 0x22709c: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227098) {
            ctx->pc = 0x2270A8u;
            goto label_2270a8;
        }
    }
    ctx->pc = 0x2270A0u;
    // 0x2270a0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2270a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2270a4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2270a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2270a8:
    // 0x2270a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2270a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2270ac: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x2270acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2270b0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2270B0u;
    {
        const bool branch_taken_0x2270b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2270B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270B0u;
        // 0x2270b4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270b0) {
            ctx->pc = 0x227070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227070;
        }
    }
    ctx->pc = 0x2270B8u;
    // 0x2270b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2270B8u;
    {
        const bool branch_taken_0x2270b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2270BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270B8u;
        // 0x2270bc: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270b8) {
            ctx->pc = 0x2270C8u;
            goto label_2270c8;
        }
    }
    ctx->pc = 0x2270C0u;
label_2270c0:
    // 0x2270c0: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2270c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2270c4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2270c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2270c8:
    // 0x2270c8: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x2270c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2270cc: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2270CCu;
    {
        const bool branch_taken_0x2270cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2270cc) {
            ctx->pc = 0x2270D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2270CCu;
            // 0x2270d0: 0x9487000a  lhu         $a3, 0xA($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227060;
        }
    }
    ctx->pc = 0x2270D4u;
label_2270d4:
    // 0x2270d4: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x2270d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_2270d8:
    // 0x2270d8: 0x25621ffc  addiu       $v0, $t3, 0x1FFC
    ctx->pc = 0x2270d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 8188));
    // 0x2270dc: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2270dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2270e0: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x2270e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2270e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2270E4u;
    {
        const bool branch_taken_0x2270e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2270E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270E4u;
        // 0x2270e8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270e4) {
            ctx->pc = 0x227110u;
            goto label_227110;
        }
    }
    ctx->pc = 0x2270ECu;
    // 0x2270ec: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x2270ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x2270f0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2270f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2270f4: 0x25480008  addiu       $t0, $t2, 0x8
    ctx->pc = 0x2270f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x2270f8: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x2270f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x2270fc: 0x1462ffca  bne         $v1, $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2270FCu;
    {
        const bool branch_taken_0x2270fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270FCu;
        // 0x227100: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270fc) {
            ctx->pc = 0x227028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227028;
        }
    }
    ctx->pc = 0x227104u;
    // 0x227104: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x227104u;
    {
        const bool branch_taken_0x227104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227104) {
            ctx->pc = 0x227110u;
            goto label_227110;
        }
    }
    ctx->pc = 0x22710Cu;
label_22710c:
    // 0x22710c: 0x8e090014  lw          $t1, 0x14($s0)
    ctx->pc = 0x22710cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_227110:
    // 0x227110: 0x19200005  blez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x227110u;
    {
        const bool branch_taken_0x227110 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x227114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227110u;
        // 0x227114: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227110) {
            ctx->pc = 0x227128u;
            goto label_227128;
        }
    }
    ctx->pc = 0x227118u;
    // 0x227118: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x227118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22711c: 0xc08070e  jal         func_201C38
    ctx->pc = 0x22711Cu;
    SET_GPR_U32(ctx, 31, 0x227124u);
    ctx->pc = 0x227120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22711Cu;
    // 0x227120: 0x1242018  mult        $a0, $t1, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x22711Cu, 0x227124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227124u;
label_227124:
    // 0x227124: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x227124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_227128:
    // 0x227128: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x227128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x22712c: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22712Cu;
    {
        const bool branch_taken_0x22712c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x227130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22712Cu;
        // 0x227130: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22712c) {
            ctx->pc = 0x227140u;
            goto label_227140;
        }
    }
    ctx->pc = 0x227134u;
    // 0x227134: 0xc08070e  jal         func_201C38
    ctx->pc = 0x227134u;
    SET_GPR_U32(ctx, 31, 0x22713Cu);
    ctx->pc = 0x227138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227134u;
    // 0x227138: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x227134u, 0x22713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22713Cu;
label_22713c:
    // 0x22713c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x22713cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_227140:
    // 0x227140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x227140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227144: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x227144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22714c: 0x3e00008  jr          $ra
    ctx->pc = 0x22714Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22714Cu;
        // 0x227150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22714Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227154u;
}
