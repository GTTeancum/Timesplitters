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

// Function: pickupposGfx
// Address: 0x272cc8 - 0x273034
void pickupposGfx_0x272cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pickupposGfx_0x272cc8");
#endif

    switch (ctx->pc) {
        case 0x272cf8u: goto label_272cf8;
        case 0x272d04u: goto label_272d04;
        case 0x272d10u: goto label_272d10;
        case 0x272d28u: goto label_272d28;
        case 0x272d40u: goto label_272d40;
        case 0x272e10u: goto label_272e10;
        case 0x273008u: goto label_273008;
        default: break;
    }

    ctx->pc = 0x272cc8u;

    // 0x272cc8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x272cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x272ccc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x272cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272cd0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x272cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x272cd4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x272cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x272cd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x272cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x272cdc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x272cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x272ce0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x272ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ce4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x272ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x272ce8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x272ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x272cec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x272cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x272cf0: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x272CF0u;
    SET_GPR_U32(ctx, 31, 0x272CF8u);
    ctx->pc = 0x272CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CF0u;
    // 0x272cf4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x272CF0u, 0x272CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CF8u;
label_272cf8:
    // 0x272cf8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x272cf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cfc: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x272CFCu;
    SET_GPR_U32(ctx, 31, 0x272D04u);
    ctx->pc = 0x272D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CFCu;
    // 0x272d00: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x272CFCu, 0x272D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D04u;
label_272d04:
    // 0x272d04: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x272d04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d08: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x272D08u;
    SET_GPR_U32(ctx, 31, 0x272D10u);
    ctx->pc = 0x272D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D08u;
    // 0x272d0c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x272D08u, 0x272D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D10u;
label_272d10:
    // 0x272d10: 0x8f84a358  lw          $a0, -0x5CA8($gp)
    ctx->pc = 0x272d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943576)));
    // 0x272d14: 0x188000ba  blez        $a0, . + 4 + (0xBA << 2)
    ctx->pc = 0x272D14u;
    {
        const bool branch_taken_0x272d14 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x272D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D14u;
        // 0x272d18: 0x3c1401fd  lui         $s4, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)509 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d14) {
            ctx->pc = 0x273000u;
            goto label_273000;
        }
    }
    ctx->pc = 0x272D1Cu;
    // 0x272d1c: 0x3c1301fd  lui         $s3, 0x1FD
    ctx->pc = 0x272d1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)509 << 16));
    // 0x272d20: 0x3c1201fd  lui         $s2, 0x1FD
    ctx->pc = 0x272d20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)509 << 16));
    // 0x272d24: 0x918023  subu        $s0, $a0, $s1
    ctx->pc = 0x272d24u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_272d28:
    // 0x272d28: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x272d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x272d2c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x272d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x272d30: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x272d30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x272d34: 0x26040005  addiu       $a0, $s0, 0x5
    ctx->pc = 0x272d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x272d38: 0xc0807de  jal         func_201F78
    ctx->pc = 0x272D38u;
    SET_GPR_U32(ctx, 31, 0x272D40u);
    ctx->pc = 0x272D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D38u;
    // 0x272d3c: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x272D38u, 0x272D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D40u;
