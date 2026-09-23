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

// Function: bgGetRoomsTick
// Address: 0x256c58 - 0x256fa0
void bgGetRoomsTick_0x256c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgGetRoomsTick_0x256c58");
#endif

    switch (ctx->pc) {
        case 0x256c80u: goto label_256c80;
        case 0x256cc8u: goto label_256cc8;
        case 0x256d20u: goto label_256d20;
        case 0x256da8u: goto label_256da8;
        case 0x256dd0u: goto label_256dd0;
        case 0x256ea4u: goto label_256ea4;
        case 0x256eb8u: goto label_256eb8;
        case 0x256ef4u: goto label_256ef4;
        default: break;
    }

    ctx->pc = 0x256c58u;

    // 0x256c58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x256c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x256c5c: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x256c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x256c60: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x256c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x256c64: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x256c64u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256c68: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x256c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x256c6c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x256c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x256c70: 0x184000c5  blez        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x256C70u;
    {
        const bool branch_taken_0x256c70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x256C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C70u;
        // 0x256c74: 0xffb00050  sd          $s0, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c70) {
            ctx->pc = 0x256F88u;
            goto label_256f88;
        }
    }
    ctx->pc = 0x256C78u;
    // 0x256c78: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x256c78u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    // 0x256c7c: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x256c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
label_256c80:
    // 0x256c80: 0x8f98b230  lw          $t8, -0x4DD0($gp)
    ctx->pc = 0x256c80u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x256c84: 0x1821018  mult        $v0, $t4, $v0
    ctx->pc = 0x256c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x256c88: 0x26437340  addiu       $v1, $s2, 0x7340
    ctx->pc = 0x256c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29504));
    // 0x256c8c: 0xc6880  sll         $t5, $t4, 2
    ctx->pc = 0x256c8cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x256c90: 0x1a32021  addu        $a0, $t5, $v1
    ctx->pc = 0x256c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x256c94: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x256c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x256c98: 0xac40038c  sw          $zero, 0x38C($v0)
    ctx->pc = 0x256c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 908), GPR_U32(ctx, 0));
    // 0x256c9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x256c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x256ca0: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x256ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x256ca4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256CA4u;
    {
        const bool branch_taken_0x256ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CA4u;
        // 0x256ca8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ca4) {
            ctx->pc = 0x256CB4u;
            goto label_256cb4;
        }
    }
    ctx->pc = 0x256CACu;
    // 0x256cac: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x256cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x256cb0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x256cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_256cb4:
    // 0x256cb4: 0x4600010  bltz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x256CB4u;
    {
        const bool branch_taken_0x256cb4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x256CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CB4u;
        // 0x256cb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256cb4) {
            ctx->pc = 0x256CF8u;
            goto label_256cf8;
        }
    }
    ctx->pc = 0x256CBCu;
    // 0x256cbc: 0x8f87a264  lw          $a3, -0x5D9C($gp)
    ctx->pc = 0x256cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x256cc0: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x256cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x256cc4: 0x25910001  addiu       $s1, $t4, 0x1
    ctx->pc = 0x256cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_256cc8:
    // 0x256cc8: 0x26427340  addiu       $v0, $s2, 0x7340
    ctx->pc = 0x256cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29504));
    // 0x256ccc: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x256cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x256cd0: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x256cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x256cd4: 0x26054a10  addiu       $a1, $s0, 0x4A10
    ctx->pc = 0x256cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18960));
    // 0x256cd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x256cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256cdc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x256cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x256ce0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x256ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x256ce4: 0x68182a  slt         $v1, $v1, $t0
    ctx->pc = 0x256ce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x256ce8: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x256CE8u;
    {
        const bool branch_taken_0x256ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CE8u;
        // 0x256cec: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ce8) {
            ctx->pc = 0x256CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256cc8;
        }
    }
    ctx->pc = 0x256CF0u;
    // 0x256cf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x256CF0u;
    {
        const bool branch_taken_0x256cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CF0u;
        // 0x256cf4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256cf0) {
            ctx->pc = 0x256D04u;
            goto label_256d04;
        }
    }
    ctx->pc = 0x256CF8u;
