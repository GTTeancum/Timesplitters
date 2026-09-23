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

// Function: signonLoadTick
// Address: 0x2318a0 - 0x231d14
void signonLoadTick_0x2318a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonLoadTick_0x2318a0");
#endif

    switch (ctx->pc) {
        case 0x2318ccu: goto label_2318cc;
        case 0x2318fcu: goto label_2318fc;
        case 0x231938u: goto label_231938;
        case 0x231950u: goto label_231950;
        case 0x231964u: goto label_231964;
        case 0x231988u: goto label_231988;
        case 0x23199cu: goto label_23199c;
        case 0x2319a8u: goto label_2319a8;
        case 0x2319c8u: goto label_2319c8;
        case 0x2319d0u: goto label_2319d0;
        case 0x231a0cu: goto label_231a0c;
        case 0x231a18u: goto label_231a18;
        case 0x231a3cu: goto label_231a3c;
        case 0x231a64u: goto label_231a64;
        case 0x231a74u: goto label_231a74;
        case 0x231a80u: goto label_231a80;
        case 0x231aa0u: goto label_231aa0;
        case 0x231ab4u: goto label_231ab4;
        case 0x231abcu: goto label_231abc;
        case 0x231ac8u: goto label_231ac8;
        case 0x231afcu: goto label_231afc;
        case 0x231b04u: goto label_231b04;
        case 0x231b10u: goto label_231b10;
        case 0x231b44u: goto label_231b44;
        case 0x231b4cu: goto label_231b4c;
        case 0x231b60u: goto label_231b60;
        case 0x231b70u: goto label_231b70;
        case 0x231b7cu: goto label_231b7c;
        case 0x231ba8u: goto label_231ba8;
        case 0x231bccu: goto label_231bcc;
        case 0x231be0u: goto label_231be0;
        case 0x231be8u: goto label_231be8;
        case 0x231bf4u: goto label_231bf4;
        case 0x231c1cu: goto label_231c1c;
        case 0x231c40u: goto label_231c40;
        case 0x231c50u: goto label_231c50;
        case 0x231c74u: goto label_231c74;
        case 0x231c88u: goto label_231c88;
        case 0x231cd4u: goto label_231cd4;
        default: break;
    }

    ctx->pc = 0x2318a0u;

    // 0x2318a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2318a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2318a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2318a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2318a8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2318a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2318ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2318acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2318b0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2318b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2318b4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2318b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2318b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2318b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2318bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2318bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2318c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2318c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2318c4: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x2318C4u;
    SET_GPR_U32(ctx, 31, 0x2318CCu);
    ctx->pc = 0x2318C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2318C4u;
    // 0x2318c8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x2318C4u, 0x2318CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318CCu;
label_2318cc:
    // 0x2318cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2318ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2318d0: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x2318d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2318d4: 0x104000f8  beqz        $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2318D4u;
    {
        const bool branch_taken_0x2318d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318D4u;
        // 0x2318d8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318d4) {
            ctx->pc = 0x231CB8u;
            goto label_231cb8;
        }
    }
    ctx->pc = 0x2318DCu;
    // 0x2318dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2318dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2318e0: 0x244219c0  addiu       $v0, $v0, 0x19C0
    ctx->pc = 0x2318e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6592));
    // 0x2318e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2318e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2318e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2318e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2318ec: 0x800008  jr          $a0
    ctx->pc = 0x2318ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2318F4u: goto label_2318f4;
            case 0x231BCCu: goto label_231bcc;
            case 0x231C24u: goto label_231c24;
            case 0x231C48u: goto label_231c48;
            case 0x231C90u: goto label_231c90;
            case 0x231CB8u: goto label_231cb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2318ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2318F4u;
label_2318f4:
    // 0x2318f4: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x2318F4u;
    SET_GPR_U32(ctx, 31, 0x2318FCu);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x2318F4u, 0x2318FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318FCu;
