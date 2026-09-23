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

// Function: signonDeleteTick
// Address: 0x2328e8 - 0x232d48
void signonDeleteTick_0x2328e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonDeleteTick_0x2328e8");
#endif

    switch (ctx->pc) {
        case 0x232950u: goto label_232950;
        case 0x232974u: goto label_232974;
        case 0x232994u: goto label_232994;
        case 0x23299cu: goto label_23299c;
        case 0x2329b0u: goto label_2329b0;
        case 0x2329c4u: goto label_2329c4;
        case 0x232a00u: goto label_232a00;
        case 0x232a2cu: goto label_232a2c;
        case 0x232a50u: goto label_232a50;
        case 0x232a7cu: goto label_232a7c;
        case 0x232a88u: goto label_232a88;
        case 0x232ab8u: goto label_232ab8;
        case 0x232accu: goto label_232acc;
        case 0x232af4u: goto label_232af4;
        case 0x232b18u: goto label_232b18;
        case 0x232b38u: goto label_232b38;
        case 0x232b40u: goto label_232b40;
        case 0x232b54u: goto label_232b54;
        case 0x232b64u: goto label_232b64;
        case 0x232b90u: goto label_232b90;
        case 0x232bb8u: goto label_232bb8;
        case 0x232bc4u: goto label_232bc4;
        case 0x232be4u: goto label_232be4;
        case 0x232bf8u: goto label_232bf8;
        case 0x232c0cu: goto label_232c0c;
        case 0x232c14u: goto label_232c14;
        case 0x232c20u: goto label_232c20;
        case 0x232c48u: goto label_232c48;
        case 0x232c5cu: goto label_232c5c;
        case 0x232c68u: goto label_232c68;
        case 0x232c90u: goto label_232c90;
        case 0x232ca8u: goto label_232ca8;
        case 0x232cbcu: goto label_232cbc;
        case 0x232cd8u: goto label_232cd8;
        case 0x232cfcu: goto label_232cfc;
        case 0x232d0cu: goto label_232d0c;
        default: break;
    }

    ctx->pc = 0x2328e8u;

    // 0x2328e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2328e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2328ec: 0x9383b75b  lbu         $v1, -0x48A5($gp)
    ctx->pc = 0x2328ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948699)));
    // 0x2328f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2328f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2328f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2328f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2328f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2328f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2328fc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2328fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x232900: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x232900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232904: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x232904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x232908: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x232908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23290c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x232910: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x232910u;
    {
        const bool branch_taken_0x232910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232910u;
        // 0x232914: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232910) {
            ctx->pc = 0x232CFCu;
            goto label_232cfc;
        }
    }
    ctx->pc = 0x232918u;
    // 0x232918: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x232918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x23291c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23291cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232920: 0x24421b30  addiu       $v0, $v0, 0x1B30
    ctx->pc = 0x232920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6960));
    // 0x232924: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232928: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x232928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23292c: 0x800008  jr          $a0
    ctx->pc = 0x23292Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232934u: goto label_232934;
            case 0x2329A8u: goto label_2329a8;
            case 0x232BDCu: goto label_232bdc;
            case 0x232C9Cu: goto label_232c9c;
            case 0x232CB4u: goto label_232cb4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23292Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x232934u;
label_232934:
    // 0x232934: 0x9383b759  lbu         $v1, -0x48A7($gp)
    ctx->pc = 0x232934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948697)));
    // 0x232938: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x232938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x23293c: 0x2442e1c8  addiu       $v0, $v0, -0x1E38
    ctx->pc = 0x23293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x232940: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x232940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x232944: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232948: 0xc09136a  jal         func_244DA8
    ctx->pc = 0x232948u;
    SET_GPR_U32(ctx, 31, 0x232950u);
    ctx->pc = 0x23294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232948u;
    // 0x23294c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244DA8u, 0x232948u, 0x232950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232950u;
