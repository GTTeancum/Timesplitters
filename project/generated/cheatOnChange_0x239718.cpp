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

// Function: cheatOnChange
// Address: 0x239718 - 0x2397ac
void cheatOnChange_0x239718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cheatOnChange_0x239718");
#endif

    ctx->pc = 0x239718u;

    // 0x239718: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x239718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23971c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x23971cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239720: 0x24422d98  addiu       $v0, $v0, 0x2D98
    ctx->pc = 0x239720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11672));
    // 0x239724: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x239724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x239728: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x239728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x23972c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x23972cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x239730: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x239730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x239734: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x239734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239738: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x239738u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x23973c: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x23973cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x239740: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x239740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x239744: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x239744u;
    {
        const bool branch_taken_0x239744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239744u;
        // 0x239748: 0x8f859f50  lw          $a1, -0x60B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239744) {
            ctx->pc = 0x239758u;
            goto label_239758;
        }
    }
    ctx->pc = 0x23974Cu;
    // 0x23974c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x239750: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x239750u;
    {
        const bool branch_taken_0x239750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239750u;
        // 0x239754: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239750) {
            ctx->pc = 0x239780u;
            goto label_239780;
        }
    }
    ctx->pc = 0x239758u;
label_239758:
    // 0x239758: 0x308200c0  andi        $v0, $a0, 0xC0
    ctx->pc = 0x239758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
    // 0x23975c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23975Cu;
    {
        const bool branch_taken_0x23975c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23975c) {
            ctx->pc = 0x239760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23975Cu;
            // 0x239760: 0x30821f00  andi        $v0, $a0, 0x1F00 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x239770u;
            goto label_239770;
        }
    }
    ctx->pc = 0x239764u;
    // 0x239764: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x239764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x239768: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x239768u;
    {
        const bool branch_taken_0x239768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239768u;
        // 0x23976c: 0x3442ff3f  ori         $v0, $v0, 0xFF3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65343);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239768) {
            ctx->pc = 0x239780u;
            goto label_239780;
        }
    }
    ctx->pc = 0x239770u;
label_239770:
    // 0x239770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239770u;
    {
        const bool branch_taken_0x239770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239770u;
        // 0x239774: 0x8f859f50  lw          $a1, -0x60B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239770) {
            ctx->pc = 0x239788u;
            goto label_239788;
        }
    }
    ctx->pc = 0x239778u;
    // 0x239778: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x239778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23977c: 0x3442e0ff  ori         $v0, $v0, 0xE0FF
    ctx->pc = 0x23977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57599);
label_239780:
    // 0x239780: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x239780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x239784: 0xaf859f50  sw          $a1, -0x60B0($gp)
    ctx->pc = 0x239784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942544), GPR_U32(ctx, 5));
label_239788:
    // 0x239788: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x239788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23978c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23978Cu;
    {
        const bool branch_taken_0x23978c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23978Cu;
        // 0x239790: 0x41027  nor         $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23978c) {
            ctx->pc = 0x2397A0u;
            goto label_2397a0;
        }
    }
    ctx->pc = 0x239794u;
    // 0x239794: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x239794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x239798: 0x3e00008  jr          $ra
    ctx->pc = 0x239798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239798u;
        // 0x23979c: 0xaf859f50  sw          $a1, -0x60B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942544), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2397A0u;
label_2397a0:
    // 0x2397a0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2397a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2397a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2397A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2397A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397A4u;
        // 0x2397a8: 0xaf859f50  sw          $a1, -0x60B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942544), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2397A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2397ACu;
}