label_272d40:
    // 0x272d40: 0x8f84a35c  lw          $a0, -0x5CA4($gp)
    ctx->pc = 0x272d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943580)));
    // 0x272d44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x272d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272d48: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x272d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x272d4c: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x272d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x272d50: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x272d50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x272d54: 0x8f8993a0  lw          $t1, -0x6C60($gp)
    ctx->pc = 0x272d54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x272d58: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x272d58u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x272d5c: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x272d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x272d60: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x272d60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x272d64: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x272d64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d68: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x272d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x272d6c: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x272d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x272d70: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x272d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x272d74: 0x102c00  sll         $a1, $s0, 16
    ctx->pc = 0x272d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x272d78: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x272d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x272d7c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x272d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x272d80: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x272d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x272d84: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x272d84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272d88: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x272d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x272d8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d90: 0xa1280003  sb          $t0, 0x3($t1)
    ctx->pc = 0x272d90u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x272d94: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x272d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x272d98: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x272d98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x272d9c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x272d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x272da0: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x272da0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x272da4: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x272da4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x272da8: 0xa1880003  sb          $t0, 0x3($t4)
    ctx->pc = 0x272da8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x272dac: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272dacu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272db0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x272db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x272db4: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x272db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x272db8: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x272db8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x272dbc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272dbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272dc0: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x272dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x272dc4: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272dc8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272dc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272dcc: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x272dccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x272dd0: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272dd4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272dd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272dd8: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x272dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x272ddc: 0xa1880003  sb          $t0, 0x3($t4)
    ctx->pc = 0x272ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x272de0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272de0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272de4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x272de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x272de8: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x272de8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x272dec: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x272decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x272df0: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x272df0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x272df4: 0x1a00001b  blez        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x272DF4u;
    {
        const bool branch_taken_0x272df4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x272DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DF4u;
        // 0x272df8: 0xaf8c93a0  sw          $t4, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272df4) {
            ctx->pc = 0x272E64u;
            goto label_272e64;
        }
    }
    ctx->pc = 0x272DFCu;
    // 0x272dfc: 0x2608ffff  addiu       $t0, $s0, -0x1
    ctx->pc = 0x272dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x272e00: 0x106c80  sll         $t5, $s0, 18
    ctx->pc = 0x272e00u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 18));
    // 0x272e04: 0x105040  sll         $t2, $s0, 1
    ctx->pc = 0x272e04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x272e08: 0x117100  sll         $t6, $s1, 4
    ctx->pc = 0x272e08u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x272e0c: 0x2307821  addu        $t7, $s1, $s0
    ctx->pc = 0x272e0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_272e10:
    // 0x272e10: 0xe83026  xor         $a2, $a3, $t0
    ctx->pc = 0x272e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
    // 0x272e14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x272e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x272e18: 0x34048004  ori         $a0, $zero, 0x8004
    ctx->pc = 0x272e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x272e1c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x272e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e20: 0x86100a  movz        $v0, $a0, $a2
    ctx->pc = 0x272e20u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x272e24: 0x3c03302e  lui         $v1, 0x302E
    ctx->pc = 0x272e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12334 << 16));
    // 0x272e28: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x272e28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x272e2c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272e2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272e30: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x272e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x272e34: 0x24020412  addiu       $v0, $zero, 0x412
    ctx->pc = 0x272e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x272e38: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x272e38u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x272e3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x272e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x272e40: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272e40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272e44: 0xf0182a  slt         $v1, $a3, $s0
    ctx->pc = 0x272e44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x272e48: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x272e48u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x272e4c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272e50: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272e50u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272e54: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272E54u;
    {
        const bool branch_taken_0x272e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E54u;
        // 0x272e58: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e54) {
            ctx->pc = 0x272E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272e10;
        }
    }
    ctx->pc = 0x272E5Cu;
    // 0x272e5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x272E5Cu;
    {
        const bool branch_taken_0x272e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E5Cu;
        // 0x272e60: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e5c) {
            ctx->pc = 0x272E78u;
            goto label_272e78;
        }
    }
    ctx->pc = 0x272E64u;
