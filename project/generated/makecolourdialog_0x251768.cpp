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

// Function: makecolourdialog
// Address: 0x251768 - 0x251888
void makecolourdialog_0x251768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makecolourdialog_0x251768");
#endif

    switch (ctx->pc) {
        case 0x2517b0u: goto label_2517b0;
        case 0x251820u: goto label_251820;
        case 0x251858u: goto label_251858;
        default: break;
    }

    ctx->pc = 0x251768u;

    // 0x251768: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x251768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25176c: 0x3c0b0025  lui         $t3, 0x25
    ctx->pc = 0x25176cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37 << 16));
    // 0x251770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251774: 0x256bfb00  addiu       $t3, $t3, -0x500
    ctx->pc = 0x251774u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294966016));
    // 0x251778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x251778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25177c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x251780: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x251780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x251784: 0x8f92a158  lw          $s2, -0x5EA8($gp)
    ctx->pc = 0x251784u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x251788: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x251788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x25178c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x251790: 0x2406009e  addiu       $a2, $zero, 0x9E
    ctx->pc = 0x251790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x251794: 0x8f91a15c  lw          $s1, -0x5EA4($gp)
    ctx->pc = 0x251794u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x251798: 0x24070104  addiu       $a3, $zero, 0x104
    ctx->pc = 0x251798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x25179c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25179cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2517a0: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2517a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2517a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2517a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2517a8: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x2517A8u;
    SET_GPR_U32(ctx, 31, 0x2517B0u);
    ctx->pc = 0x2517ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2517A8u;
    // 0x2517ac: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x2517A8u, 0x2517B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2517B0u;
label_2517b0:
    // 0x2517b0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2517b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2517b4: 0x8f849354  lw          $a0, -0x6CAC($gp)
    ctx->pc = 0x2517b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2517b8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2517b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2517bc: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2517bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2517c0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2517c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2517c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2517c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2517c8: 0x244271a0  addiu       $v0, $v0, 0x71A0
    ctx->pc = 0x2517c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29088));
    // 0x2517cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2517ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2517d0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2517d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2517d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2517d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2517d8: 0x26310037  addiu       $s1, $s1, 0x37
    ctx->pc = 0x2517d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 55));
    // 0x2517dc: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x2517dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x2517e0: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x2517e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2517e4: 0x8c620da4  lw          $v0, 0xDA4($v1)
    ctx->pc = 0x2517e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3492)));
    // 0x2517e8: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x2517e8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x2517ec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2517ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2517f0: 0x3c0b0025  lui         $t3, 0x25
    ctx->pc = 0x2517f0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37 << 16));
    // 0x2517f4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2517f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2517f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2517f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2517fc: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x2517fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x251800: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x251800u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x251804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251808: 0x256b12b0  addiu       $t3, $t3, 0x12B0
    ctx->pc = 0x251808u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4784));
    // 0x25180c: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x25180cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x251810: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x251810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x251814: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x251814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251818: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x251818u;
    SET_GPR_U32(ctx, 31, 0x251820u);
    ctx->pc = 0x25181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251818u;
    // 0x25181c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x251818u, 0x251820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251820u;
label_251820:
    // 0x251820: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x251820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x251824: 0x2652010a  addiu       $s2, $s2, 0x10A
    ctx->pc = 0x251824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 266));
    // 0x251828: 0x3c0b0025  lui         $t3, 0x25
    ctx->pc = 0x251828u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37 << 16));
    // 0x25182c: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x25182cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x251830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251834: 0x122c03  sra         $a1, $s2, 16
    ctx->pc = 0x251834u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 16));
    // 0x251838: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x251838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25183c: 0x256b1600  addiu       $t3, $t3, 0x1600
    ctx->pc = 0x25183cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 5632));
    // 0x251840: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x251840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x251844: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x251844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x251848: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x251848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25184c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25184cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251850: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x251850u;
    SET_GPR_U32(ctx, 31, 0x251858u);
    ctx->pc = 0x251854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251850u;
    // 0x251854: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x251850u, 0x251858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251858u;
label_251858:
    // 0x251858: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x251858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
    // 0x25185c: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x25185cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x251860: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x251860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x251864: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x251864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251868: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x251868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x25186c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25186cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251870: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x251870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251874: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x251874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251878: 0x1010c3  sra         $v0, $s0, 3
    ctx->pc = 0x251878u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 3));
    // 0x25187c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25187cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251880: 0x3e00008  jr          $ra
    ctx->pc = 0x251880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251880u;
        // 0x251884: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251888u;
}
