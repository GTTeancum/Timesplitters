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

// Function: specialPropNew
// Address: 0x277bf8 - 0x2783bc
void specialPropNew_0x277bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialPropNew_0x277bf8");
#endif

    switch (ctx->pc) {
        case 0x277c1cu: goto label_277c1c;
        case 0x277c5cu: goto label_277c5c;
        case 0x277cccu: goto label_277ccc;
        case 0x277d9cu: goto label_277d9c;
        case 0x277db8u: goto label_277db8;
        case 0x277dc0u: goto label_277dc0;
        case 0x277de0u: goto label_277de0;
        case 0x277e0cu: goto label_277e0c;
        case 0x277e38u: goto label_277e38;
        case 0x277e94u: goto label_277e94;
        case 0x277f1cu: goto label_277f1c;
        case 0x277f44u: goto label_277f44;
        case 0x277f80u: goto label_277f80;
        case 0x277facu: goto label_277fac;
        case 0x277fd8u: goto label_277fd8;
        case 0x278018u: goto label_278018;
        case 0x27803cu: goto label_27803c;
        case 0x27805cu: goto label_27805c;
        case 0x278070u: goto label_278070;
        case 0x278094u: goto label_278094;
        case 0x27809cu: goto label_27809c;
        case 0x2780f4u: goto label_2780f4;
        case 0x278148u: goto label_278148;
        case 0x27818cu: goto label_27818c;
        case 0x2781a0u: goto label_2781a0;
        case 0x278200u: goto label_278200;
        case 0x27820cu: goto label_27820c;
        case 0x2782a4u: goto label_2782a4;
        case 0x2782bcu: goto label_2782bc;
        case 0x2782d4u: goto label_2782d4;
        case 0x278304u: goto label_278304;
        case 0x278320u: goto label_278320;
        case 0x27834cu: goto label_27834c;
        case 0x278368u: goto label_278368;
        case 0x278398u: goto label_278398;
        default: break;
    }

    ctx->pc = 0x277bf8u;

    // 0x277bf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x277bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x277bfc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x277bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x277c00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x277c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x277c04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x277c04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x277c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x277c0c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x277c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x277c10: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x277c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x277c14: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x277C14u;
    SET_GPR_U32(ctx, 31, 0x277C1Cu);
    ctx->pc = 0x277C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C14u;
    // 0x277c18: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x277C14u, 0x277C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C1Cu;
label_277c1c:
    // 0x277c1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x277c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277c24: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x277c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x277c28: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x277C28u;
    {
        const bool branch_taken_0x277c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C28u;
        // 0x277c2c: 0x3c070036  lui         $a3, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c28) {
            ctx->pc = 0x277CB4u;
            goto label_277cb4;
        }
    }
    ctx->pc = 0x277C30u;
    // 0x277c30: 0x8ce23590  lw          $v0, 0x3590($a3)
    ctx->pc = 0x277c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13712)));
    // 0x277c34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x277C34u;
    {
        const bool branch_taken_0x277c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C34u;
        // 0x277c38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c34) {
            ctx->pc = 0x277C58u;
            goto label_277c58;
        }
    }
    ctx->pc = 0x277C3Cu;
    // 0x277c3c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x277c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x277c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277c44: 0x246318a8  addiu       $v1, $v1, 0x18A8
    ctx->pc = 0x277c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6312));
    // 0x277c48: 0xace23590  sw          $v0, 0x3590($a3)
    ctx->pc = 0x277c48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 13712), GPR_U32(ctx, 2));
    // 0x277c4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x277c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c50: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x277C50u;
    {
        const bool branch_taken_0x277c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C50u;
        // 0x277c54: 0xae030160  sw          $v1, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c50) {
            ctx->pc = 0x277CA0u;
            goto label_277ca0;
        }
    }
    ctx->pc = 0x277C58u;
label_277c58:
    // 0x277c58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x277c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_277c5c:
    // 0x277c5c: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x277c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x277c60: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x277C60u;
    {
        const bool branch_taken_0x277c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C60u;
        // 0x277c64: 0x24e23590  addiu       $v0, $a3, 0x3590 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 13712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c60) {
            ctx->pc = 0x277CA0u;
            goto label_277ca0;
        }
    }
    ctx->pc = 0x277C68u;
    // 0x277c68: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x277c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x277c6c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x277c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x277c70: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x277c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277c74: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x277C74u;
    {
        const bool branch_taken_0x277c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x277c74) {
            ctx->pc = 0x277C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277C74u;
            // 0x277c78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277C5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277c5c;
        }
    }
    ctx->pc = 0x277C7Cu;
    // 0x277c7c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x277c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c80: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x277c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x277c84: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x277c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x277c88: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x277c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x277c8c: 0x246318a8  addiu       $v1, $v1, 0x18A8
    ctx->pc = 0x277c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6312));
    // 0x277c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277c94: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x277c94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x277c98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x277c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x277c9c: 0xae040160  sw          $a0, 0x160($s0)
    ctx->pc = 0x277c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 4));
