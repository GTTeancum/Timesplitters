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

// Function: bgLoad
// Address: 0x253b88 - 0x253f7c
void bgLoad_0x253b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgLoad_0x253b88");
#endif

    switch (ctx->pc) {
        case 0x253ba8u: goto label_253ba8;
        case 0x253c00u: goto label_253c00;
        case 0x253c2cu: goto label_253c2c;
        case 0x253c40u: goto label_253c40;
        case 0x253c5cu: goto label_253c5c;
        case 0x253ca0u: goto label_253ca0;
        case 0x253d38u: goto label_253d38;
        case 0x253d90u: goto label_253d90;
        case 0x253dd0u: goto label_253dd0;
        case 0x253e28u: goto label_253e28;
        case 0x253e7cu: goto label_253e7c;
        case 0x253e9cu: goto label_253e9c;
        case 0x253ebcu: goto label_253ebc;
        case 0x253edcu: goto label_253edc;
        case 0x253efcu: goto label_253efc;
        case 0x253f18u: goto label_253f18;
        case 0x253f38u: goto label_253f38;
        case 0x253f54u: goto label_253f54;
        case 0x253f5cu: goto label_253f5c;
        default: break;
    }

    ctx->pc = 0x253b88u;

    // 0x253b88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x253b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x253b8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x253b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x253b90: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x253b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x253b94: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x253b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x253b98: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x253b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x253b9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x253b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x253ba0: 0xc087140  jal         func_21C500
    ctx->pc = 0x253BA0u;
    SET_GPR_U32(ctx, 31, 0x253BA8u);
    ctx->pc = 0x253BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BA0u;
    // 0x253ba4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C500u, 0x253BA0u, 0x253BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BA8u;
label_253ba8:
    // 0x253ba8: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x253ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x253bac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x253bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x253bb0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x253bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x253bb4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x253bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x253bb8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x253bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x253bbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x253bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x253bc0: 0xaf84a240  sw          $a0, -0x5DC0($gp)
    ctx->pc = 0x253bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943296), GPR_U32(ctx, 4));
    // 0x253bc4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x253BC4u;
    {
        const bool branch_taken_0x253bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x253BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BC4u;
        // 0x253bc8: 0xaf82a244  sw          $v0, -0x5DBC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253bc4) {
            ctx->pc = 0x253BE0u;
            goto label_253be0;
        }
    }
    ctx->pc = 0x253BCCu;
    // 0x253bcc: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x253bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x253bd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253bd4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x253bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x253bd8: 0xaf82a248  sw          $v0, -0x5DB8($gp)
    ctx->pc = 0x253bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943304), GPR_U32(ctx, 2));
    // 0x253bdc: 0xaf83a26c  sw          $v1, -0x5D94($gp)
    ctx->pc = 0x253bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943340), GPR_U32(ctx, 3));
label_253be0:
    // 0x253be0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x253be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x253be4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x253be4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253be8: 0xaf80a264  sw          $zero, -0x5D9C($gp)
    ctx->pc = 0x253be8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943332), GPR_U32(ctx, 0));
    // 0x253bec: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x253BECu;
    {
        const bool branch_taken_0x253bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BECu;
        // 0x253bf0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253bec) {
            ctx->pc = 0x253E00u;
            goto label_253e00;
        }
    }
    ctx->pc = 0x253BF4u;
    // 0x253bf4: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x253bf4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x253bf8: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x253bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x253bfc: 0x0  nop
    ctx->pc = 0x253bfcu;
    // NOP
label_253c00:
    // 0x253c00: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x253c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x253c04: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x253c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x253c08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x253c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x253c0c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x253C0Cu;
    {
        const bool branch_taken_0x253c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C0Cu;
        // 0x253c10: 0x511021  addu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c0c) {
            ctx->pc = 0x253C44u;
            goto label_253c44;
        }
    }
    ctx->pc = 0x253C14u;
    // 0x253c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x253c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253c18: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x253c18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x253c1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x253c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c20: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x253c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x253c24: 0xc097a4c  jal         func_25E930
    ctx->pc = 0x253C24u;
    SET_GPR_U32(ctx, 31, 0x253C2Cu);
    ctx->pc = 0x253C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C24u;
    // 0x253c28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E930u, 0x253C24u, 0x253C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C2Cu;
