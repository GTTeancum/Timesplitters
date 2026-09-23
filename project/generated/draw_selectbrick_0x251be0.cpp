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

// Function: draw_selectbrick
// Address: 0x251be0 - 0x251e6c
void draw_selectbrick_0x251be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("draw_selectbrick_0x251be0");
#endif

    switch (ctx->pc) {
        case 0x251c78u: goto label_251c78;
        case 0x251c88u: goto label_251c88;
        case 0x251cbcu: goto label_251cbc;
        case 0x251cd4u: goto label_251cd4;
        case 0x251cf4u: goto label_251cf4;
        case 0x251d68u: goto label_251d68;
        case 0x251d80u: goto label_251d80;
        case 0x251dc0u: goto label_251dc0;
        case 0x251dd8u: goto label_251dd8;
        case 0x251e14u: goto label_251e14;
        default: break;
    }

    ctx->pc = 0x251be0u;

    // 0x251be0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x251be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x251be4: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x251be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x251be8: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x251be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x251bec: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x251becu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x251bf0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x251bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x251bf4: 0x240a4000  addiu       $t2, $zero, 0x4000
    ctx->pc = 0x251bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x251bf8: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x251bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x251bfc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x251bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x251c00: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x251c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x251c04: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x251c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x251c08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x251c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251c0c: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x251c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x251c10: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x251c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x251c14: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x251c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x251c18: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x251c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x251c1c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x251c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x251c20: 0x8f89a180  lw          $t1, -0x5E80($gp)
    ctx->pc = 0x251c20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943104)));
    // 0x251c24: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x251c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x251c28: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x251c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x251c2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x251c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x251c30: 0x96080008  lhu         $t0, 0x8($s0)
    ctx->pc = 0x251c30u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x251c34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x251c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x251c38: 0x8f87a184  lw          $a3, -0x5E7C($gp)
    ctx->pc = 0x251c38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943108)));
    // 0x251c3c: 0x9443fff4  lhu         $v1, -0xC($v0)
    ctx->pc = 0x251c3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967284)));
    // 0x251c40: 0x2511ff38  addiu       $s1, $t0, -0xC8
    ctx->pc = 0x251c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967096));
    // 0x251c44: 0x8f86a188  lw          $a2, -0x5E78($gp)
    ctx->pc = 0x251c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x251c48: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x251c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x251c4c: 0x8f82a18c  lw          $v0, -0x5E74($gp)
    ctx->pc = 0x251c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x251c50: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x251c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x251c54: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x251c54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x251c58: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x251c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x251c5c: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x251c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x251c60: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x251c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x251c64: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x251c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x251c68: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x251c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x251c6c: 0xaf8ba180  sw          $t3, -0x5E80($gp)
    ctx->pc = 0x251c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943104), GPR_U32(ctx, 11));
    // 0x251c70: 0xc092e68  jal         func_24B9A0
    ctx->pc = 0x251C70u;
    SET_GPR_U32(ctx, 31, 0x251C78u);
    ctx->pc = 0x251C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C70u;
    // 0x251c74: 0xaf8aa184  sw          $t2, -0x5E7C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943108), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9A0u, 0x251C70u, 0x251C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C78u;
label_251c78:
    // 0x251c78: 0x8f85a184  lw          $a1, -0x5E7C($gp)
    ctx->pc = 0x251c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943108)));
    // 0x251c7c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x251c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x251c80: 0xc092e68  jal         func_24B9A0
    ctx->pc = 0x251C80u;
    SET_GPR_U32(ctx, 31, 0x251C88u);
    ctx->pc = 0x251C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C80u;
    // 0x251c84: 0xaf82a188  sw          $v0, -0x5E78($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9A0u, 0x251C80u, 0x251C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C88u;
label_251c88:
    // 0x251c88: 0x8f83a12c  lw          $v1, -0x5ED4($gp)
    ctx->pc = 0x251c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x251c8c: 0x3c080a0a  lui         $t0, 0xA0A
    ctx->pc = 0x251c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2570 << 16));
    // 0x251c90: 0x35081480  ori         $t0, $t0, 0x1480
    ctx->pc = 0x251c90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)5248);
    // 0x251c94: 0xaf82a18c  sw          $v0, -0x5E74($gp)
    ctx->pc = 0x251c94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943116), GPR_U32(ctx, 2));
    // 0x251c98: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x251c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x251c9c: 0xaf80a12c  sw          $zero, -0x5ED4($gp)
    ctx->pc = 0x251c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943020), GPR_U32(ctx, 0));
    // 0x251ca0: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x251ca0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251ca4: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x251ca4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x251ca8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x251ca8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x251cac: 0x96070006  lhu         $a3, 0x6($s0)
    ctx->pc = 0x251cacu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x251cb0: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x251cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x251cb4: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x251CB4u;
    SET_GPR_U32(ctx, 31, 0x251CBCu);
    ctx->pc = 0x251CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251CB4u;
    // 0x251cb8: 0xa73821  addu        $a3, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x251CB4u, 0x251CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251CBCu;