label_2318fc:
    // 0x2318fc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2318fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x231900: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x231900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x231904: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x231904u;
    {
        const bool branch_taken_0x231904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231904u;
        // 0x231908: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231904) {
            ctx->pc = 0x231BD4u;
            goto label_231bd4;
        }
    }
    ctx->pc = 0x23190Cu;
    // 0x23190c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23190cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231910: 0x244219f0  addiu       $v0, $v0, 0x19F0
    ctx->pc = 0x231910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6640));
    // 0x231914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231918: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x231918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23191c: 0x800008  jr          $a0
    ctx->pc = 0x23191Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231924u: goto label_231924;
            case 0x231958u: goto label_231958;
            case 0x231A98u: goto label_231a98;
            case 0x231AA8u: goto label_231aa8;
            case 0x231AF0u: goto label_231af0;
            case 0x231B38u: goto label_231b38;
            case 0x231BC0u: goto label_231bc0;
            case 0x231BD4u: goto label_231bd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23191Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231924u;
label_231924:
    // 0x231924: 0x3c052131  lui         $a1, 0x2131
    ctx->pc = 0x231924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8497 << 16));
    // 0x231928: 0x8f84b74c  lw          $a0, -0x48B4($gp)
    ctx->pc = 0x231928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x23192c: 0x34a55354  ori         $a1, $a1, 0x5354
    ctx->pc = 0x23192cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21332);
    // 0x231930: 0xc0823cc  jal         func_208F30
    ctx->pc = 0x231930u;
    SET_GPR_U32(ctx, 31, 0x231938u);
    ctx->pc = 0x231934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231930u;
    // 0x231934: 0x3406b790  ori         $a2, $zero, 0xB790 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46992);
    ctx->in_delay_slot = false;
    ctx->pc = 0x208F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208F30u, 0x231930u, 0x231938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231938u;
label_231938:
    // 0x231938: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x231938u;
    {
        const bool branch_taken_0x231938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231938u;
        // 0x23193c: 0x8f84b74c  lw          $a0, -0x48B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231938) {
            ctx->pc = 0x231A98u;
            goto label_231a98;
        }
    }
    ctx->pc = 0x231940u;
    // 0x231940: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x231940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231944: 0x24910004  addiu       $s1, $a0, 0x4
    ctx->pc = 0x231944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x231948: 0xc0881c2  jal         func_220708
    ctx->pc = 0x231948u;
    SET_GPR_U32(ctx, 31, 0x231950u);
    ctx->pc = 0x23194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231948u;
    // 0x23194c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220708u, 0x231948u, 0x231950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231950u;
label_231950:
    // 0x231950: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x231950u;
    {
        const bool branch_taken_0x231950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231950u;
        // 0x231954: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231950) {
            ctx->pc = 0x2319C0u;
            goto label_2319c0;
        }
    }
    ctx->pc = 0x231958u;
label_231958:
    // 0x231958: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x231958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x23195c: 0xc081546  jal         func_205518
    ctx->pc = 0x23195Cu;
    SET_GPR_U32(ctx, 31, 0x231964u);
    ctx->pc = 0x231960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23195Cu;
    // 0x231960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23195Cu, 0x231964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231964u;
label_231964:
    // 0x231964: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x231964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231968: 0x3c12002f  lui         $s2, 0x2F
    ctx->pc = 0x231968u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
    // 0x23196c: 0x26522c18  addiu       $s2, $s2, 0x2C18
    ctx->pc = 0x23196cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x231970: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x231970u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x231974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231978: 0x261019a0  addiu       $s0, $s0, 0x19A0
    ctx->pc = 0x231978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6560));
    // 0x23197c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x23197cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x231980: 0xc090d0a  jal         func_243428
    ctx->pc = 0x231980u;
    SET_GPR_U32(ctx, 31, 0x231988u);
    ctx->pc = 0x231984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231980u;
    // 0x231984: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x231980u, 0x231988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231988u;
