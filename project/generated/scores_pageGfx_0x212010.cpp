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

// Function: scores_pageGfx
// Address: 0x212010 - 0x212074
void scores_pageGfx_0x212010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scores_pageGfx_0x212010");
#endif

    ctx->pc = 0x212010u;

    // 0x212010: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x212010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x212014: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x212014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x212018: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x212018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x21201c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x21201cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x212020: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x212020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212024: 0x24633240  addiu       $v1, $v1, 0x3240
    ctx->pc = 0x212024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12864));
    // 0x212028: 0x8c84c4f0  lw          $a0, -0x3B10($a0)
    ctx->pc = 0x212028u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x21202c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x21202cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212030: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x212030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212034: 0x14850008  bne         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x212034u;
    {
        const bool branch_taken_0x212034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x212038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212034u;
        // 0x212038: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212034) {
            ctx->pc = 0x212058u;
            goto label_212058;
        }
    }
    ctx->pc = 0x21203Cu;
    // 0x21203c: 0x8f829dac  lw          $v0, -0x6254($gp)
    ctx->pc = 0x21203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
    // 0x212040: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x212040u;
    {
        const bool branch_taken_0x212040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x212040) {
            ctx->pc = 0x212050u;
            goto label_212050;
        }
    }
    ctx->pc = 0x212048u;
    // 0x212048: 0x80846aa  j           func_211AA8
    ctx->pc = 0x212048u;
    ctx->pc = 0x211AA8u;
    drawEscortCompleted_0x211aa8(rdram, ctx, runtime); return;
    ctx->pc = 0x212050u;
label_212050:
    // 0x212050: 0x808473a  j           func_211CE8
    ctx->pc = 0x212050u;
    ctx->pc = 0x211CE8u;
    drawEscortNotCompleted_0x211ce8(rdram, ctx, runtime); return;
    ctx->pc = 0x212058u;
label_212058:
    // 0x212058: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x212058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21205c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21205Cu;
    {
        const bool branch_taken_0x21205c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21205c) {
            ctx->pc = 0x21206Cu;
            goto label_21206c;
        }
    }
    ctx->pc = 0x212064u;
    // 0x212064: 0x808473c  j           func_211CF0
    ctx->pc = 0x212064u;
    ctx->pc = 0x211CF0u;
    drawLastStand_0x211cf0(rdram, ctx, runtime); return;
    ctx->pc = 0x21206Cu;
label_21206c:
    // 0x21206c: 0x8083968  j           func_20E5A0
    ctx->pc = 0x21206Cu;
    ctx->pc = 0x212070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21206Cu;
    // 0x212070: 0x94640004  lhu         $a0, 0x4($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5A0u;
    drawRankingsTable_0x20e5a0(rdram, ctx, runtime); return;
    ctx->pc = 0x212074u;
}
