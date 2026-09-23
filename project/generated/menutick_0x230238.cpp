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

// Function: menutick
// Address: 0x230238 - 0x230684
void menutick_0x230238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menutick_0x230238");
#endif

    switch (ctx->pc) {
        case 0x230274u: goto label_230274;
        case 0x230290u: goto label_230290;
        case 0x2302c0u: goto label_2302c0;
        case 0x2302d4u: goto label_2302d4;
        case 0x230308u: goto label_230308;
        case 0x230338u: goto label_230338;
        case 0x230434u: goto label_230434;
        case 0x23046cu: goto label_23046c;
        case 0x230478u: goto label_230478;
        case 0x230490u: goto label_230490;
        case 0x2304c8u: goto label_2304c8;
        case 0x230514u: goto label_230514;
        case 0x23052cu: goto label_23052c;
        case 0x230564u: goto label_230564;
        case 0x2305a0u: goto label_2305a0;
        case 0x2305d8u: goto label_2305d8;
        case 0x230628u: goto label_230628;
        case 0x230634u: goto label_230634;
        default: break;
    }

    ctx->pc = 0x230238u;

    // 0x230238: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x230238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23023c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23023cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x230240: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x230240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x230244: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x230244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x230248: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x230248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23024c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23024cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x230250: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x230250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x230254: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x230254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x230258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23025c: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x23025cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x230260: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x230260u;
    {
        const bool branch_taken_0x230260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230260u;
        // 0x230264: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230260) {
            ctx->pc = 0x230660u;
            goto label_230660;
        }
    }
    ctx->pc = 0x230268u;
    // 0x230268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x230268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23026c: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x23026Cu;
    SET_GPR_U32(ctx, 31, 0x230274u);
    ctx->pc = 0x230270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23026Cu;
    // 0x230270: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x23026Cu, 0x230274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230274u;
label_230274:
    // 0x230274: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x230274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230278: 0x122000eb  beqz        $s1, . + 4 + (0xEB << 2)
    ctx->pc = 0x230278u;
    {
        const bool branch_taken_0x230278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230278u;
        // 0x23027c: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230278) {
            ctx->pc = 0x230628u;
            goto label_230628;
        }
    }
    ctx->pc = 0x230280u;
    // 0x230280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x230280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230284: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x230284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x230288: 0x2415ffc3  addiu       $s5, $zero, -0x3D
    ctx->pc = 0x230288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x23028c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23028cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230290:
    // 0x230290: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x230290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x230294: 0xe81804  sllv        $v1, $t0, $a3
    ctx->pc = 0x230294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x230298: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x230298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23029c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x23029Cu;
    {
        const bool branch_taken_0x23029c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23029Cu;
        // 0x2302a0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23029c) {
            ctx->pc = 0x23031Cu;
            goto label_23031c;
        }
    }
    ctx->pc = 0x2302A4u;
    // 0x2302a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2302a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302a8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2302a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2302ac: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2302acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2302b0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2302B0u;
    {
        const bool branch_taken_0x2302b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302B0u;
        // 0x2302b4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302b0) {
            ctx->pc = 0x23031Cu;
            goto label_23031c;
        }
    }
    ctx->pc = 0x2302B8u;
    // 0x2302b8: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x2302b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2302bc: 0x0  nop
    ctx->pc = 0x2302bcu;
    // NOP
label_2302c0:
    // 0x2302c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2302c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302c4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2302c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2302c8: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x2302c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2302cc: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x2302CCu;
    SET_GPR_U32(ctx, 31, 0x2302D4u);
    ctx->pc = 0x2302D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302CCu;
    // 0x2302d0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x2302CCu, 0x2302D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302D4u;
label_2302d4:
    // 0x2302d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2302d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302d8: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x2302d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2302dc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2302dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2302e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2302E0u;
    {
        const bool branch_taken_0x2302e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302E0u;
        // 0x2302e4: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302e0) {
            ctx->pc = 0x2302FCu;
            goto label_2302fc;
        }
    }
    ctx->pc = 0x2302E8u;
    // 0x2302e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2302e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302ec: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x2302ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2302f0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2302f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2302f4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2302F4u;
    {
        const bool branch_taken_0x2302f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2302F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302F4u;
        // 0x2302f8: 0xb21821  addu        $v1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302f4) {
            ctx->pc = 0x2302C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2302c0;
        }
    }
    ctx->pc = 0x2302FCu;
