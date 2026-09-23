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

// Function: topmenuGfx
// Address: 0x20dd58 - 0x20e18c
void topmenuGfx_0x20dd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("topmenuGfx_0x20dd58");
#endif

    switch (ctx->pc) {
        case 0x20dda4u: goto label_20dda4;
        case 0x20ddb0u: goto label_20ddb0;
        case 0x20de20u: goto label_20de20;
        case 0x20deecu: goto label_20deec;
        case 0x20df3cu: goto label_20df3c;
        case 0x20e000u: goto label_20e000;
        case 0x20e008u: goto label_20e008;
        case 0x20e040u: goto label_20e040;
        case 0x20e0b0u: goto label_20e0b0;
        case 0x20e118u: goto label_20e118;
        case 0x20e154u: goto label_20e154;
        case 0x20e15cu: goto label_20e15c;
        default: break;
    }

    ctx->pc = 0x20dd58u;

    // 0x20dd58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20dd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20dd5c: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x20dd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20dd60: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x20dd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x20dd64: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x20dd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x20dd68: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x20dd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20dd6c: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x20dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x20dd70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20dd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20dd74: 0x24633240  addiu       $v1, $v1, 0x3240
    ctx->pc = 0x20dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12864));
    // 0x20dd78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x20dd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x20dd7c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x20dd7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x20dd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20dd84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x20dd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20dd88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20dd8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20dd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20dd90: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x20dd90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20dd94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20dd98: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x20dd98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20dd9c: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x20DD9Cu;
    SET_GPR_U32(ctx, 31, 0x20DDA4u);
    ctx->pc = 0x20DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD9Cu;
    // 0x20dda0: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x20DD9Cu, 0x20DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDA4u;
label_20dda4:
    // 0x20dda4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20dda4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20dda8: 0xc08089c  jal         func_202270
    ctx->pc = 0x20DDA8u;
    SET_GPR_U32(ctx, 31, 0x20DDB0u);
    ctx->pc = 0x20DDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DDA8u;
    // 0x20ddac: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x20DDA8u, 0x20DDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDB0u;
label_20ddb0:
    // 0x20ddb0: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x20ddb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20ddb4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20ddb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ddb8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x20ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20ddbc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20ddbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20ddc0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x20DDC0u;
    {
        const bool branch_taken_0x20ddc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDC0u;
        // 0x20ddc4: 0x44040  sll         $t0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddc0) {
            ctx->pc = 0x20DE70u;
            goto label_20de70;
        }
    }
    ctx->pc = 0x20DDC8u;
    // 0x20ddc8: 0x8f879354  lw          $a3, -0x6CAC($gp)
    ctx->pc = 0x20ddc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20ddcc: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x20ddccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x20ddd0: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x20ddd0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
    // 0x20ddd4: 0x2564a220  addiu       $a0, $t3, -0x5DE0
    ctx->pc = 0x20ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294943264));
    // 0x20ddd8: 0x26652c18  addiu       $a1, $s3, 0x2C18
    ctx->pc = 0x20ddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 11288));
    // 0x20dddc: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x20dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x20dde0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x20dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x20dde4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20dde8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x20dde8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20ddec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20ddecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ddf0: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x20ddf0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ddf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20ddf8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x20ddf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ddfc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20de00: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x20de00u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20de04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20de08: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x20de08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de0c: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x20de0cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20de10: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x20DE10u;
    {
        const bool branch_taken_0x20de10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE10u;
        // 0x20de14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de10) {
            ctx->pc = 0x20DE98u;
            goto label_20de98;
        }
    }
    ctx->pc = 0x20DE18u;
    // 0x20de18: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x20de18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x20de1c: 0x25a4a220  addiu       $a0, $t5, -0x5DE0
    ctx->pc = 0x20de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294943264));
