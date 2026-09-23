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

// Function: setAnim
// Address: 0x214d68 - 0x21527c
void setAnim_0x214d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setAnim_0x214d68");
#endif

    switch (ctx->pc) {
        case 0x214e78u: goto label_214e78;
        case 0x2150ccu: goto label_2150cc;
        case 0x2151ecu: goto label_2151ec;
        default: break;
    }

    ctx->pc = 0x214d68u;

    // 0x214d68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x214d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x214d6c: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x214d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x214d70: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x214d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x214d74: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x214d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x214d78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d7c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x214d7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x214d80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x214d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d84: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x214d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x214d88: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x214d88u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x214d8c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x214d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x214d90: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x214d90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x214d94: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x214d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x214d98: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x214d98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x214d9c: 0x8e270160  lw          $a3, 0x160($s1)
    ctx->pc = 0x214d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x214da0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x214da0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214da4: 0x1040012c  beqz        $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x214DA4u;
    {
        const bool branch_taken_0x214da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DA4u;
        // 0x214da8: 0xc4f60b18  lwc1        $f22, 0xB18($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 2840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214da4) {
            ctx->pc = 0x215258u;
            goto label_215258;
        }
    }
    ctx->pc = 0x214DACu;
    // 0x214dac: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x214dacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x214db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214db4: 0x8d230060  lw          $v1, 0x60($t1)
    ctx->pc = 0x214db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x214db8: 0x10620127  beq         $v1, $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x214DB8u;
    {
        const bool branch_taken_0x214db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x214DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DB8u;
        // 0x214dbc: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214db8) {
            ctx->pc = 0x215258u;
            goto label_215258;
        }
    }
    ctx->pc = 0x214DC0u;
    // 0x214dc0: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x214dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x214dc4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x214dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x214dc8: 0x2645ab60  addiu       $a1, $s2, -0x54A0
    ctx->pc = 0x214dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945632));
    // 0x214dcc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x214dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x214dd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x214dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214dd4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x214dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x214dd8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x214dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x214ddc: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x214DDCu;
    {
        const bool branch_taken_0x214ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x214ddc) {
            ctx->pc = 0x214DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214DDCu;
            // 0x214de0: 0x8cc30060  lw          $v1, 0x60($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214E10u;
            goto label_214e10;
        }
    }
    ctx->pc = 0x214DE4u;
    // 0x214de4: 0x8d220098  lw          $v0, 0x98($t1)
    ctx->pc = 0x214de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 152)));
    // 0x214de8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x214DE8u;
    {
        const bool branch_taken_0x214de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214de8) {
            ctx->pc = 0x214DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214DE8u;
            // 0x214dec: 0x8cc30060  lw          $v1, 0x60($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214E10u;
            goto label_214e10;
        }
    }
    ctx->pc = 0x214DF0u;
    // 0x214df0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x214df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x214df4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x214df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x214df8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x214df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214dfc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x214dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x214e00: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x214e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x214e04: 0x10600115  beqz        $v1, . + 4 + (0x115 << 2)
    ctx->pc = 0x214E04u;
    {
        const bool branch_taken_0x214e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E04u;
        // 0x214e08: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e04) {
            ctx->pc = 0x21525Cu;
            goto label_21525c;
        }
    }
    ctx->pc = 0x214E0Cu;
    // 0x214e0c: 0x8cc30060  lw          $v1, 0x60($a2)
    ctx->pc = 0x214e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