label_256cf8:
    // 0x256cf8: 0x8f87a264  lw          $a3, -0x5D9C($gp)
    ctx->pc = 0x256cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x256cfc: 0x25910001  addiu       $s1, $t4, 0x1
    ctx->pc = 0x256cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x256d00: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x256d00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256d04:
    // 0x256d04: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x256d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x256d08: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x256d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256d0c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x256D0Cu;
    {
        const bool branch_taken_0x256d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D0Cu;
        // 0x256d10: 0x26427340  addiu       $v0, $s2, 0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d0c) {
            ctx->pc = 0x256D94u;
            goto label_256d94;
        }
    }
    ctx->pc = 0x256D14u;
    // 0x256d14: 0x3c0f0035  lui         $t7, 0x35
    ctx->pc = 0x256d14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)53 << 16));
    // 0x256d18: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x256d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x256d1c: 0x0  nop
    ctx->pc = 0x256d1cu;
    // NOP
label_256d20:
    // 0x256d20: 0x25e37330  addiu       $v1, $t7, 0x7330
    ctx->pc = 0x256d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 29488));
    // 0x256d24: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x256d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x256d28: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x256d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x256d2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256d30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x256d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x256d34: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x256d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256d38: 0x2cc30019  sltiu       $v1, $a2, 0x19
    ctx->pc = 0x256d38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x256d3c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x256D3Cu;
    {
        const bool branch_taken_0x256d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D3Cu;
        // 0x256d40: 0x3c1001fc  lui         $s0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d3c) {
            ctx->pc = 0x256D7Cu;
            goto label_256d7c;
        }
    }
    ctx->pc = 0x256D44u;
    // 0x256d44: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x256d44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x256d48: 0x26024a10  addiu       $v0, $s0, 0x4A10
    ctx->pc = 0x256d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18960));
    // 0x256d4c: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x256d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x256d50: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x256d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x256d54: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x256d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x256d58: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x256d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x256d5c: 0x3c0e01fc  lui         $t6, 0x1FC
    ctx->pc = 0x256d5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)508 << 16));
    // 0x256d60: 0x25c64a78  addiu       $a2, $t6, 0x4A78
    ctx->pc = 0x256d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 19064));
    // 0x256d64: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x256d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x256d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x256d6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x256d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x256d70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x256d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x256d74: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x256d74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x256d78: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x256d78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
label_256d7c:
    // 0x256d7c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x256d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x256d80: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x256d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x256d84: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x256d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256d88: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x256D88u;
    {
        const bool branch_taken_0x256d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D88u;
        // 0x256d8c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d88) {
            ctx->pc = 0x256D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256d20;
        }
    }
    ctx->pc = 0x256D90u;
    // 0x256d90: 0x26427340  addiu       $v0, $s2, 0x7340
    ctx->pc = 0x256d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29504));
label_256d94:
    // 0x256d94: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x256d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x256d98: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x256d98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256d9c: 0x5000033  bltz        $t0, . + 4 + (0x33 << 2)
    ctx->pc = 0x256D9Cu;
    {
        const bool branch_taken_0x256d9c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x256DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D9Cu;
        // 0x256da0: 0x3c1001fc  lui         $s0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d9c) {
            ctx->pc = 0x256E6Cu;
            goto label_256e6c;
        }
    }
    ctx->pc = 0x256DA4u;
    // 0x256da4: 0x26034a10  addiu       $v1, $s0, 0x4A10
    ctx->pc = 0x256da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 18960));
