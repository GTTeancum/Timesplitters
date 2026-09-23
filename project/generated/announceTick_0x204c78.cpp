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

// Function: announceTick
// Address: 0x204c78 - 0x204ebc
void announceTick_0x204c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("announceTick_0x204c78");
#endif

    switch (ctx->pc) {
        case 0x204c9cu: goto label_204c9c;
        case 0x204d28u: goto label_204d28;
        case 0x204d30u: goto label_204d30;
        case 0x204d70u: goto label_204d70;
        case 0x204d78u: goto label_204d78;
        case 0x204db8u: goto label_204db8;
        case 0x204dc0u: goto label_204dc0;
        case 0x204df0u: goto label_204df0;
        case 0x204df8u: goto label_204df8;
        case 0x204e38u: goto label_204e38;
        case 0x204e40u: goto label_204e40;
        case 0x204e70u: goto label_204e70;
        case 0x204e78u: goto label_204e78;
        case 0x204ea4u: goto label_204ea4;
        default: break;
    }

    ctx->pc = 0x204c78u;

    // 0x204c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x204c7c: 0x8f839b00  lw          $v1, -0x6500($gp)
    ctx->pc = 0x204c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
    // 0x204c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x204c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x204c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x204c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x204c88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x204c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x204c8c: 0x461001b  bgez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x204C8Cu;
    {
        const bool branch_taken_0x204c8c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x204C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C8Cu;
        // 0x204c90: 0x8f909afc  lw          $s0, -0x6504($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c8c) {
            ctx->pc = 0x204CFCu;
            goto label_204cfc;
        }
    }
    ctx->pc = 0x204C94u;
    // 0x204c94: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x204C94u;
    SET_GPR_U32(ctx, 31, 0x204C9Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x204C94u, 0x204C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C9Cu;
label_204c9c:
    // 0x204c9c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x204C9Cu;
    {
        const bool branch_taken_0x204c9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x204CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C9Cu;
        // 0x204ca0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c9c) {
            ctx->pc = 0x204CB0u;
            goto label_204cb0;
        }
    }
    ctx->pc = 0x204CA4u;
    // 0x204ca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x204ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204ca8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x204CA8u;
    {
        const bool branch_taken_0x204ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CA8u;
        // 0x204cac: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ca8) {
            ctx->pc = 0x204CC4u;
            goto label_204cc4;
        }
    }
    ctx->pc = 0x204CB0u;
label_204cb0:
    // 0x204cb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x204cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x204cb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x204cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x204cb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x204cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204cbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x204cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x204cc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x204cc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_204cc4:
    // 0x204cc4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x204cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x204cc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x204cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204ccc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x204cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x204cd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x204cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x204cd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x204cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x204cd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x204cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x204cdc: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x204cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x204ce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x204ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204ce4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x204ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x204ce8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x204ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x204cec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x204cecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x204cf0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x204cf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x204cf4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x204cf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x204cf8: 0xaf839b00  sw          $v1, -0x6500($gp)
    ctx->pc = 0x204cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941440), GPR_U32(ctx, 3));