label_251cbc:
    // 0x251cbc: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x251cbcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251cc0: 0x8f82a158  lw          $v0, -0x5EA8($gp)
    ctx->pc = 0x251cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x251cc4: 0x8f85a188  lw          $a1, -0x5E78($gp)
    ctx->pc = 0x251cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x251cc8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x251cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x251ccc: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x251CCCu;
    SET_GPR_U32(ctx, 31, 0x251CD4u);
    ctx->pc = 0x251CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251CCCu;
    // 0x251cd0: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x251CCCu, 0x251CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251CD4u;
label_251cd4:
    // 0x251cd4: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x251cd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x251cd8: 0x8f83a15c  lw          $v1, -0x5EA4($gp)
    ctx->pc = 0x251cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x251cdc: 0x8f86a168  lw          $a2, -0x5E98($gp)
    ctx->pc = 0x251cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x251ce0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x251ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x251ce4: 0x8f85a18c  lw          $a1, -0x5E74($gp)
    ctx->pc = 0x251ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x251ce8: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x251ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x251cec: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x251CECu;
    SET_GPR_U32(ctx, 31, 0x251CF4u);
    ctx->pc = 0x251CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251CECu;
    // 0x251cf0: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x251CECu, 0x251CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251CF4u;
label_251cf4:
    // 0x251cf4: 0x8f83a16c  lw          $v1, -0x5E94($gp)
    ctx->pc = 0x251cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x251cf8: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x251cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x251cfc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x251CFCu;
    {
        const bool branch_taken_0x251cfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CFCu;
        // 0x251d00: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cfc) {
            ctx->pc = 0x251D0Cu;
            goto label_251d0c;
        }
    }
    ctx->pc = 0x251D04u;
    // 0x251d04: 0x2673fff6  addiu       $s3, $s3, -0xA
    ctx->pc = 0x251d04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x251d08: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x251d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_251d0c:
    // 0x251d0c: 0x3c1e0035  lui         $fp, 0x35
    ctx->pc = 0x251d0cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)53 << 16));
    // 0x251d10: 0x11b880  sll         $s7, $s1, 2
    ctx->pc = 0x251d10u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x251d14: 0x27c26588  addiu       $v0, $fp, 0x6588
    ctx->pc = 0x251d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 25992));
    // 0x251d18: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x251d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x251d1c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x251d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x251d20: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x251d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x251d24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x251d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251d28: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x251d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x251d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x251d30: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x251d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x251d34: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x251d34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251d38: 0xe3100a  movz        $v0, $a3, $v1
    ctx->pc = 0x251d38u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x251d3c: 0xc4302a  slt         $a2, $a2, $a0
    ctx->pc = 0x251d3cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x251d40: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x251d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x251d44: 0xe6200a  movz        $a0, $a3, $a2
    ctx->pc = 0x251d44u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x251d48: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x251d48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x251d4c: 0x42540  sll         $a0, $a0, 21
    ctx->pc = 0x251d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 21));
    // 0x251d50: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x251d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x251d54: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x251D54u;
    {
        const bool branch_taken_0x251d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D54u;
        // 0x251d58: 0x280b02d  daddu       $s6, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d54) {
            ctx->pc = 0x251D9Cu;
            goto label_251d9c;
        }
    }
    ctx->pc = 0x251D5Cu;
    // 0x251d5c: 0x2448821  addu        $s1, $s2, $a0
    ctx->pc = 0x251d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x251d60: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x251d60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251d64: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x251d64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_251d68:
    // 0x251d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x251d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x251d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x251d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d78: 0xc092514  jal         func_249450
    ctx->pc = 0x251D78u;
    SET_GPR_U32(ctx, 31, 0x251D80u);
    ctx->pc = 0x251D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251D78u;
    // 0x251d7c: 0x3508003f  ori         $t0, $t0, 0x3F (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)63);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249450u, 0x251D78u, 0x251D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251D80u;
