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

// Function: StatsKillMade
// Address: 0x220bc8 - 0x2211a8
void StatsKillMade_0x220bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsKillMade_0x220bc8");
#endif

    switch (ctx->pc) {
        case 0x220c14u: goto label_220c14;
        case 0x220c2cu: goto label_220c2c;
        case 0x220c40u: goto label_220c40;
        case 0x220c54u: goto label_220c54;
        case 0x220c68u: goto label_220c68;
        case 0x220c88u: goto label_220c88;
        case 0x220d38u: goto label_220d38;
        case 0x220d54u: goto label_220d54;
        case 0x220d68u: goto label_220d68;
        case 0x220e90u: goto label_220e90;
        case 0x220ef8u: goto label_220ef8;
        case 0x220f7cu: goto label_220f7c;
        case 0x22100cu: goto label_22100c;
        case 0x221038u: goto label_221038;
        case 0x2210c0u: goto label_2210c0;
        case 0x2210d0u: goto label_2210d0;
        case 0x2210e8u: goto label_2210e8;
        case 0x2210f8u: goto label_2210f8;
        case 0x221104u: goto label_221104;
        case 0x221114u: goto label_221114;
        case 0x22112cu: goto label_22112c;
        case 0x22113cu: goto label_22113c;
        default: break;
    }

    ctx->pc = 0x220bc8u;

    // 0x220bc8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x220bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x220bcc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x220bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x220bd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220bd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x220bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220bd8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x220bd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x220bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x220bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220be0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x220be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x220be4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x220be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220be8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x220be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x220bec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x220becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x220bf0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x220bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x220bf4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x220bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x220bf8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x220bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x220bfc: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x220bfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x220c00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x220c04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x220c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x220c08: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x220c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220c0c: 0xc088f98  jal         func_223E60
    ctx->pc = 0x220C0Cu;
    SET_GPR_U32(ctx, 31, 0x220C14u);
    ctx->pc = 0x220C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C0Cu;
    // 0x220c10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x220C0Cu, 0x220C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C14u;
label_220c14:
    // 0x220c14: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x220C14u;
    {
        const bool branch_taken_0x220c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x220c14) {
            ctx->pc = 0x220C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220C14u;
            // 0x220c18: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220C8Cu;
            goto label_220c8c;
        }
    }
    ctx->pc = 0x220C1Cu;
    // 0x220c1c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x220c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220c20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x220c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c24: 0xc088f98  jal         func_223E60
    ctx->pc = 0x220C24u;
    SET_GPR_U32(ctx, 31, 0x220C2Cu);
    ctx->pc = 0x220C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C24u;
    // 0x220c28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x220C24u, 0x220C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C2Cu;
label_220c2c:
    // 0x220c2c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x220c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220c30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x220c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220c34: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x220c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220c38: 0xc0890ce  jal         func_224338
    ctx->pc = 0x220C38u;
    SET_GPR_U32(ctx, 31, 0x220C40u);
    ctx->pc = 0x220C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C38u;
    // 0x220c3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224338u, 0x220C38u, 0x220C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C40u;
label_220c40:
    // 0x220c40: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x220c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220c44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x220c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c48: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x220c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220c4c: 0xc0890ce  jal         func_224338
    ctx->pc = 0x220C4Cu;
    SET_GPR_U32(ctx, 31, 0x220C54u);
    ctx->pc = 0x220C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C4Cu;
    // 0x220c50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224338u, 0x220C4Cu, 0x220C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C54u;
label_220c54:
    // 0x220c54: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x220c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220c58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x220c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220c5c: 0x8e060104  lw          $a2, 0x104($s0)
    ctx->pc = 0x220c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x220c60: 0xc08906a  jal         func_2241A8
    ctx->pc = 0x220C60u;
    SET_GPR_U32(ctx, 31, 0x220C68u);
    ctx->pc = 0x220C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C60u;
    // 0x220c64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2241A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2241A8u, 0x220C60u, 0x220C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C68u;