label_214e10:
    // 0x214e10: 0x2642ab60  addiu       $v0, $s2, -0x54A0
    ctx->pc = 0x214e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945632));
    // 0x214e14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x214e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x214e18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214e1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x214e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214e20: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x214e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x214e24: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x214e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x214e28: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x214E28u;
    {
        const bool branch_taken_0x214e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E28u;
        // 0x214e2c: 0x2602fe34  addiu       $v0, $s0, -0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966836));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e28) {
            ctx->pc = 0x214E34u;
            goto label_214e34;
        }
    }
    ctx->pc = 0x214E30u;
    // 0x214e30: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x214e30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_214e34:
    // 0x214e34: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x214e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x214e38: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x214E38u;
    {
        const bool branch_taken_0x214e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214e38) {
            ctx->pc = 0x214E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214E38u;
            // 0x214e3c: 0x85030004  lh          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214E54u;
            goto label_214e54;
        }
    }
    ctx->pc = 0x214E40u;
    // 0x214e40: 0x2602fe44  addiu       $v0, $s0, -0x1BC
    ctx->pc = 0x214e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966852));
    // 0x214e44: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x214e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x214e48: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x214E48u;
    {
        const bool branch_taken_0x214e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E48u;
        // 0x214e4c: 0x2602fe45  addiu       $v0, $s0, -0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966853));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e48) {
            ctx->pc = 0x214E84u;
            goto label_214e84;
        }
    }
    ctx->pc = 0x214E50u;
    // 0x214e50: 0x85030004  lh          $v1, 0x4($t0)
    ctx->pc = 0x214e50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_214e54:
    // 0x214e54: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x214e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x214e58: 0x24424fa0  addiu       $v0, $v0, 0x4FA0
    ctx->pc = 0x214e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20384));
    // 0x214e5c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x214e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x214e60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x214e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x214e64: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x214e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x214e68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214e6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x214e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e70: 0xc081602  jal         func_205808
    ctx->pc = 0x214E70u;
    SET_GPR_U32(ctx, 31, 0x214E78u);
    ctx->pc = 0x214E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E70u;
    // 0x214e74: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205808u, 0x214E70u, 0x214E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E78u;
label_214e78:
    // 0x214e78: 0x8e270160  lw          $a3, 0x160($s1)
    ctx->pc = 0x214e78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x214e7c: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x214e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x214e80: 0x2602fe45  addiu       $v0, $s0, -0x1BB
    ctx->pc = 0x214e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966853));
label_214e84:
    // 0x214e84: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x214e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x214e88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214E88u;
    {
        const bool branch_taken_0x214e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E88u;
        // 0x214e8c: 0x26040026  addiu       $a0, $s0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e88) {
            ctx->pc = 0x214EA0u;
            goto label_214ea0;
        }
    }
    ctx->pc = 0x214E90u;
    // 0x214e90: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x214e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x214e94: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x214e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x214e98: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x214e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x214e9c: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x214e9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_214ea0:
    // 0x214ea0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x214ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x214ea4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x214ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214ea8: 0x1064003a  beq         $v1, $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x214EA8u;
    {
        const bool branch_taken_0x214ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x214EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EA8u;
        // 0x214eac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ea8) {
            ctx->pc = 0x214F94u;
            goto label_214f94;
        }
    }
    ctx->pc = 0x214EB0u;
    // 0x214eb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214EB0u;
    {
        const bool branch_taken_0x214eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EB0u;
        // 0x214eb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214eb0) {
            ctx->pc = 0x214EC8u;
            goto label_214ec8;
        }
    }
    ctx->pc = 0x214EB8u;
    // 0x214eb8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x214EB8u;
    {
        const bool branch_taken_0x214eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EB8u;
        // 0x214ebc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214eb8) {
            ctx->pc = 0x214ED8u;
            goto label_214ed8;
        }
    }
    ctx->pc = 0x214EC0u;
    // 0x214ec0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x214EC0u;
    {
        const bool branch_taken_0x214ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EC0u;
        // 0x214ec4: 0x2602fdca  addiu       $v0, $s0, -0x236 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966730));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ec0) {
            ctx->pc = 0x215060u;
            goto label_215060;
        }
    }
    ctx->pc = 0x214EC8u;
label_214ec8:
    // 0x214ec8: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x214EC8u;
    {
        const bool branch_taken_0x214ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x214ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EC8u;
        // 0x214ecc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ec8) {
            ctx->pc = 0x214FF8u;
            goto label_214ff8;
        }
    }
    ctx->pc = 0x214ED0u;
    // 0x214ed0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x214ED0u;
    {
        const bool branch_taken_0x214ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214ED0u;
        // 0x214ed4: 0x2602fdca  addiu       $v0, $s0, -0x236 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966730));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ed0) {
            ctx->pc = 0x215060u;
            goto label_215060;
        }
    }
    ctx->pc = 0x214ED8u;