label_253c2c:
    // 0x253c2c: 0x8f82a240  lw          $v0, -0x5DC0($gp)
    ctx->pc = 0x253c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x253c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c34: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x253c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x253c38: 0xc097a30  jal         func_25E8C0
    ctx->pc = 0x253C38u;
    SET_GPR_U32(ctx, 31, 0x253C40u);
    ctx->pc = 0x253C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C38u;
    // 0x253c3c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E8C0u, 0x253C38u, 0x253C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C40u;
label_253c40:
    // 0x253c40: 0x8f84a240  lw          $a0, -0x5DC0($gp)
    ctx->pc = 0x253c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
label_253c44:
    // 0x253c44: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x253c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x253c48: 0x8f83a23c  lw          $v1, -0x5DC4($gp)
    ctx->pc = 0x253c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943292)));
    // 0x253c4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x253c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253c50: 0x26440200  addiu       $a0, $s2, 0x200
    ctx->pc = 0x253c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x253c54: 0xc099c70  jal         func_2671C0
    ctx->pc = 0x253C54u;
    SET_GPR_U32(ctx, 31, 0x253C5Cu);
    ctx->pc = 0x253C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C54u;
    // 0x253c58: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671C0u, 0x253C54u, 0x253C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C5Cu;
label_253c5c:
    // 0x253c5c: 0x8f84a240  lw          $a0, -0x5DC0($gp)
    ctx->pc = 0x253c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x253c60: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x253c60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c64: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x253c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x253c68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x253c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x253c6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x253C6Cu;
    {
        const bool branch_taken_0x253c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C6Cu;
        // 0x253c70: 0x511021  addu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c6c) {
            ctx->pc = 0x253C78u;
            goto label_253c78;
        }
    }
    ctx->pc = 0x253C74u;
    // 0x253c74: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x253c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_253c78:
    // 0x253c78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x253c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x253c7c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x253C7Cu;
    {
        const bool branch_taken_0x253c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C7Cu;
        // 0x253c80: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c7c) {
            ctx->pc = 0x253D04u;
            goto label_253d04;
        }
    }
    ctx->pc = 0x253C84u;
    // 0x253c84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x253c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x253c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x253c8c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x253C8Cu;
    {
        const bool branch_taken_0x253c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C8Cu;
        // 0x253c90: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c8c) {
            ctx->pc = 0x253D04u;
            goto label_253d04;
        }
    }
    ctx->pc = 0x253C94u;
    // 0x253c94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x253c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c98: 0x26530001  addiu       $s3, $s2, 0x1
    ctx->pc = 0x253c98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x253c9c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x253c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_253ca0:
    // 0x253ca0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253ca4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x253ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x253ca8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x253ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253cac: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x253cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253cb0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x253cb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253cb4: 0x0  nop
    ctx->pc = 0x253cb4u;
    // NOP
    // 0x253cb8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x253CB8u;
    {
        const bool branch_taken_0x253cb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CB8u;
        // 0x253cbc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cb8) {
            ctx->pc = 0x253CE0u;
            goto label_253ce0;
        }
    }
    ctx->pc = 0x253CC0u;
    // 0x253cc0: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x253cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253cc4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x253cc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253cc8: 0x0  nop
    ctx->pc = 0x253cc8u;
    // NOP
    // 0x253ccc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x253CCCu;
    {
        const bool branch_taken_0x253ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253ccc) {
            ctx->pc = 0x253CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253CCCu;
            // 0x253cd0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253CE4u;
            goto label_253ce4;
        }
    }
    ctx->pc = 0x253CD4u;
    // 0x253cd4: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x253cd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x253cd8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x253cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x253cdc: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x253cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_253ce0:
    // 0x253ce0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x253ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_253ce4:
    // 0x253ce4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x253ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x253ce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x253ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cec: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x253cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x253cf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x253cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253cf4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x253CF4u;
    {
        const bool branch_taken_0x253cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CF4u;
        // 0x253cf8: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cf4) {
            ctx->pc = 0x253CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253ca0;
        }
    }
    ctx->pc = 0x253CFCu;
    // 0x253cfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253CFCu;
    {
        const bool branch_taken_0x253cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CFCu;
        // 0x253d00: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cfc) {
            ctx->pc = 0x253D0Cu;
            goto label_253d0c;
        }
    }
    ctx->pc = 0x253D04u;