label_220c68:
    // 0x220c68: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x220c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x220c6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x220c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x220c70: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x220C70u;
    {
        const bool branch_taken_0x220c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x220c70) {
            ctx->pc = 0x220C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220C70u;
            // 0x220c74: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220C8Cu;
            goto label_220c8c;
        }
    }
    ctx->pc = 0x220C78u;
    // 0x220c78: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x220c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220c7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x220c7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x220c80: 0xc088f98  jal         func_223E60
    ctx->pc = 0x220C80u;
    SET_GPR_U32(ctx, 31, 0x220C88u);
    ctx->pc = 0x220C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C80u;
    // 0x220c84: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x220C80u, 0x220C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C88u;
label_220c88:
    // 0x220c88: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x220c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_220c8c:
    // 0x220c8c: 0x28c2000e  slti        $v0, $a2, 0xE
    ctx->pc = 0x220c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x220c90: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x220C90u;
    {
        const bool branch_taken_0x220c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C90u;
        // 0x220c94: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c90) {
            ctx->pc = 0x220D1Cu;
            goto label_220d1c;
        }
    }
    ctx->pc = 0x220C98u;
    // 0x220c98: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x220c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x220c9c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x220c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x220ca0: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x220ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x220ca4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x220ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x220ca8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x220CA8u;
    {
        const bool branch_taken_0x220ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CA8u;
        // 0x220cac: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ca8) {
            ctx->pc = 0x220CE0u;
            goto label_220ce0;
        }
    }
    ctx->pc = 0x220CB0u;
    // 0x220cb0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x220cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x220cb4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x220cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x220cb8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x220CB8u;
    {
        const bool branch_taken_0x220cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CB8u;
        // 0x220cbc: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220cb8) {
            ctx->pc = 0x220CE0u;
            goto label_220ce0;
        }
    }
    ctx->pc = 0x220CC0u;
    // 0x220cc0: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x220cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x220cc4: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x220cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x220cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220ccc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x220cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x220cd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220CD0u;
    {
        const bool branch_taken_0x220cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CD0u;
        // 0x220cd4: 0x24050558  addiu       $a1, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220cd0) {
            ctx->pc = 0x220CE8u;
            goto label_220ce8;
        }
    }
    ctx->pc = 0x220CD8u;
    // 0x220cd8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x220CD8u;
    {
        const bool branch_taken_0x220cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220cd8) {
            ctx->pc = 0x220D1Cu;
            goto label_220d1c;
        }
    }
    ctx->pc = 0x220CE0u;
label_220ce0:
    // 0x220ce0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x220CE0u;
    {
        const bool branch_taken_0x220ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CE0u;
        // 0x220ce4: 0x24050558  addiu       $a1, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ce0) {
            ctx->pc = 0x220D1Cu;
            goto label_220d1c;
        }
    }
    ctx->pc = 0x220CE8u;
label_220ce8:
    // 0x220ce8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x220ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x220cec: 0xc51818  mult        $v1, $a2, $a1
    ctx->pc = 0x220cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x220cf0: 0x2484e6a8  addiu       $a0, $a0, -0x1958
    ctx->pc = 0x220cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960808));
    // 0x220cf4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x220cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x220cf8: 0xac6004f8  sw          $zero, 0x4F8($v1)
    ctx->pc = 0x220cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1272), GPR_U32(ctx, 0));
    // 0x220cfc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x220cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220d00: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x220d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x220d04: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x220d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x220d08: 0xac400550  sw          $zero, 0x550($v0)
    ctx->pc = 0x220d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1360), GPR_U32(ctx, 0));
    // 0x220d0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x220d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220d10: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x220d10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x220d14: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x220d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x220d18: 0xac60054c  sw          $zero, 0x54C($v1)
    ctx->pc = 0x220d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1356), GPR_U32(ctx, 0));
label_220d1c:
    // 0x220d1c: 0x16110008  bne         $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x220D1Cu;
    {
        const bool branch_taken_0x220d1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x220D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D1Cu;
        // 0x220d20: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d1c) {
            ctx->pc = 0x220D40u;
            goto label_220d40;
        }
    }
    ctx->pc = 0x220D24u;
    // 0x220d24: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x220d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220d28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x220d2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x220d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x220d30: 0xc088f98  jal         func_223E60
    ctx->pc = 0x220D30u;
    SET_GPR_U32(ctx, 31, 0x220D38u);
    ctx->pc = 0x220D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D30u;
    // 0x220d34: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x220D30u, 0x220D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D38u;
