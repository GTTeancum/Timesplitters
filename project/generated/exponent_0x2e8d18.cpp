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

// Function: exponent
// Address: 0x2e8d18 - 0x2e8df8
void exponent_0x2e8d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("exponent_0x2e8d18");
#endif

    switch (ctx->pc) {
        case 0x2e8d60u: goto label_2e8d60;
        case 0x2e8db0u: goto label_2e8db0;
        default: break;
    }

    ctx->pc = 0x2e8d18u;

    // 0x2e8d18: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2e8d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2e8d1c: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8D1Cu;
    {
        const bool branch_taken_0x2e8d1c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2E8D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D1Cu;
        // 0x2e8d20: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d1c) {
            ctx->pc = 0x2E8D38u;
            goto label_2e8d38;
        }
    }
    ctx->pc = 0x2E8D24u;
    // 0x2e8d24: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2e8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2e8d28: 0x52823  negu        $a1, $a1
    ctx->pc = 0x2e8d28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2e8d2c: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2e8d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e8d30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8D30u;
    {
        const bool branch_taken_0x2e8d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D30u;
        // 0x2e8d34: 0x24880002  addiu       $t0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d30) {
            ctx->pc = 0x2E8D44u;
            goto label_2e8d44;
        }
    }
    ctx->pc = 0x2E8D38u;
label_2e8d38:
    // 0x2e8d38: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2e8d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2e8d3c: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x2e8d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2e8d40: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2e8d40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_2e8d44:
    // 0x2e8d44: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x2e8d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x2e8d48: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x2e8d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e8d4c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E8D4Cu;
    {
        const bool branch_taken_0x2e8d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D4Cu;
        // 0x2e8d50: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d4c) {
            ctx->pc = 0x2E8DD4u;
            goto label_2e8dd4;
        }
    }
    ctx->pc = 0x2E8D54u;
    // 0x2e8d54: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2e8d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e8d58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e8d58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d5c: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x2e8d5cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2e8d60:
    // 0x2e8d60: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E8D60u;
    {
        const bool branch_taken_0x2e8d60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x2e8d60) {
            ctx->pc = 0x2E8D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8D60u;
            // 0x2e8d64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8D68u;
            goto label_2e8d68;
        }
    }
    ctx->pc = 0x2E8D68u;
label_2e8d68:
    // 0x2e8d68: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e8d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e8d6c: 0x1010  mfhi        $v0
    ctx->pc = 0x2e8d6cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e8d70: 0x1812  mflo        $v1
    ctx->pc = 0x2e8d70u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2e8d74: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2e8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2e8d78: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2e8d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d7c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2e8d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e8d80: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x2e8d80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e8d84: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E8D84u;
    {
        const bool branch_taken_0x2e8d84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x2e8d84) {
            ctx->pc = 0x2E8D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8D84u;
            // 0x2e8d88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8D8Cu;
            goto label_2e8d8c;
        }
    }
    ctx->pc = 0x2E8D8Cu;
label_2e8d8c:
    // 0x2e8d8c: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E8D8Cu;
    {
        const bool branch_taken_0x2e8d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8d8c) {
            ctx->pc = 0x2E8D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8D8Cu;
            // 0x2e8d90: 0xa7001a  div         $zero, $a1, $a3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8d60;
        }
    }
    ctx->pc = 0x2E8D94u;
    // 0x2e8d94: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e8d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e8d98: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x2e8d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2e8d9c: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x2e8d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2e8da0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E8DA0u;
    {
        const bool branch_taken_0x2e8da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DA0u;
        // 0x2e8da4: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8da0) {
            ctx->pc = 0x2E8DECu;
            goto label_2e8dec;
        }
    }
    ctx->pc = 0x2E8DA8u;
    // 0x2e8da8: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2e8da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8dac: 0x0  nop
    ctx->pc = 0x2e8dacu;
    // NOP
label_2e8db0:
    // 0x2e8db0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2e8db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e8db4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e8db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e8db8: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x2e8db8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e8dbc: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x2e8dbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e8dc0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e8dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e8dc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E8DC4u;
    {
        const bool branch_taken_0x2e8dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8dc4) {
            ctx->pc = 0x2E8DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8db0;
        }
    }
    ctx->pc = 0x2E8DCCu;
    // 0x2e8dcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8DCCu;
    {
        const bool branch_taken_0x2e8dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DCCu;
        // 0x2e8dd0: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8dcc) {
            ctx->pc = 0x2E8DF0u;
            goto label_2e8df0;
        }
    }
    ctx->pc = 0x2E8DD4u;
label_2e8dd4:
    // 0x2e8dd4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2e8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e8dd8: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x2e8dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2e8ddc: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x2e8ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e8de0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e8de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e8de4: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x2e8de4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e8de8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e8de8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e8dec:
    // 0x2e8dec: 0x1041023  subu        $v0, $t0, $a0
    ctx->pc = 0x2e8decu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_2e8df0:
    // 0x2e8df0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DF0u;
        // 0x2e8df4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8DF8u;
}