label_231988:
    // 0x231988: 0x8e260230  lw          $a2, 0x230($s1)
    ctx->pc = 0x231988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x23198c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23198cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231990: 0x8e25022c  lw          $a1, 0x22C($s1)
    ctx->pc = 0x231990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x231994: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x231994u;
    SET_GPR_U32(ctx, 31, 0x23199Cu);
    ctx->pc = 0x231998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231994u;
    // 0x231998: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x231994u, 0x23199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23199Cu;
label_23199c:
    // 0x23199c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23199cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2319a0: 0xc08c58e  jal         func_231638
    ctx->pc = 0x2319A0u;
    SET_GPR_U32(ctx, 31, 0x2319A8u);
    ctx->pc = 0x2319A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319A0u;
    // 0x2319a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x2319A0u, 0x2319A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319A8u;
label_2319a8:
    // 0x2319a8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2319a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2319ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2319acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2319b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2319b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2319b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2319b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2319b8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2319B8u;
    {
        const bool branch_taken_0x2319b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319B8u;
        // 0x2319bc: 0x721821  addu        $v1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319b8) {
            ctx->pc = 0x231C10u;
            goto label_231c10;
        }
    }
    ctx->pc = 0x2319C0u;
label_2319c0:
    // 0x2319c0: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x2319c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x2319c4: 0x0  nop
    ctx->pc = 0x2319c4u;
    // NOP
label_2319c8:
    // 0x2319c8: 0xc088224  jal         func_220890
    ctx->pc = 0x2319C8u;
    SET_GPR_U32(ctx, 31, 0x2319D0u);
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x2319C8u, 0x2319D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319D0u;
label_2319d0:
    // 0x2319d0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2319d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2319d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2319D4u;
    {
        const bool branch_taken_0x2319d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319D4u;
        // 0x2319d8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319d4) {
            ctx->pc = 0x231A00u;
            goto label_231a00;
        }
    }
    ctx->pc = 0x2319DCu;
    // 0x2319dc: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2319dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2319e0: 0x2442e1c8  addiu       $v0, $v0, -0x1E38
    ctx->pc = 0x2319e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x2319e4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2319e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2319e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2319e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2319ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2319ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2319f0: 0x1465fff5  bne         $v1, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2319F0u;
    {
        const bool branch_taken_0x2319f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2319F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319F0u;
        // 0x2319f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319f0) {
            ctx->pc = 0x2319C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2319c8;
        }
    }
    ctx->pc = 0x2319F8u;
    // 0x2319f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2319F8u;
    {
        const bool branch_taken_0x2319f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319F8u;
        // 0x2319fc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319f8) {
            ctx->pc = 0x231A04u;
            goto label_231a04;
        }
    }
    ctx->pc = 0x231A00u;
label_231a00:
    // 0x231a00: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x231a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_231a04:
    // 0x231a04: 0xc091368  jal         func_244DA0
    ctx->pc = 0x231A04u;
    SET_GPR_U32(ctx, 31, 0x231A0Cu);
    ctx->pc = 0x231A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A04u;
    // 0x231a08: 0xaf85b754  sw          $a1, -0x48AC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948692), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244DA0u, 0x231A04u, 0x231A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A0Cu;
label_231a0c:
    // 0x231a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a10: 0xc08813e  jal         func_2204F8
    ctx->pc = 0x231A10u;
    SET_GPR_U32(ctx, 31, 0x231A18u);
    ctx->pc = 0x231A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A10u;
    // 0x231a14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2204F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2204F8u, 0x231A10u, 0x231A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A18u;
label_231a18:
    // 0x231a18: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x231A18u;
    {
        const bool branch_taken_0x231a18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A18u;
        // 0x231a1c: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a18) {
            ctx->pc = 0x231A6Cu;
            goto label_231a6c;
        }
    }
    ctx->pc = 0x231A20u;
    // 0x231a20: 0x26922c18  addiu       $s2, $s4, 0x2C18
    ctx->pc = 0x231a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x231a24: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x231a24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x231a28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x231a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x231a2c: 0x261019b0  addiu       $s0, $s0, 0x19B0
    ctx->pc = 0x231a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6576));
    // 0x231a30: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x231a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x231a34: 0xc090d0a  jal         func_243428
    ctx->pc = 0x231A34u;
    SET_GPR_U32(ctx, 31, 0x231A3Cu);
    ctx->pc = 0x231A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A34u;
    // 0x231a38: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x231A34u, 0x231A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A3Cu;
