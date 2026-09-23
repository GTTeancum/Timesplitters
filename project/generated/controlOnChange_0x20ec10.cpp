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

// Function: controlOnChange
// Address: 0x20ec10 - 0x20ecdc
void controlOnChange_0x20ec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("controlOnChange_0x20ec10");
#endif

    ctx->pc = 0x20ec10u;

    // 0x20ec10: 0x3c0201fb  lui         $v0, 0x1FB
    ctx->pc = 0x20ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
    // 0x20ec14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x20ec14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec18: 0x244234e0  addiu       $v0, $v0, 0x34E0
    ctx->pc = 0x20ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
    // 0x20ec1c: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x20ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x20ec20: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x20ec20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x20ec24: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x20ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20ec28: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x20ec28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20ec2c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x20ec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x20ec30: 0x2484a578  addiu       $a0, $a0, -0x5A88
    ctx->pc = 0x20ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944120));
    // 0x20ec34: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x20ec34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x20ec38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ec3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20ec40: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x20ec40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ec44: 0x24e3fff6  addiu       $v1, $a3, -0xA
    ctx->pc = 0x20ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967286));
    // 0x20ec48: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x20ec48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x20ec4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20EC4Cu;
    {
        const bool branch_taken_0x20ec4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC4Cu;
        // 0x20ec50: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec4c) {
            ctx->pc = 0x20EC90u;
            goto label_20ec90;
        }
    }
    ctx->pc = 0x20EC54u;
    // 0x20ec54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20ec58: 0x2442a3a0  addiu       $v0, $v0, -0x5C60
    ctx->pc = 0x20ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943648));
    // 0x20ec5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20ec60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ec64: 0x800008  jr          $a0
    ctx->pc = 0x20EC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20EC6Cu: goto label_20ec6c;
            case 0x20EC80u: goto label_20ec80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EC64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20EC6Cu;
label_20ec6c:
    // 0x20ec6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20ec70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20ec74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ec78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20EC78u;
    {
        const bool branch_taken_0x20ec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC78u;
        // 0x20ec7c: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec78) {
            ctx->pc = 0x20ECA8u;
            goto label_20eca8;
        }
    }
    ctx->pc = 0x20EC80u;
label_20ec80:
    // 0x20ec80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20ec84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20ec84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ec88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20EC88u;
    {
        const bool branch_taken_0x20ec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC88u;
        // 0x20ec8c: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec88) {
            ctx->pc = 0x20ECA8u;
            goto label_20eca8;
        }
    }
    ctx->pc = 0x20EC90u;
label_20ec90:
    // 0x20ec90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20ec94: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20ec98: 0x2442a2c8  addiu       $v0, $v0, -0x5D38
    ctx->pc = 0x20ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943432));
    // 0x20ec9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20eca0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20eca4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x20eca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20eca8:
    // 0x20eca8: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x20eca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20ecac: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x20ecacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x20ecb0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20ecb4: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x20ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20ecb8: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x20ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x20ecbc: 0x8c44a640  lw          $a0, -0x59C0($v0)
    ctx->pc = 0x20ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32A640u));
    // 0x20ecc0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20ECC0u;
    {
        const bool branch_taken_0x20ecc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ecc0) {
            ctx->pc = 0x20ECD4u;
            goto label_20ecd4;
        }
    }
    ctx->pc = 0x20ECC8u;
    // 0x20ecc8: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x20ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x20eccc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20ecd0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x20ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_20ecd4:
    // 0x20ecd4: 0x3e00008  jr          $ra
    ctx->pc = 0x20ECD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ECD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ECDCu;
}
