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

// Function: bgRoomCalcClip
// Address: 0x257b80 - 0x257e34
void bgRoomCalcClip_0x257b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgRoomCalcClip_0x257b80");
#endif

    switch (ctx->pc) {
        case 0x257c30u: goto label_257c30;
        case 0x257d28u: goto label_257d28;
        default: break;
    }

    ctx->pc = 0x257b80u;

    // 0x257b80: 0x8f8db234  lw          $t5, -0x4DCC($gp)
    ctx->pc = 0x257b80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x257b84: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x257b84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b88: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x257b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x257b8c: 0x3c180035  lui         $t8, 0x35
    ctx->pc = 0x257b8cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)53 << 16));
    // 0x257b90: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x257b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x257b94: 0x1642018  mult        $a0, $t3, $a0
    ctx->pc = 0x257b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x257b98: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x257b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x257b9c: 0x27067330  addiu       $a2, $t8, 0x7330
    ctx->pc = 0x257b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 29488));
    // 0x257ba0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257ba4: 0x1631818  mult        $v1, $t3, $v1
    ctx->pc = 0x257ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x257ba8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x257ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x257bac: 0x8f85a240  lw          $a1, -0x5DC0($gp)
    ctx->pc = 0x257bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x257bb0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x257bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257bb4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257bb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x257bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x257bbc: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x257bbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x257bc0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x257bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x257bc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x257bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257bc8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x257BC8u;
    {
        const bool branch_taken_0x257bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BC8u;
        // 0x257bcc: 0x8dee0000  lw          $t6, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bc8) {
            ctx->pc = 0x257BFCu;
            goto label_257bfc;
        }
    }
    ctx->pc = 0x257BD0u;
    // 0x257bd0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x257bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x257bd4: 0x246299f0  addiu       $v0, $v1, -0x6610
    ctx->pc = 0x257bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x257bd8: 0x8c6599f0  lw          $a1, -0x6610($v1)
    ctx->pc = 0x257bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3299F0u));
    // 0x257bdc: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x257bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x329A08u));
    // 0x257be0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x257be0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x329A04u));
    // 0x257be4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x257be4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F4u));
    // 0x257be8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x257be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x257bec: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x257becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x257bf0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x257bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x257bf4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x257BF4u;
    {
        const bool branch_taken_0x257bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BF4u;
        // 0x257bf8: 0xafa60014  sw          $a2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bf4) {
            ctx->pc = 0x257DB0u;
            goto label_257db0;
        }
    }
    ctx->pc = 0x257BFCu;
label_257bfc:
    // 0x257bfc: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x257bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x257c00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x257c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x257c04: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x257c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x257c08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x257c08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c0c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x257c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x257c10: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x257c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x257c14: 0x19c0003c  blez        $t6, . + 4 + (0x3C << 2)
    ctx->pc = 0x257C14u;
    {
        const bool branch_taken_0x257c14 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x257C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C14u;
        // 0x257c18: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c14) {
            ctx->pc = 0x257D08u;
            goto label_257d08;
        }
    }
    ctx->pc = 0x257C1Cu;
    // 0x257c1c: 0x8f8aa244  lw          $t2, -0x5DBC($gp)
    ctx->pc = 0x257c1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x257c20: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x257c20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x257c24: 0x8f89a230  lw          $t1, -0x5DD0($gp)
    ctx->pc = 0x257c24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943280)));
    // 0x257c28: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x257c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x257c2c: 0x0  nop
    ctx->pc = 0x257c2cu;
    // NOP