label_220d38:
    // 0x220d38: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x220D38u;
    {
        const bool branch_taken_0x220d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D38u;
        // 0x220d3c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d38) {
            ctx->pc = 0x221058u;
            goto label_221058;
        }
    }
    ctx->pc = 0x220D40u;
label_220d40:
    // 0x220d40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x220d44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x220d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x220d48: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x220d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220d4c: 0xc088f98  jal         func_223E60
    ctx->pc = 0x220D4Cu;
    SET_GPR_U32(ctx, 31, 0x220D54u);
    ctx->pc = 0x220D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D4Cu;
    // 0x220d50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x220D4Cu, 0x220D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D54u;
label_220d54:
    // 0x220d54: 0x120000bf  beqz        $s0, . + 4 + (0xBF << 2)
    ctx->pc = 0x220D54u;
    {
        const bool branch_taken_0x220d54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D54u;
        // 0x220d58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d54) {
            ctx->pc = 0x221054u;
            goto label_221054;
        }
    }
    ctx->pc = 0x220D5Cu;
    // 0x220d5c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x220d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220d60: 0xc088f98  jal         func_223E60
    ctx->pc = 0x220D60u;
    SET_GPR_U32(ctx, 31, 0x220D68u);
    ctx->pc = 0x220D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D60u;
    // 0x220d64: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x220D60u, 0x220D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D68u;
label_220d68:
    // 0x220d68: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x220d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220d6c: 0x28e2000e  slti        $v0, $a3, 0xE
    ctx->pc = 0x220d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x220d70: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x220D70u;
    {
        const bool branch_taken_0x220d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D70u;
        // 0x220d74: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d70) {
            ctx->pc = 0x221054u;
            goto label_221054;
        }
    }
    ctx->pc = 0x220D78u;
    // 0x220d78: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x220d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x220d7c: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x220d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x220d80: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x220d80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x220d84: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x220d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x220d88: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x220d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x220d8c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x220D8Cu;
    {
        const bool branch_taken_0x220d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D8Cu;
        // 0x220d90: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d8c) {
            ctx->pc = 0x220DC4u;
            goto label_220dc4;
        }
    }
    ctx->pc = 0x220D94u;
    // 0x220d94: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x220d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x220d98: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x220d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x220d9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x220D9Cu;
    {
        const bool branch_taken_0x220d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D9Cu;
        // 0x220da0: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d9c) {
            ctx->pc = 0x220DC4u;
            goto label_220dc4;
        }
    }
    ctx->pc = 0x220DA4u;
    // 0x220da4: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x220da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x220da8: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x220da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x220dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220db0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x220db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x220db4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220DB4u;
    {
        const bool branch_taken_0x220db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DB4u;
        // 0x220db8: 0x24120558  addiu       $s2, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220db4) {
            ctx->pc = 0x220DCCu;
            goto label_220dcc;
        }
    }
    ctx->pc = 0x220DBCu;
    // 0x220dbc: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x220DBCu;
    {
        const bool branch_taken_0x220dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DBCu;
        // 0x220dc0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220dbc) {
            ctx->pc = 0x221058u;
            goto label_221058;
        }
    }
    ctx->pc = 0x220DC4u;
label_220dc4:
    // 0x220dc4: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x220DC4u;
    {
        const bool branch_taken_0x220dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DC4u;
        // 0x220dc8: 0x24120558  addiu       $s2, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220dc4) {
            ctx->pc = 0x221054u;
            goto label_221054;
        }
    }
    ctx->pc = 0x220DCCu;
label_220dcc:
    // 0x220dcc: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x220dccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x220dd0: 0xb22818  mult        $a1, $a1, $s2
    ctx->pc = 0x220dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x220dd4: 0x26c8e6a8  addiu       $t0, $s6, -0x1958
    ctx->pc = 0x220dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960808));
    // 0x220dd8: 0x251304f8  addiu       $s3, $t0, 0x4F8
    ctx->pc = 0x220dd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 1272));
    // 0x220ddc: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x220ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x220de0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x220de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220de4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x220DE4u;
    {
        const bool branch_taken_0x220de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DE4u;
        // 0x220de8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220de4) {
            ctx->pc = 0x220E18u;
            goto label_220e18;
        }
    }
    ctx->pc = 0x220DECu;
    // 0x220dec: 0x2515054c  addiu       $s5, $t0, 0x54C
    ctx->pc = 0x220decu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 8), 1356));
    // 0x220df0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x220DF0u;
    {
        const bool branch_taken_0x220df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x220df0) {
            ctx->pc = 0x220DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220DF0u;
            // 0x220df4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x220DF8u;
            goto label_220df8;
        }
    }
    ctx->pc = 0x220DF8u;