label_214ed8:
    // 0x214ed8: 0x2602fffd  addiu       $v0, $s0, -0x3
    ctx->pc = 0x214ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x214edc: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x214edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x214ee0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x214EE0u;
    {
        const bool branch_taken_0x214ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214ee0) {
            ctx->pc = 0x214EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214EE0u;
            // 0x214ee4: 0x8e230158  lw          $v1, 0x158($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214EFCu;
            goto label_214efc;
        }
    }
    ctx->pc = 0x214EE8u;
    // 0x214ee8: 0x2602ff8f  addiu       $v0, $s0, -0x71
    ctx->pc = 0x214ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967183));
    // 0x214eec: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x214eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x214ef0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214EF0u;
    {
        const bool branch_taken_0x214ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EF0u;
        // 0x214ef4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ef0) {
            ctx->pc = 0x214F08u;
            goto label_214f08;
        }
    }
    ctx->pc = 0x214EF8u;
    // 0x214ef8: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x214ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_214efc:
    // 0x214efc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x214efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x214f00: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x214f00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x214f04: 0x904021  addu        $t0, $a0, $s0
    ctx->pc = 0x214f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_214f08:
    // 0x214f08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x214f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214f0c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x214f0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214f10: 0x0  nop
    ctx->pc = 0x214f10u;
    // NOP
    // 0x214f14: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x214F14u;
    {
        const bool branch_taken_0x214f14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F14u;
        // 0x214f18: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f14) {
            ctx->pc = 0x214F58u;
            goto label_214f58;
        }
    }
    ctx->pc = 0x214F1Cu;
    // 0x214f1c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214F1Cu;
    {
        const bool branch_taken_0x214f1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x214F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F1Cu;
        // 0x214f20: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f1c) {
            ctx->pc = 0x214F2Cu;
            goto label_214f2c;
        }
    }
    ctx->pc = 0x214F24u;
    // 0x214f24: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214F24u;
    {
        const bool branch_taken_0x214f24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x214F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F24u;
        // 0x214f28: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f24) {
            ctx->pc = 0x214F34u;
            goto label_214f34;
        }
    }
    ctx->pc = 0x214F2Cu;
label_214f2c:
    // 0x214f2c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x214F2Cu;
    {
        const bool branch_taken_0x214f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F2Cu;
        // 0x214f30: 0xad20009c  sw          $zero, 0x9C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f2c) {
            ctx->pc = 0x21505Cu;
            goto label_21505c;
        }
    }
    ctx->pc = 0x214F34u;
label_214f34:
    // 0x214f34: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214F34u;
    {
        const bool branch_taken_0x214f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x214F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F34u;
        // 0x214f38: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f34) {
            ctx->pc = 0x214F44u;
            goto label_214f44;
        }
    }
    ctx->pc = 0x214F3Cu;
    // 0x214f3c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214F3Cu;
    {
        const bool branch_taken_0x214f3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x214F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F3Cu;
        // 0x214f40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f3c) {
            ctx->pc = 0x214F50u;
            goto label_214f50;
        }
    }
    ctx->pc = 0x214F44u;
label_214f44:
    // 0x214f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214f48: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x214F48u;
    {
        const bool branch_taken_0x214f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F48u;
        // 0x214f4c: 0xad22009c  sw          $v0, 0x9C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f48) {
            ctx->pc = 0x21505Cu;
            goto label_21505c;
        }
    }
    ctx->pc = 0x214F50u;
label_214f50:
    // 0x214f50: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x214F50u;
    {
        const bool branch_taken_0x214f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F50u;
        // 0x214f54: 0xad22009c  sw          $v0, 0x9C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f50) {
            ctx->pc = 0x21505Cu;
            goto label_21505c;
        }
    }
    ctx->pc = 0x214F58u;
label_214f58:
    // 0x214f58: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214F58u;
    {
        const bool branch_taken_0x214f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x214F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F58u;
        // 0x214f5c: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f58) {
            ctx->pc = 0x214F68u;
            goto label_214f68;
        }
    }
    ctx->pc = 0x214F60u;
    // 0x214f60: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214F60u;
    {
        const bool branch_taken_0x214f60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x214F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F60u;
        // 0x214f64: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f60) {
            ctx->pc = 0x214F70u;
            goto label_214f70;
        }
    }
    ctx->pc = 0x214F68u;
label_214f68:
    // 0x214f68: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x214F68u;
    {
        const bool branch_taken_0x214f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F68u;
        // 0x214f6c: 0xad2000dc  sw          $zero, 0xDC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f68) {
            ctx->pc = 0x21505Cu;
            goto label_21505c;
        }
    }
    ctx->pc = 0x214F70u;
label_214f70:
    // 0x214f70: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214F70u;
    {
        const bool branch_taken_0x214f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x214F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F70u;
        // 0x214f74: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f70) {
            ctx->pc = 0x214F80u;
            goto label_214f80;
        }
    }
    ctx->pc = 0x214F78u;
    // 0x214f78: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214F78u;
    {
        const bool branch_taken_0x214f78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x214F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F78u;
        // 0x214f7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f78) {
            ctx->pc = 0x214F8Cu;
            goto label_214f8c;
        }
    }
    ctx->pc = 0x214F80u;