label_2302fc:
    // 0x2302fc: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x2302fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x230300: 0xc081546  jal         func_205518
    ctx->pc = 0x230300u;
    SET_GPR_U32(ctx, 31, 0x230308u);
    ctx->pc = 0x230304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230300u;
    // 0x230304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x230300u, 0x230308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230308u;
label_230308:
    // 0x230308: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x230308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23030c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x230310: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x230310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x230314: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x230314u;
    {
        const bool branch_taken_0x230314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230314u;
        // 0x230318: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230314) {
            ctx->pc = 0x23032Cu;
            goto label_23032c;
        }
    }
    ctx->pc = 0x23031Cu;
label_23031c:
    // 0x23031c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23031cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x230320: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x230320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x230324: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x230324u;
    {
        const bool branch_taken_0x230324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230324u;
        // 0x230328: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230324) {
            ctx->pc = 0x230290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230290;
        }
    }
    ctx->pc = 0x23032Cu;
label_23032c:
    // 0x23032c: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x23032cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x230330: 0xc08b7b2  jal         func_22DEC8
    ctx->pc = 0x230330u;
    SET_GPR_U32(ctx, 31, 0x230338u);
    ctx->pc = 0x230334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230330u;
    // 0x230334: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DEC8u, 0x230330u, 0x230338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230338u;
label_230338:
    // 0x230338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23033c: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x23033Cu;
    {
        const bool branch_taken_0x23033c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x230340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23033Cu;
        // 0x230340: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23033c) {
            ctx->pc = 0x2303D4u;
            goto label_2303d4;
        }
    }
    ctx->pc = 0x230344u;
    // 0x230344: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x230344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x230348: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x230348u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23034c: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x23034cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x230350: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x230350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230354: 0x23143  sra         $a2, $v0, 5
    ctx->pc = 0x230354u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 5));
    // 0x230358: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x230358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x23035c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23035cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x230360: 0xc21823  subu        $v1, $a2, $v0
    ctx->pc = 0x230360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x230364: 0x5c600007  bgtzl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x230364u;
    {
        const bool branch_taken_0x230364 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x230364) {
            ctx->pc = 0x230368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230364u;
            // 0x230368: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230384u;
            goto label_230384;
        }
    }
    ctx->pc = 0x23036Cu;
    // 0x23036c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x23036cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x230370: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x230370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230374: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x230374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x230378: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x230378u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x23037c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23037Cu;
    {
        const bool branch_taken_0x23037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23037Cu;
        // 0x230380: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23037c) {
            ctx->pc = 0x2303A4u;
            goto label_2303a4;
        }
    }
    ctx->pc = 0x230384u;