label_277ca0:
    // 0x277ca0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x277ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x277ca4: 0x54c20013  bnel        $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x277CA4u;
    {
        const bool branch_taken_0x277ca4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x277ca4) {
            ctx->pc = 0x277CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277CA4u;
            // 0x277ca8: 0x8e110160  lw          $s1, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277CF4u;
            goto label_277cf4;
        }
    }
    ctx->pc = 0x277CACu;
    // 0x277cac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x277CACu;
    {
        const bool branch_taken_0x277cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277cac) {
            ctx->pc = 0x277CC4u;
            goto label_277cc4;
        }
    }
    ctx->pc = 0x277CB4u;
label_277cb4:
    // 0x277cb4: 0x8f84b184  lw          $a0, -0x4E7C($gp)
    ctx->pc = 0x277cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947204)));
    // 0x277cb8: 0x28820019  slti        $v0, $a0, 0x19
    ctx->pc = 0x277cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x277cbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x277CBCu;
    {
        const bool branch_taken_0x277cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CBCu;
        // 0x277cc0: 0x24020094  addiu       $v0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277cbc) {
            ctx->pc = 0x277CD4u;
            goto label_277cd4;
        }
    }
    ctx->pc = 0x277CC4u;
label_277cc4:
    // 0x277cc4: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x277CC4u;
    SET_GPR_U32(ctx, 31, 0x277CCCu);
    ctx->pc = 0x277CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CC4u;
    // 0x277cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x277CC4u, 0x277CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CCCu;
label_277ccc:
    // 0x277ccc: 0x100001b3  b           . + 4 + (0x1B3 << 2)
    ctx->pc = 0x277CCCu;
    {
        const bool branch_taken_0x277ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CCCu;
        // 0x277cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ccc) {
            ctx->pc = 0x27839Cu;
            goto label_27839c;
        }
    }
    ctx->pc = 0x277CD4u;
label_277cd4:
    // 0x277cd4: 0x8f83b180  lw          $v1, -0x4E80($gp)
    ctx->pc = 0x277cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947200)));
    // 0x277cd8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x277cd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x277cdc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x277cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277ce0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x277ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x277ce4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x277ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x277ce8: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x277ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
    // 0x277cec: 0xaf84b184  sw          $a0, -0x4E7C($gp)
    ctx->pc = 0x277cecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947204), GPR_U32(ctx, 4));
    // 0x277cf0: 0x8e110160  lw          $s1, 0x160($s0)
    ctx->pc = 0x277cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_277cf4:
    // 0x277cf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x277cf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277cfc: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x277cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x277d00: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x277d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x277d04: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x277d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x277d08: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x277d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x277d0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x277d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x277d10: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x277d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x277d14: 0x2443ff0a  addiu       $v1, $v0, -0xF6
    ctx->pc = 0x277d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967050));
    // 0x277d18: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x277d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x277d1c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x277d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x277d20: 0x2c62004a  sltiu       $v0, $v1, 0x4A
    ctx->pc = 0x277d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)74) ? 1 : 0);
    // 0x277d24: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x277d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x277d28: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x277d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x277d2c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x277d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x277d30: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x277d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x277d34: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x277d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x277d38: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x277d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x277d3c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x277d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x277d40: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x277d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x277d44: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x277d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x277d48: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x277d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x277d4c: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x277d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x277d50: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x277d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x277d54: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x277d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x277d58: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x277d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x277d5c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x277d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x277d60: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x277d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x277d64: 0x1040018c  beqz        $v0, . + 4 + (0x18C << 2)
    ctx->pc = 0x277D64u;
    {
        const bool branch_taken_0x277d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D64u;
        // 0x277d68: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d64) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x277D6Cu;
    // 0x277d6c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x277d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x277d70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x277d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x277d74: 0x24428400  addiu       $v0, $v0, -0x7C00
    ctx->pc = 0x277d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935552));
    // 0x277d78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x277d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x277d7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x277d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277d80: 0x800008  jr          $a0
    ctx->pc = 0x277D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277D88u: goto label_277d88;
            case 0x277DA8u: goto label_277da8;
            case 0x277DD0u: goto label_277dd0;
            case 0x277DFCu: goto label_277dfc;
            case 0x277E28u: goto label_277e28;
            case 0x277E54u: goto label_277e54;
            case 0x277E64u: goto label_277e64;
            case 0x277E9Cu: goto label_277e9c;
            case 0x277EC0u: goto label_277ec0;
            case 0x277EE0u: goto label_277ee0;
            case 0x277F08u: goto label_277f08;
            case 0x277F3Cu: goto label_277f3c;
            case 0x277F70u: goto label_277f70;
            case 0x277F9Cu: goto label_277f9c;
            case 0x277FC8u: goto label_277fc8;
            case 0x277FFCu: goto label_277ffc;
            case 0x278068u: goto label_278068;
            case 0x2780ACu: goto label_2780ac;
            case 0x2780D0u: goto label_2780d0;
            case 0x278140u: goto label_278140;
            case 0x278158u: goto label_278158;
            case 0x27818Cu: goto label_27818c;
            case 0x2781BCu: goto label_2781bc;
            case 0x2781DCu: goto label_2781dc;
            case 0x278220u: goto label_278220;
            case 0x278238u: goto label_278238;
            case 0x278290u: goto label_278290;
            case 0x2782D4u: goto label_2782d4;
            case 0x2782E4u: goto label_2782e4;
            case 0x27832Cu: goto label_27832c;
            case 0x278370u: goto label_278370;
            case 0x278398u: goto label_278398;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277D80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x277D88u;
