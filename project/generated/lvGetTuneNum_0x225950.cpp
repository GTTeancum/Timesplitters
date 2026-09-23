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

// Function: lvGetTuneNum
// Address: 0x225950 - 0x225a6c
void lvGetTuneNum_0x225950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetTuneNum_0x225950");
#endif

    switch (ctx->pc) {
        case 0x225964u: goto label_225964;
        case 0x225984u: goto label_225984;
        case 0x2259e4u: goto label_2259e4;
        case 0x225a38u: goto label_225a38;
        default: break;
    }

    ctx->pc = 0x225950u;

    // 0x225950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225954: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x225954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x225958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22595c: 0xc080030  jal         func_2000C0
    ctx->pc = 0x22595Cu;
    SET_GPR_U32(ctx, 31, 0x225964u);
    ctx->pc = 0x225960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22595Cu;
    // 0x225960: 0x2484e758  addiu       $a0, $a0, -0x18A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2000C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2000C0u, 0x22595Cu, 0x225964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225964u;
label_225964:
    // 0x225964: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x225964u;
    {
        const bool branch_taken_0x225964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225964u;
        // 0x225968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225964) {
            ctx->pc = 0x225A60u;
            goto label_225a60;
        }
    }
    ctx->pc = 0x22596Cu;
    // 0x22596c: 0x8f859f70  lw          $a1, -0x6090($gp)
    ctx->pc = 0x22596cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x225970: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x225970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x225974: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x225974u;
    {
        const bool branch_taken_0x225974 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x225978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225974u;
        // 0x225978: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225974) {
            ctx->pc = 0x2259F0u;
            goto label_2259f0;
        }
    }
    ctx->pc = 0x22597Cu;
    // 0x22597c: 0xc094dc4  jal         func_253710
    ctx->pc = 0x22597Cu;
    SET_GPR_U32(ctx, 31, 0x225984u);
    ctx->pc = 0x225980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22597Cu;
    // 0x225980: 0x8f84a0d0  lw          $a0, -0x5F30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253710u, 0x22597Cu, 0x225984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225984u;
label_225984:
    // 0x225984: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x225984u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225988: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x225988u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x22598c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x22598Cu;
    {
        const bool branch_taken_0x22598c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22598Cu;
        // 0x225990: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22598c) {
            ctx->pc = 0x225A64u;
            goto label_225a64;
        }
    }
    ctx->pc = 0x225994u;
    // 0x225994: 0x94630008  lhu         $v1, 0x8($v1)
    ctx->pc = 0x225994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x225998: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x225998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22599c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x22599Cu;
    {
        const bool branch_taken_0x22599c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22599Cu;
        // 0x2259a0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22599c) {
            ctx->pc = 0x225A5Cu;
            goto label_225a5c;
        }
    }
    ctx->pc = 0x2259A4u;
    // 0x2259a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2259a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2259a8: 0x24420da0  addiu       $v0, $v0, 0xDA0
    ctx->pc = 0x2259a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x2259ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2259acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2259b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2259b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2259b4: 0x800008  jr          $a0
    ctx->pc = 0x2259B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2259BCu: goto label_2259bc;
            case 0x2259C4u: goto label_2259c4;
            case 0x2259CCu: goto label_2259cc;
            case 0x2259D4u: goto label_2259d4;
            case 0x2259DCu: goto label_2259dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2259B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2259BCu;
label_2259bc:
    // 0x2259bc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2259BCu;
    {
        const bool branch_taken_0x2259bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259BCu;
        // 0x2259c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259bc) {
            ctx->pc = 0x225A60u;
            goto label_225a60;
        }
    }
    ctx->pc = 0x2259C4u;
label_2259c4:
    // 0x2259c4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2259C4u;
    {
        const bool branch_taken_0x2259c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259C4u;
        // 0x2259c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259c4) {
            ctx->pc = 0x225A60u;
            goto label_225a60;
        }
    }
    ctx->pc = 0x2259CCu;
label_2259cc:
    // 0x2259cc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2259CCu;
    {
        const bool branch_taken_0x2259cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259CCu;
        // 0x2259d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259cc) {
            ctx->pc = 0x225A60u;
            goto label_225a60;
        }
    }
    ctx->pc = 0x2259D4u;
label_2259d4:
    // 0x2259d4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2259D4u;
    {
        const bool branch_taken_0x2259d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259D4u;
        // 0x2259d8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259d4) {
            ctx->pc = 0x225A60u;
            goto label_225a60;
        }
    }
    ctx->pc = 0x2259DCu;
label_2259dc:
    // 0x2259dc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2259DCu;
    {
        const bool branch_taken_0x2259dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259DCu;
        // 0x2259e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259dc) {
            ctx->pc = 0x225A60u;
            goto label_225a60;
        }
    }
    ctx->pc = 0x2259E4u;
label_2259e4:
    // 0x2259e4: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x2259e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2259e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2259E8u;
    {
        const bool branch_taken_0x2259e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259E8u;
        // 0x2259ec: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259e8) {
            ctx->pc = 0x225A60u;
            goto label_225a60;
        }
    }
    ctx->pc = 0x2259F0u;
label_2259f0:
    // 0x2259f0: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2259f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x2259f4: 0x24842c18  addiu       $a0, $a0, 0x2C18
    ctx->pc = 0x2259f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x2259f8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x2259f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x2259fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2259fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225a00: 0x84c23920  lh          $v0, 0x3920($a2)
    ctx->pc = 0x225a00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14624)));
    // 0x225a04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x225a08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x225a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225a0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x225a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x225a10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x225a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x225a14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x225a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225a18: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x225A18u;
    {
        const bool branch_taken_0x225a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A18u;
        // 0x225a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a18) {
            ctx->pc = 0x225A60u;
            goto label_225a60;
        }
    }
    ctx->pc = 0x225A20u;
    // 0x225a20: 0x24c83920  addiu       $t0, $a2, 0x3920
    ctx->pc = 0x225a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 14624));
    // 0x225a24: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x225a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a28: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x225a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a30: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x225a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a34: 0x0  nop
    ctx->pc = 0x225a34u;
    // NOP
label_225a38:
    // 0x225a38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x225a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x225a3c: 0x1047ffe9  beq         $v0, $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x225A3Cu;
    {
        const bool branch_taken_0x225a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x225A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A3Cu;
        // 0x225a40: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a3c) {
            ctx->pc = 0x2259E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2259e4;
        }
    }
    ctx->pc = 0x225A44u;
    // 0x225a44: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x225a44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x225a48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x225a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x225a4c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x225a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x225a50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x225a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225a54: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x225A54u;
    {
        const bool branch_taken_0x225a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x225A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A54u;
        // 0x225a58: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a54) {
            ctx->pc = 0x225A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225a38;
        }
    }
    ctx->pc = 0x225A5Cu;
label_225a5c:
    // 0x225a5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225a60:
    // 0x225a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225a64:
    // 0x225a64: 0x3e00008  jr          $ra
    ctx->pc = 0x225A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A64u;
        // 0x225a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225A6Cu;
}
