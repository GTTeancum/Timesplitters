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

// Function: signonUpdateTick
// Address: 0x231d50 - 0x2328bc
void signonUpdateTick_0x231d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonUpdateTick_0x231d50");
#endif

    switch (ctx->pc) {
        case 0x231d8cu: goto label_231d8c;
        case 0x231db0u: goto label_231db0;
        case 0x231e18u: goto label_231e18;
        case 0x231e20u: goto label_231e20;
        case 0x231e40u: goto label_231e40;
        case 0x231e48u: goto label_231e48;
        case 0x231e64u: goto label_231e64;
        case 0x231e78u: goto label_231e78;
        case 0x231e84u: goto label_231e84;
        case 0x231ea4u: goto label_231ea4;
        case 0x231eacu: goto label_231eac;
        case 0x231eccu: goto label_231ecc;
        case 0x231ee0u: goto label_231ee0;
        case 0x231f1cu: goto label_231f1c;
        case 0x231f2cu: goto label_231f2c;
        case 0x231f34u: goto label_231f34;
        case 0x231f40u: goto label_231f40;
        case 0x231f64u: goto label_231f64;
        case 0x231fc0u: goto label_231fc0;
        case 0x231fc8u: goto label_231fc8;
        case 0x231fdcu: goto label_231fdc;
        case 0x231fecu: goto label_231fec;
        case 0x231ff8u: goto label_231ff8;
        case 0x23201cu: goto label_23201c;
        case 0x232034u: goto label_232034;
        case 0x23203cu: goto label_23203c;
        case 0x232050u: goto label_232050;
        case 0x232058u: goto label_232058;
        case 0x232064u: goto label_232064;
        case 0x232090u: goto label_232090;
        case 0x2320bcu: goto label_2320bc;
        case 0x2320c8u: goto label_2320c8;
        case 0x2320f4u: goto label_2320f4;
        case 0x232120u: goto label_232120;
        case 0x23213cu: goto label_23213c;
        case 0x232148u: goto label_232148;
        case 0x232188u: goto label_232188;
        case 0x2321e8u: goto label_2321e8;
        case 0x232268u: goto label_232268;
        case 0x232280u: goto label_232280;
        case 0x2322a0u: goto label_2322a0;
        case 0x2322a8u: goto label_2322a8;
        case 0x2322bcu: goto label_2322bc;
        case 0x2322d0u: goto label_2322d0;
        case 0x232324u: goto label_232324;
        case 0x232330u: goto label_232330;
        case 0x232354u: goto label_232354;
        case 0x232380u: goto label_232380;
        case 0x2323b4u: goto label_2323b4;
        case 0x2323c8u: goto label_2323c8;
        case 0x232404u: goto label_232404;
        case 0x232430u: goto label_232430;
        case 0x232450u: goto label_232450;
        case 0x232478u: goto label_232478;
        case 0x2324acu: goto label_2324ac;
        case 0x2324dcu: goto label_2324dc;
        case 0x23253cu: goto label_23253c;
        case 0x2325bcu: goto label_2325bc;
        case 0x2325d4u: goto label_2325d4;
        case 0x2325f4u: goto label_2325f4;
        case 0x2325fcu: goto label_2325fc;
        case 0x232628u: goto label_232628;
        case 0x232650u: goto label_232650;
        case 0x232674u: goto label_232674;
        case 0x232680u: goto label_232680;
        case 0x2326a0u: goto label_2326a0;
        case 0x2326c8u: goto label_2326c8;
        case 0x2326dcu: goto label_2326dc;
        case 0x23271cu: goto label_23271c;
        case 0x232728u: goto label_232728;
        case 0x23274cu: goto label_23274c;
        case 0x232760u: goto label_232760;
        case 0x23276cu: goto label_23276c;
        case 0x232790u: goto label_232790;
        case 0x2327a8u: goto label_2327a8;
        case 0x2327bcu: goto label_2327bc;
        case 0x2327f4u: goto label_2327f4;
        case 0x23281cu: goto label_23281c;
        case 0x232844u: goto label_232844;
        case 0x232870u: goto label_232870;
        default: break;
    }

    ctx->pc = 0x231d50u;

    // 0x231d50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x231d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x231d54: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x231d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x231d58: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x231d58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d5c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x231d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x231d60: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x231d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x231d64: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x231d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x231d68: 0x3c17002f  lui         $s7, 0x2F
    ctx->pc = 0x231d68u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)47 << 16));
    // 0x231d6c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x231d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x231d70: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x231d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x231d74: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x231d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x231d78: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x231d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x231d7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x231d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x231d80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x231d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x231d84: 0xc08828c  jal         func_220A30
    ctx->pc = 0x231D84u;
    SET_GPR_U32(ctx, 31, 0x231D8Cu);
    ctx->pc = 0x231D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D84u;
    // 0x231d88: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x231D84u, 0x231D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D8Cu;
label_231d8c:
    // 0x231d8c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x231d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231d90: 0x26e52c18  addiu       $a1, $s7, 0x2C18
    ctx->pc = 0x231d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x231d94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x231d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d98: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x231d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231da0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x231da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x231da4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231da8: 0xc08c56c  jal         func_2315B0
    ctx->pc = 0x231DA8u;
    SET_GPR_U32(ctx, 31, 0x231DB0u);
    ctx->pc = 0x231DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DA8u;
    // 0x231dac: 0x8c450780  lw          $a1, 0x780($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2315B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2315B0u, 0x231DA8u, 0x231DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DB0u;
label_231db0:
    // 0x231db0: 0x9383b75b  lbu         $v1, -0x48A5($gp)
    ctx->pc = 0x231db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948699)));
    // 0x231db4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x231db4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231db8: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x231db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x231dbc: 0x104002a7  beqz        $v0, . + 4 + (0x2A7 << 2)
    ctx->pc = 0x231DBCu;
    {
        const bool branch_taken_0x231dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DBCu;
        // 0x231dc0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231dbc) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x231DC4u;
    // 0x231dc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231dc8: 0x24421a60  addiu       $v0, $v0, 0x1A60
    ctx->pc = 0x231dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6752));
    // 0x231dcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231dd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x231dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231dd4: 0x800008  jr          $a0
    ctx->pc = 0x231DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231DDCu: goto label_231ddc;
            case 0x231EC4u: goto label_231ec4;
            case 0x232014u: goto label_232014;
            case 0x232034u: goto label_232034;
            case 0x2322B4u: goto label_2322b4;
            case 0x232374u: goto label_232374;
            case 0x2323ACu: goto label_2323ac;
            case 0x2326C0u: goto label_2326c0;
            case 0x232758u: goto label_232758;
            case 0x23279Cu: goto label_23279c;
            case 0x2327B4u: goto label_2327b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231DD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231DDCu;
label_231ddc:
    // 0x231ddc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x231ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x231de0: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x231de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x231de4: 0x2442e1c8  addiu       $v0, $v0, -0x1E38
    ctx->pc = 0x231de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x231de8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x231de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x231dec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231df0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x231df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231df4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231DF4u;
    {
        const bool branch_taken_0x231df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x231DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DF4u;
        // 0x231df8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231df4) {
            ctx->pc = 0x231E08u;
            goto label_231e08;
        }
    }
    ctx->pc = 0x231DFCu;
    // 0x231dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231e00: 0x1000029b  b           . + 4 + (0x29B << 2)
    ctx->pc = 0x231E00u;
    {
        const bool branch_taken_0x231e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E00u;
        // 0x231e04: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e00) {
            ctx->pc = 0x232870u;
            goto label_232870;
        }
    }
    ctx->pc = 0x231E08u;
label_231e08:
    // 0x231e08: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x231E08u;
    {
        const bool branch_taken_0x231e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x231e08) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231E10u;
    // 0x231e10: 0xc091354  jal         func_244D50
    ctx->pc = 0x231E10u;
    SET_GPR_U32(ctx, 31, 0x231E18u);
    ctx->pc = 0x231E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E10u;
    // 0x231e14: 0x3c10003a  lui         $s0, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D50u, 0x231E10u, 0x231E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E18u;
