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

// Function: partPrecalcVifData
// Address: 0x25eec0 - 0x25f408
void partPrecalcVifData_0x25eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("partPrecalcVifData_0x25eec0");
#endif

    switch (ctx->pc) {
        case 0x25ef40u: goto label_25ef40;
        case 0x25ef8cu: goto label_25ef8c;
        case 0x25efa8u: goto label_25efa8;
        case 0x25f184u: goto label_25f184;
        case 0x25f1a8u: goto label_25f1a8;
        default: break;
    }

    ctx->pc = 0x25eec0u;

    // 0x25eec0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25eec4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x25eec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eec8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x25eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x25eecc: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x25eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25eed0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x25eed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x25eed4: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x25eed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25eed8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x25eed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x25eedc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x25eedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x25eee0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x25eee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x25eee4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x25eee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25eee8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x25eee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25eeec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25eeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25eef0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x25eef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25eef4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25eef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25eef8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x25eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25eefc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x25eefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25ef00: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x25ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x25ef04: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EF04u;
    {
        const bool branch_taken_0x25ef04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF04u;
        // 0x25ef08: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef04) {
            ctx->pc = 0x25EF14u;
            goto label_25ef14;
        }
    }
    ctx->pc = 0x25EF0Cu;
    // 0x25ef0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25EF0Cu;
    {
        const bool branch_taken_0x25ef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF0Cu;
        // 0x25ef10: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef0c) {
            ctx->pc = 0x25EF18u;
            goto label_25ef18;
        }
    }
    ctx->pc = 0x25EF14u;
label_25ef14:
    // 0x25ef14: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x25ef14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25ef18:
    // 0x25ef18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25ef18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef1c: 0x12000126  beqz        $s0, . + 4 + (0x126 << 2)
    ctx->pc = 0x25EF1Cu;
    {
        const bool branch_taken_0x25ef1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF1Cu;
        // 0x25ef20: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef1c) {
            ctx->pc = 0x25F3B8u;
            goto label_25f3b8;
        }
    }
    ctx->pc = 0x25EF24u;
    // 0x25ef24: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25ef28: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25EF28u;
    {
        const bool branch_taken_0x25ef28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF28u;
        // 0x25ef2c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef28) {
            ctx->pc = 0x25EF64u;
            goto label_25ef64;
        }
    }
    ctx->pc = 0x25EF30u;
    // 0x25ef30: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x25ef30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ef34: 0x6a080  sll         $s4, $a2, 2
    ctx->pc = 0x25ef34u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25ef38: 0x24f30014  addiu       $s3, $a3, 0x14
    ctx->pc = 0x25ef38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x25ef3c: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x25ef3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25ef40:
    // 0x25ef40: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x25ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x25ef44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25ef44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25ef48: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x25ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x25ef4c: 0x0  nop
    ctx->pc = 0x25ef4cu;
    // NOP
    // 0x25ef50: 0x0  nop
    ctx->pc = 0x25ef50u;
    // NOP
    // 0x25ef54: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25EF54u;
    {
        const bool branch_taken_0x25ef54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x25ef54) {
            ctx->pc = 0x25EF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ef40;
        }
    }
    ctx->pc = 0x25EF5Cu;
    // 0x25ef5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25EF5Cu;
    {
        const bool branch_taken_0x25ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef5c) {
            ctx->pc = 0x25EF74u;
            goto label_25ef74;
        }
    }
    ctx->pc = 0x25EF64u;
label_25ef64:
    // 0x25ef64: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x25ef64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ef68: 0x6a080  sll         $s4, $a2, 2
    ctx->pc = 0x25ef68u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25ef6c: 0x24f30014  addiu       $s3, $a3, 0x14
    ctx->pc = 0x25ef6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x25ef70: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x25ef70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25ef74:
    // 0x25ef74: 0x1480007d  bnez        $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x25EF74u;
    {
        const bool branch_taken_0x25ef74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF74u;
        // 0x25ef78: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef74) {
            ctx->pc = 0x25F16Cu;
            goto label_25f16c;
        }
    }
    ctx->pc = 0x25EF7Cu;
    // 0x25ef7c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x25ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25ef80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ef84: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25EF84u;
    SET_GPR_U32(ctx, 31, 0x25EF8Cu);
    ctx->pc = 0x25EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF84u;
    // 0x25ef88: 0x2242018  mult        $a0, $s1, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25EF84u, 0x25EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF8Cu;