label_204cfc:
    // 0x204cfc: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x204cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x204d00: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x204d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204d04: 0x1c400068  bgtz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x204D04u;
    {
        const bool branch_taken_0x204d04 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x204D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D04u;
        // 0x204d08: 0xaf829b00  sw          $v0, -0x6500($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d04) {
            ctx->pc = 0x204EA8u;
            goto label_204ea8;
        }
    }
    ctx->pc = 0x204D0Cu;
    // 0x204d0c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x204d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x204d10: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x204d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204d14: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x204D14u;
    {
        const bool branch_taken_0x204d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D14u;
        // 0x204d18: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d14) {
            ctx->pc = 0x204D58u;
            goto label_204d58;
        }
    }
    ctx->pc = 0x204D1Cu;
    // 0x204d1c: 0x8f829afc  lw          $v0, -0x6504($gp)
    ctx->pc = 0x204d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
    // 0x204d20: 0x1602005a  bne         $s0, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x204D20u;
    {
        const bool branch_taken_0x204d20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x204D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D20u;
        // 0x204d24: 0x2411001a  addiu       $s1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d20) {
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204D28u;
label_204d28:
    // 0x204d28: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x204D28u;
    SET_GPR_U32(ctx, 31, 0x204D30u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x204D28u, 0x204D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D30u;
label_204d30:
    // 0x204d30: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x204d30u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x204d34: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204D34u;
    {
        const bool branch_taken_0x204d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x204d34) {
            ctx->pc = 0x204D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204D34u;
            // 0x204d38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x204D3Cu;
            goto label_204d3c;
        }
    }
    ctx->pc = 0x204D3Cu;
label_204d3c:
    // 0x204d3c: 0x8f829afc  lw          $v0, -0x6504($gp)
    ctx->pc = 0x204d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
    // 0x204d40: 0x1810  mfhi        $v1
    ctx->pc = 0x204d40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x204d44: 0x2470012e  addiu       $s0, $v1, 0x12E
    ctx->pc = 0x204d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 302));
    // 0x204d48: 0x1202fff7  beq         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x204D48u;
    {
        const bool branch_taken_0x204d48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x204d48) {
            ctx->pc = 0x204D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204d28;
        }
    }
    ctx->pc = 0x204D50u;
    // 0x204d50: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x204D50u;
    {
        const bool branch_taken_0x204d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204d50) {
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204D58u;
label_204d58:
    // 0x204d58: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x204D58u;
    {
        const bool branch_taken_0x204d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D58u;
        // 0x204d5c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d58) {
            ctx->pc = 0x204DA0u;
            goto label_204da0;
        }
    }
    ctx->pc = 0x204D60u;
    // 0x204d60: 0x8f829afc  lw          $v0, -0x6504($gp)
    ctx->pc = 0x204d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
    // 0x204d64: 0x16020049  bne         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x204D64u;
    {
        const bool branch_taken_0x204d64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x204D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D64u;
        // 0x204d68: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d64) {
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204D6Cu;
    // 0x204d6c: 0x0  nop
    ctx->pc = 0x204d6cu;
    // NOP
label_204d70:
    // 0x204d70: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x204D70u;
    SET_GPR_U32(ctx, 31, 0x204D78u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x204D70u, 0x204D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D78u;
label_204d78:
    // 0x204d78: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x204d78u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x204d7c: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204D7Cu;
    {
        const bool branch_taken_0x204d7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x204d7c) {
            ctx->pc = 0x204D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204D7Cu;
            // 0x204d80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x204D84u;
            goto label_204d84;
        }
    }
    ctx->pc = 0x204D84u;
label_204d84:
    // 0x204d84: 0x8f829afc  lw          $v0, -0x6504($gp)
    ctx->pc = 0x204d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
    // 0x204d88: 0x1810  mfhi        $v1
    ctx->pc = 0x204d88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x204d8c: 0x24700148  addiu       $s0, $v1, 0x148
    ctx->pc = 0x204d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
    // 0x204d90: 0x1202fff7  beq         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x204D90u;
    {
        const bool branch_taken_0x204d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x204d90) {
            ctx->pc = 0x204D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204d70;
        }
    }
    ctx->pc = 0x204D98u;
    // 0x204d98: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x204D98u;
    {
        const bool branch_taken_0x204d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204d98) {
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204DA0u;
label_204da0:
    // 0x204da0: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x204DA0u;
    {
        const bool branch_taken_0x204da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DA0u;
        // 0x204da4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204da0) {
            ctx->pc = 0x204DDCu;
            goto label_204ddc;
        }
    }
    ctx->pc = 0x204DA8u;
    // 0x204da8: 0x8f829afc  lw          $v0, -0x6504($gp)
    ctx->pc = 0x204da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
    // 0x204dac: 0x16020037  bne         $s0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x204DACu;
    {
        const bool branch_taken_0x204dac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x204dac) {
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204DB4u;
    // 0x204db4: 0x0  nop
    ctx->pc = 0x204db4u;
    // NOP
label_204db8:
    // 0x204db8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x204DB8u;
    SET_GPR_U32(ctx, 31, 0x204DC0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x204DB8u, 0x204DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DC0u;
label_204dc0:
    // 0x204dc0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x204dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x204dc4: 0x8f839afc  lw          $v1, -0x6504($gp)
    ctx->pc = 0x204dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
    // 0x204dc8: 0x24500155  addiu       $s0, $v0, 0x155
    ctx->pc = 0x204dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 341));
    // 0x204dcc: 0x1203fffa  beq         $s0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x204DCCu;
    {
        const bool branch_taken_0x204dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x204dcc) {
            ctx->pc = 0x204DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204db8;
        }
    }
    ctx->pc = 0x204DD4u;
    // 0x204dd4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x204DD4u;
    {
        const bool branch_taken_0x204dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204dd4) {
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204DDCu;
label_204ddc:
    // 0x204ddc: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x204DDCu;
    {
        const bool branch_taken_0x204ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DDCu;
        // 0x204de0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ddc) {
            ctx->pc = 0x204E20u;
            goto label_204e20;
        }
    }
    ctx->pc = 0x204DE4u;
    // 0x204de4: 0x8f829afc  lw          $v0, -0x6504($gp)
    ctx->pc = 0x204de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
    // 0x204de8: 0x16020028  bne         $s0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x204DE8u;
    {
        const bool branch_taken_0x204de8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x204DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DE8u;
        // 0x204dec: 0x24110018  addiu       $s1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204de8) {
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204DF0u;
label_204df0:
    // 0x204df0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x204DF0u;
    SET_GPR_U32(ctx, 31, 0x204DF8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x204DF0u, 0x204DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DF8u;
label_204df8:
    // 0x204df8: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x204df8u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x204dfc: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204DFCu;
    {
        const bool branch_taken_0x204dfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x204dfc) {
            ctx->pc = 0x204E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204DFCu;
            // 0x204e00: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x204E04u;
            goto label_204e04;
        }
    }
    ctx->pc = 0x204E04u;
label_204e04:
    // 0x204e04: 0x8f829afc  lw          $v0, -0x6504($gp)
    ctx->pc = 0x204e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
    // 0x204e08: 0x1810  mfhi        $v1
    ctx->pc = 0x204e08u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x204e0c: 0x24700165  addiu       $s0, $v1, 0x165
    ctx->pc = 0x204e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 357));
    // 0x204e10: 0x1202fff7  beq         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x204E10u;
    {
        const bool branch_taken_0x204e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x204e10) {
            ctx->pc = 0x204DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204df0;
        }
    }
    ctx->pc = 0x204E18u;
    // 0x204e18: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x204E18u;
    {
        const bool branch_taken_0x204e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e18) {
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204E20u;
label_204e20:
    // 0x204e20: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x204E20u;
    {
        const bool branch_taken_0x204e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E20u;
        // 0x204e24: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e20) {
            ctx->pc = 0x204E5Cu;
            goto label_204e5c;
        }
    }
    ctx->pc = 0x204E28u;
    // 0x204e28: 0x8f829afc  lw          $v0, -0x6504($gp)
    ctx->pc = 0x204e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
    // 0x204e2c: 0x16020017  bne         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x204E2Cu;
    {
        const bool branch_taken_0x204e2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x204e2c) {
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204E34u;
    // 0x204e34: 0x0  nop
    ctx->pc = 0x204e34u;
    // NOP
label_204e38:
    // 0x204e38: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x204E38u;
    SET_GPR_U32(ctx, 31, 0x204E40u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x204E38u, 0x204E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E40u;
label_204e40:
    // 0x204e40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x204e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x204e44: 0x8f839afc  lw          $v1, -0x6504($gp)
    ctx->pc = 0x204e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
    // 0x204e48: 0x2450017d  addiu       $s0, $v0, 0x17D
    ctx->pc = 0x204e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 381));
    // 0x204e4c: 0x1203fffa  beq         $s0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x204E4Cu;
    {
        const bool branch_taken_0x204e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x204e4c) {
            ctx->pc = 0x204E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204e38;
        }
    }
    ctx->pc = 0x204E54u;
    // 0x204e54: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x204E54u;
    {
        const bool branch_taken_0x204e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e54) {
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204E5Cu;
label_204e5c:
    // 0x204e5c: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x204E5Cu;
    {
        const bool branch_taken_0x204e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x204e5c) {
            ctx->pc = 0x204E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204E5Cu;
            // 0x204e60: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204E64u;
    // 0x204e64: 0x8f829afc  lw          $v0, -0x6504($gp)
    ctx->pc = 0x204e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
    // 0x204e68: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x204E68u;
    {
        const bool branch_taken_0x204e68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x204e68) {
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204E70u;
label_204e70:
    // 0x204e70: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x204E70u;
    SET_GPR_U32(ctx, 31, 0x204E78u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x204E70u, 0x204E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E78u;
label_204e78:
    // 0x204e78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x204e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x204e7c: 0x8f839afc  lw          $v1, -0x6504($gp)
    ctx->pc = 0x204e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941436)));
    // 0x204e80: 0x2450017f  addiu       $s0, $v0, 0x17F
    ctx->pc = 0x204e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 383));
    // 0x204e84: 0x1203fffa  beq         $s0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x204E84u;
    {
        const bool branch_taken_0x204e84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x204e84) {
            ctx->pc = 0x204E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204e70;
        }
    }
    ctx->pc = 0x204E8Cu;
label_204e8c:
    // 0x204e8c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204E8Cu;
    {
        const bool branch_taken_0x204e8c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x204E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E8Cu;
        // 0x204e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e8c) {
            ctx->pc = 0x204EA4u;
            goto label_204ea4;
        }
    }
    ctx->pc = 0x204E94u;
    // 0x204e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e9c: 0xc081602  jal         func_205808
    ctx->pc = 0x204E9Cu;
    SET_GPR_U32(ctx, 31, 0x204EA4u);
    ctx->pc = 0x204EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E9Cu;
    // 0x204ea0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205808u, 0x204E9Cu, 0x204EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EA4u;
label_204ea4:
    // 0x204ea4: 0xaf909afc  sw          $s0, -0x6504($gp)
    ctx->pc = 0x204ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941436), GPR_U32(ctx, 16));
label_204ea8:
    // 0x204ea8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x204ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204eac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x204eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204eb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x204EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EB4u;
        // 0x204eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204EBCu;
}