label_231e18:
    // 0x231e18: 0xc0881e4  jal         func_220790
    ctx->pc = 0x231E18u;
    SET_GPR_U32(ctx, 31, 0x231E20u);
    ctx->pc = 0x231E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E18u;
    // 0x231e1c: 0x26101960  addiu       $s0, $s0, 0x1960 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220790u, 0x231E18u, 0x231E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E20u;
label_231e20:
    // 0x231e20: 0x8f88b74c  lw          $t0, -0x48B4($gp)
    ctx->pc = 0x231e20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x231e24: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x231e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e28: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x231e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e2c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x231e2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e30: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x231e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x231e34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x231e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e38: 0xc0912ca  jal         func_244B28
    ctx->pc = 0x231E38u;
    SET_GPR_U32(ctx, 31, 0x231E40u);
    ctx->pc = 0x231E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E38u;
    // 0x231e3c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244B28u, 0x231E38u, 0x231E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E40u;
label_231e40:
    // 0x231e40: 0xc09133c  jal         func_244CF0
    ctx->pc = 0x231E40u;
    SET_GPR_U32(ctx, 31, 0x231E48u);
    ctx->pc = 0x231E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E40u;
    // 0x231e44: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244CF0u, 0x231E40u, 0x231E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E48u;
label_231e48:
    // 0x231e48: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x231e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231e4c: 0x26e42c18  addiu       $a0, $s7, 0x2C18
    ctx->pc = 0x231e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x231e50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x231e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x231e54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x231e58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x231e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231e5c: 0xc09133e  jal         func_244CF8
    ctx->pc = 0x231E5Cu;
    SET_GPR_U32(ctx, 31, 0x231E64u);
    ctx->pc = 0x231E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E5Cu;
    // 0x231e60: 0x8c640788  lw          $a0, 0x788($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244CF8u, 0x231E5Cu, 0x231E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E64u;
label_231e64:
    // 0x231e64: 0x8f82a0c8  lw          $v0, -0x5F38($gp)
    ctx->pc = 0x231e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x231e68: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x231E68u;
    {
        const bool branch_taken_0x231e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E68u;
        // 0x231e6c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e68) {
            ctx->pc = 0x231EB4u;
            goto label_231eb4;
        }
    }
    ctx->pc = 0x231E70u;
label_231e70:
    // 0x231e70: 0xc09136a  jal         func_244DA8
    ctx->pc = 0x231E70u;
    SET_GPR_U32(ctx, 31, 0x231E78u);
    ctx->pc = 0x231E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E70u;
    // 0x231e74: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244DA8u, 0x231E70u, 0x231E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E78u;
label_231e78:
    // 0x231e78: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x231e78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x231e7c: 0xc0881e4  jal         func_220790
    ctx->pc = 0x231E7Cu;
    SET_GPR_U32(ctx, 31, 0x231E84u);
    ctx->pc = 0x231E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E7Cu;
    // 0x231e80: 0x26101960  addiu       $s0, $s0, 0x1960 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220790u, 0x231E7Cu, 0x231E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E84u;
label_231e84:
    // 0x231e84: 0x8f88b74c  lw          $t0, -0x48B4($gp)
    ctx->pc = 0x231e84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x231e88: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x231e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x231e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e90: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x231e90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e94: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x231e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x231e98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x231e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e9c: 0xc0912ca  jal         func_244B28
    ctx->pc = 0x231E9Cu;
    SET_GPR_U32(ctx, 31, 0x231EA4u);
    ctx->pc = 0x231EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E9Cu;
    // 0x231ea0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244B28u, 0x231E9Cu, 0x231EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231EA4u;
label_231ea4:
    // 0x231ea4: 0xc09133c  jal         func_244CF0
    ctx->pc = 0x231EA4u;
    SET_GPR_U32(ctx, 31, 0x231EACu);
    ctx->pc = 0x231EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231EA4u;
    // 0x231ea8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244CF0u, 0x231EA4u, 0x231EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231EACu;
label_231eac:
    // 0x231eac: 0x8f82a0c8  lw          $v0, -0x5F38($gp)
    ctx->pc = 0x231eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x231eb0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x231eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_231eb4:
    // 0x231eb4: 0xa383b75b  sb          $v1, -0x48A5($gp)
    ctx->pc = 0x231eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 3));
    // 0x231eb8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x231eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x231ebc: 0x10000267  b           . + 4 + (0x267 << 2)
    ctx->pc = 0x231EBCu;
    {
        const bool branch_taken_0x231ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231EBCu;
        // 0x231ec0: 0xaf82a0c8  sw          $v0, -0x5F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ebc) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x231EC4u;
label_231ec4:
    // 0x231ec4: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x231EC4u;
    SET_GPR_U32(ctx, 31, 0x231ECCu);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x231EC4u, 0x231ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231ECCu;
label_231ecc:
    // 0x231ecc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x231eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x231ed0: 0x14430263  bne         $v0, $v1, . + 4 + (0x263 << 2)
    ctx->pc = 0x231ED0u;
    {
        const bool branch_taken_0x231ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x231ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231ED0u;
        // 0x231ed4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ed0) {
            ctx->pc = 0x232860u;
            goto label_232860;
        }
    }
    ctx->pc = 0x231ED8u;
    // 0x231ed8: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x231ED8u;
    SET_GPR_U32(ctx, 31, 0x231EE0u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x231ED8u, 0x231EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231EE0u;
label_231ee0:
    // 0x231ee0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x231ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x231ee4: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x231ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x231ee8: 0x10400209  beqz        $v0, . + 4 + (0x209 << 2)
    ctx->pc = 0x231EE8u;
    {
        const bool branch_taken_0x231ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231EE8u;
        // 0x231eec: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ee8) {
            ctx->pc = 0x232710u;
            goto label_232710;
        }
    }
    ctx->pc = 0x231EF0u;
    // 0x231ef0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231ef4: 0x24421a90  addiu       $v0, $v0, 0x1A90
    ctx->pc = 0x231ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6800));
    // 0x231ef8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231efc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x231efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231f00: 0x800008  jr          $a0
    ctx->pc = 0x231F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231F08u: goto label_231f08;
            case 0x231F2Cu: goto label_231f2c;
            case 0x231F84u: goto label_231f84;
            case 0x231FA8u: goto label_231fa8;
            case 0x231FB4u: goto label_231fb4;
            case 0x23200Cu: goto label_23200c;
            case 0x23230Cu: goto label_23230c;
            case 0x232710u: goto label_232710;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231F00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231F08u;
label_231f08:
    // 0x231f08: 0x3c052131  lui         $a1, 0x2131
    ctx->pc = 0x231f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8497 << 16));
    // 0x231f0c: 0x8f84b74c  lw          $a0, -0x48B4($gp)
    ctx->pc = 0x231f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x231f10: 0x34a55354  ori         $a1, $a1, 0x5354
    ctx->pc = 0x231f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21332);
    // 0x231f14: 0xc0823cc  jal         func_208F30
    ctx->pc = 0x231F14u;
    SET_GPR_U32(ctx, 31, 0x231F1Cu);
    ctx->pc = 0x231F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F14u;
    // 0x231f18: 0x3406b790  ori         $a2, $zero, 0xB790 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46992);
    ctx->in_delay_slot = false;
    ctx->pc = 0x208F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208F30u, 0x231F14u, 0x231F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F1Cu;