label_214f80:
    // 0x214f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214f84: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x214F84u;
    {
        const bool branch_taken_0x214f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F84u;
        // 0x214f88: 0xad2200dc  sw          $v0, 0xDC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f84) {
            ctx->pc = 0x21505Cu;
            goto label_21505c;
        }
    }
    ctx->pc = 0x214F8Cu;
label_214f8c:
    // 0x214f8c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x214F8Cu;
    {
        const bool branch_taken_0x214f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F8Cu;
        // 0x214f90: 0xad2200dc  sw          $v0, 0xDC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f8c) {
            ctx->pc = 0x21505Cu;
            goto label_21505c;
        }
    }
    ctx->pc = 0x214F94u;
label_214f94:
    // 0x214f94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x214f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214f98: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x214f98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214f9c: 0x0  nop
    ctx->pc = 0x214f9cu;
    // NOP
    // 0x214fa0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x214FA0u;
    {
        const bool branch_taken_0x214fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FA0u;
        // 0x214fa4: 0x24020208  addiu       $v0, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fa0) {
            ctx->pc = 0x214FD0u;
            goto label_214fd0;
        }
    }
    ctx->pc = 0x214FA8u;
    // 0x214fa8: 0x1202001a  beq         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x214FA8u;
    {
        const bool branch_taken_0x214fa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x214FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FA8u;
        // 0x214fac: 0x2402020a  addiu       $v0, $zero, 0x20A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fa8) {
            ctx->pc = 0x215014u;
            goto label_215014;
        }
    }
    ctx->pc = 0x214FB0u;
    // 0x214fb0: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x214FB0u;
    {
        const bool branch_taken_0x214fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x214FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FB0u;
        // 0x214fb4: 0x24020209  addiu       $v0, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fb0) {
            ctx->pc = 0x215014u;
            goto label_215014;
        }
    }
    ctx->pc = 0x214FB8u;
    // 0x214fb8: 0x1202001a  beq         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x214FB8u;
    {
        const bool branch_taken_0x214fb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x214FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FB8u;
        // 0x214fbc: 0x2402020b  addiu       $v0, $zero, 0x20B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fb8) {
            ctx->pc = 0x215024u;
            goto label_215024;
        }
    }
    ctx->pc = 0x214FC0u;
    // 0x214fc0: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x214FC0u;
    {
        const bool branch_taken_0x214fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x214FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FC0u;
        // 0x214fc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fc0) {
            ctx->pc = 0x215024u;
            goto label_215024;
        }
    }
    ctx->pc = 0x214FC8u;
    // 0x214fc8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x214FC8u;
    {
        const bool branch_taken_0x214fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FC8u;
        // 0x214fcc: 0xad22009c  sw          $v0, 0x9C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fc8) {
            ctx->pc = 0x215058u;
            goto label_215058;
        }
    }
    ctx->pc = 0x214FD0u;
label_214fd0:
    // 0x214fd0: 0x1202001a  beq         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x214FD0u;
    {
        const bool branch_taken_0x214fd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x214FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FD0u;
        // 0x214fd4: 0x2402020a  addiu       $v0, $zero, 0x20A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fd0) {
            ctx->pc = 0x21503Cu;
            goto label_21503c;
        }
    }
    ctx->pc = 0x214FD8u;
    // 0x214fd8: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x214FD8u;
    {
        const bool branch_taken_0x214fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x214FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FD8u;
        // 0x214fdc: 0x24020209  addiu       $v0, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fd8) {
            ctx->pc = 0x21503Cu;
            goto label_21503c;
        }
    }
    ctx->pc = 0x214FE0u;
    // 0x214fe0: 0x1202001a  beq         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x214FE0u;
    {
        const bool branch_taken_0x214fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x214FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FE0u;
        // 0x214fe4: 0x2402020b  addiu       $v0, $zero, 0x20B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fe0) {
            ctx->pc = 0x21504Cu;
            goto label_21504c;
        }
    }
    ctx->pc = 0x214FE8u;
    // 0x214fe8: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x214FE8u;
    {
        const bool branch_taken_0x214fe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x214FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FE8u;
        // 0x214fec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fe8) {
            ctx->pc = 0x21504Cu;
            goto label_21504c;
        }
    }
    ctx->pc = 0x214FF0u;
    // 0x214ff0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x214FF0u;
    {
        const bool branch_taken_0x214ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FF0u;
        // 0x214ff4: 0xad2200dc  sw          $v0, 0xDC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ff0) {
            ctx->pc = 0x215058u;
            goto label_215058;
        }
    }
    ctx->pc = 0x214FF8u;