label_277d88:
    // 0x277d88: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x277d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x277d8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x277d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277d90: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x277d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x277d94: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x277D94u;
    SET_GPR_U32(ctx, 31, 0x277D9Cu);
    ctx->pc = 0x277D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D94u;
    // 0x277d98: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x277D94u, 0x277D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D9Cu;
label_277d9c:
    // 0x277d9c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x277d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277da0: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x277DA0u;
    {
        const bool branch_taken_0x277da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277DA0u;
        // 0x277da4: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277da0) {
            ctx->pc = 0x27822Cu;
            goto label_27822c;
        }
    }
    ctx->pc = 0x277DA8u;
label_277da8:
    // 0x277da8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x277da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x277dac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277db0: 0xc09829e  jal         func_260A78
    ctx->pc = 0x277DB0u;
    SET_GPR_U32(ctx, 31, 0x277DB8u);
    ctx->pc = 0x277DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277DB0u;
    // 0x277db4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x277DB0u, 0x277DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DB8u;
label_277db8:
    // 0x277db8: 0xc09e490  jal         func_279240
    ctx->pc = 0x277DB8u;
    SET_GPR_U32(ctx, 31, 0x277DC0u);
    ctx->pc = 0x279240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279240u, 0x277DB8u, 0x277DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DC0u;
label_277dc0:
    // 0x277dc0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277dc4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x277dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277dc8: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x277DC8u;
    {
        const bool branch_taken_0x277dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277DC8u;
        // 0x277dcc: 0xaf80b920  sw          $zero, -0x46E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277dc8) {
            ctx->pc = 0x278214u;
            goto label_278214;
        }
    }
    ctx->pc = 0x277DD0u;
label_277dd0:
    // 0x277dd0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x277dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x277dd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277dd8: 0xc09829e  jal         func_260A78
    ctx->pc = 0x277DD8u;
    SET_GPR_U32(ctx, 31, 0x277DE0u);
    ctx->pc = 0x277DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277DD8u;
    // 0x277ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x277DD8u, 0x277DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DE0u;
label_277de0:
    // 0x277de0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277de4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x277de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277de8: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x277de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x277dec: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x277decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x277df0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x277df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x277df4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x277DF4u;
    {
        const bool branch_taken_0x277df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277DF4u;
        // 0x277df8: 0x24849858  addiu       $a0, $a0, -0x67A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277df4) {
            ctx->pc = 0x277FF0u;
            goto label_277ff0;
        }
    }
    ctx->pc = 0x277DFCu;
label_277dfc:
    // 0x277dfc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x277dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x277e00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277e04: 0xc09829e  jal         func_260A78
    ctx->pc = 0x277E04u;
    SET_GPR_U32(ctx, 31, 0x277E0Cu);
    ctx->pc = 0x277E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E04u;
    // 0x277e08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x277E04u, 0x277E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E0Cu;
label_277e0c:
    // 0x277e0c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277e10: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x277e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277e14: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x277e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x277e18: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x277e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x277e1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x277e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x277e20: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x277E20u;
    {
        const bool branch_taken_0x277e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E20u;
        // 0x277e24: 0x248496f8  addiu       $a0, $a0, -0x6908 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e20) {
            ctx->pc = 0x277FF0u;
            goto label_277ff0;
        }
    }
    ctx->pc = 0x277E28u;