label_230384:
    // 0x230384: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x230384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x230388: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x230388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23038c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23038Cu;
    {
        const bool branch_taken_0x23038c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23038c) {
            ctx->pc = 0x230390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23038Cu;
            // 0x230390: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2303ACu;
            goto label_2303ac;
        }
    }
    ctx->pc = 0x230394u;
    // 0x230394: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x230394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x230398: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x230398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23039c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x23039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2303a0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2303a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2303a4:
    // 0x2303a4: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x2303a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2303a8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2303a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2303ac:
    // 0x2303ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2303acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2303b0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2303b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2303b4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2303B4u;
    {
        const bool branch_taken_0x2303b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2303b4) {
            ctx->pc = 0x2303B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2303B4u;
            // 0x2303b8: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2303DCu;
            goto label_2303dc;
        }
    }
    ctx->pc = 0x2303BCu;
    // 0x2303bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2303bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2303c0: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2303c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2303c4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2303c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2303c8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2303c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2303cc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2303ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2303d0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2303d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_2303d4:
    // 0x2303d4: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x2303d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2303d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2303d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2303dc:
    // 0x2303dc: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x2303dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x2303e0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2303E0u;
    {
        const bool branch_taken_0x2303e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2303e0) {
            ctx->pc = 0x230470u;
            goto label_230470;
        }
    }
    ctx->pc = 0x2303E8u;
    // 0x2303e8: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x2303e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2303ec: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2303ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2303f0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2303F0u;
    {
        const bool branch_taken_0x2303f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303F0u;
        // 0x2303f4: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303f0) {
            ctx->pc = 0x230470u;
            goto label_230470;
        }
    }
    ctx->pc = 0x2303F8u;
    // 0x2303f8: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2303F8u;
    {
        const bool branch_taken_0x2303f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2303f8) {
            ctx->pc = 0x2303FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2303F8u;
            // 0x2303fc: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230464u;
            goto label_230464;
        }
    }
    ctx->pc = 0x230400u;
    // 0x230400: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x230400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x230404: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x230404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x230408: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x230408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x23040c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23040Cu;
    {
        const bool branch_taken_0x23040c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23040Cu;
        // 0x230410: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23040c) {
            ctx->pc = 0x23041Cu;
            goto label_23041c;
        }
    }
    ctx->pc = 0x230414u;
    // 0x230414: 0x2402028f  addiu       $v0, $zero, 0x28F
    ctx->pc = 0x230414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    // 0x230418: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x230418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_23041c:
    // 0x23041c: 0x108143  sra         $s0, $s0, 5
    ctx->pc = 0x23041cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 5));
    // 0x230420: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x230420u;
    {
        const bool branch_taken_0x230420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x230420) {
            ctx->pc = 0x230470u;
            goto label_230470;
        }
    }
    ctx->pc = 0x230428u;
    // 0x230428: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x230428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x23042c: 0xc081546  jal         func_205518
    ctx->pc = 0x23042Cu;
    SET_GPR_U32(ctx, 31, 0x230434u);
    ctx->pc = 0x230430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23042Cu;
    // 0x230430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23042Cu, 0x230434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230434u;
label_230434:
    // 0x230434: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x230434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x230438: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x230438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23043c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x23043cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230440: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x230440u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230444: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x230444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x230448: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x230448u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23044c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23044cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230450: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x230450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230454: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x230454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23045c: 0x808b0c2  j           func_22C308
    ctx->pc = 0x23045Cu;
    ctx->pc = 0x230460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23045Cu;
    // 0x230460: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    gvSetValue_0x22c308(rdram, ctx, runtime); return;
    ctx->pc = 0x230464u;
label_230464:
    // 0x230464: 0xc081546  jal         func_205518
    ctx->pc = 0x230464u;
    SET_GPR_U32(ctx, 31, 0x23046Cu);
    ctx->pc = 0x230468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230464u;
    // 0x230468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x230464u, 0x23046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23046Cu;
label_23046c:
    // 0x23046c: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x23046cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_230470:
    // 0x230470: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x230470u;
    SET_GPR_U32(ctx, 31, 0x230478u);
    ctx->pc = 0x230474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230470u;
    // 0x230474: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x230470u, 0x230478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230478u;
label_230478:
    // 0x230478: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x230478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x23047c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23047Cu;
    {
        const bool branch_taken_0x23047c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23047Cu;
        // 0x230480: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23047c) {
            ctx->pc = 0x23050Cu;
            goto label_23050c;
        }
    }
    ctx->pc = 0x230484u;
    // 0x230484: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x230484u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x230488: 0xc08b7b2  jal         func_22DEC8
    ctx->pc = 0x230488u;
    SET_GPR_U32(ctx, 31, 0x230490u);
    ctx->pc = 0x23048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230488u;
    // 0x23048c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DEC8u, 0x230488u, 0x230490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230490u;