label_214ff8:
    // 0x214ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x214ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214ffc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x214ffcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215000: 0x0  nop
    ctx->pc = 0x215000u;
    // NOP
    // 0x215004: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x215004u;
    {
        const bool branch_taken_0x215004 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215004u;
        // 0x215008: 0x24020230  addiu       $v0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215004) {
            ctx->pc = 0x215034u;
            goto label_215034;
        }
    }
    ctx->pc = 0x21500Cu;
    // 0x21500c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21500Cu;
    {
        const bool branch_taken_0x21500c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x215010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21500Cu;
        // 0x215010: 0x24020231  addiu       $v0, $zero, 0x231 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21500c) {
            ctx->pc = 0x21501Cu;
            goto label_21501c;
        }
    }
    ctx->pc = 0x215014u;
label_215014:
    // 0x215014: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x215014u;
    {
        const bool branch_taken_0x215014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215014u;
        // 0x215018: 0xad20009c  sw          $zero, 0x9C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215014) {
            ctx->pc = 0x215058u;
            goto label_215058;
        }
    }
    ctx->pc = 0x21501Cu;
label_21501c:
    // 0x21501c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21501Cu;
    {
        const bool branch_taken_0x21501c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x215020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21501Cu;
        // 0x215020: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21501c) {
            ctx->pc = 0x21502Cu;
            goto label_21502c;
        }
    }
    ctx->pc = 0x215024u;
label_215024:
    // 0x215024: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x215024u;
    {
        const bool branch_taken_0x215024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215024u;
        // 0x215028: 0xad24009c  sw          $a0, 0x9C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215024) {
            ctx->pc = 0x215058u;
            goto label_215058;
        }
    }
    ctx->pc = 0x21502Cu;
label_21502c:
    // 0x21502c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21502Cu;
    {
        const bool branch_taken_0x21502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21502Cu;
        // 0x215030: 0xad22009c  sw          $v0, 0x9C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21502c) {
            ctx->pc = 0x215058u;
            goto label_215058;
        }
    }
    ctx->pc = 0x215034u;
label_215034:
    // 0x215034: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215034u;
    {
        const bool branch_taken_0x215034 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x215038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215034u;
        // 0x215038: 0x24020231  addiu       $v0, $zero, 0x231 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215034) {
            ctx->pc = 0x215044u;
            goto label_215044;
        }
    }
    ctx->pc = 0x21503Cu;
label_21503c:
    // 0x21503c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21503Cu;
    {
        const bool branch_taken_0x21503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21503Cu;
        // 0x215040: 0xad2000dc  sw          $zero, 0xDC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21503c) {
            ctx->pc = 0x215058u;
            goto label_215058;
        }
    }
    ctx->pc = 0x215044u;
label_215044:
    // 0x215044: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215044u;
    {
        const bool branch_taken_0x215044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x215048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215044u;
        // 0x215048: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215044) {
            ctx->pc = 0x215054u;
            goto label_215054;
        }
    }
    ctx->pc = 0x21504Cu;
label_21504c:
    // 0x21504c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21504Cu;
    {
        const bool branch_taken_0x21504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21504Cu;
        // 0x215050: 0xad2400dc  sw          $a0, 0xDC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 220), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21504c) {
            ctx->pc = 0x215058u;
            goto label_215058;
        }
    }
    ctx->pc = 0x215054u;
label_215054:
    // 0x215054: 0xad2200dc  sw          $v0, 0xDC($t1)
    ctx->pc = 0x215054u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 220), GPR_U32(ctx, 2));
label_215058:
    // 0x215058: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x215058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21505c:
    // 0x21505c: 0x2602fdca  addiu       $v0, $s0, -0x236
    ctx->pc = 0x21505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966730));