label_220df8:
    // 0x220df8: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x220df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x220dfc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x220dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x220e00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x220e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x220e04: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x220e04u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x220e08: 0x1810  mfhi        $v1
    ctx->pc = 0x220e08u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x220e0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x220e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x220e10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x220E10u;
    {
        const bool branch_taken_0x220e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E10u;
        // 0x220e14: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e10) {
            ctx->pc = 0x220E1Cu;
            goto label_220e1c;
        }
    }
    ctx->pc = 0x220E18u;
label_220e18:
    // 0x220e18: 0x2515054c  addiu       $s5, $t0, 0x54C
    ctx->pc = 0x220e18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 8), 1356));
label_220e1c:
    // 0x220e1c: 0xf22818  mult        $a1, $a3, $s2
    ctx->pc = 0x220e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x220e20: 0xc7819da8  lwc1        $f1, -0x6258($gp)
    ctx->pc = 0x220e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220e24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x220e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x220e28: 0xc780807c  lwc1        $f0, -0x7F84($gp)
    ctx->pc = 0x220e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220e2c: 0x251404fc  addiu       $s4, $t0, 0x4FC
    ctx->pc = 0x220e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), 1276));
    // 0x220e30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220e34: 0xb33021  addu        $a2, $a1, $s3
    ctx->pc = 0x220e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x220e38: 0xb52021  addu        $a0, $a1, $s5
    ctx->pc = 0x220e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x220e3c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x220e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x220e40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x220e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x220e44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x220e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x220e48: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x220e48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x220e4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220e50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x220e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x220e54: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x220e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220e58: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x220e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x220e5c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x220e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x220e60: 0xf21818  mult        $v1, $a3, $s2
    ctx->pc = 0x220e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x220e64: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x220e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x220e68: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x220e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x220e6c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x220e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x220e70: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x220e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x220e74: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x220e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220e78: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x220e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220e7c: 0x0  nop
    ctx->pc = 0x220e7cu;
    // NOP
    // 0x220e80: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x220E80u;
    {
        const bool branch_taken_0x220e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x220E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E80u;
        // 0x220e84: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e80) {
            ctx->pc = 0x220E94u;
            goto label_220e94;
        }
    }
    ctx->pc = 0x220E88u;
    // 0x220e88: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x220E88u;
    SET_GPR_U32(ctx, 31, 0x220E90u);
    ctx->pc = 0x220E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E88u;
    // 0x220e8c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x220E88u, 0x220E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E90u;
label_220e90:
    // 0x220e90: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x220e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220e94:
    // 0x220e94: 0xf21018  mult        $v0, $a3, $s2
    ctx->pc = 0x220e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x220e98: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x220e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x220e9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x220e9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ea0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x220ea0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ea4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x220ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x220ea8: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x220ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x220eac: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x220eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x220eb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x220eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x220eb4: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x220eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x220eb8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x220eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x220ebc: 0x28650015  slti        $a1, $v1, 0x15
    ctx->pc = 0x220ebcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x220ec0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x220ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x220ec4: 0xc5180a  movz        $v1, $a2, $a1
    ctx->pc = 0x220ec4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x220ec8: 0x1860001f  blez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x220EC8u;
    {
        const bool branch_taken_0x220ec8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x220ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220EC8u;
        // 0x220ecc: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ec8) {
            ctx->pc = 0x220F48u;
            goto label_220f48;
        }
    }
    ctx->pc = 0x220ED0u;
    // 0x220ed0: 0x24020558  addiu       $v0, $zero, 0x558
    ctx->pc = 0x220ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x220ed4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x220ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x220ed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x220ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220edc: 0xe24818  mult        $t1, $a3, $v0
    ctx->pc = 0x220edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x220ee0: 0x26a3ffac  addiu       $v1, $s5, -0x54
    ctx->pc = 0x220ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967212));
    // 0x220ee4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x220ee4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x220ee8: 0x280702d  daddu       $t6, $s4, $zero
    ctx->pc = 0x220ee8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220eec: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x220eecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ef0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x220EF0u;
    {
        const bool branch_taken_0x220ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220EF0u;
        // 0x220ef4: 0x1236021  addu        $t4, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ef0) {
            ctx->pc = 0x220EFCu;
            goto label_220efc;
        }
    }
    ctx->pc = 0x220EF8u;