label_256da8:
    // 0x256da8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x256da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x256dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256db0: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x256db0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256db4: 0x19600029  blez        $t3, . + 4 + (0x29 << 2)
    ctx->pc = 0x256DB4u;
    {
        const bool branch_taken_0x256db4 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x256DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DB4u;
        // 0x256db8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256db4) {
            ctx->pc = 0x256E5Cu;
            goto label_256e5c;
        }
    }
    ctx->pc = 0x256DBCu;
    // 0x256dbc: 0x3c0f0035  lui         $t7, 0x35
    ctx->pc = 0x256dbcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)53 << 16));
    // 0x256dc0: 0x3c0e01fc  lui         $t6, 0x1FC
    ctx->pc = 0x256dc0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)508 << 16));
    // 0x256dc4: 0x250affff  addiu       $t2, $t0, -0x1
    ctx->pc = 0x256dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x256dc8: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x256dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x256dcc: 0x0  nop
    ctx->pc = 0x256dccu;
    // NOP
label_256dd0:
    // 0x256dd0: 0x25c64a78  addiu       $a2, $t6, 0x4A78
    ctx->pc = 0x256dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 19064));
    // 0x256dd4: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x256dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x256dd8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x256dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x256ddc: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x256ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x256de0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x256de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x256de4: 0x25e27330  addiu       $v0, $t7, 0x7330
    ctx->pc = 0x256de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 29488));
    // 0x256de8: 0x90690000  lbu         $t1, 0x0($v1)
    ctx->pc = 0x256de8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256dec: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x256decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x256df0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x256df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256df4: 0x1242018  mult        $a0, $t1, $a0
    ctx->pc = 0x256df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x256df8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x256df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x256dfc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x256dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x256e00: 0x4620011  bltzl       $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x256E00u;
    {
        const bool branch_taken_0x256e00 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x256e00) {
            ctx->pc = 0x256E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256E00u;
            // 0x256e04: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256E48u;
            goto label_256e48;
        }
    }
    ctx->pc = 0x256E08u;
    // 0x256e08: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x256e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x256e0c: 0x28820280  slti        $v0, $a0, 0x280
    ctx->pc = 0x256e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x256e10: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x256E10u;
    {
        const bool branch_taken_0x256e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E10u;
        // 0x256e14: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e10) {
            ctx->pc = 0x256E44u;
            goto label_256e44;
        }
    }
    ctx->pc = 0x256E18u;
    // 0x256e18: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x256E18u;
    {
        const bool branch_taken_0x256e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E18u;
        // 0x256e1c: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e18) {
            ctx->pc = 0x256E44u;
            goto label_256e44;
        }
    }
    ctx->pc = 0x256E20u;
    // 0x256e20: 0x1821818  mult        $v1, $t4, $v0
    ctx->pc = 0x256e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x256e24: 0x781021  addu        $v0, $v1, $t8
    ctx->pc = 0x256e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x256e28: 0x8c43038c  lw          $v1, 0x38C($v0)
    ctx->pc = 0x256e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    // 0x256e2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x256e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x256e30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x256e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256e34: 0xac690390  sw          $t1, 0x390($v1)
    ctx->pc = 0x256e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 912), GPR_U32(ctx, 9));
    // 0x256e38: 0x8c44038c  lw          $a0, 0x38C($v0)
    ctx->pc = 0x256e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    // 0x256e3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x256e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x256e40: 0xac44038c  sw          $a0, 0x38C($v0)
    ctx->pc = 0x256e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 908), GPR_U32(ctx, 4));
label_256e44:
    // 0x256e44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x256e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_256e48:
    // 0x256e48: 0xeb102a  slt         $v0, $a3, $t3
    ctx->pc = 0x256e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x256e4c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x256E4Cu;
    {
        const bool branch_taken_0x256e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E4Cu;
        // 0x256e50: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e4c) {
            ctx->pc = 0x256DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256dd0;
        }
    }
    ctx->pc = 0x256E54u;
    // 0x256e54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x256E54u;
    {
        const bool branch_taken_0x256e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E54u;
        // 0x256e58: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e54) {
            ctx->pc = 0x256E64u;
            goto label_256e64;
        }
    }
    ctx->pc = 0x256E5Cu;
label_256e5c:
    // 0x256e5c: 0x250affff  addiu       $t2, $t0, -0x1
    ctx->pc = 0x256e5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x256e60: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x256e60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_256e64:
    // 0x256e64: 0x501ffd0  bgez        $t0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x256E64u;
    {
        const bool branch_taken_0x256e64 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x256E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E64u;
        // 0x256e68: 0x26034a10  addiu       $v1, $s0, 0x4A10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 18960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e64) {
            ctx->pc = 0x256DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256da8;
        }
    }
    ctx->pc = 0x256E6Cu;
