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

// Function: gmKnockOutTick
// Address: 0x21dab0 - 0x21dd74
void gmKnockOutTick_0x21dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gmKnockOutTick_0x21dab0");
#endif

    switch (ctx->pc) {
        case 0x21dae0u: goto label_21dae0;
        case 0x21daf8u: goto label_21daf8;
        case 0x21db0cu: goto label_21db0c;
        case 0x21db28u: goto label_21db28;
        case 0x21db84u: goto label_21db84;
        case 0x21dbc0u: goto label_21dbc0;
        case 0x21dbe0u: goto label_21dbe0;
        case 0x21dcc4u: goto label_21dcc4;
        case 0x21dcd4u: goto label_21dcd4;
        case 0x21dd3cu: goto label_21dd3c;
        case 0x21dd44u: goto label_21dd44;
        default: break;
    }

    ctx->pc = 0x21dab0u;

    // 0x21dab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21dab4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21dab8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21dabc: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x21dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x21dac0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21dac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21dac4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21dac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21dacc: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x21daccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C508u));
    // 0x21dad0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21DAD0u;
    {
        const bool branch_taken_0x21dad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAD0u;
        // 0x21dad4: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dad0) {
            ctx->pc = 0x21DB0Cu;
            goto label_21db0c;
        }
    }
    ctx->pc = 0x21DAD8u;
    // 0x21dad8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x21dad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dadc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21dadcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dae0:
    // 0x21dae0: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x21dae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x21dae4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21DAE4u;
    {
        const bool branch_taken_0x21dae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAE4u;
        // 0x21dae8: 0x8f85b4e8  lw          $a1, -0x4B18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dae4) {
            ctx->pc = 0x21DB10u;
            goto label_21db10;
        }
    }
    ctx->pc = 0x21DAECu;
    // 0x21daec: 0x25100001  addiu       $s0, $t0, 0x1
    ctx->pc = 0x21daecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21daf0: 0xc0a241e  jal         func_289078
    ctx->pc = 0x21DAF0u;
    SET_GPR_U32(ctx, 31, 0x21DAF8u);
    ctx->pc = 0x21DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DAF0u;
    // 0x21daf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289078u, 0x21DAF0u, 0x21DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DAF8u;
label_21daf8:
    // 0x21daf8: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x21daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x21dafc: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21DAFCu;
    {
        const bool branch_taken_0x21dafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAFCu;
        // 0x21db00: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dafc) {
            ctx->pc = 0x21DAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dae0;
        }
    }
    ctx->pc = 0x21DB04u;
    // 0x21db04: 0xc0874d2  jal         func_21D348
    ctx->pc = 0x21DB04u;
    SET_GPR_U32(ctx, 31, 0x21DB0Cu);
    ctx->pc = 0x21D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D348u, 0x21DB04u, 0x21DB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB0Cu;
label_21db0c:
    // 0x21db0c: 0x8f85b4e8  lw          $a1, -0x4B18($gp)
    ctx->pc = 0x21db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948072)));
label_21db10:
    // 0x21db10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21db10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db14: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x21DB14u;
    {
        const bool branch_taken_0x21db14 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x21DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB14u;
        // 0x21db18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db14) {
            ctx->pc = 0x21DB58u;
            goto label_21db58;
        }
    }
    ctx->pc = 0x21DB1Cu;
    // 0x21db1c: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x21db1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x21db20: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x21db20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x21db24: 0x0  nop
    ctx->pc = 0x21db24u;
    // NOP
label_21db28:
    // 0x21db28: 0x24e32028  addiu       $v1, $a3, 0x2028
    ctx->pc = 0x21db28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8232));
    // 0x21db2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21db30: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x21db30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21db34: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x21db34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21db38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21db3c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x21DB3Cu;
    {
        const bool branch_taken_0x21db3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21db3c) {
            ctx->pc = 0x21DB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DB3Cu;
            // 0x21db40: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DB48u;
            goto label_21db48;
        }
    }
    ctx->pc = 0x21DB44u;
    // 0x21db44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21db44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_21db48:
    // 0x21db48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21db48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21db4c: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x21db4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21db50: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x21DB50u;
    {
        const bool branch_taken_0x21db50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB50u;
        // 0x21db54: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db50) {
            ctx->pc = 0x21DB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21db28;
        }
    }
    ctx->pc = 0x21DB58u;