label_231f1c:
    // 0x231f1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231F1Cu;
    {
        const bool branch_taken_0x231f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F1Cu;
        // 0x231f20: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f1c) {
            ctx->pc = 0x231F2Cu;
            goto label_231f2c;
        }
    }
    ctx->pc = 0x231F24u;
    // 0x231f24: 0x1000024d  b           . + 4 + (0x24D << 2)
    ctx->pc = 0x231F24u;
    {
        const bool branch_taken_0x231f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F24u;
        // 0x231f28: 0xa382b75b  sb          $v0, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f24) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x231F2Cu;
label_231f2c:
    // 0x231f2c: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x231F2Cu;
    SET_GPR_U32(ctx, 31, 0x231F34u);
    ctx->pc = 0x231F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F2Cu;
    // 0x231f30: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x231F2Cu, 0x231F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F34u;
label_231f34:
    // 0x231f34: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x231f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f38: 0xc08c58e  jal         func_231638
    ctx->pc = 0x231F38u;
    SET_GPR_U32(ctx, 31, 0x231F40u);
    ctx->pc = 0x231F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F38u;
    // 0x231f3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x231F38u, 0x231F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F40u;
label_231f40:
    // 0x231f40: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x231f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231f44: 0x26e62c18  addiu       $a2, $s7, 0x2C18
    ctx->pc = 0x231f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x231f48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x231f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f4c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x231f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231f50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231f54: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x231f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x231f58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231f5c: 0xc091390  jal         func_244E40
    ctx->pc = 0x231F5Cu;
    SET_GPR_U32(ctx, 31, 0x231F64u);
    ctx->pc = 0x231F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F5Cu;
    // 0x231f60: 0x8c460658  lw          $a2, 0x658($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E40u, 0x231F5Cu, 0x231F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F64u;
label_231f64:
    // 0x231f64: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x231f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x231f68: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x231f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x231f6c: 0xa384b75b  sb          $a0, -0x48A5($gp)
    ctx->pc = 0x231f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 4));
    // 0x231f70: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x231f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x231f74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x231f74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x231f78: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x231f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x231f7c: 0x10000237  b           . + 4 + (0x237 << 2)
    ctx->pc = 0x231F7Cu;
    {
        const bool branch_taken_0x231f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F7Cu;
        // 0x231f80: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f7c) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x231F84u;
label_231f84:
    // 0x231f84: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x231f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x231f88: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x231f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x231f8c: 0x2442e1c8  addiu       $v0, $v0, -0x1E38
    ctx->pc = 0x231f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x231f90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231f94: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x231f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x231f98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231f9c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x231f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x231fa0: 0x1000022e  b           . + 4 + (0x22E << 2)
    ctx->pc = 0x231FA0u;
    {
        const bool branch_taken_0x231fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FA0u;
        // 0x231fa4: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fa0) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x231FA8u;
label_231fa8:
    // 0x231fa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x231fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231fac: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x231FACu;
    {
        const bool branch_taken_0x231fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FACu;
        // 0x231fb0: 0xa382b75b  sb          $v0, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fac) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x231FB4u;
label_231fb4:
    // 0x231fb4: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x231fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x231fb8: 0xc081546  jal         func_205518
    ctx->pc = 0x231FB8u;
    SET_GPR_U32(ctx, 31, 0x231FC0u);
    ctx->pc = 0x231FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231FB8u;
    // 0x231fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x231FB8u, 0x231FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231FC0u;
label_231fc0:
    // 0x231fc0: 0xc091368  jal         func_244DA0
    ctx->pc = 0x231FC0u;
    SET_GPR_U32(ctx, 31, 0x231FC8u);
    ctx->pc = 0x244DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244DA0u, 0x231FC0u, 0x231FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231FC8u;
label_231fc8:
    // 0x231fc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x231fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231fcc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x231FCCu;
    {
        const bool branch_taken_0x231fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x231fcc) {
            ctx->pc = 0x231FE4u;
            goto label_231fe4;
        }
    }
    ctx->pc = 0x231FD4u;
    // 0x231fd4: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x231FD4u;
    SET_GPR_U32(ctx, 31, 0x231FDCu);
    ctx->pc = 0x231FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231FD4u;
    // 0x231fd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x231FD4u, 0x231FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231FDCu;
label_231fdc:
    // 0x231fdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231FDCu;
    {
        const bool branch_taken_0x231fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FDCu;
        // 0x231fe0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fdc) {
            ctx->pc = 0x231FF0u;
            goto label_231ff0;
        }
    }
    ctx->pc = 0x231FE4u;
label_231fe4:
    // 0x231fe4: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x231FE4u;
    SET_GPR_U32(ctx, 31, 0x231FECu);
    ctx->pc = 0x231FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231FE4u;
    // 0x231fe8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x231FE4u, 0x231FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231FECu;
label_231fec:
    // 0x231fec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x231fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_231ff0:
    // 0x231ff0: 0xc08c58e  jal         func_231638
    ctx->pc = 0x231FF0u;
    SET_GPR_U32(ctx, 31, 0x231FF8u);
    ctx->pc = 0x231FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231FF0u;
    // 0x231ff4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x231FF0u, 0x231FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231FF8u;
label_231ff8:
    // 0x231ff8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x231ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231ffc: 0x26e62c18  addiu       $a2, $s7, 0x2C18
    ctx->pc = 0x231ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x232000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232004: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x232004u;
    {
        const bool branch_taken_0x232004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232004u;
        // 0x232008: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232004) {
            ctx->pc = 0x232340u;
            goto label_232340;
        }
    }
    ctx->pc = 0x23200Cu;
label_23200c:
    // 0x23200c: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x23200Cu;
    {
        const bool branch_taken_0x23200c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23200Cu;
        // 0x232010: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23200c) {
            ctx->pc = 0x232714u;
            goto label_232714;
        }
    }
    ctx->pc = 0x232014u;
label_232014:
    // 0x232014: 0xc08809c  jal         func_220270
    ctx->pc = 0x232014u;
    SET_GPR_U32(ctx, 31, 0x23201Cu);
    ctx->pc = 0x232018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232014u;
    // 0x232018: 0x8f90b74c  lw          $s0, -0x48B4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220270u, 0x232014u, 0x23201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23201Cu;
label_23201c:
    // 0x23201c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x23201cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x232020: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x232020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x232024: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x232024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x232028: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23202c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x23202Cu;
    SET_GPR_U32(ctx, 31, 0x232034u);
    ctx->pc = 0x232030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23202Cu;
    // 0x232030: 0x3406b780  ori         $a2, $zero, 0xB780 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46976);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x23202Cu, 0x232034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232034u;
label_232034:
    // 0x232034: 0xc091368  jal         func_244DA0
    ctx->pc = 0x232034u;
    SET_GPR_U32(ctx, 31, 0x23203Cu);
    ctx->pc = 0x232038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232034u;
    // 0x232038: 0x8f90b74c  lw          $s0, -0x48B4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244DA0u, 0x232034u, 0x23203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23203Cu;
label_23203c:
    // 0x23203c: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x23203cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x232040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x232044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232048: 0xc088112  jal         func_220448
    ctx->pc = 0x232048u;
    SET_GPR_U32(ctx, 31, 0x232050u);
    ctx->pc = 0x23204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232048u;
    // 0x23204c: 0x26130014  addiu       $s3, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220448u, 0x232048u, 0x232050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232050u;
label_232050:
    // 0x232050: 0xc08828c  jal         func_220A30
    ctx->pc = 0x232050u;
    SET_GPR_U32(ctx, 31, 0x232058u);
    ctx->pc = 0x232054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232050u;
    // 0x232054: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x232050u, 0x232058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232058u;
label_232058:
    // 0x232058: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x232058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23205c: 0xc088084  jal         func_220210
    ctx->pc = 0x23205Cu;
    SET_GPR_U32(ctx, 31, 0x232064u);
    ctx->pc = 0x232060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23205Cu;
    // 0x232060: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220210u, 0x23205Cu, 0x232064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232064u;
label_232064:
    // 0x232064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232068: 0x601001d  bgez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x232068u;
    {
        const bool branch_taken_0x232068 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x23206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232068u;
        // 0x23206c: 0x24140b78  addiu       $s4, $zero, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232068) {
            ctx->pc = 0x2320E0u;
            goto label_2320e0;
        }
    }
    ctx->pc = 0x232070u;
    // 0x232070: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x232070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232074: 0x26f22c18  addiu       $s2, $s7, 0x2C18
    ctx->pc = 0x232074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x232078: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x232078u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x23207c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23207cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232080: 0x26101a10  addiu       $s0, $s0, 0x1A10
    ctx->pc = 0x232080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6672));
    // 0x232084: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x232084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x232088: 0xc090d0a  jal         func_243428
    ctx->pc = 0x232088u;
    SET_GPR_U32(ctx, 31, 0x232090u);
    ctx->pc = 0x23208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232088u;
    // 0x23208c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x232088u, 0x232090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232090u;
