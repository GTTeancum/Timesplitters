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

// Function: bagSecuredMessage
// Address: 0x26b430 - 0x26b534
void bagSecuredMessage_0x26b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bagSecuredMessage_0x26b430");
#endif

    switch (ctx->pc) {
        case 0x26b45cu: goto label_26b45c;
        case 0x26b470u: goto label_26b470;
        case 0x26b4bcu: goto label_26b4bc;
        default: break;
    }

    ctx->pc = 0x26b430u;

    // 0x26b430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26b430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26b434: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26b434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26b438: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b43c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26b43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26b440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26b440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26b444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b448: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26b448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26b44c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x26b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x26b450: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26b450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b454: 0xc088f98  jal         func_223E60
    ctx->pc = 0x26B454u;
    SET_GPR_U32(ctx, 31, 0x26B45Cu);
    ctx->pc = 0x26B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B454u;
    // 0x26b458: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x26B454u, 0x26B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B45Cu;
label_26b45c:
    // 0x26b45c: 0x8f889f74  lw          $t0, -0x608C($gp)
    ctx->pc = 0x26b45cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x26b460: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x26B460u;
    {
        const bool branch_taken_0x26b460 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x26B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B460u;
        // 0x26b464: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b460) {
            ctx->pc = 0x26B4DCu;
            goto label_26b4dc;
        }
    }
    ctx->pc = 0x26B468u;
    // 0x26b468: 0x2403071c  addiu       $v1, $zero, 0x71C
    ctx->pc = 0x26b468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x26b46c: 0x0  nop
    ctx->pc = 0x26b46cu;
    // NOP
label_26b470:
    // 0x26b470: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x26b470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x26b474: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x26b474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26b478: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x26b478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x26b47c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x26b47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26b480: 0x8cc20180  lw          $v0, 0x180($a2)
    ctx->pc = 0x26b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x26b484: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x26b484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x26b488: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x26b488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x26b48c: 0x5485000e  bnel        $a0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x26B48Cu;
    {
        const bool branch_taken_0x26b48c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x26b48c) {
            ctx->pc = 0x26B490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B48Cu;
            // 0x26b490: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B4C8u;
            goto label_26b4c8;
        }
    }
    ctx->pc = 0x26B494u;
    // 0x26b494: 0x1207000b  beq         $s0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x26B494u;
    {
        const bool branch_taken_0x26b494 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        ctx->pc = 0x26B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B494u;
        // 0x26b498: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b494) {
            ctx->pc = 0x26B4C4u;
            goto label_26b4c4;
        }
    }
    ctx->pc = 0x26B49Cu;
    // 0x26b49c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x26b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x26b4a0: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x26b4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x26b4a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x26b4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b4a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26b4ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26b4b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b4b4: 0xc0a01a4  jal         func_280690
    ctx->pc = 0x26B4B4u;
    SET_GPR_U32(ctx, 31, 0x26B4BCu);
    ctx->pc = 0x26B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B4B4u;
    // 0x26b4b8: 0x8c6511fc  lw          $a1, 0x11FC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280690u, 0x26B4B4u, 0x26B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4BCu;
label_26b4bc:
    // 0x26b4bc: 0x8f889f74  lw          $t0, -0x608C($gp)
    ctx->pc = 0x26b4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x26b4c0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x26b4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26b4c4:
    // 0x26b4c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26b4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26b4c8:
    // 0x26b4c8: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x26b4c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x26b4cc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x26B4CCu;
    {
        const bool branch_taken_0x26b4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4CCu;
        // 0x26b4d0: 0x2403071c  addiu       $v1, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4cc) {
            ctx->pc = 0x26B470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b470;
        }
    }
    ctx->pc = 0x26B4D4u;
    // 0x26b4d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26B4D4u;
    {
        const bool branch_taken_0x26b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4D4u;
        // 0x26b4d8: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4d4) {
            ctx->pc = 0x26B4E0u;
            goto label_26b4e0;
        }
    }
    ctx->pc = 0x26B4DCu;
label_26b4dc:
    // 0x26b4dc: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x26b4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_26b4e0:
    // 0x26b4e0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26B4E0u;
    {
        const bool branch_taken_0x26b4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4E0u;
        // 0x26b4e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4e0) {
            ctx->pc = 0x26B524u;
            goto label_26b524;
        }
    }
    ctx->pc = 0x26B4E8u;
    // 0x26b4e8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x26b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x26b4ec: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x26b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x26b4f0: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x26b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x26b4f4: 0x2404071c  addiu       $a0, $zero, 0x71C
    ctx->pc = 0x26b4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x26b4f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26b4fc: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x26b4fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26b500: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26b500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b504: 0x8f86b230  lw          $a2, -0x4DD0($gp)
    ctx->pc = 0x26b504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x26b508: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b50c: 0x8c451200  lw          $a1, 0x1200($v0)
    ctx->pc = 0x26b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4608)));
    // 0x26b510: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x26b510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x26b514: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26b514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26b518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b51c: 0x80a01a4  j           func_280690
    ctx->pc = 0x26B51Cu;
    ctx->pc = 0x26B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B51Cu;
    // 0x26b520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280690u;
    playerMessage_0x280690(rdram, ctx, runtime); return;
    ctx->pc = 0x26B524u;
label_26b524:
    // 0x26b524: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26b524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26b528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b52c: 0x3e00008  jr          $ra
    ctx->pc = 0x26B52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B52Cu;
        // 0x26b530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B534u;
}
