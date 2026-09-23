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

// Function: envelope_draw
// Address: 0x206d18 - 0x206e58
void envelope_draw_0x206d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("envelope_draw_0x206d18");
#endif

    switch (ctx->pc) {
        case 0x206d74u: goto label_206d74;
        case 0x206d94u: goto label_206d94;
        case 0x206db0u: goto label_206db0;
        case 0x206dccu: goto label_206dcc;
        case 0x206de8u: goto label_206de8;
        default: break;
    }

    ctx->pc = 0x206d18u;

    // 0x206d18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x206d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x206d1c: 0x24083480  addiu       $t0, $zero, 0x3480
    ctx->pc = 0x206d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x206d20: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x206d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x206d24: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x206d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x206d28: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x206d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x206d2c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x206d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x206d30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x206d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d34: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x206d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x206d38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x206d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x206d3c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x206d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x206d40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206d44: 0x96700004  lhu         $s0, 0x4($s3)
    ctx->pc = 0x206d44u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x206d48: 0x96720000  lhu         $s2, 0x0($s3)
    ctx->pc = 0x206d48u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x206d4c: 0x96760002  lhu         $s6, 0x2($s3)
    ctx->pc = 0x206d4cu;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x206d50: 0x96710006  lhu         $s1, 0x6($s3)
    ctx->pc = 0x206d50u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x206d54: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x206d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x206d58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d5c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d60: 0x2d18821  addu        $s1, $s6, $s1
    ctx->pc = 0x206d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x206d64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x206d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d68: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x206d68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d6c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x206D6Cu;
    SET_GPR_U32(ctx, 31, 0x206D74u);
    ctx->pc = 0x206D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D6Cu;
    // 0x206d70: 0x26550001  addiu       $s5, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x206D6Cu, 0x206D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D74u;
label_206d74:
    // 0x206d74: 0x2614ffff  addiu       $s4, $s0, -0x1
    ctx->pc = 0x206d74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x206d78: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x206d78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x206d7c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x206d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d88: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x206d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d8c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x206D8Cu;
    SET_GPR_U32(ctx, 31, 0x206D94u);
    ctx->pc = 0x206D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D8Cu;
    // 0x206d90: 0x35085c80  ori         $t0, $t0, 0x5C80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)23680);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x206D8Cu, 0x206D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D94u;
label_206d94:
    // 0x206d94: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x206d94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x206d98: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206da0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x206da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206da4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x206da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206da8: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x206DA8u;
    SET_GPR_U32(ctx, 31, 0x206DB0u);
    ctx->pc = 0x206DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DA8u;
    // 0x206dac: 0x35085c80  ori         $t0, $t0, 0x5C80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)23680);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x206DA8u, 0x206DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DB0u;
label_206db0:
    // 0x206db0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206db4: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x206db4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x206db8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x206db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dbc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x206dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dc0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x206dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dc4: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x206DC4u;
    SET_GPR_U32(ctx, 31, 0x206DCCu);
    ctx->pc = 0x206DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DC4u;
    // 0x206dc8: 0x35085c80  ori         $t0, $t0, 0x5C80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)23680);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x206DC4u, 0x206DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DCCu;
label_206dcc:
    // 0x206dcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dd0: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x206dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x206dd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x206dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dd8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x206dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ddc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x206ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206de0: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x206DE0u;
    SET_GPR_U32(ctx, 31, 0x206DE8u);
    ctx->pc = 0x206DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DE0u;
    // 0x206de4: 0x35085c80  ori         $t0, $t0, 0x5C80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)23680);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x206DE0u, 0x206DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DE8u;
label_206de8:
    // 0x206de8: 0x8f839b44  lw          $v1, -0x64BC($gp)
    ctx->pc = 0x206de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941508)));
    // 0x206dec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x206decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x206df0: 0x96670006  lhu         $a3, 0x6($s3)
    ctx->pc = 0x206df0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x206df4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206DF4u;
    {
        const bool branch_taken_0x206df4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x206df4) {
            ctx->pc = 0x206DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206DF4u;
            // 0x206df8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206DFCu;
            goto label_206dfc;
        }
    }
    ctx->pc = 0x206DFCu;
label_206dfc:
    // 0x206dfc: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x206dfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x206e00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e04: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x206e04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x206e08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x206e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e0c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x206e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x206e10: 0x3c086450  lui         $t0, 0x6450
    ctx->pc = 0x206e10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)25680 << 16));
    // 0x206e14: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x206e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x206e18: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x206e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x206e1c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x206e1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x206e20: 0x35081e80  ori         $t0, $t0, 0x1E80
    ctx->pc = 0x206e20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)7808);
    // 0x206e24: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x206e24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206e28: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x206e28u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x206e2c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x206e2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206e30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x206e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206e34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x206e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206e3c: 0x1012  mflo        $v0
    ctx->pc = 0x206e3cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206e40: 0x62b023  subu        $s6, $v1, $v0
    ctx->pc = 0x206e40u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206e44: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e48: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x206e48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206e4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x206e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e50: 0x80ae226  j           func_2B8898
    ctx->pc = 0x206E50u;
    ctx->pc = 0x206E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E50u;
    // 0x206e54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    dlDrawLine_0x2b8898(rdram, ctx, runtime); return;
    ctx->pc = 0x206E58u;
}