label_232090:
    // 0x232090: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x232090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232094: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x232094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232098: 0x8e27024c  lw          $a3, 0x24C($s1)
    ctx->pc = 0x232098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x23209c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2320a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2320a4: 0x8e250244  lw          $a1, 0x244($s1)
    ctx->pc = 0x2320a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x2320a8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2320a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2320ac: 0x8e260248  lw          $a2, 0x248($s1)
    ctx->pc = 0x2320acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x2320b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2320b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2320b4: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2320B4u;
    SET_GPR_U32(ctx, 31, 0x2320BCu);
    ctx->pc = 0x2320B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2320B4u;
    // 0x2320b8: 0x8c490250  lw          $t1, 0x250($v0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2320B4u, 0x2320BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320BCu;
label_2320bc:
    // 0x2320bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2320bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320c0: 0xc08c58e  jal         func_231638
    ctx->pc = 0x2320C0u;
    SET_GPR_U32(ctx, 31, 0x2320C8u);
    ctx->pc = 0x2320C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2320C0u;
    // 0x2320c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x2320C0u, 0x2320C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320C8u;
label_2320c8:
    // 0x2320c8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2320c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2320cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2320ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320d0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2320d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2320d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2320d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2320d8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2320D8u;
    {
        const bool branch_taken_0x2320d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320D8u;
        // 0x2320dc: 0x721821  addu        $v1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320d8) {
            ctx->pc = 0x232348u;
            goto label_232348;
        }
    }
    ctx->pc = 0x2320E0u;
label_2320e0:
    // 0x2320e0: 0x8f859dd8  lw          $a1, -0x6228($gp)
    ctx->pc = 0x2320e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x2320e4: 0x234a818  mult        $s5, $s1, $s4
    ctx->pc = 0x2320e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x2320e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2320e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320ec: 0xc0880d8  jal         func_220360
    ctx->pc = 0x2320ECu;
    SET_GPR_U32(ctx, 31, 0x2320F4u);
    ctx->pc = 0x2320F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2320ECu;
    // 0x2320f0: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220360u, 0x2320ECu, 0x2320F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320F4u;
label_2320f4:
    // 0x2320f4: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2320F4u;
    {
        const bool branch_taken_0x2320f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2320F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320F4u;
        // 0x2320f8: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320f4) {
            ctx->pc = 0x232160u;
            goto label_232160;
        }
    }
    ctx->pc = 0x2320FCu;
    // 0x2320fc: 0x26f32c18  addiu       $s3, $s7, 0x2C18
    ctx->pc = 0x2320fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x232100: 0x8f929dd8  lw          $s2, -0x6228($gp)
    ctx->pc = 0x232100u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x232104: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x232104u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x232108: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23210c: 0x26311a28  addiu       $s1, $s1, 0x1A28
    ctx->pc = 0x23210cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6696));
    // 0x232110: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x232110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x232114: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x232114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x232118: 0xc090d0a  jal         func_243428
    ctx->pc = 0x232118u;
    SET_GPR_U32(ctx, 31, 0x232120u);
    ctx->pc = 0x23211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232118u;
    // 0x23211c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x232118u, 0x232120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232120u;
label_232120:
    // 0x232120: 0x8e08025c  lw          $t0, 0x25C($s0)
    ctx->pc = 0x232120u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x232124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232128: 0x8e050254  lw          $a1, 0x254($s0)
    ctx->pc = 0x232128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x23212c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23212cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232130: 0x8e070258  lw          $a3, 0x258($s0)
    ctx->pc = 0x232130u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x232134: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x232134u;
    SET_GPR_U32(ctx, 31, 0x23213Cu);
    ctx->pc = 0x232138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232134u;
    // 0x232138: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x232134u, 0x23213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23213Cu;
label_23213c:
    // 0x23213c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232140: 0xc08c58e  jal         func_231638
    ctx->pc = 0x232140u;
    SET_GPR_U32(ctx, 31, 0x232148u);
    ctx->pc = 0x232144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232140u;
    // 0x232144: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x232140u, 0x232148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232148u;
label_232148:
    // 0x232148: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x232148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23214c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23214cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232150: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x232150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x232154: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232158: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x232158u;
    {
        const bool branch_taken_0x232158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232158u;
        // 0x23215c: 0x731821  addu        $v1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232158) {
            ctx->pc = 0x232348u;
            goto label_232348;
        }
    }
    ctx->pc = 0x232160u;
label_232160:
    // 0x232160: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x232160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x232164: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x232164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x232168: 0x8f829dd8  lw          $v0, -0x6228($gp)
    ctx->pc = 0x232168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23216c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23216cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232170: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x232170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x232174: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x232174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x232178: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x232178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23217c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x23217Cu;
    {
        const bool branch_taken_0x23217c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23217Cu;
        // 0x232180: 0x24820b60  addiu       $v0, $a0, 0xB60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23217c) {
            ctx->pc = 0x2321E4u;
            goto label_2321e4;
        }
    }
    ctx->pc = 0x232184u;
    // 0x232184: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x232184u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
label_232188:
    // 0x232188: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x232188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x23218c: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x23218cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x232190: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x232190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x232194: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x232194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x232198: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x232198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x23219c: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x23219cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2321a0: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x2321a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2321a4: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x2321a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2321a8: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x2321a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2321ac: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x2321acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2321b0: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x2321b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2321b4: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x2321b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2321b8: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x2321b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2321bc: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x2321bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2321c0: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x2321c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2321c4: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x2321c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2321c8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2321c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2321cc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2321ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2321d0: 0x0  nop
    ctx->pc = 0x2321d0u;
    // NOP
    // 0x2321d4: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2321D4u;
    {
        const bool branch_taken_0x2321d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2321d4) {
            ctx->pc = 0x232188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232188;
        }
    }
    ctx->pc = 0x2321DCu;
    // 0x2321dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2321DCu;
    {
        const bool branch_taken_0x2321dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2321dc) {
            ctx->pc = 0x23221Cu;
            goto label_23221c;
        }
    }
    ctx->pc = 0x2321E4u;
label_2321e4:
    // 0x2321e4: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2321e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
label_2321e8:
    // 0x2321e8: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x2321e8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2321ec: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x2321ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2321f0: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x2321f0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2321f4: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x2321f4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2321f8: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x2321f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x2321fc: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x2321fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x232200: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x232200u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x232204: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x232204u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x232208: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x232208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x23220c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x23220cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x232210: 0x0  nop
    ctx->pc = 0x232210u;
    // NOP
    // 0x232214: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x232214u;
    {
        const bool branch_taken_0x232214 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x232214) {
            ctx->pc = 0x2321E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2321e8;
        }
    }
    ctx->pc = 0x23221Cu;
label_23221c:
    // 0x23221c: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x23221cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x232220: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x232220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x232224: 0x6889000f  ldl         $t1, 0xF($a0)
    ctx->pc = 0x232224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x232228: 0x6c890008  ldr         $t1, 0x8($a0)
    ctx->pc = 0x232228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x23222c: 0x68820017  ldl         $v0, 0x17($a0)
    ctx->pc = 0x23222cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x232230: 0x6c820010  ldr         $v0, 0x10($a0)
    ctx->pc = 0x232230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x232234: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x232234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232238: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x232238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23223c: 0xb069000f  sdl         $t1, 0xF($v1)
    ctx->pc = 0x23223cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232240: 0xb4690008  sdr         $t1, 0x8($v1)
    ctx->pc = 0x232240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232244: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x232244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232248: 0x3406b790  ori         $a2, $zero, 0xB790
    ctx->pc = 0x232248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46992);
    // 0x23224c: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x23224cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232250: 0x26311960  addiu       $s1, $s1, 0x1960
    ctx->pc = 0x232250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6496));
    // 0x232254: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x232254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x232258: 0x3c052131  lui         $a1, 0x2131
    ctx->pc = 0x232258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8497 << 16));
    // 0x23225c: 0x8f84b74c  lw          $a0, -0x48B4($gp)
    ctx->pc = 0x23225cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x232260: 0xc0823ba  jal         func_208EE8
    ctx->pc = 0x232260u;
    SET_GPR_U32(ctx, 31, 0x232268u);
    ctx->pc = 0x232264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232260u;
    // 0x232264: 0x34a55354  ori         $a1, $a1, 0x5354 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21332);
    ctx->in_delay_slot = false;
    ctx->pc = 0x208EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208EE8u, 0x232260u, 0x232268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232268u;