label_215060:
    // 0x215060: 0x2c420029  sltiu       $v0, $v0, 0x29
    ctx->pc = 0x215060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x215064: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215064u;
    {
        const bool branch_taken_0x215064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215064) {
            ctx->pc = 0x215078u;
            goto label_215078;
        }
    }
    ctx->pc = 0x21506Cu;
    // 0x21506c: 0xace00b98  sw          $zero, 0xB98($a3)
    ctx->pc = 0x21506cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2968), GPR_U32(ctx, 0));
    // 0x215070: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x215070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215074: 0xe4e00b9c  swc1        $f0, 0xB9C($a3)
    ctx->pc = 0x215074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 2972), bits); }
label_215078:
    // 0x215078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x215078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21507c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x21507cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215080: 0x0  nop
    ctx->pc = 0x215080u;
    // NOP
    // 0x215084: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x215084u;
    {
        const bool branch_taken_0x215084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215084u;
        // 0x215088: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215084) {
            ctx->pc = 0x21510Cu;
            goto label_21510c;
        }
    }
    ctx->pc = 0x21508Cu;
    // 0x21508c: 0x2643ab60  addiu       $v1, $s2, -0x54A0
    ctx->pc = 0x21508cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945632));
    // 0x215090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x215094: 0xad280060  sw          $t0, 0x60($t1)
    ctx->pc = 0x215094u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 96), GPR_U32(ctx, 8));
    // 0x215098: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x215098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21509c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x21509cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150a0: 0xe53400e0  swc1        $f20, 0xE0($t1)
    ctx->pc = 0x2150a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 224), bits); }
    // 0x2150a4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2150a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2150a8: 0xe535008c  swc1        $f21, 0x8C($t1)
    ctx->pc = 0x2150a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 140), bits); }
    // 0x2150ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2150acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150b0: 0xe5200094  swc1        $f0, 0x94($t1)
    ctx->pc = 0x2150b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 148), bits); }
    // 0x2150b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2150b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150b8: 0xe52000e8  swc1        $f0, 0xE8($t1)
    ctx->pc = 0x2150b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 232), bits); }
    // 0x2150bc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2150bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150c0: 0xe5200064  swc1        $f0, 0x64($t1)
    ctx->pc = 0x2150c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 100), bits); }
    // 0x2150c4: 0xc0854a0  jal         func_215280
    ctx->pc = 0x2150C4u;
    SET_GPR_U32(ctx, 31, 0x2150CCu);
    ctx->pc = 0x2150C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150C4u;
    // 0x2150c8: 0xad200098  sw          $zero, 0x98($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 152), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x2150C4u, 0x2150CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150CCu;
label_2150cc:
    // 0x2150cc: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x2150ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2150d0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2150d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2150d4: 0xc5210078  lwc1        $f1, 0x78($t1)
    ctx->pc = 0x2150d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2150d8: 0xad2000a0  sw          $zero, 0xA0($t1)
    ctx->pc = 0x2150d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 160), GPR_U32(ctx, 0));
    // 0x2150dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2150dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2150e0: 0xe5200084  swc1        $f0, 0x84($t1)
    ctx->pc = 0x2150e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 132), bits); }
    // 0x2150e4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2150e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2150e8: 0xe5210068  swc1        $f1, 0x68($t1)
    ctx->pc = 0x2150e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 104), bits); }
    // 0x2150ec: 0xe5210074  swc1        $f1, 0x74($t1)
    ctx->pc = 0x2150ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 116), bits); }
    // 0x2150f0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2150f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2150f4: 0xe520006c  swc1        $f0, 0x6C($t1)
    ctx->pc = 0x2150f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 108), bits); }
    // 0x2150f8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2150f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2150fc: 0xe5200078  swc1        $f0, 0x78($t1)
    ctx->pc = 0x2150fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 120), bits); }
    // 0x215100: 0xe5210070  swc1        $f1, 0x70($t1)
    ctx->pc = 0x215100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 112), bits); }
    // 0x215104: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x215104u;
    {
        const bool branch_taken_0x215104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215104u;
        // 0x215108: 0xe521007c  swc1        $f1, 0x7C($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215104) {
            ctx->pc = 0x215218u;
            goto label_215218;
        }
    }
    ctx->pc = 0x21510Cu;