label_277e28:
    // 0x277e28: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x277e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x277e2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277e2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277e30: 0xc09829e  jal         func_260A78
    ctx->pc = 0x277E30u;
    SET_GPR_U32(ctx, 31, 0x277E38u);
    ctx->pc = 0x277E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E30u;
    // 0x277e34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x277E30u, 0x277E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E38u;
label_277e38:
    // 0x277e38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277e3c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x277e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277e40: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x277e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x277e44: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x277e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x277e48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x277e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x277e4c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x277E4Cu;
    {
        const bool branch_taken_0x277e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E4Cu;
        // 0x277e50: 0x248497a8  addiu       $a0, $a0, -0x6858 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e4c) {
            ctx->pc = 0x277FF0u;
            goto label_277ff0;
        }
    }
    ctx->pc = 0x277E54u;
label_277e54:
    // 0x277e54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277e58: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x277e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277e5c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x277E5Cu;
    {
        const bool branch_taken_0x277e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E5Cu;
        // 0x277e60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e5c) {
            ctx->pc = 0x277ED0u;
            goto label_277ed0;
        }
    }
    ctx->pc = 0x277E64u;
label_277e64:
    // 0x277e64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277e68: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x277e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277e6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x277e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277e70: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x277e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x277e74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x277e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x277e78: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x277e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x277e7c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x277e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x277e80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x277e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277e84: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x277e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x277e88: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x277e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x277e8c: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x277E8Cu;
    SET_GPR_U32(ctx, 31, 0x277E94u);
    ctx->pc = 0x277E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E8Cu;
    // 0x277e90: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x277E8Cu, 0x277E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E94u;
label_277e94:
    // 0x277e94: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x277E94u;
    {
        const bool branch_taken_0x277e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E94u;
        // 0x277e98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e94) {
            ctx->pc = 0x27839Cu;
            goto label_27839c;
        }
    }
    ctx->pc = 0x277E9Cu;