label_20de20:
    // 0x20de20: 0x25852c18  addiu       $a1, $t4, 0x2C18
    ctx->pc = 0x20de20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 11288));
    // 0x20de24: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x20de24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x20de28: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x20de28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x20de2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20de30: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x20de30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20de34: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20de34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20de38: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x20de38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x20de3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20de40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20de40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20de44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20de44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20de48: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x20de48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20de4c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x20de4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20de50: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x20DE50u;
    {
        const bool branch_taken_0x20de50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x20DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE50u;
        // 0x20de54: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de50) {
            ctx->pc = 0x20DE80u;
            goto label_20de80;
        }
    }
    ctx->pc = 0x20DE58u;
    // 0x20de58: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x20de58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20de5c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x20de5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20de60: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x20DE60u;
    {
        const bool branch_taken_0x20de60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE60u;
        // 0x20de64: 0x25a4a220  addiu       $a0, $t5, -0x5DE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294943264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de60) {
            ctx->pc = 0x20DE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20de20;
        }
    }
    ctx->pc = 0x20DE68u;
    // 0x20de68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20DE68u;
    {
        const bool branch_taken_0x20de68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE68u;
        // 0x20de6c: 0x2564a220  addiu       $a0, $t3, -0x5DE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294943264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de68) {
            ctx->pc = 0x20DEA0u;
            goto label_20dea0;
        }
    }
    ctx->pc = 0x20DE70u;
label_20de70:
    // 0x20de70: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x20de70u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
    // 0x20de74: 0x8f879354  lw          $a3, -0x6CAC($gp)
    ctx->pc = 0x20de74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20de78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20DE78u;
    {
        const bool branch_taken_0x20de78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE78u;
        // 0x20de7c: 0x3c0b0033  lui         $t3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de78) {
            ctx->pc = 0x20DE98u;
            goto label_20de98;
        }
    }
    ctx->pc = 0x20DE80u;
label_20de80:
    // 0x20de80: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x20de80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20de84: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x20de84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20de88: 0x24420031  addiu       $v0, $v0, 0x31
    ctx->pc = 0x20de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 49));
    // 0x20de8c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x20de8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x20de90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20DE90u;
    {
        const bool branch_taken_0x20de90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE90u;
        // 0x20de94: 0x8f879354  lw          $a3, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de90) {
            ctx->pc = 0x20DE9Cu;
            goto label_20de9c;
        }
    }
    ctx->pc = 0x20DE98u;
label_20de98:
    // 0x20de98: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x20de98u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
label_20de9c:
    // 0x20de9c: 0x2564a220  addiu       $a0, $t3, -0x5DE0
    ctx->pc = 0x20de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294943264));
label_20dea0:
    // 0x20dea0: 0x26632c18  addiu       $v1, $s3, 0x2C18
    ctx->pc = 0x20dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 11288));
    // 0x20dea4: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x20dea4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x20dea8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x20dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x20deac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x20deacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20deb0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x20deb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20deb4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20deb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20deb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20debc: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x20debcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x20dec0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20dec4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DEC4u;
    {
        const bool branch_taken_0x20dec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEC4u;
        // 0x20dec8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dec4) {
            ctx->pc = 0x20DEE4u;
            goto label_20dee4;
        }
    }
    ctx->pc = 0x20DECCu;
    // 0x20decc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x20deccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20ded0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x20ded4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x20ded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x20ded8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x20ded8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20dedc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x20DEDCu;
    {
        const bool branch_taken_0x20dedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20dedc) {
            ctx->pc = 0x20DEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DEDCu;
            // 0x20dee0: 0x8cb01050  lw          $s0, 0x1050($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DEE4u;
            goto label_20dee4;
        }
    }
    ctx->pc = 0x20DEE4u;
label_20dee4:
    // 0x20dee4: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x20DEE4u;
    SET_GPR_U32(ctx, 31, 0x20DEECu);
    ctx->pc = 0x20DEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DEE4u;
    // 0x20dee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x20DEE4u, 0x20DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DEECu;
