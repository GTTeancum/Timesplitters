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

// Function: dlTextureRectangle
// Address: 0x2b8c08 - 0x2b8df8
void dlTextureRectangle_0x2b8c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlTextureRectangle_0x2b8c08");
#endif

    switch (ctx->pc) {
        case 0x2b8c60u: goto label_2b8c60;
        case 0x2b8c6cu: goto label_2b8c6c;
        default: break;
    }

    ctx->pc = 0x2b8c08u;

    // 0x2b8c08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b8c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b8c0c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b8c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b8c10: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2b8c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2b8c14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b8c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c18: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b8c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b8c1c: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2b8c1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c20: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b8c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b8c24: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2b8c24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c28: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b8c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b8c2c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2b8c2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c30: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b8c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b8c34: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2b8c34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c38: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b8c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b8c3c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2b8c3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c40: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b8c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b8c44: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b8c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c48: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x2b8c48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b8c4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b8c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b8c50: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x2b8c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x2b8c54: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b8c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b8c58: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B8C58u;
    SET_GPR_U32(ctx, 31, 0x2B8C60u);
    ctx->pc = 0x2B8C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C58u;
    // 0x2b8c5c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B8C58u, 0x2B8C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C60u;
label_2b8c60:
    // 0x2b8c60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b8c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c64: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2B8C64u;
    SET_GPR_U32(ctx, 31, 0x2B8C6Cu);
    ctx->pc = 0x2B8C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C64u;
    // 0x2b8c68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2B8C64u, 0x2B8C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C6Cu;
label_2b8c6c:
    // 0x2b8c6c: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b8c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8c70: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x2b8c70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8c74: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b8c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b8c78: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2b8c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8c7c: 0xa06a0003  sb          $t2, 0x3($v1)
    ctx->pc = 0x2b8c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x2b8c80: 0x248408f0  addiu       $a0, $a0, 0x8F0
    ctx->pc = 0x2b8c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2288));
    // 0x2b8c84: 0x114e02  srl         $t1, $s1, 24
    ctx->pc = 0x2b8c84u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 17), 24));
    // 0x2b8c88: 0x113403  sra         $a2, $s1, 16
    ctx->pc = 0x2b8c88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 16));
    // 0x2b8c8c: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8c90: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2b8c90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2b8c94: 0x113a03  sra         $a3, $s1, 8
    ctx->pc = 0x2b8c94u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 17), 8));
    // 0x2b8c98: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2b8c98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2b8c9c: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x2b8c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b8ca0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2b8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2b8ca4: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b8ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x2b8ca8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2b8ca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2b8cac: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x2b8cacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b8cb0: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x2b8cb0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2b8cb4: 0xa0aa0003  sb          $t2, 0x3($a1)
    ctx->pc = 0x2b8cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x2b8cb8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2b8cb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x2b8cbc: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x2b8cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x2b8cc0: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x2b8cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2b8cc4: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x2b8cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8cc8: 0x26526c00  addiu       $s2, $s2, 0x6C00
    ctx->pc = 0x2b8cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 27648));
    // 0x2b8ccc: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x2b8cccu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2b8cd0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2b8cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2b8cd4: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x2b8cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x2b8cd8: 0x26737900  addiu       $s3, $s3, 0x7900
    ctx->pc = 0x2b8cd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 30976));
    // 0x2b8cdc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8ce0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2b8ce0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2b8ce4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2b8ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2b8ce8: 0x27c90008  addiu       $t1, $fp, 0x8
    ctx->pc = 0x2b8ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x2b8cec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8cf0: 0x16b100  sll         $s6, $s6, 4
    ctx->pc = 0x2b8cf0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x2b8cf4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8cf8: 0x26d66c00  addiu       $s6, $s6, 0x6C00
    ctx->pc = 0x2b8cf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 27648));
    // 0x2b8cfc: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x2b8cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x2b8d00: 0x17b900  sll         $s7, $s7, 4
    ctx->pc = 0x2b8d00u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x2b8d04: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d08: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x2b8d08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2b8d0c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2b8d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2b8d10: 0x26f77900  addiu       $s7, $s7, 0x7900
    ctx->pc = 0x2b8d10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 30976));
    // 0x2b8d14: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d18: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x2b8d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b8d1c: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x2b8d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x2b8d20: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b8d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b8d24: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d28: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2b8d28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b8d2c: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x2b8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x2b8d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d34: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d38: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x2b8d38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x2b8d3c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b8d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b8d40: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x2b8d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x2b8d44: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d48: 0x24a50910  addiu       $a1, $a1, 0x910
    ctx->pc = 0x2b8d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2320));
    // 0x2b8d4c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b8d50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b8d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d54: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d58: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2b8d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2b8d5c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d60: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x2b8d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x2b8d64: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d68: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2b8d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x2b8d6c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b8d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b8d74: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d78: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x2b8d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x2b8d7c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d80: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x2b8d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x2b8d84: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b8d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b8d8c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d90: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b8d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b8d94: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8d98: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x2b8d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
    // 0x2b8d9c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8da0: 0xae170000  sw          $s7, 0x0($s0)
    ctx->pc = 0x2b8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
    // 0x2b8da4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8da8: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2b8da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x2b8dac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2b8dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2b8db0: 0xa0ca0003  sb          $t2, 0x3($a2)
    ctx->pc = 0x2b8db0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x2b8db4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2b8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8db8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2b8db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2b8dbc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2b8dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b8dc0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b8dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b8dc4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b8dc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b8dc8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b8dc8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b8dcc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b8dccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b8dd0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b8dd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8dd4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b8dd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8dd8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b8dd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8ddc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b8ddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8de0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b8de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8de4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b8de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8de8: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x2b8de8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b8dec: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b8decu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2b8df0: 0x80adf34  j           func_2B7CD0
    ctx->pc = 0x2B8DF0u;
    ctx->pc = 0x2B8DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8DF0u;
    // 0x2b8df4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    dlSetZB_0x2b7cd0(rdram, ctx, runtime); return;
    ctx->pc = 0x2B8DF8u;
}
