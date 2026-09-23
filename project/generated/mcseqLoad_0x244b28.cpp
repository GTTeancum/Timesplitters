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

// Function: mcseqLoad
// Address: 0x244b28 - 0x244c08
void mcseqLoad_0x244b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqLoad_0x244b28");
#endif

    switch (ctx->pc) {
        case 0x244b78u: goto label_244b78;
        case 0x244bb8u: goto label_244bb8;
        default: break;
    }

    ctx->pc = 0x244b28u;

    // 0x244b28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x244b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x244b2c: 0xaf84b7f0  sw          $a0, -0x4810($gp)
    ctx->pc = 0x244b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948848), GPR_U32(ctx, 4));
    // 0x244b30: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x244b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x244b34: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x244b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x244b38: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x244b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x244b3c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x244b3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244b40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x244b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x244b44: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x244b44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244b48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x244b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x244b4c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x244b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244b50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x244b54: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x244b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244b58: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x244b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244b5c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x244b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x244b60: 0x24843670  addiu       $a0, $a0, 0x3670
    ctx->pc = 0x244b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13936));
    // 0x244b64: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x244b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244b68: 0xaf80b7e4  sw          $zero, -0x481C($gp)
    ctx->pc = 0x244b68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948836), GPR_U32(ctx, 0));
    // 0x244b6c: 0xaf80b7ec  sw          $zero, -0x4814($gp)
    ctx->pc = 0x244b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948844), GPR_U32(ctx, 0));
    // 0x244b70: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x244B70u;
    SET_GPR_U32(ctx, 31, 0x244B78u);
    ctx->pc = 0x244B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244B70u;
    // 0x244b74: 0xaf80b7f4  sw          $zero, -0x480C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948852), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x244B70u, 0x244B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B78u;
label_244b78:
    // 0x244b78: 0x8f83a0c8  lw          $v1, -0x5F38($gp)
    ctx->pc = 0x244b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x244b7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x244b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x244b80: 0xaf90b7f8  sw          $s0, -0x4808($gp)
    ctx->pc = 0x244b80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948856), GPR_U32(ctx, 16));
    // 0x244b84: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x244b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x244b88: 0xaf91b7fc  sw          $s1, -0x4804($gp)
    ctx->pc = 0x244b88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948860), GPR_U32(ctx, 17));
    // 0x244b8c: 0xaf83a0c8  sw          $v1, -0x5F38($gp)
    ctx->pc = 0x244b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 3));
    // 0x244b90: 0xaf92b800  sw          $s2, -0x4800($gp)
    ctx->pc = 0x244b90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948864), GPR_U32(ctx, 18));
    // 0x244b94: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x244B94u;
    {
        const bool branch_taken_0x244b94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B94u;
        // 0x244b98: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b94) {
            ctx->pc = 0x244BE8u;
            goto label_244be8;
        }
    }
    ctx->pc = 0x244B9Cu;
    // 0x244b9c: 0xaf93b7cc  sw          $s3, -0x4834($gp)
    ctx->pc = 0x244b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948812), GPR_U32(ctx, 19));
    // 0x244ba0: 0x294980b  movn        $s3, $s4, $s4
    ctx->pc = 0x244ba0u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
    // 0x244ba4: 0x9382b7c8  lbu         $v0, -0x4838($gp)
    ctx->pc = 0x244ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948808)));
    // 0x244ba8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x244BA8u;
    {
        const bool branch_taken_0x244ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BA8u;
        // 0x244bac: 0xaf93b7d0  sw          $s3, -0x4830($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948816), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ba8) {
            ctx->pc = 0x244BE8u;
            goto label_244be8;
        }
    }
    ctx->pc = 0x244BB0u;
    // 0x244bb0: 0xc09128e  jal         func_244A38
    ctx->pc = 0x244BB0u;
    SET_GPR_U32(ctx, 31, 0x244BB8u);
    ctx->pc = 0x244A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A38u, 0x244BB0u, 0x244BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BB8u;
label_244bb8:
    // 0x244bb8: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x244bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x244bbc: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x244bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x244bc0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x244bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x244bc4: 0x24a56578  addiu       $a1, $a1, 0x6578
    ctx->pc = 0x244bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25976));
    // 0x244bc8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x244bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x244bcc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x244bccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244bd0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x244bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244bd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x244bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244bd8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x244bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244be0: 0x808b3ac  j           func_22CEB0
    ctx->pc = 0x244BE0u;
    ctx->pc = 0x244BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244BE0u;
    // 0x244be4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    frontPageSet_0x22ceb0(rdram, ctx, runtime); return;
    ctx->pc = 0x244BE8u;
label_244be8:
    // 0x244be8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x244be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x244bec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x244becu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244bf0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x244bf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244bf4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x244bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244bf8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x244bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244c00: 0x3e00008  jr          $ra
    ctx->pc = 0x244C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C00u;
        // 0x244c04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244C08u;
}