label_232950:
    // 0x232950: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x232950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232954: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x232954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x232958: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x232958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x23295c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x23295cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x232960: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232964: 0x26101960  addiu       $s0, $s0, 0x1960
    ctx->pc = 0x232964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6496));
    // 0x232968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23296c: 0xc0881e4  jal         func_220790
    ctx->pc = 0x23296Cu;
    SET_GPR_U32(ctx, 31, 0x232974u);
    ctx->pc = 0x232970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23296Cu;
    // 0x232970: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220790u, 0x23296Cu, 0x232974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232974u;
label_232974:
    // 0x232974: 0x8e25076c  lw          $a1, 0x76C($s1)
    ctx->pc = 0x232974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1900)));
    // 0x232978: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x232978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23297c: 0x8f88b74c  lw          $t0, -0x48B4($gp)
    ctx->pc = 0x23297cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x232980: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x232980u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232984: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x232984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x232988: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23298c: 0xc0912ca  jal         func_244B28
    ctx->pc = 0x23298Cu;
    SET_GPR_U32(ctx, 31, 0x232994u);
    ctx->pc = 0x232990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23298Cu;
    // 0x232990: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244B28u, 0x23298Cu, 0x232994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232994u;
label_232994:
    // 0x232994: 0xc09133c  jal         func_244CF0
    ctx->pc = 0x232994u;
    SET_GPR_U32(ctx, 31, 0x23299Cu);
    ctx->pc = 0x232998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232994u;
    // 0x232998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244CF0u, 0x232994u, 0x23299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23299Cu;
label_23299c:
    // 0x23299c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2329a0: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x2329A0u;
    {
        const bool branch_taken_0x2329a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329A0u;
        // 0x2329a4: 0xa382b75b  sb          $v0, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329a0) {
            ctx->pc = 0x232CFCu;
            goto label_232cfc;
        }
    }
    ctx->pc = 0x2329A8u;
label_2329a8:
    // 0x2329a8: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x2329A8u;
    SET_GPR_U32(ctx, 31, 0x2329B0u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x2329A8u, 0x2329B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2329B0u;
label_2329b0:
    // 0x2329b0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2329b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2329b4: 0x144300d1  bne         $v0, $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x2329B4u;
    {
        const bool branch_taken_0x2329b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2329b4) {
            ctx->pc = 0x232CFCu;
            goto label_232cfc;
        }
    }
    ctx->pc = 0x2329BCu;
    // 0x2329bc: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x2329BCu;
    SET_GPR_U32(ctx, 31, 0x2329C4u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x2329BCu, 0x2329C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2329C4u;
label_2329c4:
    // 0x2329c4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2329c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2329c8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2329c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2329cc: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2329CCu;
    {
        const bool branch_taken_0x2329cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329CCu;
        // 0x2329d0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329cc) {
            ctx->pc = 0x232C54u;
            goto label_232c54;
        }
    }
    ctx->pc = 0x2329D4u;
    // 0x2329d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2329d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2329d8: 0x24421b50  addiu       $v0, $v0, 0x1B50
    ctx->pc = 0x2329d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6992));
    // 0x2329dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2329dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2329e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2329e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2329e4: 0x800008  jr          $a0
    ctx->pc = 0x2329E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2329ECu: goto label_2329ec;
            case 0x232B5Cu: goto label_232b5c;
            case 0x232B6Cu: goto label_232b6c;
            case 0x232C54u: goto label_232c54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2329E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2329ECu;
label_2329ec:
    // 0x2329ec: 0x3c052131  lui         $a1, 0x2131
    ctx->pc = 0x2329ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8497 << 16));
    // 0x2329f0: 0x8f84b74c  lw          $a0, -0x48B4($gp)
    ctx->pc = 0x2329f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x2329f4: 0x34a55354  ori         $a1, $a1, 0x5354
    ctx->pc = 0x2329f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21332);
    // 0x2329f8: 0xc0823cc  jal         func_208F30
    ctx->pc = 0x2329F8u;
    SET_GPR_U32(ctx, 31, 0x232A00u);
    ctx->pc = 0x2329FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2329F8u;
    // 0x2329fc: 0x3406b790  ori         $a2, $zero, 0xB790 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46992);
    ctx->in_delay_slot = false;
    ctx->pc = 0x208F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208F30u, 0x2329F8u, 0x232A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A00u;
