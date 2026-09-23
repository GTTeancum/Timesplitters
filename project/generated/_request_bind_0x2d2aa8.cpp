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

// Function: _request_bind
// Address: 0x2d2aa8 - 0x2d2b58
void _request_bind_0x2d2aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_bind_0x2d2aa8");
#endif

    switch (ctx->pc) {
        case 0x2d2accu: goto label_2d2acc;
        case 0x2d2af8u: goto label_2d2af8;
        default: break;
    }

    ctx->pc = 0x2d2aa8u;

    // 0x2d2aa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2aac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2d2aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d2ab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d2ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2ab4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d2ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2abc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d2abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d2ac0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d2ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d2ac4: 0xc0b49e8  jal         func_2D27A0
    ctx->pc = 0x2D2AC4u;
    SET_GPR_U32(ctx, 31, 0x2D2ACCu);
    ctx->pc = 0x2D2AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2AC4u;
    // 0x2d2ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D27A0u, 0x2D2AC4u, 0x2D2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2ACCu;
label_2d2acc:
    // 0x2d2acc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d2accu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ad0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2d2ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2d2ad4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2d2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d2ad8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2adc: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2d2adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2d2ae0: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x2d2ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x2d2ae4: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2d2ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x2d2ae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d2ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2aec: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x2d2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x2d2af0: 0xc0b4a96  jal         func_2D2A58
    ctx->pc = 0x2D2AF0u;
    SET_GPR_U32(ctx, 31, 0x2D2AF8u);
    ctx->pc = 0x2D2AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2AF0u;
    // 0x2d2af4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2A58u, 0x2D2AF0u, 0x2D2AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2AF8u;
label_2d2af8:
    // 0x2d2af8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d2af8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2afc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2AFCu;
    {
        const bool branch_taken_0x2d2afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2afc) {
            ctx->pc = 0x2D2B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2AFCu;
            // 0x2d2b00: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B14u;
            goto label_2d2b14;
        }
    }
    ctx->pc = 0x2D2B04u;
    // 0x2d2b04: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x2d2b04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x2d2b08: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x2d2b08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x2d2b0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2B0Cu;
    {
        const bool branch_taken_0x2d2b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B0Cu;
        // 0x2d2b10: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b0c) {
            ctx->pc = 0x2D2B24u;
            goto label_2d2b24;
        }
    }
    ctx->pc = 0x2D2B14u;
label_2d2b14:
    // 0x2d2b14: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2d2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d2b18: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x2d2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x2d2b1c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x2d2b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2d2b20: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x2d2b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_2d2b24:
    // 0x2d2b24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d2b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b28: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d2b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2b2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d2b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2b30: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x2d2b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2d2b34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d2b34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2b38: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2d2b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d2b3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2d2b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d2b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d2b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2b48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d2b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d2b4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b50: 0x80b48c4  j           func_2D2310
    ctx->pc = 0x2D2B50u;
    ctx->pc = 0x2D2B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2B50u;
    // 0x2d2b54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2310u;
    isceSifSendCmd_0x2d2310(rdram, ctx, runtime); return;
    ctx->pc = 0x2D2B58u;
}