label_25ef8c:
    // 0x25ef8c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25ef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25ef90: 0x1a20010c  blez        $s1, . + 4 + (0x10C << 2)
    ctx->pc = 0x25EF90u;
    {
        const bool branch_taken_0x25ef90 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x25EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF90u;
        // 0x25ef94: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef90) {
            ctx->pc = 0x25F3C4u;
            goto label_25f3c4;
        }
    }
    ctx->pc = 0x25EF98u;
    // 0x25ef98: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x25ef98u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
    // 0x25ef9c: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x25ef9cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x25efa0: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x25efa0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x25efa4: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x25efa4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
label_25efa8:
    // 0x25efa8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25efac: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x25efacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25efb0: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x25efb0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
    // 0x25efb4: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x25efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x25efb8: 0x600013  mtlo        $v1
    ctx->pc = 0x25efb8u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x25efbc: 0x358c0404  ori         $t4, $t4, 0x404
    ctx->pc = 0x25efbcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1028);
    // 0x25efc0: 0x71e25800  madd        $t3, $t7, $v0
    ctx->pc = 0x25efc0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x25efc4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x25efc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x25efc8: 0x27c20520  addiu       $v0, $fp, 0x520
    ctx->pc = 0x25efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1312));
    // 0x25efcc: 0x26e70538  addiu       $a3, $s7, 0x538
    ctx->pc = 0x25efccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 1336));
    // 0x25efd0: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x25efd0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x25efd4: 0x3c0e6800  lui         $t6, 0x6800
    ctx->pc = 0x25efd4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)26624 << 16));
    // 0x25efd8: 0x35adfffc  ori         $t5, $t5, 0xFFFC
    ctx->pc = 0x25efd8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65532);
    // 0x25efdc: 0x35ce8000  ori         $t6, $t6, 0x8000
    ctx->pc = 0x25efdcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)32768);
    // 0x25efe0: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x25efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x25efe4: 0x26c80550  addiu       $t0, $s6, 0x550
    ctx->pc = 0x25efe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 1360));
    // 0x25efe8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25efe8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25efec: 0x26a90568  addiu       $t1, $s5, 0x568
    ctx->pc = 0x25efecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 1384));
    // 0x25eff0: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x25eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x25eff4: 0x3c066e00  lui         $a2, 0x6E00
    ctx->pc = 0x25eff4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28160 << 16));
    // 0x25eff8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25eff8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25effc: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x25effcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x25f000: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x25f000u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x25f004: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x25f004u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25f008: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f008u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f00c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f010: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x25f010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25f014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f018: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f01c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x25f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x25f020: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f024: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x25f024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x25f028: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x25f028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x25f02c: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x25f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x25f030: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f030u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f034: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x25f034u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x25f038: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f038u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f03c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x25f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x25f040: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f040u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f044: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x25f044u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x25f048: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f048u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f04c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f050: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x25f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f054: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f058: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x25f058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x25f05c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25f060: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f064: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x25f064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x25f068: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25f068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25f06c: 0x8e2025  or          $a0, $a0, $t6
    ctx->pc = 0x25f06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 14));
    // 0x25f070: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x25f070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x25f074: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x25f074u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x25f078: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f078u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f07c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x25f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x25f080: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f080u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f084: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x25f084u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x25f088: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f088u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f08c: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x25f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x25f090: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f090u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f094: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f098: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x25f098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f09c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f0a0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x25f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x25f0a4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x25f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x25f0a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f0ac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x25f0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x25f0b0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x25f0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x25f0b4: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x25f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x25f0b8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f0b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f0bc: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x25f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x25f0c0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f0c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f0c4: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x25f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x25f0c8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f0c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f0cc: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x25f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x25f0d0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f0d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f0d4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f0d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x25f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f0dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f0e0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x25f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x25f0e4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25f0e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f0ec: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x25f0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x25f0f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25f0f4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x25f0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x25f0f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x25f0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x25f0fc: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x25f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x25f100: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f104: 0x144a0013  bne         $v0, $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x25F104u;
    {
        const bool branch_taken_0x25f104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x25F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F104u;
        // 0x25f108: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f104) {
            ctx->pc = 0x25F154u;
            goto label_25f154;
        }
    }
    ctx->pc = 0x25F10Cu;
    // 0x25f10c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x25f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x25f110: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x25f110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x25f114: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f114u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f118: 0x24840580  addiu       $a0, $a0, 0x580
    ctx->pc = 0x25f118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1408));
    // 0x25f11c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x25f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x25f120: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25f120u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x25f124: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x25f124u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x25f128: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f12c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x25f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25f134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f138: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25f138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25f13c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f140: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x25f140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x25f144: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25f144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25f148: 0x8e2025  or          $a0, $a0, $t6
    ctx->pc = 0x25f148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 14));
    // 0x25f14c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x25f14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x25f150: 0xad620004  sw          $v0, 0x4($t3)
    ctx->pc = 0x25f150u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 2));