label_232a00:
    // 0x232a00: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x232A00u;
    {
        const bool branch_taken_0x232a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A00u;
        // 0x232a04: 0x9386b759  lbu         $a2, -0x48A7($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948697)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a00) {
            ctx->pc = 0x232B4Cu;
            goto label_232b4c;
        }
    }
    ctx->pc = 0x232A08u;
    // 0x232a08: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x232a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x232a0c: 0x2442e1c8  addiu       $v0, $v0, -0x1E38
    ctx->pc = 0x232a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x232a10: 0x8f91b74c  lw          $s1, -0x48B4($gp)
    ctx->pc = 0x232a10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x232a14: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x232a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x232a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232a1c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x232a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x232a20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x232a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x232a24: 0x5083001e  beql        $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x232A24u;
    {
        const bool branch_taken_0x232a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x232a24) {
            ctx->pc = 0x232A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232A24u;
            // 0x232a28: 0x24050b78  addiu       $a1, $zero, 0xB78 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232AA0u;
            goto label_232aa0;
        }
    }
    ctx->pc = 0x232A2Cu;
label_232a2c:
    // 0x232a2c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x232a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232a30: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x232a30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
    // 0x232a34: 0x26312c18  addiu       $s1, $s1, 0x2C18
    ctx->pc = 0x232a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11288));
    // 0x232a38: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x232a38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x232a3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232a40: 0x26101b20  addiu       $s0, $s0, 0x1B20
    ctx->pc = 0x232a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6944));
    // 0x232a44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x232a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x232a48: 0xc090d0a  jal         func_243428
    ctx->pc = 0x232A48u;
    SET_GPR_U32(ctx, 31, 0x232A50u);
    ctx->pc = 0x232A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A48u;
    // 0x232a4c: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x232A48u, 0x232A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A50u;
label_232a50:
    // 0x232a50: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x232a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232a54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x232a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a58: 0x8e460288  lw          $a2, 0x288($s2)
    ctx->pc = 0x232a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 648)));
    // 0x232a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232a64: 0x8e450284  lw          $a1, 0x284($s2)
    ctx->pc = 0x232a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 644)));
    // 0x232a68: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x232a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x232a6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232a70: 0x8c490290  lw          $t1, 0x290($v0)
    ctx->pc = 0x232a70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x232a74: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x232A74u;
    SET_GPR_U32(ctx, 31, 0x232A7Cu);
    ctx->pc = 0x232A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A74u;
    // 0x232a78: 0x8c48028c  lw          $t0, 0x28C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x232A74u, 0x232A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A7Cu;
label_232a7c:
    // 0x232a7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x232a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a80: 0xc08c58e  jal         func_231638
    ctx->pc = 0x232A80u;
    SET_GPR_U32(ctx, 31, 0x232A88u);
    ctx->pc = 0x232A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A80u;
    // 0x232a84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x232A80u, 0x232A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A88u;
label_232a88:
    // 0x232a88: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x232a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232a8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x232a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232a94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232a98: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x232A98u;
    {
        const bool branch_taken_0x232a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A98u;
        // 0x232a9c: 0x711821  addu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a98) {
            ctx->pc = 0x232C84u;
            goto label_232c84;
        }
    }
    ctx->pc = 0x232AA0u;
label_232aa0:
    // 0x232aa0: 0x8f829dd8  lw          $v0, -0x6228($gp)
    ctx->pc = 0x232aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x232aa4: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x232aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x232aa8: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x232aa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x232aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x232aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ab0: 0xc0880d8  jal         func_220360
    ctx->pc = 0x232AB0u;
    SET_GPR_U32(ctx, 31, 0x232AB8u);
    ctx->pc = 0x232AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AB0u;
    // 0x232ab4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220360u, 0x232AB0u, 0x232AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AB8u;
