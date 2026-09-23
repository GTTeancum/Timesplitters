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

// Function: cd_read_intr
// Address: 0x2de0e8 - 0x2de180
void cd_read_intr_0x2de0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cd_read_intr_0x2de0e8");
#endif

    switch (ctx->pc) {
        case 0x2de118u: goto label_2de118;
        case 0x2de158u: goto label_2de158;
        default: break;
    }

    ctx->pc = 0x2de0e8u;

    // 0x2de0e8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2de0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2de0ec: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x2de0ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2de0f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2de0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2de0f4: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DE0F4u;
    {
        const bool branch_taken_0x2de0f4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2DE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0F4u;
        // 0x2de0f8: 0x3c090038  lui         $t1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0f4) {
            ctx->pc = 0x2DE138u;
            goto label_2de138;
        }
    }
    ctx->pc = 0x2DE0FCu;
    // 0x2de0fc: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x2de0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2de100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de104: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DE104u;
    {
        const bool branch_taken_0x2de104 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2DE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE104u;
        // 0x2de108: 0x24c20010  addiu       $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de104) {
            ctx->pc = 0x2DE138u;
            goto label_2de138;
        }
    }
    ctx->pc = 0x2DE10Cu;
    // 0x2de10c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2de10cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de110: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2de110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2de114: 0x0  nop
    ctx->pc = 0x2de114u;
    // NOP
label_2de118:
    // 0x2de118: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2de118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2de11c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2de11cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de120: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2de120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2de124: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2de124u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de128: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2de128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2de12c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2de12cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2de130: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DE130u;
    {
        const bool branch_taken_0x2de130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE130u;
        // 0x2de134: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de130) {
            ctx->pc = 0x2DE118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de118;
        }
    }
    ctx->pc = 0x2DE138u;
label_2de138:
    // 0x2de138: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2de138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2de13c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2DE13Cu;
    {
        const bool branch_taken_0x2de13c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2DE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE13Cu;
        // 0x2de140: 0x24c20050  addiu       $v0, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de13c) {
            ctx->pc = 0x2DE178u;
            goto label_2de178;
        }
    }
    ctx->pc = 0x2DE144u;
    // 0x2de144: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x2de144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2de148: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DE148u;
    {
        const bool branch_taken_0x2de148 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2DE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE148u;
        // 0x2de14c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de148) {
            ctx->pc = 0x2DE178u;
            goto label_2de178;
        }
    }
    ctx->pc = 0x2DE150u;
    // 0x2de150: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2de150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de154: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2de154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_2de158:
    // 0x2de158: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2de158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2de15c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2de15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de160: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2de160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2de164: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2de164u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de168: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2de168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2de16c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2de16cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2de170: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DE170u;
    {
        const bool branch_taken_0x2de170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE170u;
        // 0x2de174: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de170) {
            ctx->pc = 0x2DE158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de158;
        }
    }
    ctx->pc = 0x2DE178u;
label_2de178:
    // 0x2de178: 0x80b77a0  j           func_2DDE80
    ctx->pc = 0x2DE178u;
    ctx->pc = 0x2DE17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE178u;
    // 0x2de17c: 0x25242fe0  addiu       $a0, $t1, 0x2FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 12256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDE80u;
    cd_callback_0x2dde80(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE180u;
}