label_25f154:
    // 0x25f154: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x25f154u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x25f158: 0x1f1102a  slt         $v0, $t7, $s1
    ctx->pc = 0x25f158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x25f15c: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x25F15Cu;
    {
        const bool branch_taken_0x25f15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F15Cu;
        // 0x25f160: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f15c) {
            ctx->pc = 0x25EFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25efa8;
        }
    }
    ctx->pc = 0x25F164u;
    // 0x25f164: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x25F164u;
    {
        const bool branch_taken_0x25f164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F164u;
        // 0x25f168: 0x2741821  addu        $v1, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f164) {
            ctx->pc = 0x25F3C8u;
            goto label_25f3c8;
        }
    }
    ctx->pc = 0x25F16Cu;
label_25f16c:
    // 0x25f16c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x25f16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x25f170: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x25F170u;
    {
        const bool branch_taken_0x25f170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F170u;
        // 0x25f174: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f170) {
            ctx->pc = 0x25F3C4u;
            goto label_25f3c4;
        }
    }
    ctx->pc = 0x25F178u;
    // 0x25f178: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25f178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f17c: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25F17Cu;
    SET_GPR_U32(ctx, 31, 0x25F184u);
    ctx->pc = 0x25F180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F17Cu;
    // 0x25f180: 0x2242018  mult        $a0, $s1, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25F17Cu, 0x25F184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F184u;
label_25f184:
    // 0x25f184: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25f184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25f188: 0x1a20008e  blez        $s1, . + 4 + (0x8E << 2)
    ctx->pc = 0x25F188u;
    {
        const bool branch_taken_0x25f188 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x25F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F188u;
        // 0x25f18c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f188) {
            ctx->pc = 0x25F3C4u;
            goto label_25f3c4;
        }
    }
    ctx->pc = 0x25F190u;
    // 0x25f190: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x25f190u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
    // 0x25f194: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x25f194u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x25f198: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x25f198u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x25f19c: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x25f19cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x25f1a0: 0x3c190038  lui         $t9, 0x38
    ctx->pc = 0x25f1a0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)56 << 16));
    // 0x25f1a4: 0x0  nop
    ctx->pc = 0x25f1a4u;
    // NOP