label_232ab8:
    // 0x232ab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232abc: 0x600ffdb  bltz        $s0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x232ABCu;
    {
        const bool branch_taken_0x232abc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x232AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232ABCu;
        // 0x232ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232abc) {
            ctx->pc = 0x232A2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232a2c;
        }
    }
    ctx->pc = 0x232AC4u;
    // 0x232ac4: 0xc0881ce  jal         func_220738
    ctx->pc = 0x232AC4u;
    SET_GPR_U32(ctx, 31, 0x232ACCu);
    ctx->pc = 0x232AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AC4u;
    // 0x232ac8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220738u, 0x232AC4u, 0x232ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232ACCu;
label_232acc:
    // 0x232acc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x232accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x232ad0: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232AD0u;
    {
        const bool branch_taken_0x232ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x232AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AD0u;
        // 0x232ad4: 0x8f84b74c  lw          $a0, -0x48B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ad0) {
            ctx->pc = 0x232AE4u;
            goto label_232ae4;
        }
    }
    ctx->pc = 0x232AD8u;
    // 0x232ad8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x232ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232adc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x232adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x232ae0: 0x8f84b74c  lw          $a0, -0x48B4($gp)
    ctx->pc = 0x232ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
label_232ae4:
    // 0x232ae4: 0x3c052131  lui         $a1, 0x2131
    ctx->pc = 0x232ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8497 << 16));
    // 0x232ae8: 0x34a55354  ori         $a1, $a1, 0x5354
    ctx->pc = 0x232ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21332);
    // 0x232aec: 0xc0823ba  jal         func_208EE8
    ctx->pc = 0x232AECu;
    SET_GPR_U32(ctx, 31, 0x232AF4u);
    ctx->pc = 0x232AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AECu;
    // 0x232af0: 0x3406b790  ori         $a2, $zero, 0xB790 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46992);
    ctx->in_delay_slot = false;
    ctx->pc = 0x208EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208EE8u, 0x232AECu, 0x232AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AF4u;
label_232af4:
    // 0x232af4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x232af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232af8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x232af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x232afc: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x232afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x232b00: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x232b00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x232b04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232b08: 0x26101960  addiu       $s0, $s0, 0x1960
    ctx->pc = 0x232b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6496));
    // 0x232b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232b10: 0xc0881e4  jal         func_220790
    ctx->pc = 0x232B10u;
    SET_GPR_U32(ctx, 31, 0x232B18u);
    ctx->pc = 0x232B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B10u;
    // 0x232b14: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220790u, 0x232B10u, 0x232B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B18u;
label_232b18:
    // 0x232b18: 0x8e250768  lw          $a1, 0x768($s1)
    ctx->pc = 0x232b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1896)));
    // 0x232b1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x232b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b20: 0x8f88b74c  lw          $t0, -0x48B4($gp)
    ctx->pc = 0x232b20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x232b24: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x232b24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b28: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x232b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x232b2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b30: 0xc091302  jal         func_244C08
    ctx->pc = 0x232B30u;
    SET_GPR_U32(ctx, 31, 0x232B38u);
    ctx->pc = 0x232B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B30u;
    // 0x232b34: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244C08u, 0x232B30u, 0x232B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B38u;
label_232b38:
    // 0x232b38: 0xc09133c  jal         func_244CF0
    ctx->pc = 0x232B38u;
    SET_GPR_U32(ctx, 31, 0x232B40u);
    ctx->pc = 0x232B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B38u;
    // 0x232b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244CF0u, 0x232B38u, 0x232B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B40u;
label_232b40:
    // 0x232b40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x232b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232b44: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x232B44u;
    {
        const bool branch_taken_0x232b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B44u;
        // 0x232b48: 0xa382b75b  sb          $v0, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b44) {
            ctx->pc = 0x232CFCu;
            goto label_232cfc;
        }
    }
    ctx->pc = 0x232B4Cu;
