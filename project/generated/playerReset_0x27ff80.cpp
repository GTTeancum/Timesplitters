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

// Function: playerReset
// Address: 0x27ff80 - 0x280014
void playerReset_0x27ff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerReset_0x27ff80");
#endif

    switch (ctx->pc) {
        case 0x27ffbcu: goto label_27ffbc;
        case 0x27ffd0u: goto label_27ffd0;
        case 0x27ffe8u: goto label_27ffe8;
        default: break;
    }

    ctx->pc = 0x27ff80u;

    // 0x27ff80: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x27ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x27ff84: 0x2403071c  addiu       $v1, $zero, 0x71C
    ctx->pc = 0x27ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x27ff88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27ff8c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27ff8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27ff90: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x27ff90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27ff94: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x27ff94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x27ff98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27ff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27ff9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ffa0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27ffa4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27ffa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ffa8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27ffac: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x27ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x27ffb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27ffb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ffb4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x27FFB4u;
    SET_GPR_U32(ctx, 31, 0x27FFBCu);
    ctx->pc = 0x27FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFB4u;
    // 0x27ffb8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x27FFB4u, 0x27FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFBCu;
label_27ffbc:
    // 0x27ffbc: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x27ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x27ffc0: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x27FFC0u;
    {
        const bool branch_taken_0x27ffc0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFC0u;
        // 0x27ffc4: 0xaf82b230  sw          $v0, -0x4DD0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffc0) {
            ctx->pc = 0x27FFFCu;
            goto label_27fffc;
        }
    }
    ctx->pc = 0x27FFC8u;
    // 0x27ffc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27ffc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ffcc: 0x0  nop
    ctx->pc = 0x27ffccu;
    // NOP
label_27ffd0:
    // 0x27ffd0: 0x8f90b230  lw          $s0, -0x4DD0($gp)
    ctx->pc = 0x27ffd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x27ffd4: 0x24040510  addiu       $a0, $zero, 0x510
    ctx->pc = 0x27ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    // 0x27ffd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ffdc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27ffdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27ffe0: 0xc08070e  jal         func_201C38
    ctx->pc = 0x27FFE0u;
    SET_GPR_U32(ctx, 31, 0x27FFE8u);
    ctx->pc = 0x27FFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFE0u;
    // 0x27ffe4: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x27FFE0u, 0x27FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFE8u;
label_27ffe8:
    // 0x27ffe8: 0x2652071c  addiu       $s2, $s2, 0x71C
    ctx->pc = 0x27ffe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1820));
    // 0x27ffec: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x27ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x27fff0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x27fff0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27fff4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x27FFF4u;
    {
        const bool branch_taken_0x27fff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFF4u;
        // 0x27fff8: 0xae020334  sw          $v0, 0x334($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fff4) {
            ctx->pc = 0x27FFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ffd0;
        }
    }
    ctx->pc = 0x27FFFCu;
label_27fffc:
    // 0x27fffc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27fffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280000: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x280000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280004: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x280004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x280008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28000c: 0x809fe02  j           func_27F808
    ctx->pc = 0x28000Cu;
    ctx->pc = 0x280010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28000Cu;
    // 0x280010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F808u;
    playerRestart_0x27f808(rdram, ctx, runtime); return;
    ctx->pc = 0x280014u;
}