label_232268:
    // 0x232268: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x232268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23226c: 0x26e32c18  addiu       $v1, $s7, 0x2C18
    ctx->pc = 0x23226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x232270: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232278: 0xc0881e4  jal         func_220790
    ctx->pc = 0x232278u;
    SET_GPR_U32(ctx, 31, 0x232280u);
    ctx->pc = 0x23227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232278u;
    // 0x23227c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220790u, 0x232278u, 0x232280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232280u;
label_232280:
    // 0x232280: 0x8e060764  lw          $a2, 0x764($s0)
    ctx->pc = 0x232280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1892)));
    // 0x232284: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x232284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232288: 0x8f88b74c  lw          $t0, -0x48B4($gp)
    ctx->pc = 0x232288u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x23228c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x23228cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232290: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x232290u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232294: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x232294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x232298: 0xc091302  jal         func_244C08
    ctx->pc = 0x232298u;
    SET_GPR_U32(ctx, 31, 0x2322A0u);
    ctx->pc = 0x23229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232298u;
    // 0x23229c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244C08u, 0x232298u, 0x2322A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322A0u;
label_2322a0:
    // 0x2322a0: 0xc09133c  jal         func_244CF0
    ctx->pc = 0x2322A0u;
    SET_GPR_U32(ctx, 31, 0x2322A8u);
    ctx->pc = 0x2322A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2322A0u;
    // 0x2322a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244CF0u, 0x2322A0u, 0x2322A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322A8u;
label_2322a8:
    // 0x2322a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2322a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2322ac: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x2322ACu;
    {
        const bool branch_taken_0x2322ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2322B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322ACu;
        // 0x2322b0: 0xa382b75b  sb          $v0, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322ac) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x2322B4u;
label_2322b4:
    // 0x2322b4: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x2322B4u;
    SET_GPR_U32(ctx, 31, 0x2322BCu);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x2322B4u, 0x2322BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322BCu;
label_2322bc:
    // 0x2322bc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2322bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2322c0: 0x14430167  bne         $v0, $v1, . + 4 + (0x167 << 2)
    ctx->pc = 0x2322C0u;
    {
        const bool branch_taken_0x2322c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2322C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322C0u;
        // 0x2322c4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322c0) {
            ctx->pc = 0x232860u;
            goto label_232860;
        }
    }
    ctx->pc = 0x2322C8u;
    // 0x2322c8: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x2322C8u;
    SET_GPR_U32(ctx, 31, 0x2322D0u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x2322C8u, 0x2322D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322D0u;
label_2322d0:
    // 0x2322d0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2322d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2322d4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2322d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2322d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2322D8u;
    {
        const bool branch_taken_0x2322d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2322DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322D8u;
        // 0x2322dc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322d8) {
            ctx->pc = 0x232318u;
            goto label_232318;
        }
    }
    ctx->pc = 0x2322E0u;
    // 0x2322e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2322e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2322e4: 0x24421ac0  addiu       $v0, $v0, 0x1AC0
    ctx->pc = 0x2322e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x2322e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2322e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2322ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2322ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2322f0: 0x800008  jr          $a0
    ctx->pc = 0x2322F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2322F8u: goto label_2322f8;
            case 0x232304u: goto label_232304;
            case 0x23230Cu: goto label_23230c;
            case 0x232318u: goto label_232318;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2322F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2322F8u;
label_2322f8:
    // 0x2322f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2322f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2322fc: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x2322FCu;
    {
        const bool branch_taken_0x2322fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322FCu;
        // 0x232300: 0xa382b75b  sb          $v0, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322fc) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x232304u;
label_232304:
    // 0x232304: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x232304u;
    {
        const bool branch_taken_0x232304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232304u;
        // 0x232308: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232304) {
            ctx->pc = 0x23231Cu;
            goto label_23231c;
        }
    }
    ctx->pc = 0x23230Cu;
label_23230c:
    // 0x23230c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23230cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232310: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x232310u;
    {
        const bool branch_taken_0x232310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232310u;
        // 0x232314: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232310) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x232318u;
label_232318:
    // 0x232318: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x232318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23231c:
    // 0x23231c: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x23231Cu;
    SET_GPR_U32(ctx, 31, 0x232324u);
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x23231Cu, 0x232324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232324u;
label_232324:
    // 0x232324: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x232324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232328: 0xc08c58e  jal         func_231638
    ctx->pc = 0x232328u;
    SET_GPR_U32(ctx, 31, 0x232330u);
    ctx->pc = 0x23232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232328u;
    // 0x23232c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x232328u, 0x232330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232330u;
label_232330:
    // 0x232330: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x232330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232334: 0x26e62c18  addiu       $a2, $s7, 0x2C18
    ctx->pc = 0x232334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x232338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23233c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23233cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_232340:
    // 0x232340: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232344: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x232344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_232348:
    // 0x232348: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23234c: 0xc091390  jal         func_244E40
    ctx->pc = 0x23234Cu;
    SET_GPR_U32(ctx, 31, 0x232354u);
    ctx->pc = 0x232350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23234Cu;
    // 0x232350: 0x8c46064c  lw          $a2, 0x64C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E40u, 0x23234Cu, 0x232354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232354u;
label_232354:
    // 0x232354: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x232354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x232358: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x232358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23235c: 0xa384b75b  sb          $a0, -0x48A5($gp)
    ctx->pc = 0x23235cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 4));
    // 0x232360: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x232360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x232364: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x232364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x232368: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x232368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x23236c: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x23236Cu;
    {
        const bool branch_taken_0x23236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23236Cu;
        // 0x232370: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23236c) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x232374u;
label_232374:
    // 0x232374: 0x8f90b74c  lw          $s0, -0x48B4($gp)
    ctx->pc = 0x232374u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x232378: 0xc091368  jal         func_244DA0
    ctx->pc = 0x232378u;
    SET_GPR_U32(ctx, 31, 0x232380u);
    ctx->pc = 0x23237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232378u;
    // 0x23237c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244DA0u, 0x232378u, 0x232380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232380u;
label_232380:
    // 0x232380: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x232380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x232384: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x232384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x232388: 0x2463e1c8  addiu       $v1, $v1, -0x1E38
    ctx->pc = 0x232388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959560));
    // 0x23238c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x23238cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x232390: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x232390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x232394: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x232394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x232398: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x232398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23239c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2323a0: 0xa386b75b  sb          $a2, -0x48A5($gp)
    ctx->pc = 0x2323a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 6));
    // 0x2323a4: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x2323A4u;
    {
        const bool branch_taken_0x2323a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2323A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323A4u;
        // 0x2323a8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323a4) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x2323ACu;
label_2323ac:
    // 0x2323ac: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x2323ACu;
    SET_GPR_U32(ctx, 31, 0x2323B4u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x2323ACu, 0x2323B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323B4u;
label_2323b4:
    // 0x2323b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2323b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2323b8: 0x14430129  bne         $v0, $v1, . + 4 + (0x129 << 2)
    ctx->pc = 0x2323B8u;
    {
        const bool branch_taken_0x2323b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2323BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323B8u;
        // 0x2323bc: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323b8) {
            ctx->pc = 0x232860u;
            goto label_232860;
        }
    }
    ctx->pc = 0x2323C0u;
    // 0x2323c0: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x2323C0u;
    SET_GPR_U32(ctx, 31, 0x2323C8u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x2323C0u, 0x2323C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323C8u;
label_2323c8:
    // 0x2323c8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2323c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2323cc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2323ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2323d0: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x2323D0u;
    {
        const bool branch_taken_0x2323d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2323D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323D0u;
        // 0x2323d4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323d0) {
            ctx->pc = 0x232710u;
            goto label_232710;
        }
    }
    ctx->pc = 0x2323D8u;
    // 0x2323d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2323d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2323dc: 0x24421ae0  addiu       $v0, $v0, 0x1AE0
    ctx->pc = 0x2323dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
    // 0x2323e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2323e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2323e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2323e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2323e8: 0x800008  jr          $a0
    ctx->pc = 0x2323E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231F2Cu: goto label_231f2c;
            case 0x2323F0u: goto label_2323f0;
            case 0x232608u: goto label_232608;
            case 0x232710u: goto label_232710;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2323E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2323F0u;
label_2323f0:
    // 0x2323f0: 0x3c052131  lui         $a1, 0x2131
    ctx->pc = 0x2323f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8497 << 16));
    // 0x2323f4: 0x8f84b74c  lw          $a0, -0x48B4($gp)
    ctx->pc = 0x2323f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x2323f8: 0x34a55354  ori         $a1, $a1, 0x5354
    ctx->pc = 0x2323f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21332);
    // 0x2323fc: 0xc0823cc  jal         func_208F30
    ctx->pc = 0x2323FCu;
    SET_GPR_U32(ctx, 31, 0x232404u);
    ctx->pc = 0x232400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2323FCu;
    // 0x232400: 0x3406b790  ori         $a2, $zero, 0xB790 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46992);
    ctx->in_delay_slot = false;
    ctx->pc = 0x208F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208F30u, 0x2323FCu, 0x232404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232404u;