label_232b4c:
    // 0x232b4c: 0xc08c5f6  jal         func_2317D8
    ctx->pc = 0x232B4Cu;
    SET_GPR_U32(ctx, 31, 0x232B54u);
    ctx->pc = 0x232B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B4Cu;
    // 0x232b50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317D8u, 0x232B4Cu, 0x232B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B54u;
label_232b54:
    // 0x232b54: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x232B54u;
    {
        const bool branch_taken_0x232b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B54u;
        // 0x232b58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b54) {
            ctx->pc = 0x232C94u;
            goto label_232c94;
        }
    }
    ctx->pc = 0x232B5Cu;
label_232b5c:
    // 0x232b5c: 0xc08c5f6  jal         func_2317D8
    ctx->pc = 0x232B5Cu;
    SET_GPR_U32(ctx, 31, 0x232B64u);
    ctx->pc = 0x232B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B5Cu;
    // 0x232b60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317D8u, 0x232B5Cu, 0x232B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B64u;
label_232b64:
    // 0x232b64: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x232B64u;
    {
        const bool branch_taken_0x232b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B64u;
        // 0x232b68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b64) {
            ctx->pc = 0x232C94u;
            goto label_232c94;
        }
    }
    ctx->pc = 0x232B6Cu;
label_232b6c:
    // 0x232b6c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x232b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232b70: 0x3c12002f  lui         $s2, 0x2F
    ctx->pc = 0x232b70u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
    // 0x232b74: 0x26522c18  addiu       $s2, $s2, 0x2C18
    ctx->pc = 0x232b74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x232b78: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x232b78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x232b7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232b80: 0x261019b0  addiu       $s0, $s0, 0x19B0
    ctx->pc = 0x232b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6576));
    // 0x232b84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x232b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x232b88: 0xc090d0a  jal         func_243428
    ctx->pc = 0x232B88u;
    SET_GPR_U32(ctx, 31, 0x232B90u);
    ctx->pc = 0x232B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B88u;
    // 0x232b8c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x232B88u, 0x232B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B90u;
label_232b90:
    // 0x232b90: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x232b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232b94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x232b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b98: 0x8e250294  lw          $a1, 0x294($s1)
    ctx->pc = 0x232b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
    // 0x232b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ba0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232ba4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x232ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x232ba8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232bac: 0x8c48029c  lw          $t0, 0x29C($v0)
    ctx->pc = 0x232bacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x232bb0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x232BB0u;
    SET_GPR_U32(ctx, 31, 0x232BB8u);
    ctx->pc = 0x232BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BB0u;
    // 0x232bb4: 0x8c470298  lw          $a3, 0x298($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x232BB0u, 0x232BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BB8u;
label_232bb8:
    // 0x232bb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x232bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232bbc: 0xc08c58e  jal         func_231638
    ctx->pc = 0x232BBCu;
    SET_GPR_U32(ctx, 31, 0x232BC4u);
    ctx->pc = 0x232BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BBCu;
    // 0x232bc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x232BBCu, 0x232BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BC4u;
label_232bc4:
    // 0x232bc4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x232bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232bc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232bcc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x232bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232bd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232bd4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x232BD4u;
    {
        const bool branch_taken_0x232bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BD4u;
        // 0x232bd8: 0x721821  addu        $v1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bd4) {
            ctx->pc = 0x232C84u;
            goto label_232c84;
        }
    }
    ctx->pc = 0x232BDCu;