label_257c30:
    // 0x257c30: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x257c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x257c34: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x257c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x257c38: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x257c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x257c3c: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x257c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x257c40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257c44: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x257c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x257c48: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x257c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x257c4c: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x257c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x257c50: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x257C50u;
    {
        const bool branch_taken_0x257c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x257C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C50u;
        // 0x257c54: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c50) {
            ctx->pc = 0x257CF0u;
            goto label_257cf0;
        }
    }
    ctx->pc = 0x257C58u;
    // 0x257c58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x257c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257c5c: 0x508b0001  beql        $a0, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x257C5Cu;
    {
        const bool branch_taken_0x257c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 11));
        if (branch_taken_0x257c5c) {
            ctx->pc = 0x257C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257C5Cu;
            // 0x257c60: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257C64u;
            goto label_257c64;
        }
    }
    ctx->pc = 0x257C64u;
label_257c64:
    // 0x257c64: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x257c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x257c68: 0x27067330  addiu       $a2, $t8, 0x7330
    ctx->pc = 0x257c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 29488));
    // 0x257c6c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x257c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x257c70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257c74: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x257c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x257c78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x257c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x257c7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x257c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257c80: 0x1651018  mult        $v0, $t3, $a1
    ctx->pc = 0x257c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x257c84: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x257c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x257c88: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x257c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257c8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x257c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x257c90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x257c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x257c94: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x257c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x257c98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x257C98u;
    {
        const bool branch_taken_0x257c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C98u;
        // 0x257c9c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c98) {
            ctx->pc = 0x257CF0u;
            goto label_257cf0;
        }
    }
    ctx->pc = 0x257CA0u;
    // 0x257ca0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x257ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x257ca4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x257ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x257ca8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x257CA8u;
    {
        const bool branch_taken_0x257ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257ca8) {
            ctx->pc = 0x257CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257CA8u;
            // 0x257cac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257CB0u;
            goto label_257cb0;
        }
    }
    ctx->pc = 0x257CB0u;
label_257cb0:
    // 0x257cb0: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x257cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x257cb4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x257cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x257cb8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x257cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x257cbc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x257CBCu;
    {
        const bool branch_taken_0x257cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257cbc) {
            ctx->pc = 0x257CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257CBCu;
            // 0x257cc0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257CC4u;
            goto label_257cc4;
        }
    }
    ctx->pc = 0x257CC4u;
label_257cc4:
    // 0x257cc4: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x257cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x257cc8: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x257cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x257ccc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x257CCCu;
    {
        const bool branch_taken_0x257ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257ccc) {
            ctx->pc = 0x257CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257CCCu;
            // 0x257cd0: 0x8ce30024  lw          $v1, 0x24($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257CE0u;
            goto label_257ce0;
        }
    }
    ctx->pc = 0x257CD4u;
    // 0x257cd4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x257cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x257cd8: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x257cd8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257cdc: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x257cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_257ce0:
    // 0x257ce0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x257ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x257ce4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x257ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x257ce8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x257CE8u;
    {
        const bool branch_taken_0x257ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257ce8) {
            ctx->pc = 0x257CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257CE8u;
            // 0x257cec: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257CF0u;
            goto label_257cf0;
        }
    }
    ctx->pc = 0x257CF0u;
label_257cf0:
    // 0x257cf0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x257cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x257cf4: 0x10e102a  slt         $v0, $t0, $t6
    ctx->pc = 0x257cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x257cf8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x257CF8u;
    {
        const bool branch_taken_0x257cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CF8u;
        // 0x257cfc: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257cf8) {
            ctx->pc = 0x257C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257c30;
        }
    }
    ctx->pc = 0x257D00u;
    // 0x257d00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257D00u;
    {
        const bool branch_taken_0x257d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257d00) {
            ctx->pc = 0x257D0Cu;
            goto label_257d0c;
        }
    }
    ctx->pc = 0x257D08u;