label_20deec:
    // 0x20deec: 0x268399f0  addiu       $v1, $s4, -0x6610
    ctx->pc = 0x20deecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941168));
    // 0x20def0: 0x8e8999f0  lw          $t1, -0x6610($s4)
    ctx->pc = 0x20def0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941168)));
    // 0x20def4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x20def4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20def8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x20def8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x20defc: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x20defcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x20df00: 0x3c080018  lui         $t0, 0x18
    ctx->pc = 0x20df00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)24 << 16));
    // 0x20df04: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x20df04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20df08: 0x8c66005c  lw          $a2, 0x5C($v1)
    ctx->pc = 0x20df08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x20df0c: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x20df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x20df10: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x20df10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x20df14: 0x24b2001a  addiu       $s2, $a1, 0x1A
    ctx->pc = 0x20df14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 26));
    // 0x20df18: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20df18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20df1c: 0x66900b  movn        $s2, $v1, $a2
    ctx->pc = 0x20df1cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x20df20: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x20df20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x20df24: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x20df24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x20df28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20df28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20df2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df30: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x20df30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x20df34: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20DF34u;
    SET_GPR_U32(ctx, 31, 0x20DF3Cu);
    ctx->pc = 0x20DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF34u;
    // 0x20df38: 0x35080080  ori         $t0, $t0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20DF34u, 0x20DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF3Cu;
label_20df3c:
    // 0x20df3c: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x20df3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x20df40: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x20DF40u;
    {
        const bool branch_taken_0x20df40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF40u;
        // 0x20df44: 0x93829ab5  lbu         $v0, -0x654B($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df40) {
            ctx->pc = 0x20E048u;
            goto label_20e048;
        }
    }
    ctx->pc = 0x20DF48u;
    // 0x20df48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20df48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20df4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DF4Cu;
    {
        const bool branch_taken_0x20df4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF4Cu;
        // 0x20df50: 0x8f839a9c  lw          $v1, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df4c) {
            ctx->pc = 0x20DF64u;
            goto label_20df64;
        }
    }
    ctx->pc = 0x20DF54u;
    // 0x20df54: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20df54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20df58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20df58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20df5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20DF5Cu;
    {
        const bool branch_taken_0x20df5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF5Cu;
        // 0x20df60: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df5c) {
            ctx->pc = 0x20DF70u;
            goto label_20df70;
        }
    }
    ctx->pc = 0x20DF64u;
label_20df64:
    // 0x20df64: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x20df64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x20df68: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20df68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x20df6c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x20df6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_20df70:
    // 0x20df70: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x20df70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20df74: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20df74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20df78: 0x2463a5f0  addiu       $v1, $v1, -0x5A10
    ctx->pc = 0x20df78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944240));
    // 0x20df7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20df80: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x20df80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x20df84: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x20df84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x20df88: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DF88u;
    {
        const bool branch_taken_0x20df88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF88u;
        // 0x20df8c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df88) {
            ctx->pc = 0x20DFACu;
            goto label_20dfac;
        }
    }
    ctx->pc = 0x20DF90u;
    // 0x20df90: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x20df90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20df94: 0x26642c18  addiu       $a0, $s3, 0x2C18
    ctx->pc = 0x20df94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11288));
    // 0x20df98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20df98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20df9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20dfa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20dfa4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20DFA4u;
    {
        const bool branch_taken_0x20dfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFA4u;
        // 0x20dfa8: 0x8c701054  lw          $s0, 0x1054($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfa4) {
            ctx->pc = 0x20DFF8u;
            goto label_20dff8;
        }
    }
    ctx->pc = 0x20DFACu;
label_20dfac:
    // 0x20dfac: 0x2442a7d8  addiu       $v0, $v0, -0x5828
    ctx->pc = 0x20dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944728));
    // 0x20dfb0: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20DFB0u;
    {
        const bool branch_taken_0x20dfb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFB0u;
        // 0x20dfb4: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfb0) {
            ctx->pc = 0x20DFE4u;
            goto label_20dfe4;
        }
    }
    ctx->pc = 0x20DFB8u;
    // 0x20dfb8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20dfbc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x20dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20dfc0: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x20dfc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20dfc4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DFC4u;
    {
        const bool branch_taken_0x20dfc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFC4u;
        // 0x20dfc8: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfc4) {
            ctx->pc = 0x20DFE4u;
            goto label_20dfe4;
        }
    }
    ctx->pc = 0x20DFCCu;
    // 0x20dfcc: 0x26642c18  addiu       $a0, $s3, 0x2C18
    ctx->pc = 0x20dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11288));
    // 0x20dfd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20dfd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20dfd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20dfdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20DFDCu;
    {
        const bool branch_taken_0x20dfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFDCu;
        // 0x20dfe0: 0x8c701058  lw          $s0, 0x1058($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfdc) {
            ctx->pc = 0x20DFF8u;
            goto label_20dff8;
        }
    }
    ctx->pc = 0x20DFE4u;
