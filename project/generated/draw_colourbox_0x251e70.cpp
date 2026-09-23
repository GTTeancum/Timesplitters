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

// Function: draw_colourbox
// Address: 0x251e70 - 0x251f0c
void draw_colourbox_0x251e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("draw_colourbox_0x251e70");
#endif

    switch (ctx->pc) {
        case 0x251ec8u: goto label_251ec8;
        default: break;
    }

    ctx->pc = 0x251e70u;

    // 0x251e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251e74: 0x8f83a224  lw          $v1, -0x5DDC($gp)
    ctx->pc = 0x251e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943268)));
    // 0x251e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251e7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x251e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e84: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x251e84u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x251e88: 0x2482ffc0  addiu       $v0, $a0, -0x40
    ctx->pc = 0x251e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x251e8c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x251E8Cu;
    {
        const bool branch_taken_0x251e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x251E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E8Cu;
        // 0x251e90: 0x2483ffc0  addiu       $v1, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e8c) {
            ctx->pc = 0x251ED0u;
            goto label_251ed0;
        }
    }
    ctx->pc = 0x251E94u;
    // 0x251e94: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x251e94u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251e98: 0x3c087f7f  lui         $t0, 0x7F7F
    ctx->pc = 0x251e98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32639 << 16));
    // 0x251e9c: 0x96070002  lhu         $a3, 0x2($s0)
    ctx->pc = 0x251e9cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x251ea0: 0x35087f80  ori         $t0, $t0, 0x7F80
    ctx->pc = 0x251ea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32640);
    // 0x251ea4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x251ea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x251ea8: 0x24c4fffe  addiu       $a0, $a2, -0x2
    ctx->pc = 0x251ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x251eac: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x251eacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x251eb0: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x251eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x251eb4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x251eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x251eb8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x251eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x251ebc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x251ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x251ec0: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x251EC0u;
    SET_GPR_U32(ctx, 31, 0x251EC8u);
    ctx->pc = 0x251EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251EC0u;
    // 0x251ec4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x251EC0u, 0x251EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251EC8u;
label_251ec8:
    // 0x251ec8: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x251ec8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x251ecc: 0x2483ffc0  addiu       $v1, $a0, -0x40
    ctx->pc = 0x251eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_251ed0:
    // 0x251ed0: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x251ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x251ed4: 0x24424040  addiu       $v0, $v0, 0x4040
    ctx->pc = 0x251ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16448));
    // 0x251ed8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x251ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x251edc: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x251edcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251ee0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251ee4: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x251ee4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x251ee8: 0x96070006  lhu         $a3, 0x6($s0)
    ctx->pc = 0x251ee8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x251eec: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x251eecu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x251ef0: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x251ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251ef4: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x251ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x251ef8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251efc: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x251efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x251f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251f04: 0x80ae108  j           func_2B8420
    ctx->pc = 0x251F04u;
    ctx->pc = 0x251F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F04u;
    // 0x251f08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    dlFillRectangle_0x2b8420(rdram, ctx, runtime); return;
    ctx->pc = 0x251F0Cu;
}