label_21db58:
    // 0x21db58: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x21db58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21db5c: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x21DB5Cu;
    {
        const bool branch_taken_0x21db5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB5Cu;
        // 0x21db60: 0x8f82b700  lw          $v0, -0x4900($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db5c) {
            ctx->pc = 0x21DD3Cu;
            goto label_21dd3c;
        }
    }
    ctx->pc = 0x21DB64u;
    // 0x21db64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21db64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21db68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21db68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21db6c: 0x14430073  bne         $v0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x21DB6Cu;
    {
        const bool branch_taken_0x21db6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB6Cu;
        // 0x21db70: 0xaf82b700  sw          $v0, -0x4900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db6c) {
            ctx->pc = 0x21DD3Cu;
            goto label_21dd3c;
        }
    }
    ctx->pc = 0x21DB74u;
    // 0x21db74: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x21db74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x21db78: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x21db78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21db7c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x21DB7Cu;
    SET_GPR_U32(ctx, 31, 0x21DB84u);
    ctx->pc = 0x21DB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB7Cu;
    // 0x21db80: 0xaf82b700  sw          $v0, -0x4900($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x21DB7Cu, 0x21DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB84u;
label_21db84:
    // 0x21db84: 0x8f83b6fc  lw          $v1, -0x4904($gp)
    ctx->pc = 0x21db84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948604)));
    // 0x21db88: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x21db88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x21db8c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x21db8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x21db90: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x21db90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21db94: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x21db94u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x21db98: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x21db98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21db9c: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x21db9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21dba0: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x21dba0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dba4: 0x2484b9d8  addiu       $a0, $a0, -0x4628
    ctx->pc = 0x21dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949336));
    // 0x21dba8: 0x24a5202c  addiu       $a1, $a1, 0x202C
    ctx->pc = 0x21dba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8236));
    // 0x21dbac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21DBACu;
    {
        const bool branch_taken_0x21dbac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dbac) {
            ctx->pc = 0x21DBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DBACu;
            // 0x21dbb0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DBB4u;
            goto label_21dbb4;
        }
    }
    ctx->pc = 0x21DBB4u;
label_21dbb4:
    // 0x21dbb4: 0x3010  mfhi        $a2
    ctx->pc = 0x21dbb4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x21dbb8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x21dbb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dbbc: 0x0  nop
    ctx->pc = 0x21dbbcu;
    // NOP
label_21dbc0:
    // 0x21dbc0: 0x162c0029  bne         $s1, $t4, . + 4 + (0x29 << 2)
    ctx->pc = 0x21DBC0u;
    {
        const bool branch_taken_0x21dbc0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 12));
        ctx->pc = 0x21DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBC0u;
        // 0x21dbc4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbc0) {
            ctx->pc = 0x21DC68u;
            goto label_21dc68;
        }
    }
    ctx->pc = 0x21DBC8u;
    // 0x21dbc8: 0x8f89b4e8  lw          $t1, -0x4B18($gp)
    ctx->pc = 0x21dbc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948072)));
    // 0x21dbcc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21dbd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21dbd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dbd4: 0x1920001e  blez        $t1, . + 4 + (0x1E << 2)
    ctx->pc = 0x21DBD4u;
    {
        const bool branch_taken_0x21dbd4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x21DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBD4u;
        // 0x21dbd8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbd4) {
            ctx->pc = 0x21DC50u;
            goto label_21dc50;
        }
    }
    ctx->pc = 0x21DBDCu;
    // 0x21dbdc: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x21dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_21dbe0:
    // 0x21dbe0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21dbe4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21dbe8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x21dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21dbec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21dbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21dbf0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21DBF0u;
    {
        const bool branch_taken_0x21dbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBF0u;
        // 0x21dbf4: 0x8c670160  lw          $a3, 0x160($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbf0) {
            ctx->pc = 0x21DC40u;
            goto label_21dc40;
        }
    }
    ctx->pc = 0x21DBF8u;
    // 0x21dbf8: 0x8ce30044  lw          $v1, 0x44($a3)
    ctx->pc = 0x21dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x21dbfc: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x21DBFCu;
    {
        const bool branch_taken_0x21dbfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        if (branch_taken_0x21dbfc) {
            ctx->pc = 0x21DC10u;
            goto label_21dc10;
        }
    }
    ctx->pc = 0x21DC04u;
    // 0x21dc04: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x21dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x21dc08: 0x50510007  beql        $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21DC08u;
    {
        const bool branch_taken_0x21dc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x21dc08) {
            ctx->pc = 0x21DC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DC08u;
            // 0x21dc0c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DC28u;
            goto label_21dc28;
        }
    }
    ctx->pc = 0x21DC10u;
