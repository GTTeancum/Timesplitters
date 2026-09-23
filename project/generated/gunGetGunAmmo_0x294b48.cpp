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

// Function: gunGetGunAmmo
// Address: 0x294b48 - 0x294c2c
void gunGetGunAmmo_0x294b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunGetGunAmmo_0x294b48");
#endif

    ctx->pc = 0x294b48u;

    // 0x294b48: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x294b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b4c: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x294b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x294b50: 0x8ce60108  lw          $a2, 0x108($a3)
    ctx->pc = 0x294b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 264)));
    // 0x294b54: 0x250290f8  addiu       $v0, $t0, -0x6F08
    ctx->pc = 0x294b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938872));
    // 0x294b58: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x294b58u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x294b5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b60: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x294b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x294b64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x294b64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294b6c: 0x84440004  lh          $a0, 0x4($v0)
    ctx->pc = 0x294b6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294b70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x294b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294b74: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x294B74u;
    {
        const bool branch_taken_0x294b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x294B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B74u;
        // 0x294b78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b74) {
            ctx->pc = 0x294BBCu;
            goto label_294bbc;
        }
    }
    ctx->pc = 0x294B7Cu;
    // 0x294b7c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x294b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x294b80: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x294b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x294b84: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x294B84u;
    {
        const bool branch_taken_0x294b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B84u;
        // 0x294b88: 0x24e30178  addiu       $v1, $a3, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b84) {
            ctx->pc = 0x294BB8u;
            goto label_294bb8;
        }
    }
    ctx->pc = 0x294B8Cu;
    // 0x294b8c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x294B8Cu;
    {
        const bool branch_taken_0x294b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B8Cu;
        // 0x294b90: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b8c) {
            ctx->pc = 0x294BB8u;
            goto label_294bb8;
        }
    }
    ctx->pc = 0x294B94u;
    // 0x294b94: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x294b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x294b98: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x294b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x294b9c: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x294b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x294ba0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294ba4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x294ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x294ba8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294bac: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x294bacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294bb0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x294bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x294bb4: 0x8c6a017c  lw          $t2, 0x17C($v1)
    ctx->pc = 0x294bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
label_294bb8:
    // 0x294bb8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x294bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_294bbc:
    // 0x294bbc: 0x250290f8  addiu       $v0, $t0, -0x6F08
    ctx->pc = 0x294bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938872));
    // 0x294bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294bc4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x294bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294bc8: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x294bc8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x294bcc: 0x10c40011  beq         $a2, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x294BCCu;
    {
        const bool branch_taken_0x294bcc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x294BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BCCu;
        // 0x294bd0: 0x1251026  xor         $v0, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bcc) {
            ctx->pc = 0x294C14u;
            goto label_294c14;
        }
    }
    ctx->pc = 0x294BD4u;
    // 0x294bd4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x294bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x294bd8: 0x24420198  addiu       $v0, $v0, 0x198
    ctx->pc = 0x294bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 408));
    // 0x294bdc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x294BDCu;
    {
        const bool branch_taken_0x294bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BDCu;
        // 0x294be0: 0x24e3010c  addiu       $v1, $a3, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bdc) {
            ctx->pc = 0x294C10u;
            goto label_294c10;
        }
    }
    ctx->pc = 0x294BE4u;
    // 0x294be4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x294BE4u;
    {
        const bool branch_taken_0x294be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BE4u;
        // 0x294be8: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294be4) {
            ctx->pc = 0x294C10u;
            goto label_294c10;
        }
    }
    ctx->pc = 0x294BECu;
    // 0x294bec: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x294becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x294bf0: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x294bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x294bf4: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x294bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x294bf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294bfc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x294bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x294c00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294c04: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x294c04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c08: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x294c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x294c0c: 0x8c6c0110  lw          $t4, 0x110($v1)
    ctx->pc = 0x294c0cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_294c10:
    // 0x294c10: 0x1251026  xor         $v0, $t1, $a1
    ctx->pc = 0x294c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 5));
label_294c14:
    // 0x294c14: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x294c14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c18: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x294c18u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x294c1c: 0x1652026  xor         $a0, $t3, $a1
    ctx->pc = 0x294c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 5));
    // 0x294c20: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x294c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x294c24: 0x3e00008  jr          $ra
    ctx->pc = 0x294C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C24u;
        // 0x294c28: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294C2Cu;
}