label_21510c:
    // 0x21510c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215110: 0x8d2300a0  lw          $v1, 0xA0($t1)
    ctx->pc = 0x215110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 160)));
    // 0x215114: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x215114u;
    {
        const bool branch_taken_0x215114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215114u;
        // 0x215118: 0xad2200ec  sw          $v0, 0xEC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215114) {
            ctx->pc = 0x2151A8u;
            goto label_2151a8;
        }
    }
    ctx->pc = 0x21511Cu;
    // 0x21511c: 0x10680023  beq         $v1, $t0, . + 4 + (0x23 << 2)
    ctx->pc = 0x21511Cu;
    {
        const bool branch_taken_0x21511c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x215120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21511Cu;
        // 0x215120: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21511c) {
            ctx->pc = 0x2151ACu;
            goto label_2151ac;
        }
    }
    ctx->pc = 0x215124u;
    // 0x215124: 0x692500a7  ldl         $a1, 0xA7($t1)
    ctx->pc = 0x215124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x215128: 0x6d2500a0  ldr         $a1, 0xA0($t1)
    ctx->pc = 0x215128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x21512c: 0x692200af  ldl         $v0, 0xAF($t1)
    ctx->pc = 0x21512cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x215130: 0x6d2200a8  ldr         $v0, 0xA8($t1)
    ctx->pc = 0x215130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x215134: 0x692300b7  ldl         $v1, 0xB7($t1)
    ctx->pc = 0x215134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x215138: 0x6d2300b0  ldr         $v1, 0xB0($t1)
    ctx->pc = 0x215138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21513c: 0x692400bf  ldl         $a0, 0xBF($t1)
    ctx->pc = 0x21513cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x215140: 0x6d2400b8  ldr         $a0, 0xB8($t1)
    ctx->pc = 0x215140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x215144: 0xb1250067  sdl         $a1, 0x67($t1)
    ctx->pc = 0x215144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215148: 0xb5250060  sdr         $a1, 0x60($t1)
    ctx->pc = 0x215148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21514c: 0xb122006f  sdl         $v0, 0x6F($t1)
    ctx->pc = 0x21514cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215150: 0xb5220068  sdr         $v0, 0x68($t1)
    ctx->pc = 0x215150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215154: 0xb1230077  sdl         $v1, 0x77($t1)
    ctx->pc = 0x215154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215158: 0xb5230070  sdr         $v1, 0x70($t1)
    ctx->pc = 0x215158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21515c: 0xb124007f  sdl         $a0, 0x7F($t1)
    ctx->pc = 0x21515cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215160: 0xb5240078  sdr         $a0, 0x78($t1)
    ctx->pc = 0x215160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215164: 0x692500c7  ldl         $a1, 0xC7($t1)
    ctx->pc = 0x215164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x215168: 0x6d2500c0  ldr         $a1, 0xC0($t1)
    ctx->pc = 0x215168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x21516c: 0x692200cf  ldl         $v0, 0xCF($t1)
    ctx->pc = 0x21516cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x215170: 0x6d2200c8  ldr         $v0, 0xC8($t1)
    ctx->pc = 0x215170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x215174: 0x692300d7  ldl         $v1, 0xD7($t1)
    ctx->pc = 0x215174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x215178: 0x6d2300d0  ldr         $v1, 0xD0($t1)
    ctx->pc = 0x215178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21517c: 0x692400df  ldl         $a0, 0xDF($t1)
    ctx->pc = 0x21517cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x215180: 0x6d2400d8  ldr         $a0, 0xD8($t1)
    ctx->pc = 0x215180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x215184: 0xb1250087  sdl         $a1, 0x87($t1)
    ctx->pc = 0x215184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215188: 0xb5250080  sdr         $a1, 0x80($t1)
    ctx->pc = 0x215188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21518c: 0xb122008f  sdl         $v0, 0x8F($t1)
    ctx->pc = 0x21518cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215190: 0xb5220088  sdr         $v0, 0x88($t1)
    ctx->pc = 0x215190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215194: 0xb1230097  sdl         $v1, 0x97($t1)
    ctx->pc = 0x215194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215198: 0xb5230090  sdr         $v1, 0x90($t1)
    ctx->pc = 0x215198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21519c: 0xb124009f  sdl         $a0, 0x9F($t1)
    ctx->pc = 0x21519cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2151a0: 0xb5240098  sdr         $a0, 0x98($t1)
    ctx->pc = 0x2151a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2151a4: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x2151a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2151a8:
    // 0x2151a8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2151a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2151ac:
    // 0x2151ac: 0x2643ab60  addiu       $v1, $s2, -0x54A0
    ctx->pc = 0x2151acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945632));
    // 0x2151b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2151b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2151b4: 0xad2800a0  sw          $t0, 0xA0($t1)
    ctx->pc = 0x2151b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 160), GPR_U32(ctx, 8));
    // 0x2151b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2151b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2151bc: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2151bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151c0: 0xe53400e0  swc1        $f20, 0xE0($t1)
    ctx->pc = 0x2151c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 224), bits); }
    // 0x2151c4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2151c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2151c8: 0xe53500cc  swc1        $f21, 0xCC($t1)
    ctx->pc = 0x2151c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 204), bits); }
    // 0x2151cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2151ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151d0: 0xad2000e8  sw          $zero, 0xE8($t1)
    ctx->pc = 0x2151d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
    // 0x2151d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2151d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151d8: 0xad2000a4  sw          $zero, 0xA4($t1)
    ctx->pc = 0x2151d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 164), GPR_U32(ctx, 0));
    // 0x2151dc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2151dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151e0: 0xad2000d4  sw          $zero, 0xD4($t1)
    ctx->pc = 0x2151e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 212), GPR_U32(ctx, 0));
    // 0x2151e4: 0xc0854a0  jal         func_215280
    ctx->pc = 0x2151E4u;
    SET_GPR_U32(ctx, 31, 0x2151ECu);
    ctx->pc = 0x2151E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2151E4u;
    // 0x2151e8: 0xad2000d8  sw          $zero, 0xD8($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 216), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x2151E4u, 0x2151ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2151ECu;