label_232404:
    // 0x232404: 0x1040fec9  beqz        $v0, . + 4 + (-0x137 << 2)
    ctx->pc = 0x232404u;
    {
        const bool branch_taken_0x232404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232404u;
        // 0x232408: 0x8f86b74c  lw          $a2, -0x48B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232404) {
            ctx->pc = 0x231F2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231f2c;
        }
    }
    ctx->pc = 0x23240Cu;
    // 0x23240c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23240cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x232410: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x232410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x232414: 0x2442e1c8  addiu       $v0, $v0, -0x1E38
    ctx->pc = 0x232414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x232418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23241c: 0x24d50004  addiu       $s5, $a2, 0x4
    ctx->pc = 0x23241cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x232420: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x232420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x232424: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x232424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x232428: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x232428u;
    {
        const bool branch_taken_0x232428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232428u;
        // 0x23242c: 0x24120b78  addiu       $s2, $zero, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232428) {
            ctx->pc = 0x232498u;
            goto label_232498;
        }
    }
    ctx->pc = 0x232430u;
label_232430:
    // 0x232430: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x232430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232434: 0x26f42c18  addiu       $s4, $s7, 0x2C18
    ctx->pc = 0x232434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x232438: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x232438u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x23243c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23243cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232440: 0x26521a40  addiu       $s2, $s2, 0x1A40
    ctx->pc = 0x232440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6720));
    // 0x232444: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x232444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x232448: 0xc090d0a  jal         func_243428
    ctx->pc = 0x232448u;
    SET_GPR_U32(ctx, 31, 0x232450u);
    ctx->pc = 0x23244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232448u;
    // 0x23244c: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x232448u, 0x232450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232450u;
label_232450:
    // 0x232450: 0x24040b78  addiu       $a0, $zero, 0xB78
    ctx->pc = 0x232450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x232454: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x232454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232458: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x232458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23245c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23245cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232460: 0x8f919dd8  lw          $s1, -0x6228($gp)
    ctx->pc = 0x232460u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x232464: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232468: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x232468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x23246c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x23246cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232470: 0xc090d0a  jal         func_243428
    ctx->pc = 0x232470u;
    SET_GPR_U32(ctx, 31, 0x232478u);
    ctx->pc = 0x232474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232470u;
    // 0x232474: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x232470u, 0x232478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232478u;
label_232478:
    // 0x232478: 0x8ea50260  lw          $a1, 0x260($s5)
    ctx->pc = 0x232478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 608)));
    // 0x23247c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23247cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232480: 0x8e0a026c  lw          $t2, 0x26C($s0)
    ctx->pc = 0x232480u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x232484: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x232484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232488: 0x8e070264  lw          $a3, 0x264($s0)
    ctx->pc = 0x232488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x23248c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x23248cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232490: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x232490u;
    {
        const bool branch_taken_0x232490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232490u;
        // 0x232494: 0x8e080268  lw          $t0, 0x268($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232490) {
            ctx->pc = 0x23266Cu;
            goto label_23266c;
        }
    }
    ctx->pc = 0x232498u;
label_232498:
    // 0x232498: 0x8f859dd8  lw          $a1, -0x6228($gp)
    ctx->pc = 0x232498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23249c: 0x2328018  mult        $s0, $s1, $s2
    ctx->pc = 0x23249cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2324a0: 0x24c40014  addiu       $a0, $a2, 0x14
    ctx->pc = 0x2324a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2324a4: 0xc0880d8  jal         func_220360
    ctx->pc = 0x2324A4u;
    SET_GPR_U32(ctx, 31, 0x2324ACu);
    ctx->pc = 0x2324A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2324A4u;
    // 0x2324a8: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220360u, 0x2324A4u, 0x2324ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2324ACu;
label_2324ac:
    // 0x2324ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2324acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324b0: 0x4c0ffdf  bltz        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2324B0u;
    {
        const bool branch_taken_0x2324b0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2324B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324B0u;
        // 0x2324b4: 0xd21018  mult        $v0, $a2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324b0) {
            ctx->pc = 0x232430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232430;
        }
    }
    ctx->pc = 0x2324B8u;
    // 0x2324b8: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x2324b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2324bc: 0x8f829dd8  lw          $v0, -0x6228($gp)
    ctx->pc = 0x2324bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x2324c0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2324c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2324c4: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x2324c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2324c8: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x2324c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2324cc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2324ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2324d0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2324D0u;
    {
        const bool branch_taken_0x2324d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2324D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324D0u;
        // 0x2324d4: 0x24820b60  addiu       $v0, $a0, 0xB60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324d0) {
            ctx->pc = 0x232538u;
            goto label_232538;
        }
    }
    ctx->pc = 0x2324D8u;
    // 0x2324d8: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2324d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
label_2324dc:
    // 0x2324dc: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x2324dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2324e0: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x2324e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2324e4: 0x6887000f  ldl         $a3, 0xF($a0)
    ctx->pc = 0x2324e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2324e8: 0x6c870008  ldr         $a3, 0x8($a0)
    ctx->pc = 0x2324e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2324ec: 0x68880017  ldl         $t0, 0x17($a0)
    ctx->pc = 0x2324ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2324f0: 0x6c880010  ldr         $t0, 0x10($a0)
    ctx->pc = 0x2324f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2324f4: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x2324f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2324f8: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x2324f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2324fc: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x2324fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232500: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x232500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232504: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x232504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232508: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x232508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23250c: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x23250cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232510: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x232510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232514: 0xb069001f  sdl         $t1, 0x1F($v1)
    ctx->pc = 0x232514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232518: 0xb4690018  sdr         $t1, 0x18($v1)
    ctx->pc = 0x232518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23251c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x23251cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x232520: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x232520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x232524: 0x0  nop
    ctx->pc = 0x232524u;
    // NOP
    // 0x232528: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x232528u;
    {
        const bool branch_taken_0x232528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x232528) {
            ctx->pc = 0x2324DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2324dc;
        }
    }
    ctx->pc = 0x232530u;
    // 0x232530: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x232530u;
    {
        const bool branch_taken_0x232530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232530) {
            ctx->pc = 0x232570u;
            goto label_232570;
        }
    }
    ctx->pc = 0x232538u;
label_232538:
    // 0x232538: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x232538u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
label_23253c:
    // 0x23253c: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x23253cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232540: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x232540u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x232544: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x232544u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x232548: 0xdc890018  ld          $t1, 0x18($a0)
    ctx->pc = 0x232548u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x23254c: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x23254cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x232550: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x232550u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x232554: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x232554u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x232558: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x232558u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x23255c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x23255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x232560: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x232560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x232564: 0x0  nop
    ctx->pc = 0x232564u;
    // NOP
    // 0x232568: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x232568u;
    {
        const bool branch_taken_0x232568 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x232568) {
            ctx->pc = 0x23253Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23253c;
        }
    }
    ctx->pc = 0x232570u;
