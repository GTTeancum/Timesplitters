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

// Function: ipSetScreenAsTexture
// Address: 0x295dd0 - 0x295f84
void ipSetScreenAsTexture_0x295dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipSetScreenAsTexture_0x295dd0");
#endif

    switch (ctx->pc) {
        case 0x295de8u: goto label_295de8;
        default: break;
    }

    ctx->pc = 0x295dd0u;

    // 0x295dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295dd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ddc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x295ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x295de0: 0xc0807de  jal         func_201F78
    ctx->pc = 0x295DE0u;
    SET_GPR_U32(ctx, 31, 0x295DE8u);
    ctx->pc = 0x295DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DE0u;
    // 0x295de4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x295DE0u, 0x295DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295DE8u;
label_295de8:
    // 0x295de8: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x295de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x295dec: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x295decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295df0: 0x3c036c06  lui         $v1, 0x6C06
    ctx->pc = 0x295df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27654 << 16));
    // 0x295df4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x295df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x295df8: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x295df8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x295dfc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x295dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x295e00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x295e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x295e04: 0x34058005  ori         $a1, $zero, 0x8005
    ctx->pc = 0x295e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x295e08: 0x8f8893a0  lw          $t0, -0x6C60($gp)
    ctx->pc = 0x295e08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x295e0c: 0x3c04108f  lui         $a0, 0x108F
    ctx->pc = 0x295e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4239 << 16));
    // 0x295e10: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x295e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x295e14: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x295e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x295e18: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x295e18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x295e1c: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x295e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x295e20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295e24: 0x240d003b  addiu       $t5, $zero, 0x3B
    ctx->pc = 0x295e24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x295e28: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x295e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x295e2c: 0x3c032822  lui         $v1, 0x2822
    ctx->pc = 0x295e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10274 << 16));
    // 0x295e30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295e34: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x295e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x295e38: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x295e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x295e3c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x295e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x295e40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295e44: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x295e44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x295e48: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x295e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x295e4c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x295e4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x295e50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295e54: 0x240e0014  addiu       $t6, $zero, 0x14
    ctx->pc = 0x295e54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x295e58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295e5c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x295e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x295e60: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x295e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x295e64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295e68: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x295e68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x295e6c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295e70: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x295e70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x295e74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295e78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x295e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x295e7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x295e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x295e80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295e84: 0x2033024  and         $a2, $s0, $v1
    ctx->pc = 0x295e84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x295e88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295e8c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x295e8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x295e90: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x295e90u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x295e94: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x295e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x295e98: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x295e98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x295e9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295ea0: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x295ea0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x295ea4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295ea8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x295ea8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x295eac: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x295eacu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x295eb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295eb4: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x295eb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x295eb8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x295eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x295ebc: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x295ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x295ec0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295ec4: 0x3484c00a  ori         $a0, $a0, 0xC00A
    ctx->pc = 0x295ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49162);
    // 0x295ec8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x295ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x295ecc: 0x240b037c  addiu       $t3, $zero, 0x37C
    ctx->pc = 0x295eccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x295ed0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295ed4: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x295ed4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x295ed8: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x295ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x295edc: 0x3c051400  lui         $a1, 0x1400
    ctx->pc = 0x295edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    // 0x295ee0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295ee4: 0x34a507fc  ori         $a1, $a1, 0x7FC
    ctx->pc = 0x295ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    // 0x295ee8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295eec: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x295eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x295ef0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295ef4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x295ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x295ef8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295efc: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x295efcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x295f00: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f04: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x295f04u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x295f08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295f0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f10: 0xaf8793a0  sw          $a3, -0x6C60($gp)
    ctx->pc = 0x295f10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 7));
    // 0x295f14: 0xac4e0000  sw          $t6, 0x0($v0)
    ctx->pc = 0x295f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
    // 0x295f18: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295f20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f24: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x295f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x295f28: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f2c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x295f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x295f30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f34: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x295f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x295f38: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295f40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f44: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x295f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x295f48: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f4c: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x295f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x295f50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f54: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x295f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x295f58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295f60: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f64: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x295f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x295f68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295f6c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x295f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x295f70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x295f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x295f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x295f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295f78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x295F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F7Cu;
        // 0x295f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295F84u;
}