label_232bdc:
    // 0x232bdc: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x232BDCu;
    SET_GPR_U32(ctx, 31, 0x232BE4u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x232BDCu, 0x232BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BE4u;
label_232be4:
    // 0x232be4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x232be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x232be8: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x232BE8u;
    {
        const bool branch_taken_0x232be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x232be8) {
            ctx->pc = 0x232CFCu;
            goto label_232cfc;
        }
    }
    ctx->pc = 0x232BF0u;
    // 0x232bf0: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x232BF0u;
    SET_GPR_U32(ctx, 31, 0x232BF8u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x232BF0u, 0x232BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BF8u;
label_232bf8:
    // 0x232bf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x232bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232bfc: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x232BFCu;
    {
        const bool branch_taken_0x232bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x232bfc) {
            ctx->pc = 0x232C54u;
            goto label_232c54;
        }
    }
    ctx->pc = 0x232C04u;
    // 0x232c04: 0xc0881ec  jal         func_2207B0
    ctx->pc = 0x232C04u;
    SET_GPR_U32(ctx, 31, 0x232C0Cu);
    ctx->pc = 0x232C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C04u;
    // 0x232c08: 0x9384b759  lbu         $a0, -0x48A7($gp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948697)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2207B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2207B0u, 0x232C04u, 0x232C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C0Cu;
label_232c0c:
    // 0x232c0c: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x232C0Cu;
    SET_GPR_U32(ctx, 31, 0x232C14u);
    ctx->pc = 0x232C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C0Cu;
    // 0x232c10: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x232C0Cu, 0x232C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C14u;
label_232c14:
    // 0x232c14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x232c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c18: 0xc08c58e  jal         func_231638
    ctx->pc = 0x232C18u;
    SET_GPR_U32(ctx, 31, 0x232C20u);
    ctx->pc = 0x232C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C18u;
    // 0x232c1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x232C18u, 0x232C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C20u;
label_232c20:
    // 0x232c20: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x232c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232c24: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x232c24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x232c28: 0x24c62c18  addiu       $a2, $a2, 0x2C18
    ctx->pc = 0x232c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x232c2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232c34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x232c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232c38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x232c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x232c3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232c40: 0xc091390  jal         func_244E40
    ctx->pc = 0x232C40u;
    SET_GPR_U32(ctx, 31, 0x232C48u);
    ctx->pc = 0x232C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C40u;
    // 0x232c44: 0x8c46064c  lw          $a2, 0x64C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E40u, 0x232C40u, 0x232C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C48u;
label_232c48:
    // 0x232c48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x232c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x232c4c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x232C4Cu;
    {
        const bool branch_taken_0x232c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C4Cu;
        // 0x232c50: 0xa382b75b  sb          $v0, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c4c) {
            ctx->pc = 0x232CFCu;
            goto label_232cfc;
        }
    }
    ctx->pc = 0x232C54u;
label_232c54:
    // 0x232c54: 0xc0913ba  jal         func_244EE8
    ctx->pc = 0x232C54u;
    SET_GPR_U32(ctx, 31, 0x232C5Cu);
    ctx->pc = 0x232C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C54u;
    // 0x232c58: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE8u, 0x232C54u, 0x232C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C5Cu;
label_232c5c:
    // 0x232c5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x232c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c60: 0xc08c58e  jal         func_231638
    ctx->pc = 0x232C60u;
    SET_GPR_U32(ctx, 31, 0x232C68u);
    ctx->pc = 0x232C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C60u;
    // 0x232c64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x232C60u, 0x232C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C68u;
label_232c68:
    // 0x232c68: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x232c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x232c6c: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x232c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x232c70: 0x24c62c18  addiu       $a2, $a2, 0x2C18
    ctx->pc = 0x232c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x232c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232c7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x232c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232c80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x232c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_232c84:
    // 0x232c84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232c88: 0xc091390  jal         func_244E40
    ctx->pc = 0x232C88u;
    SET_GPR_U32(ctx, 31, 0x232C90u);
    ctx->pc = 0x232C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C88u;
    // 0x232c8c: 0x8c46064c  lw          $a2, 0x64C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E40u, 0x232C88u, 0x232C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C90u;
label_232c90:
    // 0x232c90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x232c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_232c94:
    // 0x232c94: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x232C94u;
    {
        const bool branch_taken_0x232c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C94u;
        // 0x232c98: 0xa382b75b  sb          $v0, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c94) {
            ctx->pc = 0x232CFCu;
            goto label_232cfc;
        }
    }
    ctx->pc = 0x232C9Cu;