label_232570:
    // 0x232570: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x232570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x232574: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x232574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x232578: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x232578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x23257c: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x23257cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x232580: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x232580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x232584: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x232584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x232588: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x232588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23258c: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x23258cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232590: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x232590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232594: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x232594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232598: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x232598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23259c: 0x26311960  addiu       $s1, $s1, 0x1960
    ctx->pc = 0x23259cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6496));
    // 0x2325a0: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x2325a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2325a4: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x2325a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x2325a8: 0x3c052131  lui         $a1, 0x2131
    ctx->pc = 0x2325a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8497 << 16));
    // 0x2325ac: 0x8f84b74c  lw          $a0, -0x48B4($gp)
    ctx->pc = 0x2325acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x2325b0: 0x34a55354  ori         $a1, $a1, 0x5354
    ctx->pc = 0x2325b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21332);
    // 0x2325b4: 0xc0823ba  jal         func_208EE8
    ctx->pc = 0x2325B4u;
    SET_GPR_U32(ctx, 31, 0x2325BCu);
    ctx->pc = 0x2325B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325B4u;
    // 0x2325b8: 0x3406b790  ori         $a2, $zero, 0xB790 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46992);
    ctx->in_delay_slot = false;
    ctx->pc = 0x208EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208EE8u, 0x2325B4u, 0x2325BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325BCu;
label_2325bc:
    // 0x2325bc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2325bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2325c0: 0x26e32c18  addiu       $v1, $s7, 0x2C18
    ctx->pc = 0x2325c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x2325c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2325c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2325c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2325c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2325cc: 0xc0881e4  jal         func_220790
    ctx->pc = 0x2325CCu;
    SET_GPR_U32(ctx, 31, 0x2325D4u);
    ctx->pc = 0x2325D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325CCu;
    // 0x2325d0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220790u, 0x2325CCu, 0x2325D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325D4u;
label_2325d4:
    // 0x2325d4: 0x8e060764  lw          $a2, 0x764($s0)
    ctx->pc = 0x2325d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1892)));
    // 0x2325d8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2325d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325dc: 0x8f88b74c  lw          $t0, -0x48B4($gp)
    ctx->pc = 0x2325dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x2325e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2325e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325e4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2325e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325e8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2325e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2325ec: 0xc091302  jal         func_244C08
    ctx->pc = 0x2325ECu;
    SET_GPR_U32(ctx, 31, 0x2325F4u);
    ctx->pc = 0x2325F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325ECu;
    // 0x2325f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244C08u, 0x2325ECu, 0x2325F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325F4u;
label_2325f4:
    // 0x2325f4: 0xc09133c  jal         func_244CF0
    ctx->pc = 0x2325F4u;
    SET_GPR_U32(ctx, 31, 0x2325FCu);
    ctx->pc = 0x2325F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325F4u;
    // 0x2325f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244CF0u, 0x2325F4u, 0x2325FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325FCu;
label_2325fc:
    // 0x2325fc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2325fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x232600: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x232600u;
    {
        const bool branch_taken_0x232600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232600u;
        // 0x232604: 0xa382b75b  sb          $v0, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232600) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x232608u;
label_232608:
    // 0x232608: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x232608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23260c: 0x26f42c18  addiu       $s4, $s7, 0x2C18
    ctx->pc = 0x23260cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x232610: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x232610u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x232614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232618: 0x26521a40  addiu       $s2, $s2, 0x1A40
    ctx->pc = 0x232618u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6720));
    // 0x23261c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x232620: 0xc090d0a  jal         func_243428
    ctx->pc = 0x232620u;
    SET_GPR_U32(ctx, 31, 0x232628u);
    ctx->pc = 0x232624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232620u;
    // 0x232624: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x232620u, 0x232628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232628u;
label_232628:
    // 0x232628: 0x24040b78  addiu       $a0, $zero, 0xB78
    ctx->pc = 0x232628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x23262c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23262cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232630: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x232630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x232634: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x232634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232638: 0x8f919dd8  lw          $s1, -0x6228($gp)
    ctx->pc = 0x232638u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23263c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23263cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232640: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x232640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x232644: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x232644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232648: 0xc090d0a  jal         func_243428
    ctx->pc = 0x232648u;
    SET_GPR_U32(ctx, 31, 0x232650u);
    ctx->pc = 0x23264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232648u;
    // 0x23264c: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x232648u, 0x232650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232650u;
label_232650:
    // 0x232650: 0x8ea50270  lw          $a1, 0x270($s5)
    ctx->pc = 0x232650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 624)));
    // 0x232654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x232654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232658: 0x8e0a027c  lw          $t2, 0x27C($s0)
    ctx->pc = 0x232658u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x23265c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23265cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232660: 0x8e070274  lw          $a3, 0x274($s0)
    ctx->pc = 0x232660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x232664: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x232664u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232668: 0x8e080278  lw          $t0, 0x278($s0)
    ctx->pc = 0x232668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_23266c:
    // 0x23266c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23266Cu;
    SET_GPR_U32(ctx, 31, 0x232674u);
    ctx->pc = 0x232670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23266Cu;
    // 0x232670: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23266Cu, 0x232674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232674u;
label_232674:
    // 0x232674: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x232674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232678: 0xc08c58e  jal         func_231638
    ctx->pc = 0x232678u;
    SET_GPR_U32(ctx, 31, 0x232680u);
    ctx->pc = 0x23267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232678u;
    // 0x23267c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x232678u, 0x232680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232680u;
label_232680:
    // 0x232680: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x232680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232688: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x232688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23268c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23268cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232690: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x232690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x232694: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232698: 0xc091390  jal         func_244E40
    ctx->pc = 0x232698u;
    SET_GPR_U32(ctx, 31, 0x2326A0u);
    ctx->pc = 0x23269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232698u;
    // 0x23269c: 0x8c460650  lw          $a2, 0x650($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E40u, 0x232698u, 0x2326A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326A0u;
label_2326a0:
    // 0x2326a0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2326a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2326a4: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x2326a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x2326a8: 0xa384b75b  sb          $a0, -0x48A5($gp)
    ctx->pc = 0x2326a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 4));
    // 0x2326ac: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x2326acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x2326b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2326b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x2326b4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2326b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2326b8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2326B8u;
    {
        const bool branch_taken_0x2326b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2326BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326B8u;
        // 0x2326bc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326b8) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x2326C0u;
label_2326c0:
    // 0x2326c0: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x2326C0u;
    SET_GPR_U32(ctx, 31, 0x2326C8u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x2326C0u, 0x2326C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326C8u;
label_2326c8:
    // 0x2326c8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2326c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2326cc: 0x14430064  bne         $v0, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2326CCu;
    {
        const bool branch_taken_0x2326cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2326D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326CCu;
        // 0x2326d0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326cc) {
            ctx->pc = 0x232860u;
            goto label_232860;
        }
    }
    ctx->pc = 0x2326D4u;
    // 0x2326d4: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x2326D4u;
    SET_GPR_U32(ctx, 31, 0x2326DCu);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x2326D4u, 0x2326DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326DCu;
label_2326dc:
    // 0x2326dc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2326dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2326e0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2326e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2326e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2326E4u;
    {
        const bool branch_taken_0x2326e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2326E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326E4u;
        // 0x2326e8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326e4) {
            ctx->pc = 0x232710u;
            goto label_232710;
        }
    }
    ctx->pc = 0x2326ECu;
    // 0x2326ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2326ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2326f0: 0x24421b00  addiu       $v0, $v0, 0x1B00
    ctx->pc = 0x2326f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6912));
    // 0x2326f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2326f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2326f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2326f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2326fc: 0x800008  jr          $a0
    ctx->pc = 0x2326FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232304u: goto label_232304;
            case 0x232704u: goto label_232704;
            case 0x232710u: goto label_232710;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2326FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x232704u;
