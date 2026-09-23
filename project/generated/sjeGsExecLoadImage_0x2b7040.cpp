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

// Function: sjeGsExecLoadImage
// Address: 0x2b7040 - 0x2b7190
void sjeGsExecLoadImage_0x2b7040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sjeGsExecLoadImage_0x2b7040");
#endif

    switch (ctx->pc) {
        case 0x2b7080u: goto label_2b7080;
        case 0x2b7108u: goto label_2b7108;
        case 0x2b7120u: goto label_2b7120;
        default: break;
    }

    ctx->pc = 0x2b7040u;

    // 0x2b7040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7044: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b7044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b7048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b704c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x2b704cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x2b7050: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2b7050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7054: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2b7054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b7058u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x2b705c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2b705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2b7060: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B7060u;
    {
        const bool branch_taken_0x2b7060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7060u;
        // 0x2b7064: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7060) {
            ctx->pc = 0x2B70A4u;
            goto label_2b70a4;
        }
    }
    ctx->pc = 0x2B7068u;
    // 0x2b7068: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2b7068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2b706c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b706cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b7070: 0x34a586a0  ori         $a1, $a1, 0x86A0
    ctx->pc = 0x2b7070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34464);
    // 0x2b7074: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b7074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b7078: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x2b7078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x2b707c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2b707cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b7080:
    // 0x2b7080: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b7080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b7084: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7084u;
    {
        const bool branch_taken_0x2b7084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7084u;
        // 0x2b7088: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7084) {
            ctx->pc = 0x2B7094u;
            goto label_2b7094;
        }
    }
    ctx->pc = 0x2B708Cu;
    // 0x2b708c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2B708Cu;
    {
        const bool branch_taken_0x2b708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B708Cu;
        // 0x2b7090: 0x24849aa0  addiu       $a0, $a0, -0x6560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b708c) {
            ctx->pc = 0x2B7118u;
            goto label_2b7118;
        }
    }
    ctx->pc = 0x2B7094u;
label_2b7094:
    // 0x2b7094: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b7094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7098: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2b7098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2b709c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B709Cu;
    {
        const bool branch_taken_0x2b709c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B709Cu;
        // 0x2b70a0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b709c) {
            ctx->pc = 0x2B7080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7080;
        }
    }
    ctx->pc = 0x2B70A4u;
label_2b70a4:
    // 0x2b70a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b70a8: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x2b70a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x2b70ac: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x2b70acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x2b70b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b70b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b70b4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2b70b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2b70b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2b70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2b70bc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2b70bcu;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 5));
    // 0x2b70c0: 0x3442a010  ori         $v0, $v0, 0xA010
    ctx->pc = 0x2b70c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40976);
    // 0x2b70c4: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x2b70c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x2b70c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b70c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b70cc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b70ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b70d0: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x2b70d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x2b70d4: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x2b70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2b70d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2b70d8u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 2));
    // 0x2b70dc: 0xf  sync
    ctx->pc = 0x2b70dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2b70e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b70e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2b70e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2b70e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B70E8u;
    {
        const bool branch_taken_0x2b70e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70E8u;
        // 0x2b70ec: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70e8) {
            ctx->pc = 0x2B7138u;
            goto label_2b7138;
        }
    }
    ctx->pc = 0x2B70F0u;
    // 0x2b70f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b70f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b70f4: 0x34a586a0  ori         $a1, $a1, 0x86A0
    ctx->pc = 0x2b70f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34464);
    // 0x2b70f8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b70f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b70fc: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x2b70fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x2b7100: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2b7100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7104: 0x0  nop
    ctx->pc = 0x2b7104u;
    // NOP
label_2b7108:
    // 0x2b7108: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b7108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b710c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B710Cu;
    {
        const bool branch_taken_0x2b710c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B710Cu;
        // 0x2b7110: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b710c) {
            ctx->pc = 0x2B7128u;
            goto label_2b7128;
        }
    }
    ctx->pc = 0x2B7114u;
    // 0x2b7114: 0x24849ae0  addiu       $a0, $a0, -0x6520
    ctx->pc = 0x2b7114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941408));
label_2b7118:
    // 0x2b7118: 0xc0b4760  jal         func_2D1D80
    ctx->pc = 0x2B7118u;
    SET_GPR_U32(ctx, 31, 0x2B7120u);
    ctx->pc = 0x2D1D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D80u, 0x2B7118u, 0x2B7120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7120u;
label_2b7120:
    // 0x2b7120: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B7120u;
    {
        const bool branch_taken_0x2b7120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7120u;
        // 0x2b7124: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7120) {
            ctx->pc = 0x2B7184u;
            goto label_2b7184;
        }
    }
    ctx->pc = 0x2B7128u;
label_2b7128:
    // 0x2b7128: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b7128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b712c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2b712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2b7130: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B7130u;
    {
        const bool branch_taken_0x2b7130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7130u;
        // 0x2b7134: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7130) {
            ctx->pc = 0x2B7108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7108;
        }
    }
    ctx->pc = 0x2B7138u;
label_2b7138:
    // 0x2b7138: 0xdce20050  ld          $v0, 0x50($a3)
    ctx->pc = 0x2b7138u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x2b713c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2b713cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2b7140: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x2b7140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x2b7144: 0x34a5a020  ori         $a1, $a1, 0xA020
    ctx->pc = 0x2b7144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40992);
    // 0x2b7148: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2b7148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2b714c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2b714cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2b7150: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b7150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b7154: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b7154u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b7158: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b7158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b715c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b715cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2b7160: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x2b7160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x2b7164: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x2b7164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x2b7168: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2b7168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2b716c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2b716cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2b7170: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x2b7170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x2b7174: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x2b7174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2b7178: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b7178u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 3));
    // 0x2b717c: 0xf  sync
    ctx->pc = 0x2b717cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2b7180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7184:
    // 0x2b7184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7188: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7188u;
        // 0x2b718c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7190u;
}