label_277e9c:
    // 0x277e9c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277ea0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x277ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x277ea4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x277ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x277ea8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x277ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277eac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x277eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x277eb0: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x277eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x277eb4: 0xa4a30124  sh          $v1, 0x124($a1)
    ctx->pc = 0x277eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 292), (uint16_t)GPR_U32(ctx, 3));
    // 0x277eb8: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x277EB8u;
    {
        const bool branch_taken_0x277eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277EB8u;
        // 0x277ebc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277eb8) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x277EC0u;
label_277ec0:
    // 0x277ec0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277ec4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x277ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277ec8: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x277ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x277ecc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x277eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_277ed0:
    // 0x277ed0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x277ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x277ed4: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x277ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x277ed8: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x277ED8u;
    {
        const bool branch_taken_0x277ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277ED8u;
        // 0x277edc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ed8) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x277EE0u;
label_277ee0:
    // 0x277ee0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277ee4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x277ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277ee8: 0x240500d3  addiu       $a1, $zero, 0xD3
    ctx->pc = 0x277ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x277eec: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x277eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x277ef0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x277ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x277ef4: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x277ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x277ef8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x277ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x277efc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x277efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277f00: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x277F00u;
    {
        const bool branch_taken_0x277f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F00u;
        // 0x277f04: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f00) {
            ctx->pc = 0x278358u;
            goto label_278358;
        }
    }
    ctx->pc = 0x277F08u;
label_277f08:
    // 0x277f08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f10: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x277f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x277f14: 0xc09d0f2  jal         func_2743C8
    ctx->pc = 0x277F14u;
    SET_GPR_U32(ctx, 31, 0x277F1Cu);
    ctx->pc = 0x277F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F14u;
    // 0x277f18: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2743C8u, 0x277F14u, 0x277F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F1Cu;
label_277f1c:
    // 0x277f1c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x277f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277f20: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x277f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x277f24: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x277f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x277f28: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x277f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x277f2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x277f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x277f30: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x277f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x277f34: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x277F34u;
    {
        const bool branch_taken_0x277f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F34u;
        // 0x277f38: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f34) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x277F3Cu;
label_277f3c:
    // 0x277f3c: 0xc09d0f2  jal         func_2743C8
    ctx->pc = 0x277F3Cu;
    SET_GPR_U32(ctx, 31, 0x277F44u);
    ctx->pc = 0x277F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F3Cu;
    // 0x277f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2743C8u, 0x277F3Cu, 0x277F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F44u;
label_277f44:
    // 0x277f44: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x277f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277f48: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x277f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x277f4c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x277f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x277f50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277f54: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x277f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x277f58: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x277f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x277f5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x277f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277f60: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x277f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x277f64: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x277f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x277f68: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x277F68u;
    {
        const bool branch_taken_0x277f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F68u;
        // 0x277f6c: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f68) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x277F70u;
label_277f70:
    // 0x277f70: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x277f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x277f74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277f78: 0xc09829e  jal         func_260A78
    ctx->pc = 0x277F78u;
    SET_GPR_U32(ctx, 31, 0x277F80u);
    ctx->pc = 0x277F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F78u;
    // 0x277f7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x277F78u, 0x277F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F80u;
label_277f80:
    // 0x277f80: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277f84: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x277f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277f88: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x277f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x277f8c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x277f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x277f90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x277f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x277f94: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x277F94u;
    {
        const bool branch_taken_0x277f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F94u;
        // 0x277f98: 0x24849908  addiu       $a0, $a0, -0x66F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f94) {
            ctx->pc = 0x277FF0u;
            goto label_277ff0;
        }
    }
    ctx->pc = 0x277F9Cu;
label_277f9c:
    // 0x277f9c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x277f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x277fa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277fa4: 0xc09829e  jal         func_260A78
    ctx->pc = 0x277FA4u;
    SET_GPR_U32(ctx, 31, 0x277FACu);
    ctx->pc = 0x277FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FA4u;
    // 0x277fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x277FA4u, 0x277FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FACu;
label_277fac:
    // 0x277fac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277fb0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x277fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277fb4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x277fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x277fb8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x277fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x277fbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x277fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x277fc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x277FC0u;
    {
        const bool branch_taken_0x277fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FC0u;
        // 0x277fc4: 0x248499e0  addiu       $a0, $a0, -0x6620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277fc0) {
            ctx->pc = 0x277FF0u;
            goto label_277ff0;
        }
    }
    ctx->pc = 0x277FC8u;
label_277fc8:
    // 0x277fc8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x277fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x277fcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277fd0: 0xc09829e  jal         func_260A78
    ctx->pc = 0x277FD0u;
    SET_GPR_U32(ctx, 31, 0x277FD8u);
    ctx->pc = 0x277FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FD0u;
    // 0x277fd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x277FD0u, 0x277FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FD8u;
label_277fd8:
    // 0x277fd8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x277fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277fdc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x277fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277fe0: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x277fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x277fe4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x277fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x277fe8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x277fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x277fec: 0x24849ae8  addiu       $a0, $a0, -0x6518
    ctx->pc = 0x277fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941416));
label_277ff0:
    // 0x277ff0: 0xae040190  sw          $a0, 0x190($s0)
    ctx->pc = 0x277ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 4));
    // 0x277ff4: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x277FF4u;
    {
        const bool branch_taken_0x277ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FF4u;
        // 0x277ff8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ff4) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x277FFCu;
label_277ffc:
    // 0x277ffc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x277ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x278000: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x278000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x278004: 0x244236b8  addiu       $v0, $v0, 0x36B8
    ctx->pc = 0x278004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14008));
    // 0x278008: 0x24633658  addiu       $v1, $v1, 0x3658
    ctx->pc = 0x278008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13912));
    // 0x27800c: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x27800cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x278010: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x278010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x278014: 0x0  nop
    ctx->pc = 0x278014u;
    // NOP
label_278018:
    // 0x278018: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x278018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x27801c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27801cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x278020: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x278020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x278024: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x278024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x278028: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x278028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x27802c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27802Cu;
    {
        const bool branch_taken_0x27802c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x27802c) {
            ctx->pc = 0x278018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278018;
        }
    }
    ctx->pc = 0x278034u;
    // 0x278034: 0xc09d0f2  jal         func_2743C8
    ctx->pc = 0x278034u;
    SET_GPR_U32(ctx, 31, 0x27803Cu);
    ctx->pc = 0x278038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278034u;
    // 0x278038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2743C8u, 0x278034u, 0x27803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27803Cu;
label_27803c:
    // 0x27803c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27803cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x278040: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x278040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278044: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x278044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x278048: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x278048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27804c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x27804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x278050: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x278050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
    // 0x278054: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x278054u;
    SET_GPR_U32(ctx, 31, 0x27805Cu);
    ctx->pc = 0x278058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278054u;
    // 0x278058: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x278054u, 0x27805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27805Cu;