label_257d08:
    // 0x257d08: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x257d08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_257d0c:
    // 0x257d0c: 0x5830029  bgezl       $t4, . + 4 + (0x29 << 2)
    ctx->pc = 0x257D0Cu;
    {
        const bool branch_taken_0x257d0c = (GPR_S32(ctx, 12) >= 0);
        if (branch_taken_0x257d0c) {
            ctx->pc = 0x257D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257D0Cu;
            // 0x257d10: 0x8da30000  lw          $v1, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257DB4u;
            goto label_257db4;
        }
    }
    ctx->pc = 0x257D14u;
    // 0x257d14: 0x19c00026  blez        $t6, . + 4 + (0x26 << 2)
    ctx->pc = 0x257D14u;
    {
        const bool branch_taken_0x257d14 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x257D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D14u;
        // 0x257d18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d14) {
            ctx->pc = 0x257DB0u;
            goto label_257db0;
        }
    }
    ctx->pc = 0x257D1Cu;
    // 0x257d1c: 0x8f8aa244  lw          $t2, -0x5DBC($gp)
    ctx->pc = 0x257d1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x257d20: 0x8f89a230  lw          $t1, -0x5DD0($gp)
    ctx->pc = 0x257d20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943280)));
    // 0x257d24: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x257d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_257d28:
    // 0x257d28: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x257d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x257d2c: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x257d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x257d30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x257d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x257d34: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x257d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x257d38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257d3c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x257d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x257d40: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x257d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x257d44: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x257d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x257d48: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x257D48u;
    {
        const bool branch_taken_0x257d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x257D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D48u;
        // 0x257d4c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d48) {
            ctx->pc = 0x257DA0u;
            goto label_257da0;
        }
    }
    ctx->pc = 0x257D50u;
    // 0x257d50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x257d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257d54: 0x508b0001  beql        $a0, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x257D54u;
    {
        const bool branch_taken_0x257d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 11));
        if (branch_taken_0x257d54) {
            ctx->pc = 0x257D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257D54u;
            // 0x257d58: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257D5Cu;
            goto label_257d5c;
        }
    }
    ctx->pc = 0x257D5Cu;
label_257d5c:
    // 0x257d5c: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x257d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x257d60: 0x27067330  addiu       $a2, $t8, 0x7330
    ctx->pc = 0x257d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 29488));
    // 0x257d64: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x257d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x257d68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257d6c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x257d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x257d70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x257d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x257d74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x257d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257d78: 0x1651018  mult        $v0, $t3, $a1
    ctx->pc = 0x257d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x257d7c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x257d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x257d80: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x257d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257d84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x257d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x257d88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x257d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x257d8c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x257d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x257d90: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x257D90u;
    {
        const bool branch_taken_0x257d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257d90) {
            ctx->pc = 0x257D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257D90u;
            // 0x257d94: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257DA4u;
            goto label_257da4;
        }
    }
    ctx->pc = 0x257D98u;
    // 0x257d98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257d9c: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x257d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
label_257da0:
    // 0x257da0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x257da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_257da4:
    // 0x257da4: 0x10e102a  slt         $v0, $t0, $t6
    ctx->pc = 0x257da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x257da8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x257DA8u;
    {
        const bool branch_taken_0x257da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257DA8u;
        // 0x257dac: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257da8) {
            ctx->pc = 0x257D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257d28;
        }
    }
    ctx->pc = 0x257DB0u;
label_257db0:
    // 0x257db0: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x257db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_257db4:
    // 0x257db4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x257db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x257db8: 0x1642018  mult        $a0, $t3, $a0
    ctx->pc = 0x257db8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x257dbc: 0x27067330  addiu       $a2, $t8, 0x7330
    ctx->pc = 0x257dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 29488));
    // 0x257dc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257dc4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x257dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257dc8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x257dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x257dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x257dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257dd0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x257dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x257dd4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x257dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x257dd8: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x257dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x257ddc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x257ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x257de0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257de4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x257de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x257de8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x257de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257dec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x257decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x257df0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x257df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x257df4: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x257df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x257df8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x257df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257dfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257e00: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x257e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x257e04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x257e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257e08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x257e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x257e0c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x257e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x257e10: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x257e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x257e14: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x257e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x257e18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257e1c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x257e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x257e20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x257e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257e24: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x257e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x257e28: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x257e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x257e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x257E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E2Cu;
        // 0x257e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257E34u;
}
