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

// Function: bgTileSetRoomNums
// Address: 0x254bd0 - 0x254d08
void bgTileSetRoomNums_0x254bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgTileSetRoomNums_0x254bd0");
#endif

    switch (ctx->pc) {
        case 0x254c00u: goto label_254c00;
        case 0x254c60u: goto label_254c60;
        case 0x254ca0u: goto label_254ca0;
        case 0x254cc0u: goto label_254cc0;
        default: break;
    }

    ctx->pc = 0x254bd0u;

    // 0x254bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x254bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x254bd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x254bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x254bd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254bdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x254bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254be0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x254be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x254be4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x254be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x254be8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x254be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x254bec: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x254BECu;
    {
        const bool branch_taken_0x254bec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x254BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BECu;
        // 0x254bf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bec) {
            ctx->pc = 0x254C4Cu;
            goto label_254c4c;
        }
    }
    ctx->pc = 0x254BF4u;
    // 0x254bf4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x254bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x254bf8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x254bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x254bfc: 0x0  nop
    ctx->pc = 0x254bfcu;
    // NOP
label_254c00:
    // 0x254c00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x254c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x254c04: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x254c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x254c08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x254c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x254c0c: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x254C0Cu;
    {
        const bool branch_taken_0x254c0c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x254c0c) {
            ctx->pc = 0x254C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254C0Cu;
            // 0x254c10: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C24u;
            goto label_254c24;
        }
    }
    ctx->pc = 0x254C14u;
    // 0x254c14: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x254c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x254c18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x254c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254c1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x254c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x254c20: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x254c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_254c24:
    // 0x254c24: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x254C24u;
    {
        const bool branch_taken_0x254c24 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x254c24) {
            ctx->pc = 0x254C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254C24u;
            // 0x254c28: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C3Cu;
            goto label_254c3c;
        }
    }
    ctx->pc = 0x254C2Cu;
    // 0x254c2c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x254c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x254c30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x254c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254c34: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x254c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x254c38: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x254c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_254c3c:
    // 0x254c3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x254c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x254c40: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x254c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x254c44: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x254C44u;
    {
        const bool branch_taken_0x254c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C44u;
        // 0x254c48: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c44) {
            ctx->pc = 0x254C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254c00;
        }
    }
    ctx->pc = 0x254C4Cu;
label_254c4c:
    // 0x254c4c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x254c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x254c50: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x254C50u;
    {
        const bool branch_taken_0x254c50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x254C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C50u;
        // 0x254c54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c50) {
            ctx->pc = 0x254C8Cu;
            goto label_254c8c;
        }
    }
    ctx->pc = 0x254C58u;
    // 0x254c58: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x254c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x254c5c: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x254c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_254c60:
    // 0x254c60: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x254c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x254c64: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x254c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x254c68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x254c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x254c6c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x254c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x254c70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x254c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x254c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254c78: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x254c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x254c7c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x254c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x254c80: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x254c80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x254c84: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x254C84u;
    {
        const bool branch_taken_0x254c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x254C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C84u;
        // 0x254c88: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c84) {
            ctx->pc = 0x254C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254c60;
        }
    }
    ctx->pc = 0x254C8Cu;
label_254c8c:
    // 0x254c8c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x254c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254c90: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x254C90u;
    {
        const bool branch_taken_0x254c90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x254C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C90u;
        // 0x254c94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c90) {
            ctx->pc = 0x254CF0u;
            goto label_254cf0;
        }
    }
    ctx->pc = 0x254C98u;
    // 0x254c98: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x254c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x254c9c: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x254c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
label_254ca0:
    // 0x254ca0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x254ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x254ca4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x254ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x254ca8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x254ca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x254cac: 0x26040201  addiu       $a0, $s0, 0x201
    ctx->pc = 0x254cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 513));
    // 0x254cb0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x254cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x254cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254cb8: 0xc099c70  jal         func_2671C0
    ctx->pc = 0x254CB8u;
    SET_GPR_U32(ctx, 31, 0x254CC0u);
    ctx->pc = 0x254CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254CB8u;
    // 0x254cbc: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671C0u, 0x254CB8u, 0x254CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CC0u;
label_254cc0:
    // 0x254cc0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x254cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x254cc4: 0x26444828  addiu       $a0, $s2, 0x4828
    ctx->pc = 0x254cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18472));
    // 0x254cc8: 0x96250034  lhu         $a1, 0x34($s1)
    ctx->pc = 0x254cc8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x254ccc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x254cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254cd0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x254cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254cd4: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x254cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x254cd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x254cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x254cdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x254cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x254ce0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x254ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x254ce4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x254ce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x254ce8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x254CE8u;
    {
        const bool branch_taken_0x254ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x254CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CE8u;
        // 0x254cec: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ce8) {
            ctx->pc = 0x254CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254ca0;
        }
    }
    ctx->pc = 0x254CF0u;
label_254cf0:
    // 0x254cf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x254cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254cf4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x254cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254cf8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x254cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254d00: 0x3e00008  jr          $ra
    ctx->pc = 0x254D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D00u;
        // 0x254d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254D08u;
}
