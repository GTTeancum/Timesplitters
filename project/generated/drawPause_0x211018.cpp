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

// Function: drawPause
// Address: 0x211018 - 0x2110bc
void drawPause_0x211018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawPause_0x211018");
#endif

    switch (ctx->pc) {
        case 0x211030u: goto label_211030;
        case 0x211044u: goto label_211044;
        case 0x21106cu: goto label_21106c;
        case 0x2110a4u: goto label_2110a4;
        default: break;
    }

    ctx->pc = 0x211018u;

    // 0x211018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21101c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x211020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x211024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x211028: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x211028u;
    SET_GPR_U32(ctx, 31, 0x211030u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x211028u, 0x211030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211030u;
label_211030:
    // 0x211030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x211030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211034: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x211034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x211038: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x211038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21103c: 0xc08089c  jal         func_202270
    ctx->pc = 0x21103Cu;
    SET_GPR_U32(ctx, 31, 0x211044u);
    ctx->pc = 0x211040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21103Cu;
    // 0x211040: 0x3200b  movn        $a0, $zero, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x21103Cu, 0x211044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211044u;
label_211044:
    // 0x211044: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x211044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x211048: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x211048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x21104c: 0x24842c18  addiu       $a0, $a0, 0x2C18
    ctx->pc = 0x21104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x211050: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x211050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211054: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x211054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211058: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x211058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21105c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211060: 0x8c501184  lw          $s0, 0x1184($v0)
    ctx->pc = 0x211060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4484)));
    // 0x211064: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211064u;
    SET_GPR_U32(ctx, 31, 0x21106Cu);
    ctx->pc = 0x211068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211064u;
    // 0x211068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211064u, 0x21106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21106Cu;
label_21106c:
    // 0x21106c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21106cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x211070: 0x24fc2  srl         $t1, $v0, 31
    ctx->pc = 0x211070u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211074: 0x246399f0  addiu       $v1, $v1, -0x6610
    ctx->pc = 0x211074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x211078: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x211078u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x21107c: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x21107cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x211080: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x211080u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
    // 0x211084: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x211084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x211088: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x211088u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x21108c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21108cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211090: 0x24085080  addiu       $t0, $zero, 0x5080
    ctx->pc = 0x211090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x211094: 0x24a5fff6  addiu       $a1, $a1, -0xA
    ctx->pc = 0x211094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x211098: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x211098u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x21109c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x21109Cu;
    SET_GPR_U32(ctx, 31, 0x2110A4u);
    ctx->pc = 0x2110A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21109Cu;
    // 0x2110a0: 0x892023  subu        $a0, $a0, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x21109Cu, 0x2110A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2110A4u;
label_2110a4:
    // 0x2110a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2110a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2110a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2110a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2110ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2110acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2110b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2110b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2110b4: 0x808089c  j           func_202270
    ctx->pc = 0x2110B4u;
    ctx->pc = 0x2110B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2110B4u;
    // 0x2110b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x2110BCu;
}
