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

// Function: hudRankGfx
// Address: 0x2b19b8 - 0x2b1abc
void hudRankGfx_0x2b19b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudRankGfx_0x2b19b8");
#endif

    switch (ctx->pc) {
        case 0x2b19f4u: goto label_2b19f4;
        case 0x2b1a54u: goto label_2b1a54;
        case 0x2b1aa8u: goto label_2b1aa8;
        default: break;
    }

    ctx->pc = 0x2b19b8u;

    // 0x2b19b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b19b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b19bc: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x2b19bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x2b19c0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b19c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b19c4: 0x24e899f0  addiu       $t0, $a3, -0x6610
    ctx->pc = 0x2b19c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941168));
    // 0x2b19c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b19c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b19cc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2b19ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b19d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b19d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b19d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b19d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19d8: 0x8ce299f0  lw          $v0, -0x6610($a3)
    ctx->pc = 0x2b19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3299F0u));
    // 0x2b19dc: 0x8d090058  lw          $t1, 0x58($t0)
    ctx->pc = 0x2b19dcu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x329A48u));
    // 0x2b19e0: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x2b19e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b19e4: 0x1231807  srav        $v1, $v1, $t1
    ctx->pc = 0x2b19e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 9) & 0x1F));
    // 0x2b19e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b19ec: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2B19ECu;
    SET_GPR_U32(ctx, 31, 0x2B19F4u);
    ctx->pc = 0x2B19F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19ECu;
    // 0x2b19f0: 0x468021  addu        $s0, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E320u, 0x2B19ECu, 0x2B19F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19F4u;
label_2b19f4:
    // 0x2b19f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b19f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19f8: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2b19f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b19fc: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2b19fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b1a00: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B1A00u;
    {
        const bool branch_taken_0x2b1a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A00u;
        // 0x2b1a04: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a00) {
            ctx->pc = 0x2B1A34u;
            goto label_2b1a34;
        }
    }
    ctx->pc = 0x2B1A08u;
    // 0x2b1a08: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1A08u;
    {
        const bool branch_taken_0x2b1a08 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2B1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A08u;
        // 0x2b1a0c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a08) {
            ctx->pc = 0x2B1A30u;
            goto label_2b1a30;
        }
    }
    ctx->pc = 0x2B1A10u;
    // 0x2b1a10: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x2b1a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2b1a14: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2b1a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2b1a18: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2b1a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2b1a1c: 0x2463f7e8  addiu       $v1, $v1, -0x818
    ctx->pc = 0x2b1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965224));
    // 0x2b1a20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b1a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1a28: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B1A28u;
    {
        const bool branch_taken_0x2b1a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A28u;
        // 0x2b1a2c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a28) {
            ctx->pc = 0x2B1A5Cu;
            goto label_2b1a5c;
        }
    }
    ctx->pc = 0x2B1A30u;
label_2b1a30:
    // 0x2b1a30: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2b1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_2b1a34:
    // 0x2b1a34: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2b1a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2b1a38: 0x2463f7e8  addiu       $v1, $v1, -0x818
    ctx->pc = 0x2b1a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965224));
    // 0x2b1a3c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b1a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b1a40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b1a44: 0x2484fc10  addiu       $a0, $a0, -0x3F0
    ctx->pc = 0x2b1a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966288));
    // 0x2b1a48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b1a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b1a4c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2B1A4Cu;
    SET_GPR_U32(ctx, 31, 0x2B1A54u);
    ctx->pc = 0x2B1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A4Cu;
    // 0x2b1a50: 0x8c66000c  lw          $a2, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2B1A4Cu, 0x2B1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A54u;
label_2b1a54:
    // 0x2b1a54: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x2b1a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2b1a58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b1a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1a5c:
    // 0x2b1a5c: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x2b1a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2b1a60: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2b1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2b1a64: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2b1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b1a68: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2b1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2b1a6c: 0x8c850180  lw          $a1, 0x180($a0)
    ctx->pc = 0x2b1a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x2b1a70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1a74: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2b1a74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b1a78: 0x3c0b7f7f  lui         $t3, 0x7F7F
    ctx->pc = 0x2b1a78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32639 << 16));
    // 0x2b1a7c: 0x8ca20160  lw          $v0, 0x160($a1)
    ctx->pc = 0x2b1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x2b1a80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b1a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2b1a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2b1a88: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b1a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b1a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a90: 0x24080036  addiu       $t0, $zero, 0x36
    ctx->pc = 0x2b1a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2b1a94: 0x8d240cb8  lw          $a0, 0xCB8($t1)
    ctx->pc = 0x2b1a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 3256)));
    // 0x2b1a98: 0x356b7f80  ori         $t3, $t3, 0x7F80
    ctx->pc = 0x2b1a98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32640);
    // 0x2b1a9c: 0x8c4a0014  lw          $t2, 0x14($v0)
    ctx->pc = 0x2b1a9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b1aa0: 0xc0ac508  jal         func_2B1420
    ctx->pc = 0x2B1AA0u;
    SET_GPR_U32(ctx, 31, 0x2B1AA8u);
    ctx->pc = 0x2B1AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1AA0u;
    // 0x2b1aa4: 0x24090016  addiu       $t1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1420u, 0x2B1AA0u, 0x2B1AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AA8u;
label_2b1aa8:
    // 0x2b1aa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b1aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1aac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b1aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1ab0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b1ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AB4u;
        // 0x2b1ab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1ABCu;
}
