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

// Function: mmCheckObject
// Address: 0x245238 - 0x2452e8
void mmCheckObject_0x245238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmCheckObject_0x245238");
#endif

    switch (ctx->pc) {
        case 0x245250u: goto label_245250;
        default: break;
    }

    ctx->pc = 0x245238u;

    // 0x245238: 0x8f86a12c  lw          $a2, -0x5ED4($gp)
    ctx->pc = 0x245238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x24523c: 0x10c00028  beqz        $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x24523Cu;
    {
        const bool branch_taken_0x24523c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x245240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24523Cu;
        // 0x245240: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24523c) {
            ctx->pc = 0x2452E0u;
            goto label_2452e0;
        }
    }
    ctx->pc = 0x245244u;
    // 0x245244: 0x8f8ba0dc  lw          $t3, -0x5F24($gp)
    ctx->pc = 0x245244u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x245248: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x245248u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24524c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_245250:
    // 0x245250: 0x544d0021  bnel        $v0, $t5, . + 4 + (0x21 << 2)
    ctx->pc = 0x245250u;
    {
        const bool branch_taken_0x245250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x245250) {
            ctx->pc = 0x245254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245250u;
            // 0x245254: 0x8cc60038  lw          $a2, 0x38($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2452D8u;
            goto label_2452d8;
        }
    }
    ctx->pc = 0x245258u;
    // 0x245258: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x245258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x24525c: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x24525cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x245260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245264: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x245264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x245268: 0x1642023  subu        $a0, $t3, $a0
    ctx->pc = 0x245268u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x24526c: 0x8c470024  lw          $a3, 0x24($v0)
    ctx->pc = 0x24526cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x245270: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x245270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x245274: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x245274u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x245278: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x245278u;
    {
        const bool branch_taken_0x245278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x245278) {
            ctx->pc = 0x24527Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245278u;
            // 0x24527c: 0x8cc60038  lw          $a2, 0x38($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2452D8u;
            goto label_2452d8;
        }
    }
    ctx->pc = 0x245280u;
    // 0x245280: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x245280u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x245284: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x245284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x245288: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x245288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24528c: 0xa1d40  sll         $v1, $t2, 21
    ctx->pc = 0x24528cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 21));
    // 0x245290: 0x1824823  subu        $t1, $t4, $v0
    ctx->pc = 0x245290u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x245294: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x245294u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x245298: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x245298u;
    {
        const bool branch_taken_0x245298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245298u;
        // 0x24529c: 0x44540  sll         $t0, $a0, 21 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245298) {
            ctx->pc = 0x2452D4u;
            goto label_2452d4;
        }
    }
    ctx->pc = 0x2452A0u;
    // 0x2452a0: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2452a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2452a4: 0xa22023  subu        $a0, $a1, $v0
    ctx->pc = 0x2452a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2452a8: 0x88182b  sltu        $v1, $a0, $t0
    ctx->pc = 0x2452a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2452ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2452ACu;
    {
        const bool branch_taken_0x2452ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2452B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452ACu;
        // 0x2452b0: 0x42543  sra         $a0, $a0, 21 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452ac) {
            ctx->pc = 0x2452D4u;
            goto label_2452d4;
        }
    }
    ctx->pc = 0x2452B4u;
    // 0x2452b4: 0x91d43  sra         $v1, $t1, 21
    ctx->pc = 0x2452b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 21));
    // 0x2452b8: 0x8a2018  mult        $a0, $a0, $t2
    ctx->pc = 0x2452b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2452bc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2452bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2452c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2452c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2452c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2452c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2452c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2452c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2452cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2452CCu;
    {
        const bool branch_taken_0x2452cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2452cc) {
            ctx->pc = 0x2452E0u;
            goto label_2452e0;
        }
    }
    ctx->pc = 0x2452D4u;
label_2452d4:
    // 0x2452d4: 0x8cc60038  lw          $a2, 0x38($a2)
    ctx->pc = 0x2452d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_2452d8:
    // 0x2452d8: 0x54c0ffdd  bnel        $a2, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2452D8u;
    {
        const bool branch_taken_0x2452d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2452d8) {
            ctx->pc = 0x2452DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2452D8u;
            // 0x2452dc: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245250;
        }
    }
    ctx->pc = 0x2452E0u;
label_2452e0:
    // 0x2452e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2452E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2452E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452E0u;
        // 0x2452e4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2452E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2452E8u;
}
