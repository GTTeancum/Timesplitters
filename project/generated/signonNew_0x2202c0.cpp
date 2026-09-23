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

// Function: signonNew
// Address: 0x2202c0 - 0x22035c
void signonNew_0x2202c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonNew_0x2202c0");
#endif

    switch (ctx->pc) {
        case 0x2202dcu: goto label_2202dc;
        case 0x220300u: goto label_220300;
        case 0x220308u: goto label_220308;
        case 0x220310u: goto label_220310;
        case 0x220318u: goto label_220318;
        default: break;
    }

    ctx->pc = 0x2202c0u;

    // 0x2202c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2202c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2202c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2202c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2202c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2202c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2202cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2202ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2202d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2202d4: 0xc088090  jal         func_220240
    ctx->pc = 0x2202D4u;
    SET_GPR_U32(ctx, 31, 0x2202DCu);
    ctx->pc = 0x2202D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202D4u;
    // 0x2202d8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220240u, 0x2202D4u, 0x2202DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202DCu;
label_2202dc:
    // 0x2202dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2202dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202e0: 0x6200017  bltz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2202E0u;
    {
        const bool branch_taken_0x2202e0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2202E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202E0u;
        // 0x2202e4: 0x24020b78  addiu       $v0, $zero, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202e0) {
            ctx->pc = 0x220340u;
            goto label_220340;
        }
    }
    ctx->pc = 0x2202E8u;
    // 0x2202e8: 0x8f909dd8  lw          $s0, -0x6228($gp)
    ctx->pc = 0x2202e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x2202ec: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2202ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2202f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2202f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2202f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2202f8: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x2202F8u;
    SET_GPR_U32(ctx, 31, 0x220300u);
    ctx->pc = 0x2202FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202F8u;
    // 0x2202fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x2202F8u, 0x220300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220300u;
label_220300:
    // 0x220300: 0xc087efc  jal         func_21FBF0
    ctx->pc = 0x220300u;
    SET_GPR_U32(ctx, 31, 0x220308u);
    ctx->pc = 0x220304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220300u;
    // 0x220304: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FBF0u, 0x220300u, 0x220308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220308u;
label_220308:
    // 0x220308: 0xc088082  jal         func_220208
    ctx->pc = 0x220308u;
    SET_GPR_U32(ctx, 31, 0x220310u);
    ctx->pc = 0x22030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220308u;
    // 0x22030c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220208u, 0x220308u, 0x220310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220310u;
label_220310:
    // 0x220310: 0xc088020  jal         func_220080
    ctx->pc = 0x220310u;
    SET_GPR_U32(ctx, 31, 0x220318u);
    ctx->pc = 0x220314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220310u;
    // 0x220314: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220080u, 0x220310u, 0x220318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220318u;
label_220318:
    // 0x220318: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x220318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22031c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x22031cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x220320: 0x2442e1c8  addiu       $v0, $v0, -0x1E38
    ctx->pc = 0x220320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x220324: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x220324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220328: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x220328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22032c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22032cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220330: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x220330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x220334: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x220334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220338: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x220338u;
    {
        const bool branch_taken_0x220338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220338u;
        // 0x22033c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220338) {
            ctx->pc = 0x220344u;
            goto label_220344;
        }
    }
    ctx->pc = 0x220340u;
label_220340:
    // 0x220340: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x220340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_220344:
    // 0x220344: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x220344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220348: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x220348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22034c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22034cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220354: 0x3e00008  jr          $ra
    ctx->pc = 0x220354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220354u;
        // 0x220358: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22035Cu;
}