label_27805c:
    // 0x27805c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x27805cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x278060: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x278060u;
    {
        const bool branch_taken_0x278060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278060u;
        // 0x278064: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278060) {
            ctx->pc = 0x27822Cu;
            goto label_27822c;
        }
    }
    ctx->pc = 0x278068u;
label_278068:
    // 0x278068: 0xc09d0f2  jal         func_2743C8
    ctx->pc = 0x278068u;
    SET_GPR_U32(ctx, 31, 0x278070u);
    ctx->pc = 0x27806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278068u;
    // 0x27806c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2743C8u, 0x278068u, 0x278070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278070u;
label_278070:
    // 0x278070: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x278070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x278074: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x278074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x278078: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x278078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x27807c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x27807cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x278080: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x278080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x278084: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x278084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278088: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x278088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x27808c: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x27808cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x278090: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x278090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_278094:
    // 0x278094: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x278094u;
    SET_GPR_U32(ctx, 31, 0x27809Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x278094u, 0x27809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27809Cu;
label_27809c:
    // 0x27809c: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27809Cu;
    {
        const bool branch_taken_0x27809c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2780A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27809Cu;
        // 0x2780a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27809c) {
            ctx->pc = 0x2780FCu;
            goto label_2780fc;
        }
    }
    ctx->pc = 0x2780A4u;
    // 0x2780a4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2780A4u;
    {
        const bool branch_taken_0x2780a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2780A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780A4u;
        // 0x2780a8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2780a4) {
            ctx->pc = 0x27810Cu;
            goto label_27810c;
        }
    }
    ctx->pc = 0x2780ACu;
label_2780ac:
    // 0x2780ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2780acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2780b0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2780b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2780b4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2780b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2780b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2780b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2780bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2780bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2780c0: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x2780c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x2780c4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2780c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2780c8: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x2780C8u;
    {
        const bool branch_taken_0x2780c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2780CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780C8u;
        // 0x2780cc: 0xae05008c  sw          $a1, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2780c8) {
            ctx->pc = 0x278094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278094;
        }
    }
    ctx->pc = 0x2780D0u;
label_2780d0:
    // 0x2780d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2780d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2780d4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2780d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2780d8: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x2780d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2780dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2780dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2780e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2780e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2780e4: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x2780e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x2780e8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2780e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2780ec: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2780ECu;
    SET_GPR_U32(ctx, 31, 0x2780F4u);
    ctx->pc = 0x2780F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2780ECu;
    // 0x2780f0: 0xae05008c  sw          $a1, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2780ECu, 0x2780F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780F4u;
label_2780f4:
    // 0x2780f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2780F4u;
    {
        const bool branch_taken_0x2780f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2780F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780F4u;
        // 0x2780f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2780f4) {
            ctx->pc = 0x278108u;
            goto label_278108;
        }
    }
    ctx->pc = 0x2780FCu;
label_2780fc:
    // 0x2780fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2780fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x278100: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x278100u;
    {
        const bool branch_taken_0x278100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278100u;
        // 0x278104: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278100) {
            ctx->pc = 0x27811Cu;
            goto label_27811c;
        }
    }
    ctx->pc = 0x278108u;
label_278108:
    // 0x278108: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x278108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27810c:
    // 0x27810c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27810cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x278110: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x278110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x278114: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x278114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x278118: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x278118u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27811c:
    // 0x27811c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x27811cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x278120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278124: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x278124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x278128: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x278128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27812c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27812cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x278130: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x278130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x278134: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x278134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x278138: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x278138u;
    {
        const bool branch_taken_0x278138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278138u;
        // 0x27813c: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278138) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x278140u;
label_278140:
    // 0x278140: 0xc09d0f2  jal         func_2743C8
    ctx->pc = 0x278140u;
    SET_GPR_U32(ctx, 31, 0x278148u);
    ctx->pc = 0x278144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278140u;
    // 0x278144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2743C8u, 0x278140u, 0x278148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278148u;
label_278148:
    // 0x278148: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x278148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27814c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x278150: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x278150u;
    {
        const bool branch_taken_0x278150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278150u;
        // 0x278154: 0x34420600  ori         $v0, $v0, 0x600 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278150) {
            ctx->pc = 0x27822Cu;
            goto label_27822c;
        }
    }
    ctx->pc = 0x278158u;
label_278158:
    // 0x278158: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x278158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27815c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x27815cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x278160: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x278160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278164: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x278164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x278168: 0x244883f0  addiu       $t0, $v0, -0x7C10
    ctx->pc = 0x278168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935536));
    // 0x27816c: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x27816cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x278170: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x278170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x278174: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x278174u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A83F8u));
    // 0x278178: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x278178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27817c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x27817cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278180: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x278180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x278184: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x278184u;
    SET_GPR_U32(ctx, 31, 0x27818Cu);
    ctx->pc = 0x278188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278184u;
    // 0x278188: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x278184u, 0x27818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27818Cu;