label_230490:
    // 0x230490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230494: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x230494u;
    {
        const bool branch_taken_0x230494 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x230494) {
            ctx->pc = 0x230498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230494u;
            // 0x230498: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23050Cu;
            goto label_23050c;
        }
    }
    ctx->pc = 0x23049Cu;
    // 0x23049c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x23049cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2304a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2304a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2304a4: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2304A4u;
    {
        const bool branch_taken_0x2304a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2304a4) {
            ctx->pc = 0x2304A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2304A4u;
            // 0x2304a8: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23050Cu;
            goto label_23050c;
        }
    }
    ctx->pc = 0x2304ACu;
    // 0x2304ac: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x2304acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2304b0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2304b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2304b4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2304B4u;
    {
        const bool branch_taken_0x2304b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2304b4) {
            ctx->pc = 0x2304B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2304B4u;
            // 0x2304b8: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2304FCu;
            goto label_2304fc;
        }
    }
    ctx->pc = 0x2304BCu;
    // 0x2304bc: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x2304bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2304c0: 0xc08b77e  jal         func_22DDF8
    ctx->pc = 0x2304C0u;
    SET_GPR_U32(ctx, 31, 0x2304C8u);
    ctx->pc = 0x2304C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2304C0u;
    // 0x2304c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DDF8u, 0x2304C0u, 0x2304C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2304C8u;
label_2304c8:
    // 0x2304c8: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x2304c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2304cc: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x2304ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2304d0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2304d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2304d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2304d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304d8: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x2304d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2304dc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2304dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2304e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2304e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2304e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2304e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2304e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2304e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2304ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2304ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2304f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2304f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2304f4: 0x8081546  j           func_205518
    ctx->pc = 0x2304F4u;
    ctx->pc = 0x2304F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2304F4u;
    // 0x2304f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x2304FCu;
label_2304fc:
    // 0x2304fc: 0x2403ffc3  addiu       $v1, $zero, -0x3D
    ctx->pc = 0x2304fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x230500: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x230500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x230504: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x230504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x230508: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x230508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_23050c:
    // 0x23050c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23050Cu;
    SET_GPR_U32(ctx, 31, 0x230514u);
    ctx->pc = 0x230510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23050Cu;
    // 0x230510: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23050Cu, 0x230514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230514u;
label_230514:
    // 0x230514: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x230514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x230518: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x230518u;
    {
        const bool branch_taken_0x230518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230518u;
        // 0x23051c: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230518) {
            ctx->pc = 0x23062Cu;
            goto label_23062c;
        }
    }
    ctx->pc = 0x230520u;
    // 0x230520: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x230520u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x230524: 0xc08b7b2  jal         func_22DEC8
    ctx->pc = 0x230524u;
    SET_GPR_U32(ctx, 31, 0x23052Cu);
    ctx->pc = 0x230528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230524u;
    // 0x230528: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DEC8u, 0x230524u, 0x23052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23052Cu;
label_23052c:
    // 0x23052c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23052cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230530: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x230530u;
    {
        const bool branch_taken_0x230530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x230530) {
            ctx->pc = 0x230534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230530u;
            // 0x230534: 0x9623000a  lhu         $v1, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2305A8u;
            goto label_2305a8;
        }
    }
    ctx->pc = 0x230538u;
    // 0x230538: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x230538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23053c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23053cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x230540: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x230540u;
    {
        const bool branch_taken_0x230540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230540) {
            ctx->pc = 0x230544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230540u;
            // 0x230544: 0x9623000a  lhu         $v1, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2305A8u;
            goto label_2305a8;
        }
    }
    ctx->pc = 0x230548u;
    // 0x230548: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x230548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x23054c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x230550: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x230550u;
    {
        const bool branch_taken_0x230550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230550u;
        // 0x230554: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230550) {
            ctx->pc = 0x230598u;
            goto label_230598;
        }
    }
    ctx->pc = 0x230558u;
    // 0x230558: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x230558u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23055c: 0xc08b77e  jal         func_22DDF8
    ctx->pc = 0x23055Cu;
    SET_GPR_U32(ctx, 31, 0x230564u);
    ctx->pc = 0x230560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23055Cu;
    // 0x230560: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DDF8u, 0x23055Cu, 0x230564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230564u;
label_230564:
    // 0x230564: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x230564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x230568: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x230568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x23056c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23056cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x230570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230574: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x230574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x230578: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x230578u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23057c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23057cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230580: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x230580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230584: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x230584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230588: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x230588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23058c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23058cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230590: 0x8081546  j           func_205518
    ctx->pc = 0x230590u;
    ctx->pc = 0x230594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230590u;
    // 0x230594: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x230598u;
