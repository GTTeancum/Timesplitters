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

// Function: hudBagIconGfx
// Address: 0x2b1ac0 - 0x2b1c1c
void hudBagIconGfx_0x2b1ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudBagIconGfx_0x2b1ac0");
#endif

    switch (ctx->pc) {
        case 0x2b1b28u: goto label_2b1b28;
        case 0x2b1ba4u: goto label_2b1ba4;
        case 0x2b1bd0u: goto label_2b1bd0;
        default: break;
    }

    ctx->pc = 0x2b1ac0u;

    // 0x2b1ac0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b1ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b1ac4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2b1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2b1ac8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b1ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b1acc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b1accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b1ad0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2b1ad0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1ad4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b1ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b1ad8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b1ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b1adc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b1adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b1ae0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b1ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b1ae4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b1ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b1ae8: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x2b1ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2b1aec: 0x8c640160  lw          $a0, 0x160($v1)
    ctx->pc = 0x2b1aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2b1af0: 0x8c8701e4  lw          $a3, 0x1E4($a0)
    ctx->pc = 0x2b1af0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x2b1af4: 0x10e00040  beqz        $a3, . + 4 + (0x40 << 2)
    ctx->pc = 0x2B1AF4u;
    {
        const bool branch_taken_0x2b1af4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AF4u;
        // 0x2b1af8: 0x8f82b9ac  lw          $v0, -0x4654($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1af4) {
            ctx->pc = 0x2B1BF8u;
            goto label_2b1bf8;
        }
    }
    ctx->pc = 0x2B1AFCu;
    // 0x2b1afc: 0x440003e  bltz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2B1AFCu;
    {
        const bool branch_taken_0x2b1afc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AFCu;
        // 0x2b1b00: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1afc) {
            ctx->pc = 0x2B1BF8u;
            goto label_2b1bf8;
        }
    }
    ctx->pc = 0x2B1B04u;
    // 0x2b1b04: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2b1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b1b08: 0x246499f0  addiu       $a0, $v1, -0x6610
    ctx->pc = 0x2b1b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x2b1b0c: 0x8c6699f0  lw          $a2, -0x6610($v1)
    ctx->pc = 0x2b1b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941168)));
    // 0x2b1b10: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x2b1b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2b1b14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b1b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1b18: 0x8cf00160  lw          $s0, 0x160($a3)
    ctx->pc = 0x2b1b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x2b1b1c: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x2b1b1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2b1b20: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2B1B20u;
    SET_GPR_U32(ctx, 31, 0x2B1B28u);
    ctx->pc = 0x2B1B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B20u;
    // 0x2b1b24: 0xc29821  addu        $s3, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2B1B20u, 0x2B1B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B28u;
label_2b1b28:
    // 0x2b1b28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b1b28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1b2c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2b1b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2b1b30: 0x8c62c4f8  lw          $v0, -0x3B08($v1)
    ctx->pc = 0x2b1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x2b1b34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b1b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b1b38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1B38u;
    {
        const bool branch_taken_0x2b1b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B38u;
        // 0x2b1b3c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b38) {
            ctx->pc = 0x2B1B58u;
            goto label_2b1b58;
        }
    }
    ctx->pc = 0x2B1B40u;
    // 0x2b1b40: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b1b44: 0x2442c378  addiu       $v0, $v0, -0x3C88
    ctx->pc = 0x2b1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951800));
    // 0x2b1b48: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2b1b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2b1b4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b1b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b1b50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1B50u;
    {
        const bool branch_taken_0x2b1b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B50u;
        // 0x2b1b54: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b50) {
            ctx->pc = 0x2B1B60u;
            goto label_2b1b60;
        }
    }
    ctx->pc = 0x2B1B58u;
label_2b1b58:
    // 0x2b1b58: 0x3c127f7f  lui         $s2, 0x7F7F
    ctx->pc = 0x2b1b58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32639 << 16));
    // 0x2b1b5c: 0x36527f80  ori         $s2, $s2, 0x7F80
    ctx->pc = 0x2b1b5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32640);
label_2b1b60:
    // 0x2b1b60: 0x8f84b9ac  lw          $a0, -0x4654($gp)
    ctx->pc = 0x2b1b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949292)));
    // 0x2b1b64: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2b1b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b1b68: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x2b1b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b1b6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b1b70: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2b1b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b1b74: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x2b1b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x2b1b78: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2b1b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b1b7c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b1b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b1b80: 0x9385a02c  lbu         $a1, -0x5FD4($gp)
    ctx->pc = 0x2b1b80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x2b1b84: 0x2667001b  addiu       $a3, $s3, 0x1B
    ctx->pc = 0x2b1b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 27));
    // 0x2b1b88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2b1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b1b8c: 0x459025  or          $s2, $v0, $a1
    ctx->pc = 0x2b1b8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2b1b90: 0x94710000  lhu         $s1, 0x0($v1)
    ctx->pc = 0x2b1b90u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b1b94: 0x94700002  lhu         $s0, 0x2($v1)
    ctx->pc = 0x2b1b94u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b1b98: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x2b1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2b1b9c: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2B1B9Cu;
    SET_GPR_U32(ctx, 31, 0x2B1BA4u);
    ctx->pc = 0x2B1BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B9Cu;
    // 0x2b1ba0: 0xe29823  subu        $s3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2B1B9Cu, 0x2B1BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BA4u;
label_2b1ba4:
    // 0x2b1ba4: 0x105900  sll         $t3, $s0, 4
    ctx->pc = 0x2b1ba4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2b1ba8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b1ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1bac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b1bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1bb0: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2b1bb0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2b1bb4: 0x115100  sll         $t2, $s1, 4
    ctx->pc = 0x2b1bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b1bb8: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x2b1bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b1bbc: 0xb03821  addu        $a3, $a1, $s0
    ctx->pc = 0x2b1bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2b1bc0: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2b1bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x2b1bc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b1bc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1bc8: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x2B1BC8u;
    SET_GPR_U32(ctx, 31, 0x2B1BD0u);
    ctx->pc = 0x2B1BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1BC8u;
    // 0x2b1bcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x2B1BC8u, 0x2B1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BD0u;
label_2b1bd0:
    // 0x2b1bd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b1bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1bd4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b1bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b1bd8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b1bd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1bdc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b1bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1be0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b1be0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1be4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b1be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1be8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b1be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1bec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b1becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1bf0: 0x80adf7c  j           func_2B7DF0
    ctx->pc = 0x2B1BF0u;
    ctx->pc = 0x2B1BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1BF0u;
    // 0x2b1bf4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    dlSetDitherMatrix_0x2b7df0(rdram, ctx, runtime); return;
    ctx->pc = 0x2B1BF8u;
label_2b1bf8:
    // 0x2b1bf8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b1bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b1bfc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b1bfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1c00: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b1c00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1c04: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b1c04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1c08: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b1c08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1c0c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b1c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1c10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b1c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C14u;
        // 0x2b1c18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1C1Cu;
}