label_253d04:
    // 0x253d04: 0x26530001  addiu       $s3, $s2, 0x1
    ctx->pc = 0x253d04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x253d08: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x253d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_253d0c:
    // 0x253d0c: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x253d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x253d10: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x253d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x253d14: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x253d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x253d18: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x253D18u;
    {
        const bool branch_taken_0x253d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D18u;
        // 0x253d1c: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d18) {
            ctx->pc = 0x253D60u;
            goto label_253d60;
        }
    }
    ctx->pc = 0x253D20u;
    // 0x253d20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x253d20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d24: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x253d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x253d28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x253D28u;
    {
        const bool branch_taken_0x253d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D28u;
        // 0x253d2c: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d28) {
            ctx->pc = 0x253D60u;
            goto label_253d60;
        }
    }
    ctx->pc = 0x253D30u;
    // 0x253d30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x253d30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d34: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x253d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_253d38:
    // 0x253d38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x253d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x253d3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x253d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x253d40: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x253d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x253d44: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x253d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d48: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x253d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x253d4c: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x253d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x253d50: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x253d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x253d54: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x253d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253d58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x253D58u;
    {
        const bool branch_taken_0x253d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D58u;
        // 0x253d5c: 0xe62821  addu        $a1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d58) {
            ctx->pc = 0x253D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253d38;
        }
    }
    ctx->pc = 0x253D60u;
label_253d60:
    // 0x253d60: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x253d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x253d64: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x253d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x253d68: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x253d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x253d6c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x253d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x253d70: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x253D70u;
    {
        const bool branch_taken_0x253d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D70u;
        // 0x253d74: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d70) {
            ctx->pc = 0x253DB8u;
            goto label_253db8;
        }
    }
    ctx->pc = 0x253D78u;
    // 0x253d78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x253d78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d7c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x253d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x253d80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x253D80u;
    {
        const bool branch_taken_0x253d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D80u;
        // 0x253d84: 0xac660010  sw          $a2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d80) {
            ctx->pc = 0x253DB8u;
            goto label_253db8;
        }
    }
    ctx->pc = 0x253D88u;
    // 0x253d88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x253d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d8c: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x253d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_253d90:
    // 0x253d90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x253d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x253d94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x253d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x253d98: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x253d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x253d9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x253d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253da0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x253da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x253da4: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x253da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x253da8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x253da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x253dac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x253dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253db0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x253DB0u;
    {
        const bool branch_taken_0x253db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DB0u;
        // 0x253db4: 0xe62821  addu        $a1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253db0) {
            ctx->pc = 0x253D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253d90;
        }
    }
    ctx->pc = 0x253DB8u;
label_253db8:
    // 0x253db8: 0x2410002c  addiu       $s0, $zero, 0x2C
    ctx->pc = 0x253db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x253dbc: 0x2501818  mult        $v1, $s2, $s0
    ctx->pc = 0x253dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x253dc0: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x253dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253dc4: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x253dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x253dc8: 0xc097ee2  jal         func_25FB88
    ctx->pc = 0x253DC8u;
    SET_GPR_U32(ctx, 31, 0x253DD0u);
    ctx->pc = 0x253DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DC8u;
    // 0x253dcc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FB88u, 0x253DC8u, 0x253DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DD0u;
