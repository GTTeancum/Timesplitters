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

// Function: std_menugetmargins
// Address: 0x22d698 - 0x22d7c0
void std_menugetmargins_0x22d698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("std_menugetmargins_0x22d698");
#endif

    switch (ctx->pc) {
        case 0x22d6f8u: goto label_22d6f8;
        case 0x22d740u: goto label_22d740;
        default: break;
    }

    ctx->pc = 0x22d698u;

    // 0x22d698: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22d698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22d69c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x22d69cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x22d6a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22d6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22d6a4: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x22d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x22d6a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22d6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22d6ac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x22d6acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d6b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22d6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22d6b4: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x22d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22d6b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22d6bc: 0x6a403  sra         $s4, $a2, 16
    ctx->pc = 0x22d6bcu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 16));
    // 0x22d6c0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x22d6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22d6c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22d6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d6c8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x22d6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22d6cc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22d6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22d6d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22d6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22d6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22d6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22d6d8: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x22d6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x22d6dc: 0x18a0002d  blez        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x22D6DCu;
    {
        const bool branch_taken_0x22d6dc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x22D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6DCu;
        // 0x22d6e0: 0xa6430002  sh          $v1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6dc) {
            ctx->pc = 0x22D794u;
            goto label_22d794;
        }
    }
    ctx->pc = 0x22D6E4u;
    // 0x22d6e4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x22d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x22d6e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22d6e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d6ec: 0x24572c18  addiu       $s7, $v0, 0x2C18
    ctx->pc = 0x22d6ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x22d6f0: 0x2416012c  addiu       $s6, $zero, 0x12C
    ctx->pc = 0x22d6f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x22d6f4: 0x2415012b  addiu       $s5, $zero, 0x12B
    ctx->pc = 0x22d6f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
label_22d6f8:
    // 0x22d6f8: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x22d6f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x22d6fc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x22d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22d700: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22d700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22d704: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x22d704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x22d708: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x22d708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22d70c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x22D70Cu;
    {
        const bool branch_taken_0x22d70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D70Cu;
        // 0x22d710: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d70c) {
            ctx->pc = 0x22D748u;
            goto label_22d748;
        }
    }
    ctx->pc = 0x22D714u;
    // 0x22d714: 0x288204de  slti        $v0, $a0, 0x4DE
    ctx->pc = 0x22d714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1246) ? 1 : 0);
    // 0x22d718: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22D718u;
    {
        const bool branch_taken_0x22d718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D718u;
        // 0x22d71c: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d718) {
            ctx->pc = 0x22D738u;
            goto label_22d738;
        }
    }
    ctx->pc = 0x22D720u;
    // 0x22d720: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x22d720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22d724: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22d724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22d728: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x22d728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x22d72c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d730: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22d730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22d734: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x22d734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22d738:
    // 0x22d738: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x22D738u;
    SET_GPR_U32(ctx, 31, 0x22D740u);
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x22D738u, 0x22D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D740u;
label_22d740:
    // 0x22d740: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x22d740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22d744: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x22d744u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_22d748:
    // 0x22d748: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x22d748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x22d74c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22d74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22d750: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22D750u;
    {
        const bool branch_taken_0x22d750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D750u;
        // 0x22d754: 0x2a3102a  slt         $v0, $s5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d750) {
            ctx->pc = 0x22D75Cu;
            goto label_22d75c;
        }
    }
    ctx->pc = 0x22D758u;
    // 0x22d758: 0x2c2180a  movz        $v1, $s6, $v0
    ctx->pc = 0x22d758u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 22));
label_22d75c:
    // 0x22d75c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x22d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x22d760: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x22d760u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22d764: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x22d764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22d768: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x22d768u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22d76c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22D76Cu;
    {
        const bool branch_taken_0x22d76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D76Cu;
        // 0x22d770: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d76c) {
            ctx->pc = 0x22D778u;
            goto label_22d778;
        }
    }
    ctx->pc = 0x22D774u;
    // 0x22d774: 0xa6500000  sh          $s0, 0x0($s2)
    ctx->pc = 0x22d774u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 16));
label_22d778:
    // 0x22d778: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x22d778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x22d77c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x22d77cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x22d780: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22D780u;
    {
        const bool branch_taken_0x22d780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d780) {
            ctx->pc = 0x22D784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D780u;
            // 0x22d784: 0xa6440002  sh          $a0, 0x2($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D788u;
            goto label_22d788;
        }
    }
    ctx->pc = 0x22D788u;
label_22d788:
    // 0x22d788: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x22d788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x22d78c: 0x1660ffda  bnez        $s3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x22D78Cu;
    {
        const bool branch_taken_0x22d78c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D78Cu;
        // 0x22d790: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d78c) {
            ctx->pc = 0x22D6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d6f8;
        }
    }
    ctx->pc = 0x22D794u;
label_22d794:
    // 0x22d794: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22d794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22d798: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x22d798u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22d79c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x22d79cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d7a0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22d7a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d7a4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22d7a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d7a8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22d7a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d7ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22d7acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d7b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22d7b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22d7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x22D7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7B8u;
        // 0x22d7bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D7C0u;
}
