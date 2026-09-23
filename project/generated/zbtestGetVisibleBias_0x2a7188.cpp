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

// Function: zbtestGetVisibleBias
// Address: 0x2a7188 - 0x2a7290
void zbtestGetVisibleBias_0x2a7188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestGetVisibleBias_0x2a7188");
#endif

    switch (ctx->pc) {
        case 0x2a71c0u: goto label_2a71c0;
        case 0x2a7214u: goto label_2a7214;
        default: break;
    }

    ctx->pc = 0x2a7188u;

    // 0x2a7188: 0x8f87b988  lw          $a3, -0x4678($gp)
    ctx->pc = 0x2a7188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949256)));
    // 0x2a718c: 0x3c0c01ff  lui         $t4, 0x1FF
    ctx->pc = 0x2a718cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)511 << 16));
    // 0x2a7190: 0x2582a0a0  addiu       $v0, $t4, -0x5F60
    ctx->pc = 0x2a7190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294942880));
    // 0x2a7194: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2a7194u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7198: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2a7198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a719c: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x2a719cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a71a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a71a4: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2a71a4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a71ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a71acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71b0: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2A71B0u;
    {
        const bool branch_taken_0x2a71b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71B0u;
        // 0x2a71b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a71b0) {
            ctx->pc = 0x2A7288u;
            goto label_2a7288;
        }
    }
    ctx->pc = 0x2A71B8u;
    // 0x2a71b8: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x2a71b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x2a71bc: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x2a71bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_2a71c0:
    // 0x2a71c0: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2a71c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a71c4: 0x2542a590  addiu       $v0, $t2, -0x5A70
    ctx->pc = 0x2a71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294944144));
    // 0x2a71c8: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x2a71c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a71cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a71ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a71d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a71d4: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x2a71d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a71d8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2a71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2a71dc: 0x544d0022  bnel        $v0, $t5, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A71DCu;
    {
        const bool branch_taken_0x2a71dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x2a71dc) {
            ctx->pc = 0x2A71E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A71DCu;
            // 0x2a71e0: 0x1c0382d  daddu       $a3, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7268u;
            goto label_2a7268;
        }
    }
    ctx->pc = 0x2A71E4u;
    // 0x2a71e4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2a71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a71e8: 0x5446001f  bnel        $v0, $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A71E8u;
    {
        const bool branch_taken_0x2a71e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2a71e8) {
            ctx->pc = 0x2A71ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A71E8u;
            // 0x2a71ec: 0x1c0382d  daddu       $a3, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7268u;
            goto label_2a7268;
        }
    }
    ctx->pc = 0x2A71F0u;
    // 0x2a71f0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a71f4: 0x544b001c  bnel        $v0, $t3, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A71F4u;
    {
        const bool branch_taken_0x2a71f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x2a71f4) {
            ctx->pc = 0x2A71F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A71F4u;
            // 0x2a71f8: 0x1c0382d  daddu       $a3, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7268u;
            goto label_2a7268;
        }
    }
    ctx->pc = 0x2A71FCu;
    // 0x2a71fc: 0x94e30012  lhu         $v1, 0x12($a3)
    ctx->pc = 0x2a71fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x2a7200: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x2a7200u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a7204: 0x94e20010  lhu         $v0, 0x10($a3)
    ctx->pc = 0x2a7204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2a7208: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a7208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a720c: 0x632818  mult        $a1, $v1, $v1
    ctx->pc = 0x2a720cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a7210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7214:
    // 0x2a7214: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a7214u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7218: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x2a7218u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a721c: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x2a721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2a7220: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x2a7220u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2a7224: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2a7224u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2a7228: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2a7228u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a722c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A722Cu;
    {
        const bool branch_taken_0x2a722c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A722Cu;
        // 0x2a7230: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a722c) {
            ctx->pc = 0x2A7240u;
            goto label_2a7240;
        }
    }
    ctx->pc = 0x2A7234u;
    // 0x2a7234: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2a7234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2a7238: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2a7238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2a723c: 0x0  nop
    ctx->pc = 0x2a723cu;
    // NOP
label_2a7240:
    // 0x2a7240: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x2a7240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a7244: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A7244u;
    {
        const bool branch_taken_0x2a7244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7244u;
        // 0x2a7248: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7244) {
            ctx->pc = 0x2A7288u;
            goto label_2a7288;
        }
    }
    ctx->pc = 0x2A724Cu;
    // 0x2a724c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a7250: 0x144b000d  bne         $v0, $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x2A7250u;
    {
        const bool branch_taken_0x2a7250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x2A7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7250u;
        // 0x2a7254: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7250) {
            ctx->pc = 0x2A7288u;
            goto label_2a7288;
        }
    }
    ctx->pc = 0x2A7258u;
    // 0x2a7258: 0x94e30012  lhu         $v1, 0x12($a3)
    ctx->pc = 0x2a7258u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x2a725c: 0x94e20010  lhu         $v0, 0x10($a3)
    ctx->pc = 0x2a725cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2a7260: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x2A7260u;
    {
        const bool branch_taken_0x2a7260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7260u;
        // 0x2a7264: 0x632818  mult        $a1, $v1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7260) {
            ctx->pc = 0x2A7214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7214;
        }
    }
    ctx->pc = 0x2A7268u;
label_2a7268:
    // 0x2a7268: 0x2584a0a0  addiu       $a0, $t4, -0x5F60
    ctx->pc = 0x2a7268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294942880));
    // 0x2a726c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2a726cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a7270: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2a7270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a7274: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a7274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7278: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a7278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a727c: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x2a727cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a7280: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2A7280u;
    {
        const bool branch_taken_0x2a7280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7280u;
        // 0x2a7284: 0x240500d8  addiu       $a1, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7280) {
            ctx->pc = 0x2A71C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a71c0;
        }
    }
    ctx->pc = 0x2A7288u;
label_2a7288:
    // 0x2a7288: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7288u;
        // 0x2a728c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7290u;
}