label_220ef8:
    // 0x220ef8: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x220ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_220efc:
    // 0x220efc: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x220efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x220f00: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x220f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x220f04: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x220f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220f08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x220f08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220f0c: 0x0  nop
    ctx->pc = 0x220f0cu;
    // NOP
    // 0x220f10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x220F10u;
    {
        const bool branch_taken_0x220f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x220f10) {
            ctx->pc = 0x220F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220F10u;
            // 0x220f14: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220F18u;
            goto label_220f18;
        }
    }
    ctx->pc = 0x220F18u;
label_220f18:
    // 0x220f18: 0x24820013  addiu       $v0, $a0, 0x13
    ctx->pc = 0x220f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x220f1c: 0x50cd0001  beql        $a2, $t5, . + 4 + (0x1 << 2)
    ctx->pc = 0x220F1Cu;
    {
        const bool branch_taken_0x220f1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 13));
        if (branch_taken_0x220f1c) {
            ctx->pc = 0x220F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220F1Cu;
            // 0x220f20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x220F24u;
            goto label_220f24;
        }
    }
    ctx->pc = 0x220F24u;
label_220f24:
    // 0x220f24: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x220f24u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x220f28: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x220f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x220f2c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x220f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x220f30: 0x28650015  slti        $a1, $v1, 0x15
    ctx->pc = 0x220f30u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x220f34: 0xc5180a  movz        $v1, $a2, $a1
    ctx->pc = 0x220f34u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x220f38: 0x163182a  slt         $v1, $t3, $v1
    ctx->pc = 0x220f38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x220f3c: 0x1010  mfhi        $v0
    ctx->pc = 0x220f3cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x220f40: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x220F40u;
    {
        const bool branch_taken_0x220f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F40u;
        // 0x220f44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f40) {
            ctx->pc = 0x220EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220ef8;
        }
    }
    ctx->pc = 0x220F48u;
label_220f48:
    // 0x220f48: 0x24140558  addiu       $s4, $zero, 0x558
    ctx->pc = 0x220f48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x220f4c: 0x26d2e6a8  addiu       $s2, $s6, -0x1958
    ctx->pc = 0x220f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960808));
    // 0x220f50: 0xf41018  mult        $v0, $a3, $s4
    ctx->pc = 0x220f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x220f54: 0x448a6000  mtc1        $t2, $f12
    ctx->pc = 0x220f54u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x220f58: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x220f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x220f5c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x220f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x220f60: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x220f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220f64: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x220f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220f68: 0x0  nop
    ctx->pc = 0x220f68u;
    // NOP
    // 0x220f6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x220F6Cu;
    {
        const bool branch_taken_0x220f6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x220F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F6Cu;
        // 0x220f70: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f6c) {
            ctx->pc = 0x220F80u;
            goto label_220f80;
        }
    }
    ctx->pc = 0x220F74u;
    // 0x220f74: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x220F74u;
    SET_GPR_U32(ctx, 31, 0x220F7Cu);
    ctx->pc = 0x220F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F74u;
    // 0x220f78: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x220F74u, 0x220F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F7Cu;