label_20dfe4:
    // 0x20dfe4: 0x26642c18  addiu       $a0, $s3, 0x2C18
    ctx->pc = 0x20dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11288));
    // 0x20dfe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20dfec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20dff0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20dff4: 0x8c70105c  lw          $s0, 0x105C($v1)
    ctx->pc = 0x20dff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4188)));
label_20dff8:
    // 0x20dff8: 0xc08089c  jal         func_202270
    ctx->pc = 0x20DFF8u;
    SET_GPR_U32(ctx, 31, 0x20E000u);
    ctx->pc = 0x20DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFF8u;
    // 0x20dffc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x20DFF8u, 0x20E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E000u;
label_20e000:
    // 0x20e000: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x20E000u;
    SET_GPR_U32(ctx, 31, 0x20E008u);
    ctx->pc = 0x20E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E000u;
    // 0x20e004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x20E000u, 0x20E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E008u;
label_20e008:
    // 0x20e008: 0x268399f0  addiu       $v1, $s4, -0x6610
    ctx->pc = 0x20e008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941168));
    // 0x20e00c: 0x8e8999f0  lw          $t1, -0x6610($s4)
    ctx->pc = 0x20e00cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941168)));
    // 0x20e010: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x20e010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20e014: 0x3c075050  lui         $a3, 0x5050
    ctx->pc = 0x20e014u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20560 << 16));
    // 0x20e018: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20e018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e01c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20e01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e020: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x20e020u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20e024: 0x34e75080  ori         $a3, $a3, 0x5080
    ctx->pc = 0x20e024u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20608);
    // 0x20e028: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x20e028u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x20e02c: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x20e02cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x20e030: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20e030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20e034: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x20e034u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x20e038: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20E038u;
    SET_GPR_U32(ctx, 31, 0x20E040u);
    ctx->pc = 0x20E03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E038u;
    // 0x20e03c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20E038u, 0x20E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E040u;
label_20e040:
    // 0x20e040: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x20E040u;
    {
        const bool branch_taken_0x20e040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e040) {
            ctx->pc = 0x20E154u;
            goto label_20e154;
        }
    }
    ctx->pc = 0x20E048u;
label_20e048:
    // 0x20e048: 0x8f82b45c  lw          $v0, -0x4BA4($gp)
    ctx->pc = 0x20e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x20e04c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x20e04cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x20e050: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x20e050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x20e054: 0x93849ab5  lbu         $a0, -0x654B($gp)
    ctx->pc = 0x20e054u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x20e058: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x20e058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20e05c: 0x36730040  ori         $s3, $s3, 0x40
    ctx->pc = 0x20e05cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)64);
    // 0x20e060: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x20e060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x20e064: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x20e064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x20e068: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E068u;
    {
        const bool branch_taken_0x20e068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E068u;
        // 0x20e06c: 0x62980b  movn        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e068) {
            ctx->pc = 0x20E080u;
            goto label_20e080;
        }
    }
    ctx->pc = 0x20E070u;
    // 0x20e070: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x20e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x20e074: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20e074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x20e078: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20E078u;
    {
        const bool branch_taken_0x20e078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E078u;
        // 0x20e07c: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e078) {
            ctx->pc = 0x20E088u;
            goto label_20e088;
        }
    }
    ctx->pc = 0x20E080u;