label_231a3c:
    // 0x231a3c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x231a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231a40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x231a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a44: 0x8e250234  lw          $a1, 0x234($s1)
    ctx->pc = 0x231a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x231a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231a50: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x231a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x231a54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231a58: 0x8c48023c  lw          $t0, 0x23C($v0)
    ctx->pc = 0x231a58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x231a5c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x231A5Cu;
    SET_GPR_U32(ctx, 31, 0x231A64u);
    ctx->pc = 0x231A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A5Cu;
    // 0x231a60: 0x8c470238  lw          $a3, 0x238($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x231A5Cu, 0x231A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A64u;
label_231a64:
    // 0x231a64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231A64u;
    {
        const bool branch_taken_0x231a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A64u;
        // 0x231a68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a64) {
            ctx->pc = 0x231A78u;
            goto label_231a78;
        }
    }
    ctx->pc = 0x231A6Cu;
label_231a6c:
    // 0x231a6c: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x231A6Cu;
    SET_GPR_U32(ctx, 31, 0x231A74u);
    ctx->pc = 0x231A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A6Cu;
    // 0x231a70: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x231A6Cu, 0x231A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A74u;
label_231a74:
    // 0x231a74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x231a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_231a78:
    // 0x231a78: 0xc08c58e  jal         func_231638
    ctx->pc = 0x231A78u;
    SET_GPR_U32(ctx, 31, 0x231A80u);
    ctx->pc = 0x231A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A78u;
    // 0x231a7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x231A78u, 0x231A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A80u;
label_231a80:
    // 0x231a80: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x231a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231a84: 0x26862c18  addiu       $a2, $s4, 0x2C18
    ctx->pc = 0x231a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x231a88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x231a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x231a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231a90: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x231A90u;
    {
        const bool branch_taken_0x231a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A90u;
        // 0x231a94: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a90) {
            ctx->pc = 0x231C0Cu;
            goto label_231c0c;
        }
    }
    ctx->pc = 0x231A98u;
label_231a98:
    // 0x231a98: 0xc08c5f6  jal         func_2317D8
    ctx->pc = 0x231A98u;
    SET_GPR_U32(ctx, 31, 0x231AA0u);
    ctx->pc = 0x231A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A98u;
    // 0x231a9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317D8u, 0x231A98u, 0x231AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AA0u;
label_231aa0:
    // 0x231aa0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x231AA0u;
    {
        const bool branch_taken_0x231aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231aa0) {
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231AA8u;
label_231aa8:
    // 0x231aa8: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x231aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x231aac: 0xc081546  jal         func_205518
    ctx->pc = 0x231AACu;
    SET_GPR_U32(ctx, 31, 0x231AB4u);
    ctx->pc = 0x231AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AACu;
    // 0x231ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x231AACu, 0x231AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AB4u;
label_231ab4:
    // 0x231ab4: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x231AB4u;
    SET_GPR_U32(ctx, 31, 0x231ABCu);
    ctx->pc = 0x231AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AB4u;
    // 0x231ab8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x231AB4u, 0x231ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231ABCu;
label_231abc:
    // 0x231abc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x231abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ac0: 0xc08c58e  jal         func_231638
    ctx->pc = 0x231AC0u;
    SET_GPR_U32(ctx, 31, 0x231AC8u);
    ctx->pc = 0x231AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AC0u;
    // 0x231ac4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x231AC0u, 0x231AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AC8u;
label_231ac8:
    // 0x231ac8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x231ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231acc: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x231accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x231ad0: 0x24c62c18  addiu       $a2, $a2, 0x2C18
    ctx->pc = 0x231ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x231ad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x231ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ad8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231adc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x231adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x231ae0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x231ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x231ae4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231ae8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x231AE8u;
    {
        const bool branch_taken_0x231ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231AE8u;
        // 0x231aec: 0x8c460650  lw          $a2, 0x650($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ae8) {
            ctx->pc = 0x231BA0u;
            goto label_231ba0;
        }
    }
    ctx->pc = 0x231AF0u;
