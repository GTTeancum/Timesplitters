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

// Function: corruptLoadMessage
// Address: 0x2317d8 - 0x23189c
void corruptLoadMessage_0x2317d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("corruptLoadMessage_0x2317d8");
#endif

    switch (ctx->pc) {
        case 0x231818u: goto label_231818;
        case 0x231840u: goto label_231840;
        case 0x23184cu: goto label_23184c;
        case 0x23186cu: goto label_23186c;
        default: break;
    }

    ctx->pc = 0x2317d8u;

    // 0x2317d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2317d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2317dc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2317dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2317e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2317e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2317e4: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x2317e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
    // 0x2317e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2317e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2317ec: 0x26312c18  addiu       $s1, $s1, 0x2C18
    ctx->pc = 0x2317ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11288));
    // 0x2317f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2317f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2317f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2317f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2317f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2317f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2317fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2317fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x231800: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x231800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x231804: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x231804u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x231808: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x231808u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23180c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23180cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231810: 0xc090d0a  jal         func_243428
    ctx->pc = 0x231810u;
    SET_GPR_U32(ctx, 31, 0x231818u);
    ctx->pc = 0x231814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231810u;
    // 0x231814: 0x26101990  addiu       $s0, $s0, 0x1990 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x231810u, 0x231818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231818u;
label_231818:
    // 0x231818: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x231818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23181c: 0x8e460224  lw          $a2, 0x224($s2)
    ctx->pc = 0x23181cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x231820: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x231820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231828: 0x8e450220  lw          $a1, 0x220($s2)
    ctx->pc = 0x231828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x23182c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23182cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x231830: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x231830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x231834: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x231834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231838: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x231838u;
    SET_GPR_U32(ctx, 31, 0x231840u);
    ctx->pc = 0x23183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231838u;
    // 0x23183c: 0x8c680228  lw          $t0, 0x228($v1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x231838u, 0x231840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231840u;
label_231840:
    // 0x231840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x231840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231844: 0xc08c58e  jal         func_231638
    ctx->pc = 0x231844u;
    SET_GPR_U32(ctx, 31, 0x23184Cu);
    ctx->pc = 0x231848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231844u;
    // 0x231848: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x231844u, 0x23184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23184Cu;
label_23184c:
    // 0x23184c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231850: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x231850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231854: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x231854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x231858: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23185c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x231860: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231864: 0xc091390  jal         func_244E40
    ctx->pc = 0x231864u;
    SET_GPR_U32(ctx, 31, 0x23186Cu);
    ctx->pc = 0x231868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231864u;
    // 0x231868: 0x8c460650  lw          $a2, 0x650($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E40u, 0x231864u, 0x23186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23186Cu;
label_23186c:
    // 0x23186c: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23186cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x231870: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x231870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231874: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x231874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x231878: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x231878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23187c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23187cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x231880: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231884: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x231884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x231888: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23188c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23188cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231890: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x231890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1FC11FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC11FCu, _value); } while (0);
    // 0x231894: 0x3e00008  jr          $ra
    ctx->pc = 0x231894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231894u;
        // 0x231898: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23189Cu;
}