label_256e6c:
    // 0x256e6c: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x256e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x256e70: 0x1828018  mult        $s0, $t4, $v0
    ctx->pc = 0x256e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x256e74: 0x2181821  addu        $v1, $s0, $t8
    ctx->pc = 0x256e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x256e78: 0x8c640180  lw          $a0, 0x180($v1)
    ctx->pc = 0x256e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x256e7c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x256e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x256e80: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x256E80u;
    {
        const bool branch_taken_0x256e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256e80) {
            ctx->pc = 0x256E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256E80u;
            // 0x256e84: 0x8c620180  lw          $v0, 0x180($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256E94u;
            goto label_256e94;
        }
    }
    ctx->pc = 0x256E88u;
    // 0x256e88: 0x8c62031c  lw          $v0, 0x31C($v1)
    ctx->pc = 0x256e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 796)));
    // 0x256e8c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x256e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x256e90: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x256e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
label_256e94:
    // 0x256e94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x256e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e98: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x256e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x256e9c: 0xc095d48  jal         func_257520
    ctx->pc = 0x256E9Cu;
    SET_GPR_U32(ctx, 31, 0x256EA4u);
    ctx->pc = 0x256EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256E9Cu;
    // 0x256ea0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257520u, 0x256E9Cu, 0x256EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256EA4u;
label_256ea4:
    // 0x256ea4: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x256ea4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ea8: 0x19a00032  blez        $t5, . + 4 + (0x32 << 2)
    ctx->pc = 0x256EA8u;
    {
        const bool branch_taken_0x256ea8 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x256EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EA8u;
        // 0x256eac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ea8) {
            ctx->pc = 0x256F74u;
            goto label_256f74;
        }
    }
    ctx->pc = 0x256EB0u;
    // 0x256eb0: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x256eb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256eb4: 0x8f8ab230  lw          $t2, -0x4DD0($gp)
    ctx->pc = 0x256eb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
label_256eb8:
    // 0x256eb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x256eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ebc: 0x18a1821  addu        $v1, $t4, $t2
    ctx->pc = 0x256ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x256ec0: 0x8c62038c  lw          $v0, 0x38C($v1)
    ctx->pc = 0x256ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 908)));
    // 0x256ec4: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x256EC4u;
    {
        const bool branch_taken_0x256ec4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x256EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EC4u;
        // 0x256ec8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ec4) {
            ctx->pc = 0x256F28u;
            goto label_256f28;
        }
    }
    ctx->pc = 0x256ECCu;
    // 0x256ecc: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x256eccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x256ed0: 0x8c620390  lw          $v0, 0x390($v1)
    ctx->pc = 0x256ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 912)));
    // 0x256ed4: 0x3a61821  addu        $v1, $sp, $a2
    ctx->pc = 0x256ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x256ed8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256edc: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x256EDCu;
    {
        const bool branch_taken_0x256edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x256EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EDCu;
        // 0x256ee0: 0x24eb0001  addiu       $t3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256edc) {
            ctx->pc = 0x256EF0u;
            goto label_256ef0;
        }
    }
    ctx->pc = 0x256EE4u;
    // 0x256ee4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x256EE4u;
    {
        const bool branch_taken_0x256ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EE4u;
        // 0x256ee8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ee4) {
            ctx->pc = 0x256F2Cu;
            goto label_256f2c;
        }
    }
    ctx->pc = 0x256EECu;
    // 0x256eec: 0x0  nop
    ctx->pc = 0x256eecu;
    // NOP