label_232c9c:
    // 0x232c9c: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x232c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x232ca0: 0xc081546  jal         func_205518
    ctx->pc = 0x232CA0u;
    SET_GPR_U32(ctx, 31, 0x232CA8u);
    ctx->pc = 0x232CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232CA0u;
    // 0x232ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x232CA0u, 0x232CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CA8u;
label_232ca8:
    // 0x232ca8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x232ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x232cac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x232CACu;
    {
        const bool branch_taken_0x232cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CACu;
        // 0x232cb0: 0xa383b75b  sb          $v1, -0x48A5($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232cac) {
            ctx->pc = 0x232CFCu;
            goto label_232cfc;
        }
    }
    ctx->pc = 0x232CB4u;
label_232cb4:
    // 0x232cb4: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x232CB4u;
    SET_GPR_U32(ctx, 31, 0x232CBCu);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x232CB4u, 0x232CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CBCu;
label_232cbc:
    // 0x232cbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x232cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232cc0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x232CC0u;
    {
        const bool branch_taken_0x232cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x232cc0) {
            ctx->pc = 0x232CD0u;
            goto label_232cd0;
        }
    }
    ctx->pc = 0x232CC8u;
    // 0x232cc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x232CC8u;
    {
        const bool branch_taken_0x232cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CC8u;
        // 0x232ccc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232cc8) {
            ctx->pc = 0x232CFCu;
            goto label_232cfc;
        }
    }
    ctx->pc = 0x232CD0u;
label_232cd0:
    // 0x232cd0: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x232CD0u;
    SET_GPR_U32(ctx, 31, 0x232CD8u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x232CD0u, 0x232CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CD8u;
label_232cd8:
    // 0x232cd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x232cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x232cdc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x232CDCu;
    {
        const bool branch_taken_0x232cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CDCu;
        // 0x232ce0: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232cdc) {
            ctx->pc = 0x232CFCu;
            goto label_232cfc;
        }
    }
    ctx->pc = 0x232CE4u;
    // 0x232ce4: 0x8c6211fc  lw          $v0, 0x11FC($v1)
    ctx->pc = 0x232ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4604)));
    // 0x232ce8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x232ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x232cec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x232CECu;
    {
        const bool branch_taken_0x232cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232cec) {
            ctx->pc = 0x232CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232CECu;
            // 0x232cf0: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232CFCu;
            goto label_232cfc;
        }
    }
    ctx->pc = 0x232CF4u;
    // 0x232cf4: 0xc08ca30  jal         func_2328C0
    ctx->pc = 0x232CF4u;
    SET_GPR_U32(ctx, 31, 0x232CFCu);
    ctx->pc = 0x232CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232CF4u;
    // 0x232cf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2328C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2328C0u, 0x232CF4u, 0x232CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CFCu;
label_232cfc:
    // 0x232cfc: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x232CFCu;
    {
        const bool branch_taken_0x232cfc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CFCu;
        // 0x232d00: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232cfc) {
            ctx->pc = 0x232D28u;
            goto label_232d28;
        }
    }
    ctx->pc = 0x232D04u;
    // 0x232d04: 0xc091298  jal         func_244A60
    ctx->pc = 0x232D04u;
    SET_GPR_U32(ctx, 31, 0x232D0Cu);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x232D04u, 0x232D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D0Cu;
label_232d0c:
    // 0x232d0c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x232d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x232d10: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x232d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x232d14: 0x244211f8  addiu       $v0, $v0, 0x11F8
    ctx->pc = 0x232d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x232d18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x232d18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x232d1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x232d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x232d20: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x232d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x232d24: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x232d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_232d28:
    // 0x232d28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x232d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x232d2c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x232d2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x232d30: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x232d30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232d34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x232d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232d38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x232d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232d40: 0x3e00008  jr          $ra
    ctx->pc = 0x232D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D40u;
        // 0x232d44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232D48u;
}