label_220f7c:
    // 0x220f7c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x220f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220f80:
    // 0x220f80: 0xf41818  mult        $v1, $a3, $s4
    ctx->pc = 0x220f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x220f84: 0x26530550  addiu       $s3, $s2, 0x550
    ctx->pc = 0x220f84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x220f88: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x220f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x220f8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x220f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220f90: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x220F90u;
    {
        const bool branch_taken_0x220f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220f90) {
            ctx->pc = 0x220F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220F90u;
            // 0x220f94: 0xf41818  mult        $v1, $a3, $s4 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x220FA8u;
            goto label_220fa8;
        }
    }
    ctx->pc = 0x220F98u;
    // 0x220f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220f9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x220f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x220fa0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x220fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220fa4: 0xf41818  mult        $v1, $a3, $s4
    ctx->pc = 0x220fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_220fa8:
    // 0x220fa8: 0x26520554  addiu       $s2, $s2, 0x554
    ctx->pc = 0x220fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1364));
    // 0x220fac: 0xc7819da8  lwc1        $f1, -0x6258($gp)
    ctx->pc = 0x220facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220fb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x220fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x220fb4: 0xc7958080  lwc1        $f21, -0x7F80($gp)
    ctx->pc = 0x220fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x220fb8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x220fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x220fbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x220fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x220fc0: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x220fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x220fc4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x220fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x220fc8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x220fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220fcc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x220fccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x220fd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x220fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220fd4: 0x0  nop
    ctx->pc = 0x220fd4u;
    // NOP
    // 0x220fd8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x220FD8u;
    {
        const bool branch_taken_0x220fd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x220FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FD8u;
        // 0x220fdc: 0x731821  addu        $v1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220fd8) {
            ctx->pc = 0x220FF0u;
            goto label_220ff0;
        }
    }
    ctx->pc = 0x220FE0u;
    // 0x220fe0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x220fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220fe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x220fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x220fe8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x220fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x220fec: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x220fecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220ff0:
    // 0x220ff0: 0xf41818  mult        $v1, $a3, $s4
    ctx->pc = 0x220ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x220ff4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x220ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ff8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x220ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x220ffc: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x220ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x221000: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x221000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x221004: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221004u;
    SET_GPR_U32(ctx, 31, 0x22100Cu);
    ctx->pc = 0x221008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221004u;
    // 0x221008: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221004u, 0x22100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22100Cu;
label_22100c:
    // 0x22100c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x22100cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221010: 0x0  nop
    ctx->pc = 0x221010u;
    // NOP
    // 0x221014: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x221014u;
    {
        const bool branch_taken_0x221014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221014) {
            ctx->pc = 0x221018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221014u;
            // 0x221018: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22103Cu;
            goto label_22103c;
        }
    }
    ctx->pc = 0x22101Cu;
    // 0x22101c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22101cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x221020: 0xb41818  mult        $v1, $a1, $s4
    ctx->pc = 0x221020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x221024: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x221024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x221028: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x221028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22102c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22102cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x221030: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221030u;
    SET_GPR_U32(ctx, 31, 0x221038u);
    ctx->pc = 0x221034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221030u;
    // 0x221034: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221030u, 0x221038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221038u;
label_221038:
    // 0x221038: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x221038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22103c:
    // 0x22103c: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x22103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x221040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x221044: 0x541818  mult        $v1, $v0, $s4
    ctx->pc = 0x221044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x221048: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x221048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x22104c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x22104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x221050: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x221050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_221054:
    // 0x221054: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x221054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_221058:
    // 0x221058: 0x2882000e  slti        $v0, $a0, 0xE
    ctx->pc = 0x221058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x22105c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x22105Cu;
    {
        const bool branch_taken_0x22105c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22105Cu;
        // 0x221060: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22105c) {
            ctx->pc = 0x221178u;
            goto label_221178;
        }
    }
    ctx->pc = 0x221064u;
    // 0x221064: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x221064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x221068: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x221068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x22106c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x22106cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x221070: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x221070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x221074: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x221074u;
    {
        const bool branch_taken_0x221074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221074u;
        // 0x221078: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221074) {
            ctx->pc = 0x2210ACu;
            goto label_2210ac;
        }
    }
    ctx->pc = 0x22107Cu;
    // 0x22107c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x22107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x221080: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221084: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221084u;
    {
        const bool branch_taken_0x221084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221084u;
        // 0x221088: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221084) {
            ctx->pc = 0x2210ACu;
            goto label_2210ac;
        }
    }
    ctx->pc = 0x22108Cu;
    // 0x22108c: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x22108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x221090: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x221090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x221094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x221094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221098: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x221098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22109c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22109Cu;
    {
        const bool branch_taken_0x22109c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22109c) {
            ctx->pc = 0x2210A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22109Cu;
            // 0x2210a0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2210B8u;
            goto label_2210b8;
        }
    }
    ctx->pc = 0x2210A4u;
    // 0x2210a4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2210A4u;
    {
        const bool branch_taken_0x2210a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2210A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210A4u;
        // 0x2210a8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210a4) {
            ctx->pc = 0x22117Cu;
            goto label_22117c;
        }
    }
    ctx->pc = 0x2210ACu;