label_256ef0:
    // 0x256ef0: 0x18a2821  addu        $a1, $t4, $t2
    ctx->pc = 0x256ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_256ef4:
    // 0x256ef4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x256ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x256ef8: 0x8ca2038c  lw          $v0, 0x38C($a1)
    ctx->pc = 0x256ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 908)));
    // 0x256efc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x256efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256f00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x256F00u;
    {
        const bool branch_taken_0x256f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F00u;
        // 0x256f04: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f00) {
            ctx->pc = 0x256F2Cu;
            goto label_256f2c;
        }
    }
    ctx->pc = 0x256F08u;
    // 0x256f08: 0x3a62021  addu        $a0, $sp, $a2
    ctx->pc = 0x256f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x256f0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x256f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x256f10: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x256f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x256f14: 0x8c620390  lw          $v0, 0x390($v1)
    ctx->pc = 0x256f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 912)));
    // 0x256f18: 0x1445fff6  bne         $v0, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x256F18u;
    {
        const bool branch_taken_0x256f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x256F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F18u;
        // 0x256f1c: 0x18a2821  addu        $a1, $t4, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f18) {
            ctx->pc = 0x256EF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256ef4;
        }
    }
    ctx->pc = 0x256F20u;
    // 0x256f20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x256F20u;
    {
        const bool branch_taken_0x256f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F20u;
        // 0x256f24: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f20) {
            ctx->pc = 0x256F2Cu;
            goto label_256f2c;
        }
    }
    ctx->pc = 0x256F28u;
label_256f28:
    // 0x256f28: 0x24eb0001  addiu       $t3, $a3, 0x1
    ctx->pc = 0x256f28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_256f2c:
    // 0x256f2c: 0x5520000e  bnel        $t1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x256F2Cu;
    {
        const bool branch_taken_0x256f2c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x256f2c) {
            ctx->pc = 0x256F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256F2Cu;
            // 0x256f30: 0x160382d  daddu       $a3, $t3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256F68u;
            goto label_256f68;
        }
    }
    ctx->pc = 0x256F34u;
    // 0x256f34: 0x18a3021  addu        $a2, $t4, $t2
    ctx->pc = 0x256f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x256f38: 0x8cc5038c  lw          $a1, 0x38C($a2)
    ctx->pc = 0x256f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 908)));
    // 0x256f3c: 0x28a200d4  slti        $v0, $a1, 0xD4
    ctx->pc = 0x256f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)212) ? 1 : 0);
    // 0x256f40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256F40u;
    {
        const bool branch_taken_0x256f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F40u;
        // 0x256f44: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f40) {
            ctx->pc = 0x256F64u;
            goto label_256f64;
        }
    }
    ctx->pc = 0x256F48u;
    // 0x256f48: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x256f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x256f4c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x256f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x256f50: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x256f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x256f54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x256f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x256f58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x256f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x256f5c: 0xac430390  sw          $v1, 0x390($v0)
    ctx->pc = 0x256f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 912), GPR_U32(ctx, 3));
    // 0x256f60: 0xacc5038c  sw          $a1, 0x38C($a2)
    ctx->pc = 0x256f60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 908), GPR_U32(ctx, 5));
label_256f64:
    // 0x256f64: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x256f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_256f68:
    // 0x256f68: 0xed102a  slt         $v0, $a3, $t5
    ctx->pc = 0x256f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x256f6c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x256F6Cu;
    {
        const bool branch_taken_0x256f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F6Cu;
        // 0x256f70: 0x8f8ab230  lw          $t2, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f6c) {
            ctx->pc = 0x256EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256eb8;
        }
    }
    ctx->pc = 0x256F74u;
label_256f74:
    // 0x256f74: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x256f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x256f78: 0x220602d  daddu       $t4, $s1, $zero
    ctx->pc = 0x256f78u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f7c: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x256f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256f80: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x256F80u;
    {
        const bool branch_taken_0x256f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F80u;
        // 0x256f84: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f80) {
            ctx->pc = 0x256C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256c80;
        }
    }
    ctx->pc = 0x256F88u;
label_256f88:
    // 0x256f88: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x256f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x256f8c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x256f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256f90: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x256f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256f94: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x256f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256f98: 0x3e00008  jr          $ra
    ctx->pc = 0x256F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F98u;
        // 0x256f9c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256FA0u;
}