label_253dd0:
    // 0x253dd0: 0x8f82a240  lw          $v0, -0x5DC0($gp)
    ctx->pc = 0x253dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x253dd4: 0x8f88a264  lw          $t0, -0x5D9C($gp)
    ctx->pc = 0x253dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x253dd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x253dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ddc: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x253ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x253de0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x253de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x253de4: 0xaf88a264  sw          $t0, -0x5D9C($gp)
    ctx->pc = 0x253de4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943332), GPR_U32(ctx, 8));
    // 0x253de8: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x253de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x253dec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x253decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x253df0: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x253DF0u;
    {
        const bool branch_taken_0x253df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DF0u;
        // 0x253df4: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253df0) {
            ctx->pc = 0x253C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253c00;
        }
    }
    ctx->pc = 0x253DF8u;
    // 0x253df8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253DF8u;
    {
        const bool branch_taken_0x253df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DF8u;
        // 0x253dfc: 0x8f87a244  lw          $a3, -0x5DBC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253df8) {
            ctx->pc = 0x253E08u;
            goto label_253e08;
        }
    }
    ctx->pc = 0x253E00u;
label_253e00:
    // 0x253e00: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x253e00u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x253e04: 0x8f87a244  lw          $a3, -0x5DBC($gp)
    ctx->pc = 0x253e04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
label_253e08:
    // 0x253e08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x253e08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e0c: 0xaf80a268  sw          $zero, -0x5D98($gp)
    ctx->pc = 0x253e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943336), GPR_U32(ctx, 0));
    // 0x253e10: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x253e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x253e14: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x253E14u;
    {
        const bool branch_taken_0x253e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E14u;
        // 0x253e18: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e14) {
            ctx->pc = 0x253E58u;
            goto label_253e58;
        }
    }
    ctx->pc = 0x253E1Cu;
    // 0x253e1c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x253e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253e20: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x253e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x253e24: 0x0  nop
    ctx->pc = 0x253e24u;
    // NOP
label_253e28:
    // 0x253e28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x253e28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x253e2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x253e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x253e30: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x253e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x253e34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x253e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e38: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x253e38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x253e3c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x253e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x253e40: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x253e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x253e44: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x253e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x253e48: 0xaf89a268  sw          $t1, -0x5D98($gp)
    ctx->pc = 0x253e48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943336), GPR_U32(ctx, 9));
    // 0x253e4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x253e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253e50: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x253E50u;
    {
        const bool branch_taken_0x253e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E50u;
        // 0x253e54: 0xc72821  addu        $a1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e50) {
            ctx->pc = 0x253E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253e28;
        }
    }
    ctx->pc = 0x253E58u;
label_253e58:
    // 0x253e58: 0x24130030  addiu       $s3, $zero, 0x30
    ctx->pc = 0x253e58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x253e5c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x253e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x253e60: 0x930018  mult        $zero, $a0, $s3
    ctx->pc = 0x253e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x253e64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253e68: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x253e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x253e6c: 0x2411fff0  addiu       $s1, $zero, -0x10
    ctx->pc = 0x253e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x253e70: 0x2012  mflo        $a0
    ctx->pc = 0x253e70u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x253e74: 0xc08070e  jal         func_201C38
    ctx->pc = 0x253E74u;
    SET_GPR_U32(ctx, 31, 0x253E7Cu);
    ctx->pc = 0x253E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E74u;
    // 0x253e78: 0x26927330  addiu       $s2, $s4, 0x7330 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 29488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x253E74u, 0x253E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E7Cu;
label_253e7c:
    // 0x253e7c: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x253e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x253e80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253e84: 0xaf82a234  sw          $v0, -0x5DCC($gp)
    ctx->pc = 0x253e84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943284), GPR_U32(ctx, 2));
    // 0x253e88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x253e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x253e8c: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x253e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x253e90: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x253e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x253e94: 0xc08070e  jal         func_201C38
    ctx->pc = 0x253E94u;
    SET_GPR_U32(ctx, 31, 0x253E9Cu);
    ctx->pc = 0x253E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E94u;
    // 0x253e98: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x253E94u, 0x253E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E9Cu;
