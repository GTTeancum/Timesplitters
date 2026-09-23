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

// Function: menuitemCalcSize
// Address: 0x20cac0 - 0x20cb50
void menuitemCalcSize_0x20cac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuitemCalcSize_0x20cac0");
#endif

    switch (ctx->pc) {
        case 0x20cae8u: goto label_20cae8;
        case 0x20cafcu: goto label_20cafc;
        default: break;
    }

    ctx->pc = 0x20cac0u;

    // 0x20cac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20cac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20cac4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20cac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20cac8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20cac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20cacc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20caccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cad0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20cad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20cad4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20cad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20cad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20cadc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x20cadcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20cae0: 0xc0832a4  jal         func_20CA90
    ctx->pc = 0x20CAE0u;
    SET_GPR_U32(ctx, 31, 0x20CAE8u);
    ctx->pc = 0x20CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAE0u;
    // 0x20cae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CA90u, 0x20CAE0u, 0x20CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAE8u;
label_20cae8:
    // 0x20cae8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20CAE8u;
    {
        const bool branch_taken_0x20cae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAE8u;
        // 0x20caec: 0x2a0204de  slti        $v0, $s0, 0x4DE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1246) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cae8) {
            ctx->pc = 0x20CB04u;
            goto label_20cb04;
        }
    }
    ctx->pc = 0x20CAF0u;
    // 0x20caf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20caf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20caf4: 0xc0832a8  jal         func_20CAA0
    ctx->pc = 0x20CAF4u;
    SET_GPR_U32(ctx, 31, 0x20CAFCu);
    ctx->pc = 0x20CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAF4u;
    // 0x20caf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CAA0u, 0x20CAF4u, 0x20CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAFCu;
label_20cafc:
    // 0x20cafc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20cafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb00: 0x2a0204de  slti        $v0, $s0, 0x4DE
    ctx->pc = 0x20cb00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1246) ? 1 : 0);
label_20cb04:
    // 0x20cb04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20CB04u;
    {
        const bool branch_taken_0x20cb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB04u;
        // 0x20cb08: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb04) {
            ctx->pc = 0x20CB2Cu;
            goto label_20cb2c;
        }
    }
    ctx->pc = 0x20CB0Cu;
    // 0x20cb0c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x20cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x20cb10: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x20cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x20cb14: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x20cb14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x20cb18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20cb1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20cb20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20cb24: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x20cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20cb28: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x20cb28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20cb2c:
    // 0x20cb2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20cb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20cb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20cb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20cb38: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x20cb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x20cb3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20cb3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cb40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20cb40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cb44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20cb44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cb48: 0x8080aa2  j           func_202A88
    ctx->pc = 0x20CB48u;
    ctx->pc = 0x20CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB48u;
    // 0x20cb4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    textSize_0x202a88(rdram, ctx, runtime); return;
    ctx->pc = 0x20CB50u;
}