label_231af0:
    // 0x231af0: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x231af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x231af4: 0xc081546  jal         func_205518
    ctx->pc = 0x231AF4u;
    SET_GPR_U32(ctx, 31, 0x231AFCu);
    ctx->pc = 0x231AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AF4u;
    // 0x231af8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x231AF4u, 0x231AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AFCu;
label_231afc:
    // 0x231afc: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x231AFCu;
    SET_GPR_U32(ctx, 31, 0x231B04u);
    ctx->pc = 0x231B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AFCu;
    // 0x231b00: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x231AFCu, 0x231B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B04u;
label_231b04:
    // 0x231b04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x231b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b08: 0xc08c58e  jal         func_231638
    ctx->pc = 0x231B08u;
    SET_GPR_U32(ctx, 31, 0x231B10u);
    ctx->pc = 0x231B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B08u;
    // 0x231b0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x231B08u, 0x231B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B10u;
label_231b10:
    // 0x231b10: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x231b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231b14: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x231b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x231b18: 0x24c62c18  addiu       $a2, $a2, 0x2C18
    ctx->pc = 0x231b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x231b1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x231b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231b24: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x231b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x231b28: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x231b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x231b2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231b30: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x231B30u;
    {
        const bool branch_taken_0x231b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B30u;
        // 0x231b34: 0x8c460650  lw          $a2, 0x650($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b30) {
            ctx->pc = 0x231BA0u;
            goto label_231ba0;
        }
    }
    ctx->pc = 0x231B38u;
label_231b38:
    // 0x231b38: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x231b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x231b3c: 0xc081546  jal         func_205518
    ctx->pc = 0x231B3Cu;
    SET_GPR_U32(ctx, 31, 0x231B44u);
    ctx->pc = 0x231B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B3Cu;
    // 0x231b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x231B3Cu, 0x231B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B44u;
label_231b44:
    // 0x231b44: 0xc091368  jal         func_244DA0
    ctx->pc = 0x231B44u;
    SET_GPR_U32(ctx, 31, 0x231B4Cu);
    ctx->pc = 0x244DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244DA0u, 0x231B44u, 0x231B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B4Cu;
label_231b4c:
    // 0x231b4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x231b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231b50: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x231B50u;
    {
        const bool branch_taken_0x231b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x231b50) {
            ctx->pc = 0x231B68u;
            goto label_231b68;
        }
    }
    ctx->pc = 0x231B58u;
    // 0x231b58: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x231B58u;
    SET_GPR_U32(ctx, 31, 0x231B60u);
    ctx->pc = 0x231B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B58u;
    // 0x231b5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x231B58u, 0x231B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B60u;
label_231b60:
    // 0x231b60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231B60u;
    {
        const bool branch_taken_0x231b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B60u;
        // 0x231b64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b60) {
            ctx->pc = 0x231B74u;
            goto label_231b74;
        }
    }
    ctx->pc = 0x231B68u;
label_231b68:
    // 0x231b68: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x231B68u;
    SET_GPR_U32(ctx, 31, 0x231B70u);
    ctx->pc = 0x231B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B68u;
    // 0x231b6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x231B68u, 0x231B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B70u;
label_231b70:
    // 0x231b70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x231b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_231b74:
    // 0x231b74: 0xc08c58e  jal         func_231638
    ctx->pc = 0x231B74u;
    SET_GPR_U32(ctx, 31, 0x231B7Cu);
    ctx->pc = 0x231B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B74u;
    // 0x231b78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x231B74u, 0x231B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B7Cu;