label_21dc10:
    // 0x21dc10: 0x546d000c  bnel        $v1, $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x21DC10u;
    {
        const bool branch_taken_0x21dc10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        if (branch_taken_0x21dc10) {
            ctx->pc = 0x21DC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DC10u;
            // 0x21dc14: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DC44u;
            goto label_21dc44;
        }
    }
    ctx->pc = 0x21DC18u;
    // 0x21dc18: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x21dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x21dc1c: 0x54510009  bnel        $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21DC1Cu;
    {
        const bool branch_taken_0x21dc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x21dc1c) {
            ctx->pc = 0x21DC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DC1Cu;
            // 0x21dc20: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DC44u;
            goto label_21dc44;
        }
    }
    ctx->pc = 0x21DC24u;
    // 0x21dc24: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21dc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_21dc28:
    // 0x21dc28: 0xcb1026  xor         $v0, $a2, $t3
    ctx->pc = 0x21dc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 11));
    // 0x21dc2c: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x21dc2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x21dc30: 0x14ca0003  bne         $a2, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DC30u;
    {
        const bool branch_taken_0x21dc30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x21DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC30u;
        // 0x21dc34: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc30) {
            ctx->pc = 0x21DC40u;
            goto label_21dc40;
        }
    }
    ctx->pc = 0x21DC38u;
    // 0x21dc38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21DC38u;
    {
        const bool branch_taken_0x21dc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC38u;
        // 0x21dc3c: 0xaf80b700  sw          $zero, -0x4900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc38) {
            ctx->pc = 0x21DC50u;
            goto label_21dc50;
        }
    }
    ctx->pc = 0x21DC40u;
label_21dc40:
    // 0x21dc40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21dc40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_21dc44:
    // 0x21dc44: 0x109102a  slt         $v0, $t0, $t1
    ctx->pc = 0x21dc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x21dc48: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x21DC48u;
    {
        const bool branch_taken_0x21dc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC48u;
        // 0x21dc4c: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc48) {
            ctx->pc = 0x21DBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dbe0;
        }
    }
    ctx->pc = 0x21DC50u;
label_21dc50:
    // 0x21dc50: 0x162c0005  bne         $s1, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DC50u;
    {
        const bool branch_taken_0x21dc50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 12));
        if (branch_taken_0x21dc50) {
            ctx->pc = 0x21DC68u;
            goto label_21dc68;
        }
    }
    ctx->pc = 0x21DC58u;
    // 0x21dc58: 0x14caffd9  bne         $a2, $t2, . + 4 + (-0x27 << 2)
    ctx->pc = 0x21DC58u;
    {
        const bool branch_taken_0x21dc58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x21DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC58u;
        // 0x21dc5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc58) {
            ctx->pc = 0x21DBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dbc0;
        }
    }
    ctx->pc = 0x21DC60u;
    // 0x21dc60: 0x12220036  beq         $s1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x21DC60u;
    {
        const bool branch_taken_0x21dc60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x21dc60) {
            ctx->pc = 0x21DD3Cu;
            goto label_21dd3c;
        }
    }
    ctx->pc = 0x21DC68u;