label_230598:
    // 0x230598: 0xc081546  jal         func_205518
    ctx->pc = 0x230598u;
    SET_GPR_U32(ctx, 31, 0x2305A0u);
    ctx->pc = 0x23059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230598u;
    // 0x23059c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x230598u, 0x2305A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2305A0u;
label_2305a0:
    // 0x2305a0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2305A0u;
    {
        const bool branch_taken_0x2305a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305A0u;
        // 0x2305a4: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305a0) {
            ctx->pc = 0x23062Cu;
            goto label_23062c;
        }
    }
    ctx->pc = 0x2305A8u;
label_2305a8:
    // 0x2305a8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2305a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2305ac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2305ACu;
    {
        const bool branch_taken_0x2305ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305ACu;
        // 0x2305b0: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305ac) {
            ctx->pc = 0x230628u;
            goto label_230628;
        }
    }
    ctx->pc = 0x2305B4u;
    // 0x2305b4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2305B4u;
    {
        const bool branch_taken_0x2305b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2305B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305B4u;
        // 0x2305b8: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305b4) {
            ctx->pc = 0x230620u;
            goto label_230620;
        }
    }
    ctx->pc = 0x2305BCu;
    // 0x2305bc: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x2305bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2305c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2305c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2305c4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2305C4u;
    {
        const bool branch_taken_0x2305c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2305C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305C4u;
        // 0x2305c8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305c4) {
            ctx->pc = 0x230600u;
            goto label_230600;
        }
    }
    ctx->pc = 0x2305CCu;
    // 0x2305cc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2305ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2305d0: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x2305D0u;
    SET_GPR_U32(ctx, 31, 0x2305D8u);
    ctx->pc = 0x2305D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2305D0u;
    // 0x2305d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x2305D0u, 0x2305D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2305D8u;
label_2305d8:
    // 0x2305d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2305d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2305dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2305dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2305e0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2305e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2305e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2305e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2305e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2305e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2305ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2305ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2305f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2305f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2305f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2305f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2305f8: 0x808c070  j           func_2301C0
    ctx->pc = 0x2305F8u;
    ctx->pc = 0x2305FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2305F8u;
    // 0x2305fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301C0u;
    pageIn_0x2301c0(rdram, ctx, runtime); return;
    ctx->pc = 0x230600u;
label_230600:
    // 0x230600: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x230600u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230604: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x230604u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230608: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x230608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23060c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23060cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230610: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x230610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230618: 0x808c052  j           func_230148
    ctx->pc = 0x230618u;
    ctx->pc = 0x23061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230618u;
    // 0x23061c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230148u;
    pageOut_0x230148(rdram, ctx, runtime); return;
    ctx->pc = 0x230620u;
label_230620:
    // 0x230620: 0xc081546  jal         func_205518
    ctx->pc = 0x230620u;
    SET_GPR_U32(ctx, 31, 0x230628u);
    ctx->pc = 0x230624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230620u;
    // 0x230624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x230620u, 0x230628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230628u;
label_230628:
    // 0x230628: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x230628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_23062c:
    // 0x23062c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23062Cu;
    SET_GPR_U32(ctx, 31, 0x230634u);
    ctx->pc = 0x230630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23062Cu;
    // 0x230630: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23062Cu, 0x230634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230634u;
label_230634:
    // 0x230634: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x230634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x230638: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x230638u;
    {
        const bool branch_taken_0x230638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230638u;
        // 0x23063c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230638) {
            ctx->pc = 0x230664u;
            goto label_230664;
        }
    }
    ctx->pc = 0x230640u;
    // 0x230640: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x230640u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230644: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x230644u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230648: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x230648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23064c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23064cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230650: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x230650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230658: 0x808c052  j           func_230148
    ctx->pc = 0x230658u;
    ctx->pc = 0x23065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230658u;
    // 0x23065c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230148u;
    pageOut_0x230148(rdram, ctx, runtime); return;
    ctx->pc = 0x230660u;
label_230660:
    // 0x230660: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x230660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_230664:
    // 0x230664: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x230664u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230668: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x230668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23066c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23066cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230670: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x230670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230674: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x230674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23067c: 0x3e00008  jr          $ra
    ctx->pc = 0x23067Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23067Cu;
        // 0x230680: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23067Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230684u;
}