label_231b7c:
    // 0x231b7c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x231b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231b80: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x231b80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x231b84: 0x24c62c18  addiu       $a2, $a2, 0x2C18
    ctx->pc = 0x231b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x231b88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x231b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231b90: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x231b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x231b94: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x231b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x231b98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231b9c: 0x8c46064c  lw          $a2, 0x64C($v0)
    ctx->pc = 0x231b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
label_231ba0:
    // 0x231ba0: 0xc091390  jal         func_244E40
    ctx->pc = 0x231BA0u;
    SET_GPR_U32(ctx, 31, 0x231BA8u);
    ctx->pc = 0x244E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E40u, 0x231BA0u, 0x231BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BA8u;
label_231ba8:
    // 0x231ba8: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x231ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x231bac: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x231bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x231bb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x231bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x231bb4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x231bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x231bb8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x231BB8u;
    {
        const bool branch_taken_0x231bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231BB8u;
        // 0x231bbc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231bb8) {
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231BC0u;
label_231bc0:
    // 0x231bc0: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x231bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x231bc4: 0xc081546  jal         func_205518
    ctx->pc = 0x231BC4u;
    SET_GPR_U32(ctx, 31, 0x231BCCu);
    ctx->pc = 0x231BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231BC4u;
    // 0x231bc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x231BC4u, 0x231BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BCCu;
label_231bcc:
    // 0x231bcc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x231BCCu;
    {
        const bool branch_taken_0x231bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231BCCu;
        // 0x231bd0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231bcc) {
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231BD4u;
label_231bd4:
    // 0x231bd4: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x231bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x231bd8: 0xc081546  jal         func_205518
    ctx->pc = 0x231BD8u;
    SET_GPR_U32(ctx, 31, 0x231BE0u);
    ctx->pc = 0x231BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231BD8u;
    // 0x231bdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x231BD8u, 0x231BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BE0u;
label_231be0:
    // 0x231be0: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x231BE0u;
    SET_GPR_U32(ctx, 31, 0x231BE8u);
    ctx->pc = 0x231BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231BE0u;
    // 0x231be4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x231BE0u, 0x231BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BE8u;
label_231be8:
    // 0x231be8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x231be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bec: 0xc08c58e  jal         func_231638
    ctx->pc = 0x231BECu;
    SET_GPR_U32(ctx, 31, 0x231BF4u);
    ctx->pc = 0x231BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231BECu;
    // 0x231bf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x231BECu, 0x231BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BF4u;
label_231bf4:
    // 0x231bf4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x231bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231bf8: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x231bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x231bfc: 0x24c62c18  addiu       $a2, $a2, 0x2C18
    ctx->pc = 0x231bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x231c00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x231c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231c08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x231c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_231c0c:
    // 0x231c0c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x231c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_231c10:
    // 0x231c10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231c14: 0xc091390  jal         func_244E40
    ctx->pc = 0x231C14u;
    SET_GPR_U32(ctx, 31, 0x231C1Cu);
    ctx->pc = 0x231C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C14u;
    // 0x231c18: 0x8c46064c  lw          $a2, 0x64C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E40u, 0x231C14u, 0x231C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C1Cu;
label_231c1c:
    // 0x231c1c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x231C1Cu;
    {
        const bool branch_taken_0x231c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c1c) {
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231C24u;
label_231c24:
    // 0x231c24: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x231c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x231c28: 0x8c6211fc  lw          $v0, 0x11FC($v1)
    ctx->pc = 0x231c28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x231c2c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x231c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x231c30: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x231C30u;
    {
        const bool branch_taken_0x231c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c30) {
            ctx->pc = 0x231C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231C30u;
            // 0x231c34: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231C38u;
    // 0x231c38: 0xc08c5b2  jal         func_2316C8
    ctx->pc = 0x231C38u;
    SET_GPR_U32(ctx, 31, 0x231C40u);
    ctx->pc = 0x231C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C38u;
    // 0x231c3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2316C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2316C8u, 0x231C38u, 0x231C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C40u;
label_231c40:
    // 0x231c40: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x231C40u;
    {
        const bool branch_taken_0x231c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c40) {
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231C48u;
label_231c48:
    // 0x231c48: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x231C48u;
    SET_GPR_U32(ctx, 31, 0x231C50u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x231C48u, 0x231C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C50u;
label_231c50:
    // 0x231c50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x231c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x231c54: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x231C54u;
    {
        const bool branch_taken_0x231c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x231C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C54u;
        // 0x231c58: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c54) {
            ctx->pc = 0x231C80u;
            goto label_231c80;
        }
    }
    ctx->pc = 0x231C5Cu;
    // 0x231c5c: 0x8c6211fc  lw          $v0, 0x11FC($v1)
    ctx->pc = 0x231c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4604)));
    // 0x231c60: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x231c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x231c64: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x231C64u;
    {
        const bool branch_taken_0x231c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c64) {
            ctx->pc = 0x231C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231C64u;
            // 0x231c68: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231C6Cu;
    // 0x231c6c: 0xc091378  jal         func_244DE0
    ctx->pc = 0x231C6Cu;
    SET_GPR_U32(ctx, 31, 0x231C74u);
    ctx->pc = 0x244DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244DE0u, 0x231C6Cu, 0x231C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C74u;
label_231c74:
    // 0x231c74: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x231c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x231c78: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x231C78u;
    {
        const bool branch_taken_0x231c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231c78) {
            ctx->pc = 0x231C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231C78u;
            // 0x231c7c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231C80u;
label_231c80:
    // 0x231c80: 0xc08c5ec  jal         func_2317B0
    ctx->pc = 0x231C80u;
    SET_GPR_U32(ctx, 31, 0x231C88u);
    ctx->pc = 0x231C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C80u;
    // 0x231c84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317B0u, 0x231C80u, 0x231C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C88u;
label_231c88:
    // 0x231c88: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x231C88u;
    {
        const bool branch_taken_0x231c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c88) {
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231C90u;
label_231c90:
    // 0x231c90: 0x8f82a0cc  lw          $v0, -0x5F34($gp)
    ctx->pc = 0x231c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942924)));
    // 0x231c94: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x231c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x231c98: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x231C98u;
    {
        const bool branch_taken_0x231c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C98u;
        // 0x231c9c: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c98) {
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231CA0u;
    // 0x231ca0: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x231ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x231ca4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x231ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x231ca8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x231ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x231cac: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x231cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x231cb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231CB0u;
    {
        const bool branch_taken_0x231cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CB0u;
        // 0x231cb4: 0x2c550001  sltiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cb0) {
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231CB8u;
label_231cb8:
    // 0x231cb8: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x231cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x231cbc: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x231cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x231cc0: 0xac621210  sw          $v0, 0x1210($v1)
    ctx->pc = 0x231cc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1FC1210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC1210u, _value); } while (0);
label_231cc4:
    // 0x231cc4: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x231CC4u;
    {
        const bool branch_taken_0x231cc4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x231CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CC4u;
        // 0x231cc8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cc4) {
            ctx->pc = 0x231CF0u;
            goto label_231cf0;
        }
    }
    ctx->pc = 0x231CCCu;
    // 0x231ccc: 0xc091298  jal         func_244A60
    ctx->pc = 0x231CCCu;
    SET_GPR_U32(ctx, 31, 0x231CD4u);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x231CCCu, 0x231CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CD4u;
label_231cd4:
    // 0x231cd4: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x231cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x231cd8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x231cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x231cdc: 0x244211f8  addiu       $v0, $v0, 0x11F8
    ctx->pc = 0x231cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x231ce0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x231ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x231ce4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x231ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x231ce8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x231ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x231cec: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x231cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_231cf0:
    // 0x231cf0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x231cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x231cf4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x231cf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x231cf8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x231cf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231cfc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x231cfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231d00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231d04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231d08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x231D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D0Cu;
        // 0x231d10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231D14u;
}