label_2151ec:
    // 0x2151ec: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x2151ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2151f0: 0xad200084  sw          $zero, 0x84($t1)
    ctx->pc = 0x2151f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 0));
    // 0x2151f4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2151f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2151f8: 0xe52100a8  swc1        $f1, 0xA8($t1)
    ctx->pc = 0x2151f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 168), bits); }
    // 0x2151fc: 0xe52100b4  swc1        $f1, 0xB4($t1)
    ctx->pc = 0x2151fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 180), bits); }
    // 0x215200: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x215200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215204: 0xe52000ac  swc1        $f0, 0xAC($t1)
    ctx->pc = 0x215204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 172), bits); }
    // 0x215208: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x215208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21520c: 0xe52100b0  swc1        $f1, 0xB0($t1)
    ctx->pc = 0x21520cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 176), bits); }
    // 0x215210: 0xe52100bc  swc1        $f1, 0xBC($t1)
    ctx->pc = 0x215210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 188), bits); }
    // 0x215214: 0x0  nop
    ctx->pc = 0x215214u;
    // NOP
label_215218:
    // 0x215218: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x215218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21521c: 0xc5210084  lwc1        $f1, 0x84($t1)
    ctx->pc = 0x21521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215220: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x215220u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x215224: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x215224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x215228: 0xc5210068  lwc1        $f1, 0x68($t1)
    ctx->pc = 0x215228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21522c: 0xc522006c  lwc1        $f2, 0x6C($t1)
    ctx->pc = 0x21522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215230: 0xc5230070  lwc1        $f3, 0x70($t1)
    ctx->pc = 0x215230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x215234: 0xc52400a8  lwc1        $f4, 0xA8($t1)
    ctx->pc = 0x215234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x215238: 0xc52500ac  lwc1        $f5, 0xAC($t1)
    ctx->pc = 0x215238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21523c: 0xc52000b0  lwc1        $f0, 0xB0($t1)
    ctx->pc = 0x21523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215240: 0xe5210074  swc1        $f1, 0x74($t1)
    ctx->pc = 0x215240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 116), bits); }
    // 0x215244: 0xe52000bc  swc1        $f0, 0xBC($t1)
    ctx->pc = 0x215244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 188), bits); }
    // 0x215248: 0xe5220078  swc1        $f2, 0x78($t1)
    ctx->pc = 0x215248u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 120), bits); }
    // 0x21524c: 0xe523007c  swc1        $f3, 0x7C($t1)
    ctx->pc = 0x21524cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 124), bits); }
    // 0x215250: 0xe52400b4  swc1        $f4, 0xB4($t1)
    ctx->pc = 0x215250u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 180), bits); }
    // 0x215254: 0xe52500b8  swc1        $f5, 0xB8($t1)
    ctx->pc = 0x215254u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 184), bits); }
label_215258:
    // 0x215258: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x215258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21525c:
    // 0x21525c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x21525cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215260: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x215260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215264: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x215264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215268: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x215268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21526c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x21526cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x215270: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x215270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x215274: 0x3e00008  jr          $ra
    ctx->pc = 0x215274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215274u;
        // 0x215278: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21527Cu;
}