label_27818c:
    // 0x27818c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x278190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278194: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x278194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
    // 0x278198: 0xc09d0f2  jal         func_2743C8
    ctx->pc = 0x278198u;
    SET_GPR_U32(ctx, 31, 0x2781A0u);
    ctx->pc = 0x27819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278198u;
    // 0x27819c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2743C8u, 0x278198u, 0x2781A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781A0u;
label_2781a0:
    // 0x2781a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2781a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2781a4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2781a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2781a8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2781a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2781ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2781acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2781b0: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x2781b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x2781b4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2781B4u;
    {
        const bool branch_taken_0x2781b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2781B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2781B4u;
        // 0x2781b8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781b4) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x2781BCu;
label_2781bc:
    // 0x2781bc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2781bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2781c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2781c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2781c4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x2781c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x2781c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2781c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781cc: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2781ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2781d0: 0xaf80b190  sw          $zero, -0x4E70($gp)
    ctx->pc = 0x2781d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947216), GPR_U32(ctx, 0));
    // 0x2781d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2781D4u;
    {
        const bool branch_taken_0x2781d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2781D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2781D4u;
        // 0x2781d8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781d4) {
            ctx->pc = 0x278204u;
            goto label_278204;
        }
    }
    ctx->pc = 0x2781DCu;
label_2781dc:
    // 0x2781dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2781dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2781e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2781e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2781e4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2781e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2781e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2781e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2781ec: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2781ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2781f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2781f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2781f4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2781f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2781f8: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2781F8u;
    SET_GPR_U32(ctx, 31, 0x278200u);
    ctx->pc = 0x2781FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2781F8u;
    // 0x2781fc: 0xae03008c  sw          $v1, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2781F8u, 0x278200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278200u;
label_278200:
    // 0x278200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278204:
    // 0x278204: 0xc09d0f2  jal         func_2743C8
    ctx->pc = 0x278204u;
    SET_GPR_U32(ctx, 31, 0x27820Cu);
    ctx->pc = 0x2743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2743C8u, 0x278204u, 0x27820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27820Cu;
label_27820c:
    // 0x27820c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x278210: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x278210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_278214:
    // 0x278214: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x278214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x278218: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x278218u;
    {
        const bool branch_taken_0x278218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278218u;
        // 0x27821c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278218) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x278220u;
label_278220:
    // 0x278220: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x278220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x278224: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x278224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x278228: 0x34420220  ori         $v0, $v0, 0x220
    ctx->pc = 0x278228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)544);