label_272e64:
    // 0x272e64: 0x106c80  sll         $t5, $s0, 18
    ctx->pc = 0x272e64u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 18));
    // 0x272e68: 0x105040  sll         $t2, $s0, 1
    ctx->pc = 0x272e68u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x272e6c: 0x117100  sll         $t6, $s1, 4
    ctx->pc = 0x272e6cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x272e70: 0x2307821  addu        $t7, $s1, $s0
    ctx->pc = 0x272e70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x272e74: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x272e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_272e78:
    // 0x272e78: 0x3c036800  lui         $v1, 0x6800
    ctx->pc = 0x272e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26624 << 16));
    // 0x272e7c: 0xa1820003  sb          $v0, 0x3($t4)
    ctx->pc = 0x272e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x272e80: 0x34638018  ori         $v1, $v1, 0x8018
    ctx->pc = 0x272e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32792);
    // 0x272e84: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272e84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272e88: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x272e88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272e8c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x272e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x272e90: 0x1a31825  or          $v1, $t5, $v1
    ctx->pc = 0x272e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x272e94: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x272e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x272e98: 0x2687e190  addiu       $a3, $s4, -0x1E70
    ctx->pc = 0x272e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959504));
    // 0x272e9c: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x272e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x272ea0: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x272ea0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x272ea4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272ea4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272ea8: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x272ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x272eac: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272eacu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272eb0: 0x2262018  mult        $a0, $s1, $a2
    ctx->pc = 0x272eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x272eb4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272eb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272eb8: 0xa4490000  sh          $t1, 0x0($v0)
    ctx->pc = 0x272eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x272ebc: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272ec0: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x272ec0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x272ec4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272ec4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272ec8: 0x3c056800  lui         $a1, 0x6800
    ctx->pc = 0x272ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26624 << 16));
    // 0x272ecc: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x272eccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x272ed0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x272ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x272ed4: 0xa1860003  sb          $a2, 0x3($t4)
    ctx->pc = 0x272ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x272ed8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272ed8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272edc: 0x34a58098  ori         $a1, $a1, 0x8098
    ctx->pc = 0x272edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32920);
    // 0x272ee0: 0x2264018  mult        $t0, $s1, $a2
    ctx->pc = 0x272ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x272ee4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x272ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x272ee8: 0x1a52825  or          $a1, $t5, $a1
    ctx->pc = 0x272ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) | GPR_U64(ctx, 5));
    // 0x272eec: 0x2663f450  addiu       $v1, $s3, -0xBB0
    ctx->pc = 0x272eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964304));
    // 0x272ef0: 0x3c076e00  lui         $a3, 0x6E00
    ctx->pc = 0x272ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28160 << 16));
    // 0x272ef4: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x272ef4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x272ef8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x272ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x272efc: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x272efcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x272f00: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x272f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x272f04: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x272f04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x272f08: 0x34e78058  ori         $a3, $a3, 0x8058
    ctx->pc = 0x272f08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32856);
    // 0x272f0c: 0xa1860003  sb          $a2, 0x3($t4)
    ctx->pc = 0x272f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x272f10: 0x1a73825  or          $a3, $t5, $a3
    ctx->pc = 0x272f10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) | GPR_U64(ctx, 7));
    // 0x272f14: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272f14u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272f18: 0x26430710  addiu       $v1, $s2, 0x710
    ctx->pc = 0x272f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1808));
    // 0x272f1c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x272f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x272f20: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x272f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x272f24: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x272f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x272f28: 0x1e0882d  daddu       $s1, $t7, $zero
    ctx->pc = 0x272f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f2c: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x272f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x272f30: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x272f30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x272f34: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272f34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272f38: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x272f38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x272f3c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272f40: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272f40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272f44: 0xa4490000  sh          $t1, 0x0($v0)
    ctx->pc = 0x272f44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x272f48: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272f48u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272f4c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272f4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272f50: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x272f50u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x272f54: 0xa1860003  sb          $a2, 0x3($t4)
    ctx->pc = 0x272f54u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x272f58: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272f58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272f5c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x272f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x272f60: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x272f60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x272f64: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x272f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x272f68: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x272f68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x272f6c: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x272f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x272f70: 0xa1860003  sb          $a2, 0x3($t4)
    ctx->pc = 0x272f70u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x272f74: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x272f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x272f78: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x272f78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x272f7c: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x272f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x272f80: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x272f80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x272f84: 0xa4490000  sh          $t1, 0x0($v0)
    ctx->pc = 0x272f84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x272f88: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272f88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272f8c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272f8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272f90: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272f90u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272f94: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272f94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272f98: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272f98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272f9c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272fa0: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x272fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x272fa4: 0xa1860003  sb          $a2, 0x3($t4)
    ctx->pc = 0x272fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x272fa8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272fa8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272fac: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x272facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x272fb0: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x272fb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x272fb4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x272fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x272fb8: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x272fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x272fbc: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x272fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x272fc0: 0xa1860003  sb          $a2, 0x3($t4)
    ctx->pc = 0x272fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x272fc4: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x272fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x272fc8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x272fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x272fcc: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x272fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x272fd0: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x272fd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x272fd4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272fd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272fd8: 0xa4490000  sh          $t1, 0x0($v0)
    ctx->pc = 0x272fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x272fdc: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272fe0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x272fe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x272fe4: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x272fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x272fe8: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x272fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x272fec: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x272fecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x272ff0: 0x8f84a358  lw          $a0, -0x5CA8($gp)
    ctx->pc = 0x272ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943576)));
    // 0x272ff4: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x272ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x272ff8: 0x1440ff4b  bnez        $v0, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x272FF8u;
    {
        const bool branch_taken_0x272ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FF8u;
        // 0x272ffc: 0x918023  subu        $s0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ff8) {
            ctx->pc = 0x272D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272d28;
        }
    }
    ctx->pc = 0x273000u;
label_273000:
    // 0x273000: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x273000u;
    SET_GPR_U32(ctx, 31, 0x273008u);
    ctx->pc = 0x273004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273000u;
    // 0x273004: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x273000u, 0x273008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273008u;
label_273008:
    // 0x273008: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x273008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27300c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27300cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x273010: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x273010u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x273014: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x273014u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x273018: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x273018u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27301c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27301cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273020: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x273020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273024: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x273024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x273028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27302c: 0x80adfaa  j           func_2B7EA8
    ctx->pc = 0x27302Cu;
    ctx->pc = 0x273030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27302Cu;
    // 0x273030: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    dlSetBlend_0x2b7ea8(rdram, ctx, runtime); return;
    ctx->pc = 0x273034u;
}