label_21dc68:
    // 0x21dc68: 0x641001c  bgez        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x21DC68u;
    {
        const bool branch_taken_0x21dc68 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x21DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC68u;
        // 0x21dc6c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc68) {
            ctx->pc = 0x21DCDCu;
            goto label_21dcdc;
        }
    }
    ctx->pc = 0x21DC70u;
    // 0x21dc70: 0x8f84b704  lw          $a0, -0x48FC($gp)
    ctx->pc = 0x21dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948612)));
    // 0x21dc74: 0x24020145  addiu       $v0, $zero, 0x145
    ctx->pc = 0x21dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x21dc78: 0xc7908074  lwc1        $f16, -0x7F8C($gp)
    ctx->pc = 0x21dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x21dc7c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21DC7Cu;
    {
        const bool branch_taken_0x21dc7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC7Cu;
        // 0x21dc80: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc7c) {
            ctx->pc = 0x21DC88u;
            goto label_21dc88;
        }
    }
    ctx->pc = 0x21DC84u;
    // 0x21dc84: 0xc7908078  lwc1        $f16, -0x7F88($gp)
    ctx->pc = 0x21dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_21dc88:
    // 0x21dc88: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x21dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x21dc8c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x21dc8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21dc90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21dc90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21dc94: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x21dc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21dc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21dc9c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x21dc9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x21dca0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x21dca0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x21dca4: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x21dca4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x21dca8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x21dca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21dcac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21dcb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21dcb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcb4: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x21dcb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21dcb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21dcb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcbc: 0xc09ca58  jal         func_272960
    ctx->pc = 0x21DCBCu;
    SET_GPR_U32(ctx, 31, 0x21DCC4u);
    ctx->pc = 0x21DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DCBCu;
    // 0x21dcc0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272960u, 0x21DCBCu, 0x21DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DCC4u;
label_21dcc4:
    // 0x21dcc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21dcc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21dcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dccc: 0xc0b1f6c  jal         func_2C7DB0
    ctx->pc = 0x21DCCCu;
    SET_GPR_U32(ctx, 31, 0x21DCD4u);
    ctx->pc = 0x21DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DCCCu;
    // 0x21dcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7DB0u, 0x21DCCCu, 0x21DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DCD4u;
label_21dcd4:
    // 0x21dcd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21DCD4u;
    {
        const bool branch_taken_0x21dcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCD4u;
        // 0x21dcd8: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dcd4) {
            ctx->pc = 0x21DCF0u;
            goto label_21dcf0;
        }
    }
    ctx->pc = 0x21DCDCu;
label_21dcdc:
    // 0x21dcdc: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x21dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x21dce0: 0x24422028  addiu       $v0, $v0, 0x2028
    ctx->pc = 0x21dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8232));
    // 0x21dce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21dce8: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x21dce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21dcec: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x21dcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_21dcf0:
    // 0x21dcf0: 0x8f87a2ec  lw          $a3, -0x5D14($gp)
    ctx->pc = 0x21dcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x21dcf4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x21dcf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21dcf8: 0x8e060160  lw          $a2, 0x160($s0)
    ctx->pc = 0x21dcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x21dcfc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21dd00: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x21dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x21dd04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21dd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd08: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21dd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21dd0c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x21dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x21dd10: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x21dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x21dd14: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x21dd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd18: 0xacd10024  sw          $s1, 0x24($a2)
    ctx->pc = 0x21dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 17));
    // 0x21dd1c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x21dd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x21dd20: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x21dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dd24: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x21dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21dd28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21dd2c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x21dd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x21dd30: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x21dd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dd34: 0xc081546  jal         func_205518
    ctx->pc = 0x21DD34u;
    SET_GPR_U32(ctx, 31, 0x21DD3Cu);
    ctx->pc = 0x21DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD34u;
    // 0x21dd38: 0xe6010038  swc1        $f1, 0x38($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x21DD34u, 0x21DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD3Cu;
label_21dd3c:
    // 0x21dd3c: 0xc087332  jal         func_21CCC8
    ctx->pc = 0x21DD3Cu;
    SET_GPR_U32(ctx, 31, 0x21DD44u);
    ctx->pc = 0x21CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CCC8u, 0x21DD3Cu, 0x21DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD44u;
label_21dd44:
    // 0x21dd44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21DD44u;
    {
        const bool branch_taken_0x21dd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD44u;
        // 0x21dd48: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd44) {
            ctx->pc = 0x21DD60u;
            goto label_21dd60;
        }
    }
    ctx->pc = 0x21DD4Cu;
    // 0x21dd4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21dd4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21dd50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21dd50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21dd54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21dd54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dd58: 0x80874d2  j           func_21D348
    ctx->pc = 0x21DD58u;
    ctx->pc = 0x21DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD58u;
    // 0x21dd5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    gameLevelCompleted_0x21d348(rdram, ctx, runtime); return;
    ctx->pc = 0x21DD60u;
label_21dd60:
    // 0x21dd60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21dd60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21dd64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21dd64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21dd68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21dd68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x21DD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD6Cu;
        // 0x21dd70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DD74u;
}