label_20e080:
    // 0x20e080: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x20e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x20e084: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20e084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_20e088:
    // 0x20e088: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x20e088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x20e08c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x20e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x20e090: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20e090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20e094: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x20e094u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x20e098: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x20e098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20e09c: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x20e09cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20e0a0: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x20e0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20e0a4: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x20e0a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20e0a8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20e0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20e0ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20e0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e0b0:
    // 0x20e0b0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20e0b4: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x20e0b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20e0b8: 0x103200a  movz        $a0, $t0, $v1
    ctx->pc = 0x20e0b8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
    // 0x20e0bc: 0x851007  srav        $v0, $a1, $a0
    ctx->pc = 0x20e0bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x20e0c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20e0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20e0c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20E0C4u;
    {
        const bool branch_taken_0x20e0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e0c4) {
            ctx->pc = 0x20E0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e0b0;
        }
    }
    ctx->pc = 0x20E0CCu;
    // 0x20e0cc: 0x10860021  beq         $a0, $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x20E0CCu;
    {
        const bool branch_taken_0x20e0cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x20E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0CCu;
        // 0x20e0d0: 0x269199f0  addiu       $s1, $s4, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0cc) {
            ctx->pc = 0x20E154u;
            goto label_20e154;
        }
    }
    ctx->pc = 0x20E0D4u;
    // 0x20e0d4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x20e0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e0d8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20e0dc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20E0DCu;
    {
        const bool branch_taken_0x20e0dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e0dc) {
            ctx->pc = 0x20E0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E0DCu;
            // 0x20e0e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E0E4u;
            goto label_20e0e4;
        }
    }
    ctx->pc = 0x20E0E4u;
label_20e0e4:
    // 0x20e0e4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x20e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20e0e8: 0x4492a000  mtc1        $s2, $f20
    ctx->pc = 0x20e0e8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20e0ec: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x20e0ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x20e0f0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x20e0f0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20e0f4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x20e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20e0f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20e0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e0fc: 0x1012  mflo        $v0
    ctx->pc = 0x20e0fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20e100: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x20e100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20e104: 0x2462ffe4  addiu       $v0, $v1, -0x1C
    ctx->pc = 0x20e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x20e108: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20e10c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x20e10cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x20e110: 0xc08b952  jal         func_22E548
    ctx->pc = 0x20E110u;
    SET_GPR_U32(ctx, 31, 0x20E118u);
    ctx->pc = 0x20E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E110u;
    // 0x20e114: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x20E110u, 0x20E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E118u;
label_20e118:
    // 0x20e118: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x20e118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20e11c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e120: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20E120u;
    {
        const bool branch_taken_0x20e120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e120) {
            ctx->pc = 0x20E124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E120u;
            // 0x20e124: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E128u;
            goto label_20e128;
        }
    }
    ctx->pc = 0x20E128u;
label_20e128:
    // 0x20e128: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x20e128u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x20e12c: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x20e12cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20e130: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x20e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20e134: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20e134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e138: 0x1812  mflo        $v1
    ctx->pc = 0x20e138u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x20e13c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e140: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x20e140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x20e144: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20e148: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x20e148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x20e14c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x20E14Cu;
    SET_GPR_U32(ctx, 31, 0x20E154u);
    ctx->pc = 0x20E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E14Cu;
    // 0x20e150: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x20E14Cu, 0x20E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E154u;
label_20e154:
    // 0x20e154: 0xc08089c  jal         func_202270
    ctx->pc = 0x20E154u;
    SET_GPR_U32(ctx, 31, 0x20E15Cu);
    ctx->pc = 0x20E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E154u;
    // 0x20e158: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x20E154u, 0x20E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E15Cu;
label_20e15c:
    // 0x20e15c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20e15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e160: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x20e160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20e164: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x20e164u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e168: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x20e168u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e16c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20e16cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e170: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20e170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e174: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20e174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e178: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20e178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e180: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x20e180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20e184: 0x808b79a  j           func_22DE68
    ctx->pc = 0x20E184u;
    ctx->pc = 0x20E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E184u;
    // 0x20e188: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE68u;
    menuitemHighlight_0x22de68(rdram, ctx, runtime); return;
    ctx->pc = 0x20E18Cu;
}
