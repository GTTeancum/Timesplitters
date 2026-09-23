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

// Function: mcseqSave
// Address: 0x244c08 - 0x244cec
void mcseqSave_0x244c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqSave_0x244c08");
#endif

    switch (ctx->pc) {
        case 0x244c5cu: goto label_244c5c;
        case 0x244c9cu: goto label_244c9c;
        default: break;
    }

    ctx->pc = 0x244c08u;

    // 0x244c08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x244c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x244c0c: 0xaf84b7f0  sw          $a0, -0x4810($gp)
    ctx->pc = 0x244c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948848), GPR_U32(ctx, 4));
    // 0x244c10: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x244c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x244c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244c18: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x244c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x244c1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x244c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x244c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x244c24: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x244c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x244c28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x244c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x244c2c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x244c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x244c34: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x244c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c38: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x244c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c3c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x244c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x244c40: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x244c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c44: 0xaf82b7f4  sw          $v0, -0x480C($gp)
    ctx->pc = 0x244c44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948852), GPR_U32(ctx, 2));
    // 0x244c48: 0x24843670  addiu       $a0, $a0, 0x3670
    ctx->pc = 0x244c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13936));
    // 0x244c4c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x244c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c50: 0xaf80b7e4  sw          $zero, -0x481C($gp)
    ctx->pc = 0x244c50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948836), GPR_U32(ctx, 0));
    // 0x244c54: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x244C54u;
    SET_GPR_U32(ctx, 31, 0x244C5Cu);
    ctx->pc = 0x244C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C54u;
    // 0x244c58: 0xaf80b7ec  sw          $zero, -0x4814($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948844), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x244C54u, 0x244C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C5Cu;
label_244c5c:
    // 0x244c5c: 0x8f83a0c8  lw          $v1, -0x5F38($gp)
    ctx->pc = 0x244c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x244c60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x244c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x244c64: 0xaf90b7f8  sw          $s0, -0x4808($gp)
    ctx->pc = 0x244c64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948856), GPR_U32(ctx, 16));
    // 0x244c68: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x244c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x244c6c: 0xaf91b7fc  sw          $s1, -0x4804($gp)
    ctx->pc = 0x244c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948860), GPR_U32(ctx, 17));
    // 0x244c70: 0xaf83a0c8  sw          $v1, -0x5F38($gp)
    ctx->pc = 0x244c70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 3));
    // 0x244c74: 0xaf92b800  sw          $s2, -0x4800($gp)
    ctx->pc = 0x244c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948864), GPR_U32(ctx, 18));
    // 0x244c78: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x244C78u;
    {
        const bool branch_taken_0x244c78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C78u;
        // 0x244c7c: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c78) {
            ctx->pc = 0x244CCCu;
            goto label_244ccc;
        }
    }
    ctx->pc = 0x244C80u;
    // 0x244c80: 0xaf93b7cc  sw          $s3, -0x4834($gp)
    ctx->pc = 0x244c80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948812), GPR_U32(ctx, 19));
    // 0x244c84: 0x294980b  movn        $s3, $s4, $s4
    ctx->pc = 0x244c84u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
    // 0x244c88: 0x9382b7c8  lbu         $v0, -0x4838($gp)
    ctx->pc = 0x244c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948808)));
    // 0x244c8c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x244C8Cu;
    {
        const bool branch_taken_0x244c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C8Cu;
        // 0x244c90: 0xaf93b7d0  sw          $s3, -0x4830($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948816), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c8c) {
            ctx->pc = 0x244CCCu;
            goto label_244ccc;
        }
    }
    ctx->pc = 0x244C94u;
    // 0x244c94: 0xc09128e  jal         func_244A38
    ctx->pc = 0x244C94u;
    SET_GPR_U32(ctx, 31, 0x244C9Cu);
    ctx->pc = 0x244A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A38u, 0x244C94u, 0x244C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C9Cu;
label_244c9c:
    // 0x244c9c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x244c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x244ca0: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x244ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x244ca4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x244ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x244ca8: 0x24a56578  addiu       $a1, $a1, 0x6578
    ctx->pc = 0x244ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25976));
    // 0x244cac: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x244cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x244cb0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x244cb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244cb4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x244cb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244cb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x244cb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244cbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x244cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244cc4: 0x808b3ac  j           func_22CEB0
    ctx->pc = 0x244CC4u;
    ctx->pc = 0x244CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CC4u;
    // 0x244cc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    frontPageSet_0x22ceb0(rdram, ctx, runtime); return;
    ctx->pc = 0x244CCCu;
label_244ccc:
    // 0x244ccc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x244cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x244cd0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x244cd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244cd4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x244cd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244cd8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x244cd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244cdc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x244cdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x244CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CE4u;
        // 0x244ce8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244CECu;
}
