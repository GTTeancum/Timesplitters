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

// Function: getGameModeOptions
// Address: 0x238f40 - 0x238fe8
void getGameModeOptions_0x238f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getGameModeOptions_0x238f40");
#endif

    switch (ctx->pc) {
        case 0x238f6cu: goto label_238f6c;
        case 0x238f7cu: goto label_238f7c;
        case 0x238f8cu: goto label_238f8c;
        case 0x238f9cu: goto label_238f9c;
        case 0x238facu: goto label_238fac;
        case 0x238fbcu: goto label_238fbc;
        case 0x238fccu: goto label_238fcc;
        default: break;
    }

    ctx->pc = 0x238f40u;

    // 0x238f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238f44: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x238f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x238f48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238f4c: 0x24422c98  addiu       $v0, $v0, 0x2C98
    ctx->pc = 0x238f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11416));
    // 0x238f50: 0x48140  sll         $s0, $a0, 5
    ctx->pc = 0x238f50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x238f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238f58: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x238f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x238f5c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x238f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x238f60: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x238f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238f64: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x238F64u;
    SET_GPR_U32(ctx, 31, 0x238F6Cu);
    ctx->pc = 0x238F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F64u;
    // 0x238f68: 0x24843838  addiu       $a0, $a0, 0x3838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x238F64u, 0x238F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F6Cu;
label_238f6c:
    // 0x238f6c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x238f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x238f70: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x238f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x238f74: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x238F74u;
    SET_GPR_U32(ctx, 31, 0x238F7Cu);
    ctx->pc = 0x238F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F74u;
    // 0x238f78: 0x24843860  addiu       $a0, $a0, 0x3860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x238F74u, 0x238F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F7Cu;
label_238f7c:
    // 0x238f7c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x238f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x238f80: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x238f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x238f84: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x238F84u;
    SET_GPR_U32(ctx, 31, 0x238F8Cu);
    ctx->pc = 0x238F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F84u;
    // 0x238f88: 0x248438d8  addiu       $a0, $a0, 0x38D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x238F84u, 0x238F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F8Cu;
label_238f8c:
    // 0x238f8c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x238f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x238f90: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x238f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x238f94: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x238F94u;
    SET_GPR_U32(ctx, 31, 0x238F9Cu);
    ctx->pc = 0x238F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F94u;
    // 0x238f98: 0x24843900  addiu       $a0, $a0, 0x3900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x238F94u, 0x238F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F9Cu;
label_238f9c:
    // 0x238f9c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x238f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x238fa0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x238fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x238fa4: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x238FA4u;
    SET_GPR_U32(ctx, 31, 0x238FACu);
    ctx->pc = 0x238FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238FA4u;
    // 0x238fa8: 0x24843928  addiu       $a0, $a0, 0x3928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x238FA4u, 0x238FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FACu;
label_238fac:
    // 0x238fac: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x238facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x238fb0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x238fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x238fb4: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x238FB4u;
    SET_GPR_U32(ctx, 31, 0x238FBCu);
    ctx->pc = 0x238FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238FB4u;
    // 0x238fb8: 0x24843990  addiu       $a0, $a0, 0x3990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x238FB4u, 0x238FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FBCu;
label_238fbc:
    // 0x238fbc: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x238fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x238fc0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x238fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x238fc4: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x238FC4u;
    SET_GPR_U32(ctx, 31, 0x238FCCu);
    ctx->pc = 0x238FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238FC4u;
    // 0x238fc8: 0x24843968  addiu       $a0, $a0, 0x3968 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x238FC4u, 0x238FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FCCu;
label_238fcc:
    // 0x238fcc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x238fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x238fd0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x238fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x238fd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238fd8: 0x248439b8  addiu       $a0, $a0, 0x39B8
    ctx->pc = 0x238fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14776));
    // 0x238fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238fe0: 0x808b0c2  j           func_22C308
    ctx->pc = 0x238FE0u;
    ctx->pc = 0x238FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238FE0u;
    // 0x238fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    gvSetValue_0x22c308(rdram, ctx, runtime); return;
    ctx->pc = 0x238FE8u;
}