label_253e9c:
    // 0x253e9c: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x253e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x253ea0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253ea4: 0xae827330  sw          $v0, 0x7330($s4)
    ctx->pc = 0x253ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 29488), GPR_U32(ctx, 2));
    // 0x253ea8: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x253ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x253eac: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x253eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x253eb0: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x253eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x253eb4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x253EB4u;
    SET_GPR_U32(ctx, 31, 0x253EBCu);
    ctx->pc = 0x253EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253EB4u;
    // 0x253eb8: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x253EB4u, 0x253EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253EBCu;
label_253ebc:
    // 0x253ebc: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x253ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x253ec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253ec4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x253ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x253ec8: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x253ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x253ecc: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x253eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x253ed0: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x253ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x253ed4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x253ED4u;
    SET_GPR_U32(ctx, 31, 0x253EDCu);
    ctx->pc = 0x253ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253ED4u;
    // 0x253ed8: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x253ED4u, 0x253EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253EDCu;
label_253edc:
    // 0x253edc: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x253edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x253ee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253ee4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x253ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x253ee8: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x253ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x253eec: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x253eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x253ef0: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x253ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x253ef4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x253EF4u;
    SET_GPR_U32(ctx, 31, 0x253EFCu);
    ctx->pc = 0x253EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253EF4u;
    // 0x253ef8: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x253EF4u, 0x253EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253EFCu;
label_253efc:
    // 0x253efc: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x253efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x253f00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253f04: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x253f04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x253f08: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x253f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x253f0c: 0x24840013  addiu       $a0, $a0, 0x13
    ctx->pc = 0x253f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x253f10: 0xc08070e  jal         func_201C38
    ctx->pc = 0x253F10u;
    SET_GPR_U32(ctx, 31, 0x253F18u);
    ctx->pc = 0x253F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F10u;
    // 0x253f14: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x253F10u, 0x253F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F18u;
label_253f18:
    // 0x253f18: 0x8f84a268  lw          $a0, -0x5D98($gp)
    ctx->pc = 0x253f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
    // 0x253f1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253f20: 0xaf82b894  sw          $v0, -0x476C($gp)
    ctx->pc = 0x253f20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949012), GPR_U32(ctx, 2));
    // 0x253f24: 0x931018  mult        $v0, $a0, $s3
    ctx->pc = 0x253f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x253f28: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x253f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x253f2c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x253f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x253f30: 0xc08070e  jal         func_201C38
    ctx->pc = 0x253F30u;
    SET_GPR_U32(ctx, 31, 0x253F38u);
    ctx->pc = 0x253F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F30u;
    // 0x253f34: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x253F30u, 0x253F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F38u;
label_253f38:
    // 0x253f38: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x253f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x253f3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253f40: 0xaf82a230  sw          $v0, -0x5DD0($gp)
    ctx->pc = 0x253f40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943280), GPR_U32(ctx, 2));
    // 0x253f44: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x253f44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x253f48: 0x24840013  addiu       $a0, $a0, 0x13
    ctx->pc = 0x253f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x253f4c: 0xc08070e  jal         func_201C38
    ctx->pc = 0x253F4Cu;
    SET_GPR_U32(ctx, 31, 0x253F54u);
    ctx->pc = 0x253F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F4Cu;
    // 0x253f50: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x253F4Cu, 0x253F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F54u;
label_253f54:
    // 0x253f54: 0xc09575c  jal         func_255D70
    ctx->pc = 0x253F54u;
    SET_GPR_U32(ctx, 31, 0x253F5Cu);
    ctx->pc = 0x253F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F54u;
    // 0x253f58: 0xaf82a270  sw          $v0, -0x5D90($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943344), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255D70u, 0x253F54u, 0x253F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F5Cu;
label_253f5c:
    // 0x253f5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x253f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253f60: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x253f60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253f64: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x253f64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253f68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x253f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253f6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x253f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f74: 0x8095828  j           func_2560A0
    ctx->pc = 0x253F74u;
    ctx->pc = 0x253F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F74u;
    // 0x253f78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2560A0u;
    bgPortalInitBB_0x2560a0(rdram, ctx, runtime); return;
    ctx->pc = 0x253F7Cu;
}