label_251d80:
    // 0x251d80: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x251d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x251d84: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x251d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x251d88: 0x2d0182a  slt         $v1, $s6, $s0
    ctx->pc = 0x251d88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x251d8c: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x251D8Cu;
    {
        const bool branch_taken_0x251d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D8Cu;
        // 0x251d90: 0x3c080064  lui         $t0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d8c) {
            ctx->pc = 0x251D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251d68;
        }
    }
    ctx->pc = 0x251D94u;
    // 0x251d94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x251D94u;
    {
        const bool branch_taken_0x251d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D94u;
        // 0x251d98: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d94) {
            ctx->pc = 0x251DA8u;
            goto label_251da8;
        }
    }
    ctx->pc = 0x251D9Cu;
label_251d9c:
    // 0x251d9c: 0x2448821  addu        $s1, $s2, $a0
    ctx->pc = 0x251d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x251da0: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x251da0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251da4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x251da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_251da8:
    // 0x251da8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x251da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x251dac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x251DACu;
    {
        const bool branch_taken_0x251dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DACu;
        // 0x251db0: 0x27c26588  addiu       $v0, $fp, 0x6588 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 25992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251dac) {
            ctx->pc = 0x251DECu;
            goto label_251dec;
        }
    }
    ctx->pc = 0x251DB4u;
    // 0x251db4: 0x3c160020  lui         $s6, 0x20
    ctx->pc = 0x251db4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32 << 16));
    // 0x251db8: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x251db8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x251dbc: 0x0  nop
    ctx->pc = 0x251dbcu;
    // NOP
label_251dc0:
    // 0x251dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x251dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251dc4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x251dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251dc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x251dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251dcc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x251dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251dd0: 0xc092514  jal         func_249450
    ctx->pc = 0x251DD0u;
    SET_GPR_U32(ctx, 31, 0x251DD8u);
    ctx->pc = 0x251DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251DD0u;
    // 0x251dd4: 0x3508003f  ori         $t0, $t0, 0x3F (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)63);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249450u, 0x251DD0u, 0x251DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251DD8u;
label_251dd8:
    // 0x251dd8: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x251dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x251ddc: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x251ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x251de0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x251DE0u;
    {
        const bool branch_taken_0x251de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DE0u;
        // 0x251de4: 0x3c080064  lui         $t0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251de0) {
            ctx->pc = 0x251DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251dc0;
        }
    }
    ctx->pc = 0x251DE8u;
    // 0x251de8: 0x27c26588  addiu       $v0, $fp, 0x6588
    ctx->pc = 0x251de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 25992));
label_251dec:
    // 0x251dec: 0x8f83a0dc  lw          $v1, -0x5F24($gp)
    ctx->pc = 0x251decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x251df0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x251df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x251df4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x251df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251df8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x251df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251dfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x251dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e00: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x251e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x251e04: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x251e04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e08: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x251e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x251e0c: 0xc092802  jal         func_24A008
    ctx->pc = 0x251E0Cu;
    SET_GPR_U32(ctx, 31, 0x251E14u);
    ctx->pc = 0x251E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251E0Cu;
    // 0x251e10: 0x23840  sll         $a3, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A008u, 0x251E0Cu, 0x251E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E14u;
label_251e14:
    // 0x251e14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x251e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251e18: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x251e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x251e1c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x251e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251e20: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x251e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x251e24: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x251e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251e28: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x251e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x251e2c: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x251e2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x251e30: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x251e30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x251e34: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x251e34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x251e38: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x251e38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x251e3c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x251e3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x251e40: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x251e40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x251e44: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x251e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x251e48: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x251e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x251e4c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x251e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251e50: 0xaf86a12c  sw          $a2, -0x5ED4($gp)
    ctx->pc = 0x251e50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943020), GPR_U32(ctx, 6));
    // 0x251e54: 0xaf82a180  sw          $v0, -0x5E80($gp)
    ctx->pc = 0x251e54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943104), GPR_U32(ctx, 2));
    // 0x251e58: 0xaf83a184  sw          $v1, -0x5E7C($gp)
    ctx->pc = 0x251e58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943108), GPR_U32(ctx, 3));
    // 0x251e5c: 0xaf84a188  sw          $a0, -0x5E78($gp)
    ctx->pc = 0x251e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943112), GPR_U32(ctx, 4));
    // 0x251e60: 0xaf85a18c  sw          $a1, -0x5E74($gp)
    ctx->pc = 0x251e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943116), GPR_U32(ctx, 5));
    // 0x251e64: 0x3e00008  jr          $ra
    ctx->pc = 0x251E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E64u;
        // 0x251e68: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251E6Cu;
}