label_2210ac:
    // 0x2210ac: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2210ACu;
    {
        const bool branch_taken_0x2210ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2210B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210ACu;
        // 0x2210b0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210ac) {
            ctx->pc = 0x22117Cu;
            goto label_22117c;
        }
    }
    ctx->pc = 0x2210B4u;
    // 0x2210b4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2210b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2210b8:
    // 0x2210b8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2210B8u;
    SET_GPR_U32(ctx, 31, 0x2210C0u);
    ctx->pc = 0x2210BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210B8u;
    // 0x2210bc: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2210B8u, 0x2210C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210C0u;
label_2210c0:
    // 0x2210c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2210c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2210c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2210c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2210c8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2210C8u;
    SET_GPR_U32(ctx, 31, 0x2210D0u);
    ctx->pc = 0x2210CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210C8u;
    // 0x2210cc: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2210C8u, 0x2210D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210D0u;
label_2210d0:
    // 0x2210d0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2210d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2210d4: 0x0  nop
    ctx->pc = 0x2210d4u;
    // NOP
    // 0x2210d8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2210D8u;
    {
        const bool branch_taken_0x2210d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2210DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210D8u;
        // 0x2210dc: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210d8) {
            ctx->pc = 0x2210FCu;
            goto label_2210fc;
        }
    }
    ctx->pc = 0x2210E0u;
    // 0x2210e0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2210E0u;
    SET_GPR_U32(ctx, 31, 0x2210E8u);
    ctx->pc = 0x2210E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210E0u;
    // 0x2210e4: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2210E0u, 0x2210E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210E8u;
label_2210e8:
    // 0x2210e8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2210e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2210ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2210ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2210f0: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x2210F0u;
    SET_GPR_U32(ctx, 31, 0x2210F8u);
    ctx->pc = 0x2210F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210F0u;
    // 0x2210f4: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x2210F0u, 0x2210F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210F8u;
label_2210f8:
    // 0x2210f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2210f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2210fc:
    // 0x2210fc: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2210FCu;
    SET_GPR_U32(ctx, 31, 0x221104u);
    ctx->pc = 0x221100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210FCu;
    // 0x221100: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2210FCu, 0x221104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221104u;
label_221104:
    // 0x221104: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x221104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x221108: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x221108u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22110c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x22110Cu;
    SET_GPR_U32(ctx, 31, 0x221114u);
    ctx->pc = 0x221110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22110Cu;
    // 0x221110: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x22110Cu, 0x221114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221114u;
label_221114:
    // 0x221114: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x221114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221118: 0x0  nop
    ctx->pc = 0x221118u;
    // NOP
    // 0x22111c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22111Cu;
    {
        const bool branch_taken_0x22111c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22111Cu;
        // 0x221120: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22111c) {
            ctx->pc = 0x221140u;
            goto label_221140;
        }
    }
    ctx->pc = 0x221124u;
    // 0x221124: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221124u;
    SET_GPR_U32(ctx, 31, 0x22112Cu);
    ctx->pc = 0x221128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221124u;
    // 0x221128: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221124u, 0x22112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22112Cu;
label_22112c:
    // 0x22112c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x22112cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x221130: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x221130u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x221134: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221134u;
    SET_GPR_U32(ctx, 31, 0x22113Cu);
    ctx->pc = 0x221138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221134u;
    // 0x221138: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221134u, 0x22113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22113Cu;
label_22113c:
    // 0x22113c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x22113cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_221140:
    // 0x221140: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x221140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x221144: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x221144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221148: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x221148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22114c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x22114cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x221150: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x221150u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221154: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x221154u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221158: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x221158u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22115c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22115cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221160: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x221160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221168: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x221168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22116c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x22116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x221170: 0x8088f78  j           func_223DE0
    ctx->pc = 0x221170u;
    ctx->pc = 0x221174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221170u;
    // 0x221174: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    StatsSet_0x223de0(rdram, ctx, runtime); return;
    ctx->pc = 0x221178u;
label_221178:
    // 0x221178: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x221178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22117c:
    // 0x22117c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x22117cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x221180: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x221180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221184: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x221184u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221188: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x221188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22118c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22118cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221190: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x221190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221198: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x221198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22119c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x22119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2211a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2211A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2211A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2211A0u;
        // 0x2211a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2211A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2211A8u;
}
