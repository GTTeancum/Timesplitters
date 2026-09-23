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

// Function: anim_SetModelview
// Address: 0x215720 - 0x2157e8
void anim_SetModelview_0x215720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("anim_SetModelview_0x215720");
#endif

    switch (ctx->pc) {
        case 0x21575cu: goto label_21575c;
        case 0x21577cu: goto label_21577c;
        case 0x2157a8u: goto label_2157a8;
        default: break;
    }

    ctx->pc = 0x215720u;

    // 0x215720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215724: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x215724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21572c: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x21572cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x215730: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x215730u;
    {
        const bool branch_taken_0x215730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215730u;
        // 0x215734: 0x8f839d48  lw          $v1, -0x62B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215730) {
            ctx->pc = 0x215788u;
            goto label_215788;
        }
    }
    ctx->pc = 0x215738u;
    // 0x215738: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x215738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x21573c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21573Cu;
    {
        const bool branch_taken_0x21573c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21573Cu;
        // 0x215740: 0x3c0401fb  lui         $a0, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21573c) {
            ctx->pc = 0x215764u;
            goto label_215764;
        }
    }
    ctx->pc = 0x215744u;
    // 0x215744: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x215744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x215748: 0x248437f0  addiu       $a0, $a0, 0x37F0
    ctx->pc = 0x215748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14320));
    // 0x21574c: 0x2485ffc0  addiu       $a1, $a0, -0x40
    ctx->pc = 0x21574cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x215750: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x215750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x215754: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x215754u;
    SET_GPR_U32(ctx, 31, 0x21575Cu);
    ctx->pc = 0x215758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215754u;
    // 0x215758: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x215754u, 0x21575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21575Cu;
label_21575c:
    // 0x21575c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21575Cu;
    {
        const bool branch_taken_0x21575c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21575Cu;
        // 0x215760: 0x8f829d48  lw          $v0, -0x62B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21575c) {
            ctx->pc = 0x2157ACu;
            goto label_2157ac;
        }
    }
    ctx->pc = 0x215764u;
label_215764:
    // 0x215764: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x215764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x215768: 0x248437f0  addiu       $a0, $a0, 0x37F0
    ctx->pc = 0x215768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14320));
    // 0x21576c: 0x2485ffc0  addiu       $a1, $a0, -0x40
    ctx->pc = 0x21576cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x215770: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x215770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x215774: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x215774u;
    SET_GPR_U32(ctx, 31, 0x21577Cu);
    ctx->pc = 0x215778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215774u;
    // 0x215778: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x215774u, 0x21577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21577Cu;
label_21577c:
    // 0x21577c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21577cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215780: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x215780u;
    {
        const bool branch_taken_0x215780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215780u;
        // 0x215784: 0xaf829d4c  sw          $v0, -0x62B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215780) {
            ctx->pc = 0x2157DCu;
            goto label_2157dc;
        }
    }
    ctx->pc = 0x215788u;
label_215788:
    // 0x215788: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x215788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x21578c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21578Cu;
    {
        const bool branch_taken_0x21578c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21578Cu;
        // 0x215790: 0x3c0401fb  lui         $a0, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21578c) {
            ctx->pc = 0x2157BCu;
            goto label_2157bc;
        }
    }
    ctx->pc = 0x215794u;
    // 0x215794: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x215794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x215798: 0x248437f0  addiu       $a0, $a0, 0x37F0
    ctx->pc = 0x215798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14320));
    // 0x21579c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x21579cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157a0: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2157A0u;
    SET_GPR_U32(ctx, 31, 0x2157A8u);
    ctx->pc = 0x2157A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2157A0u;
    // 0x2157a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2157A0u, 0x2157A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2157A8u;
label_2157a8:
    // 0x2157a8: 0x8f829d48  lw          $v0, -0x62B8($gp)
    ctx->pc = 0x2157a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942024)));
label_2157ac:
    // 0x2157ac: 0xaf809d4c  sw          $zero, -0x62B4($gp)
    ctx->pc = 0x2157acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942028), GPR_U32(ctx, 0));
    // 0x2157b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2157b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2157b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2157B4u;
    {
        const bool branch_taken_0x2157b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2157B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157B4u;
        // 0x2157b8: 0xaf829d48  sw          $v0, -0x62B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157b4) {
            ctx->pc = 0x2157DCu;
            goto label_2157dc;
        }
    }
    ctx->pc = 0x2157BCu;
label_2157bc:
    // 0x2157bc: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x2157bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x2157c0: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x2157c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2157c4: 0x248437b0  addiu       $a0, $a0, 0x37B0
    ctx->pc = 0x2157c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14256));
    // 0x2157c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2157c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2157cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2157ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157d0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2157d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2157d4: 0x80b5848  j           func_2D6120
    ctx->pc = 0x2157D4u;
    ctx->pc = 0x2157D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2157D4u;
    // 0x2157d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    sceVu0CopyMatrix_0x2d6120(rdram, ctx, runtime); return;
    ctx->pc = 0x2157DCu;
label_2157dc:
    // 0x2157dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2157dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2157e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2157E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2157E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157E0u;
        // 0x2157e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2157E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2157E8u;
}