label_25f1a8:
    // 0x25f1a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f1ac: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x25f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x25f1b0: 0x3c0d0100  lui         $t5, 0x100
    ctx->pc = 0x25f1b0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)256 << 16));
    // 0x25f1b4: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x25f1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x25f1b8: 0x600013  mtlo        $v1
    ctx->pc = 0x25f1b8u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x25f1bc: 0x35ad0404  ori         $t5, $t5, 0x404
    ctx->pc = 0x25f1bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1028);
    // 0x25f1c0: 0x71e26000  madd        $t4, $t7, $v0
    ctx->pc = 0x25f1c0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x25f1c4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x25f1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x25f1c8: 0x27c20520  addiu       $v0, $fp, 0x520
    ctx->pc = 0x25f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1312));
    // 0x25f1cc: 0x26e70538  addiu       $a3, $s7, 0x538
    ctx->pc = 0x25f1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 1336));
    // 0x25f1d0: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x25f1d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
    // 0x25f1d4: 0x3c186800  lui         $t8, 0x6800
    ctx->pc = 0x25f1d4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)26624 << 16));
    // 0x25f1d8: 0x35cefffc  ori         $t6, $t6, 0xFFFC
    ctx->pc = 0x25f1d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65532);
    // 0x25f1dc: 0x37188000  ori         $t8, $t8, 0x8000
    ctx->pc = 0x25f1dcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)32768);
    // 0x25f1e0: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x25f1e4: 0x27280598  addiu       $t0, $t9, 0x598
    ctx->pc = 0x25f1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), 1432));
    // 0x25f1e8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f1e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f1ec: 0x3c066e00  lui         $a2, 0x6E00
    ctx->pc = 0x25f1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28160 << 16));
    // 0x25f1f0: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x25f1f4: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x25f1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x25f1f8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f1f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f1fc: 0x26c90550  addiu       $t1, $s6, 0x550
    ctx->pc = 0x25f1fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 1360));
    // 0x25f200: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x25f200u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x25f204: 0x26aa0568  addiu       $t2, $s5, 0x568
    ctx->pc = 0x25f204u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 1384));
    // 0x25f208: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f208u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f20c: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x25f20cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25f210: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f214: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x25f214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25f218: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f21c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f220: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x25f220u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x25f224: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f228: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x25f228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x25f22c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x25f22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x25f230: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x25f230u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x25f234: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f234u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f238: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25f238u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x25f23c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f23cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f240: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25f240u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x25f244: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f244u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f248: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x25f248u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x25f24c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f24cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f250: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f254: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x25f254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f258: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f25c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x25f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x25f260: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25f260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25f264: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f268: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x25f268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x25f26c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25f270: 0x982025  or          $a0, $a0, $t8
    ctx->pc = 0x25f270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 24));
    // 0x25f274: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x25f274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x25f278: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x25f278u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x25f27c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f27cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f280: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25f280u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x25f284: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f284u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f288: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25f288u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x25f28c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f28cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f290: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x25f290u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x25f294: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f294u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f298: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f29c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x25f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f2a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f2a4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x25f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x25f2a8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25f2ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f2b0: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x25f2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x25f2b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25f2b8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x25f2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x25f2bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x25f2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x25f2c0: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x25f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x25f2c4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f2c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f2c8: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x25f2cc: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f2ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f2d0: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x25f2d4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f2d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f2d8: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x25f2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x25f2dc: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f2dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f2e0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f2e4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x25f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f2e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f2ec: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x25f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x25f2f0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x25f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x25f2f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f2f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x25f2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x25f2fc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x25f2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x25f300: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x25f300u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x25f304: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f304u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f308: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25f308u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x25f30c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f30cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f310: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25f310u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x25f314: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f314u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f318: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x25f318u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x25f31c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f31cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f320: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f324: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x25f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f32c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x25f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x25f330: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25f330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25f334: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f338: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x25f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x25f33c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25f340: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x25f340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x25f344: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x25f344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x25f348: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x25f348u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x25f34c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f350: 0x146b0013  bne         $v1, $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x25F350u;
    {
        const bool branch_taken_0x25f350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x25F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F350u;
        // 0x25f354: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f350) {
            ctx->pc = 0x25F3A0u;
            goto label_25f3a0;
        }
    }
    ctx->pc = 0x25F358u;
    // 0x25f358: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25f358u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x25f35c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x25f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x25f360: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f360u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f364: 0x24840580  addiu       $a0, $a0, 0x580
    ctx->pc = 0x25f364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1408));
    // 0x25f368: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25f368u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x25f36c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25f36cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x25f370: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x25f370u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x25f374: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f378: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x25f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f37c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25f380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f384: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25f388: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f38c: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x25f38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x25f390: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25f390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25f394: 0x982025  or          $a0, $a0, $t8
    ctx->pc = 0x25f394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 24));
    // 0x25f398: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x25f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x25f39c: 0xad820004  sw          $v0, 0x4($t4)
    ctx->pc = 0x25f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 2));
label_25f3a0:
    // 0x25f3a0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x25f3a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x25f3a4: 0x1f1102a  slt         $v0, $t7, $s1
    ctx->pc = 0x25f3a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x25f3a8: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x25F3A8u;
    {
        const bool branch_taken_0x25f3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3A8u;
        // 0x25f3ac: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3a8) {
            ctx->pc = 0x25F1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f1a8;
        }
    }
    ctx->pc = 0x25F3B0u;
    // 0x25f3b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25F3B0u;
    {
        const bool branch_taken_0x25f3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3B0u;
        // 0x25f3b4: 0x2741821  addu        $v1, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3b0) {
            ctx->pc = 0x25F3C8u;
            goto label_25f3c8;
        }
    }
    ctx->pc = 0x25F3B8u;
label_25f3b8:
    // 0x25f3b8: 0x6a080  sll         $s4, $a2, 2
    ctx->pc = 0x25f3b8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25f3bc: 0x24f30014  addiu       $s3, $a3, 0x14
    ctx->pc = 0x25f3bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x25f3c0: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x25f3c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25f3c4:
    // 0x25f3c4: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x25f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_25f3c8:
    // 0x25f3c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x25f3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25f3cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f3d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f3d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25f3d8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x25f3d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25f3dc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x25f3dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25f3e0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x25f3e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f3e4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x25f3e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f3e8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x25f3e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f3ec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x25f3ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f3f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25f3f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f3f4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x25f3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f3f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25f3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f3fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25f400: 0x3e00008  jr          $ra
    ctx->pc = 0x25F400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F400u;
        // 0x25f404: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F408u;
}