label_232704:
    // 0x232704: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x232704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x232708: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x232708u;
    {
        const bool branch_taken_0x232708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232708u;
        // 0x23270c: 0xa382b75b  sb          $v0, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232708) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x232710u;
label_232710:
    // 0x232710: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x232710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_232714:
    // 0x232714: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x232714u;
    SET_GPR_U32(ctx, 31, 0x23271Cu);
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x232714u, 0x23271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23271Cu;
label_23271c:
    // 0x23271c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23271cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232720: 0xc08c58e  jal         func_231638
    ctx->pc = 0x232720u;
    SET_GPR_U32(ctx, 31, 0x232728u);
    ctx->pc = 0x232724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232720u;
    // 0x232724: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x232720u, 0x232728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232728u;
label_232728:
    // 0x232728: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x232728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23272c: 0x26e62c18  addiu       $a2, $s7, 0x2C18
    ctx->pc = 0x23272cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x232730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232734: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x232734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23273c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23273cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x232740: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232744: 0xc091390  jal         func_244E40
    ctx->pc = 0x232744u;
    SET_GPR_U32(ctx, 31, 0x23274Cu);
    ctx->pc = 0x232748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232744u;
    // 0x232748: 0x8c46064c  lw          $a2, 0x64C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E40u, 0x232744u, 0x23274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23274Cu;
label_23274c:
    // 0x23274c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x232750: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x232750u;
    {
        const bool branch_taken_0x232750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232750u;
        // 0x232754: 0xa382b75b  sb          $v0, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232750) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x232758u;
label_232758:
    // 0x232758: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x232758u;
    SET_GPR_U32(ctx, 31, 0x232760u);
    ctx->pc = 0x23275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232758u;
    // 0x23275c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x232758u, 0x232760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232760u;
label_232760:
    // 0x232760: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x232760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232764: 0xc08c58e  jal         func_231638
    ctx->pc = 0x232764u;
    SET_GPR_U32(ctx, 31, 0x23276Cu);
    ctx->pc = 0x232768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232764u;
    // 0x232768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x232764u, 0x23276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23276Cu;
label_23276c:
    // 0x23276c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232770: 0x26e62c18  addiu       $a2, $s7, 0x2C18
    ctx->pc = 0x232770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x232774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232778: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x232778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23277c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23277cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232780: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x232780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x232784: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232788: 0xc091390  jal         func_244E40
    ctx->pc = 0x232788u;
    SET_GPR_U32(ctx, 31, 0x232790u);
    ctx->pc = 0x23278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232788u;
    // 0x23278c: 0x8c46064c  lw          $a2, 0x64C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E40u, 0x232788u, 0x232790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232790u;
label_232790:
    // 0x232790: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x232790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x232794: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x232794u;
    {
        const bool branch_taken_0x232794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232794u;
        // 0x232798: 0xa382b75b  sb          $v0, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232794) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x23279Cu;
label_23279c:
    // 0x23279c: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x23279cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2327a0: 0xc081546  jal         func_205518
    ctx->pc = 0x2327A0u;
    SET_GPR_U32(ctx, 31, 0x2327A8u);
    ctx->pc = 0x2327A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327A0u;
    // 0x2327a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2327A0u, 0x2327A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327A8u;
label_2327a8:
    // 0x2327a8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2327a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2327ac: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2327ACu;
    {
        const bool branch_taken_0x2327ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327ACu;
        // 0x2327b0: 0xa383b75b  sb          $v1, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327ac) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x2327B4u;
label_2327b4:
    // 0x2327b4: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x2327B4u;
    SET_GPR_U32(ctx, 31, 0x2327BCu);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x2327B4u, 0x2327BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327BCu;
label_2327bc:
    // 0x2327bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2327bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2327c0: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2327C0u;
    {
        const bool branch_taken_0x2327c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2327C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327C0u;
        // 0x2327c4: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327c0) {
            ctx->pc = 0x2327ECu;
            goto label_2327ec;
        }
    }
    ctx->pc = 0x2327C8u;
    // 0x2327c8: 0x244511f8  addiu       $a1, $v0, 0x11F8
    ctx->pc = 0x2327c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x2327cc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2327ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2327d0: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x2327d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2327d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2327D4u;
    {
        const bool branch_taken_0x2327d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327D4u;
        // 0x2327d8: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327d4) {
            ctx->pc = 0x2327ECu;
            goto label_2327ec;
        }
    }
    ctx->pc = 0x2327DCu;
    // 0x2327dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2327dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2327e0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2327e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2327e4: 0xa383b75b  sb          $v1, -0x48A5($gp)
    ctx->pc = 0x2327e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 3));
    // 0x2327e8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2327e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2327ec:
    // 0x2327ec: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x2327ECu;
    SET_GPR_U32(ctx, 31, 0x2327F4u);
    ctx->pc = 0x2327F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327ECu;
    // 0x2327f0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x2327ECu, 0x2327F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327F4u;
label_2327f4:
    // 0x2327f4: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2327F4u;
    {
        const bool branch_taken_0x2327f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2327F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327F4u;
        // 0x2327f8: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327f4) {
            ctx->pc = 0x232814u;
            goto label_232814;
        }
    }
    ctx->pc = 0x2327FCu;
    // 0x2327fc: 0x8c6211fc  lw          $v0, 0x11FC($v1)
    ctx->pc = 0x2327fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4604)));
    // 0x232800: 0x30420024  andi        $v0, $v0, 0x24
    ctx->pc = 0x232800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)36);
    // 0x232804: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x232804u;
    {
        const bool branch_taken_0x232804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232804u;
        // 0x232808: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232804) {
            ctx->pc = 0x23283Cu;
            goto label_23283c;
        }
    }
    ctx->pc = 0x23280Cu;
    // 0x23280c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23280Cu;
    {
        const bool branch_taken_0x23280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23280Cu;
        // 0x232810: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23280c) {
            ctx->pc = 0x23285Cu;
            goto label_23285c;
        }
    }
    ctx->pc = 0x232814u;
label_232814:
    // 0x232814: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x232814u;
    SET_GPR_U32(ctx, 31, 0x23281Cu);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x232814u, 0x23281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23281Cu;
label_23281c:
    // 0x23281c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x232820: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x232820u;
    {
        const bool branch_taken_0x232820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232820u;
        // 0x232824: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232820) {
            ctx->pc = 0x232860u;
            goto label_232860;
        }
    }
    ctx->pc = 0x232828u;
    // 0x232828: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x232828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23282c: 0x8c4211fc  lw          $v0, 0x11FC($v0)
    ctx->pc = 0x23282cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x232830: 0x3043000c  andi        $v1, $v0, 0xC
    ctx->pc = 0x232830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x232834: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x232834u;
    {
        const bool branch_taken_0x232834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232834u;
        // 0x232838: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232834) {
            ctx->pc = 0x23284Cu;
            goto label_23284c;
        }
    }
    ctx->pc = 0x23283Cu;
label_23283c:
    // 0x23283c: 0xc08c746  jal         func_231D18
    ctx->pc = 0x23283Cu;
    SET_GPR_U32(ctx, 31, 0x232844u);
    ctx->pc = 0x232840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23283Cu;
    // 0x232840: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D18u, 0x23283Cu, 0x232844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232844u;
label_232844:
    // 0x232844: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x232844u;
    {
        const bool branch_taken_0x232844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232844u;
        // 0x232848: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232844) {
            ctx->pc = 0x232860u;
            goto label_232860;
        }
    }
    ctx->pc = 0x23284Cu;
label_23284c:
    // 0x23284c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23284cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x232850: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x232850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x232854: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x232854u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x232858: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x232858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_23285c:
    // 0x23285c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x23285cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_232860:
    // 0x232860: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x232860u;
    {
        const bool branch_taken_0x232860 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x232864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232860u;
        // 0x232864: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232860) {
            ctx->pc = 0x23288Cu;
            goto label_23288c;
        }
    }
    ctx->pc = 0x232868u;
    // 0x232868: 0xc091298  jal         func_244A60
    ctx->pc = 0x232868u;
    SET_GPR_U32(ctx, 31, 0x232870u);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x232868u, 0x232870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232870u;
label_232870:
    // 0x232870: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x232870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x232874: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x232874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x232878: 0x244211f8  addiu       $v0, $v0, 0x11F8
    ctx->pc = 0x232878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x23287c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23287cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x232880: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x232880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x232884: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x232884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x232888: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x232888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23288c:
    // 0x23288c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x23288cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x232890: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x232890u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x232894: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x232894u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x232898: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x232898u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23289c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x23289cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2328a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2328a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2328a4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2328a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2328a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2328a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2328ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2328acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2328b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2328b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2328b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2328B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2328B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328B4u;
        // 0x2328b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2328B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2328BCu;
}