label_27822c:
    // 0x27822c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27822cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x278230: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x278230u;
    {
        const bool branch_taken_0x278230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278230u;
        // 0x278234: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278230) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x278238u;
label_278238:
    // 0x278238: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x278238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27823c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x27823cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x278240: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x278240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
    // 0x278244: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x278244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x278248: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x278248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x27824c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x27824cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x278250: 0xc7828670  lwc1        $f2, -0x7990($gp)
    ctx->pc = 0x278250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x278254: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x278254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x278258: 0xc7838674  lwc1        $f3, -0x798C($gp)
    ctx->pc = 0x278258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27825c: 0x8c62c4f0  lw          $v0, -0x3B10($v1)
    ctx->pc = 0x27825cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x278260: 0xc7808678  lwc1        $f0, -0x7988($gp)
    ctx->pc = 0x278260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278264: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x278264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x278268: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x278268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x27826c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27826cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x278270: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x278270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x278274: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x278274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x278278: 0xe622003c  swc1        $f2, 0x3C($s1)
    ctx->pc = 0x278278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x27827c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x278280: 0xe6230040  swc1        $f3, 0x40($s1)
    ctx->pc = 0x278280u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x278284: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x278284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x278288: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x278288u;
    {
        const bool branch_taken_0x278288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278288u;
        // 0x27828c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278288) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x278290u;
label_278290:
    // 0x278290: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x278290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x278294: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x278294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278298: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x278298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27829c: 0xc09829e  jal         func_260A78
    ctx->pc = 0x27829Cu;
    SET_GPR_U32(ctx, 31, 0x2782A4u);
    ctx->pc = 0x2782A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27829Cu;
    // 0x2782a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x27829Cu, 0x2782A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2782A4u;
label_2782a4:
    // 0x2782a4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2782a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2782a8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2782a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x2782ac: 0xe634002c  swc1        $f20, 0x2C($s1)
    ctx->pc = 0x2782acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2782b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2782b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782b4: 0xc09d100  jal         func_274400
    ctx->pc = 0x2782B4u;
    SET_GPR_U32(ctx, 31, 0x2782BCu);
    ctx->pc = 0x2782B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2782B4u;
    // 0x2782b8: 0xac6200f8  sw          $v0, 0xF8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274400u, 0x2782B4u, 0x2782BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2782BCu;
label_2782bc:
    // 0x2782bc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2782bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2782c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2782c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2782c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2782c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782c8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2782c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2782cc: 0xc098ffc  jal         func_263FF0
    ctx->pc = 0x2782CCu;
    SET_GPR_U32(ctx, 31, 0x2782D4u);
    ctx->pc = 0x2782D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2782CCu;
    // 0x2782d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FF0u, 0x2782CCu, 0x2782D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2782D4u;
label_2782d4:
    // 0x2782d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2782d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2782d8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2782d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2782dc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2782DCu;
    {
        const bool branch_taken_0x2782dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2782E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782DCu;
        // 0x2782e0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2782dc) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x2782E4u;
label_2782e4:
    // 0x2782e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2782e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2782e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2782e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2782ec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2782ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2782f0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2782f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2782f4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2782f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2782f8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2782f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2782fc: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2782FCu;
    SET_GPR_U32(ctx, 31, 0x278304u);
    ctx->pc = 0x278300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2782FCu;
    // 0x278300: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2782FCu, 0x278304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278304u;
label_278304:
    // 0x278304: 0xe634002c  swc1        $f20, 0x2C($s1)
    ctx->pc = 0x278304u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x278308: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x278308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27830c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x27830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x278310: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x278310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278314: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x278314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x278318: 0xc098ffc  jal         func_263FF0
    ctx->pc = 0x278318u;
    SET_GPR_U32(ctx, 31, 0x278320u);
    ctx->pc = 0x27831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278318u;
    // 0x27831c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FF0u, 0x278318u, 0x278320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278320u;
label_278320:
    // 0x278320: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x278320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278324: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x278324u;
    {
        const bool branch_taken_0x278324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278324u;
        // 0x278328: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278324) {
            ctx->pc = 0x278398u;
            goto label_278398;
        }
    }
    ctx->pc = 0x27832Cu;
label_27832c:
    // 0x27832c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x278330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x278330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278334: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x278334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x278338: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x278338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x27833c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x27833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x278340: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x278340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x278344: 0xc09829e  jal         func_260A78
    ctx->pc = 0x278344u;
    SET_GPR_U32(ctx, 31, 0x27834Cu);
    ctx->pc = 0x278348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278344u;
    // 0x278348: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x278344u, 0x27834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27834Cu;
label_27834c:
    // 0x27834c: 0xe634002c  swc1        $f20, 0x2C($s1)
    ctx->pc = 0x27834cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x278350: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x278350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278354: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x278354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_278358:
    // 0x278358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x278358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27835c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27835cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x278360: 0xc098ffc  jal         func_263FF0
    ctx->pc = 0x278360u;
    SET_GPR_U32(ctx, 31, 0x278368u);
    ctx->pc = 0x278364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278360u;
    // 0x278364: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FF0u, 0x278360u, 0x278368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278368u;
label_278368:
    // 0x278368: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x278368u;
    {
        const bool branch_taken_0x278368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278368u;
        // 0x27836c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278368) {
            ctx->pc = 0x27839Cu;
            goto label_27839c;
        }
    }
    ctx->pc = 0x278370u;
label_278370:
    // 0x278370: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x278370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x278374: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x278374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x278378: 0x3463ffde  ori         $v1, $v1, 0xFFDE
    ctx->pc = 0x278378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65502);
    // 0x27837c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x27837cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x278380: 0x34840400  ori         $a0, $a0, 0x400
    ctx->pc = 0x278380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
    // 0x278384: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x278384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x278388: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x278388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x27838c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27838cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278390: 0xc09d0f2  jal         func_2743C8
    ctx->pc = 0x278390u;
    SET_GPR_U32(ctx, 31, 0x278398u);
    ctx->pc = 0x278394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278390u;
    // 0x278394: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2743C8u, 0x278390u, 0x278398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278398u;
label_278398:
    // 0x278398: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x278398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27839c:
    // 0x27839c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27839cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2783a0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2783a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2783a4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2783a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2783a8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2783a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2783ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2783acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2783b0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2783b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2783b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2783B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2783B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783B4u;
        // 0x2783b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2783B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2783BCu;
}
