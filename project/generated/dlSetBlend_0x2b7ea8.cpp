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

// Function: dlSetBlend
// Address: 0x2b7ea8 - 0x2b804c
void dlSetBlend_0x2b7ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlSetBlend_0x2b7ea8");
#endif

    switch (ctx->pc) {
        case 0x2b7f1cu: goto label_2b7f1c;
        default: break;
    }

    ctx->pc = 0x2b7ea8u;

    // 0x2b7ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b7ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b7eac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b7eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b7eb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7eb4: 0x8f91b4a8  lw          $s1, -0x4B58($gp)
    ctx->pc = 0x2b7eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948008)));
    // 0x2b7eb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ebc: 0x1211005d  beq         $s0, $s1, . + 4 + (0x5D << 2)
    ctx->pc = 0x2B7EBCu;
    {
        const bool branch_taken_0x2b7ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B7EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EBCu;
        // 0x2b7ec0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ebc) {
            ctx->pc = 0x2B8034u;
            goto label_2b8034;
        }
    }
    ctx->pc = 0x2B7EC4u;
    // 0x2b7ec4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b7ec8: 0x1202005a  beq         $s0, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2B7EC8u;
    {
        const bool branch_taken_0x2b7ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EC8u;
        // 0x2b7ecc: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ec8) {
            ctx->pc = 0x2B8034u;
            goto label_2b8034;
        }
    }
    ctx->pc = 0x2B7ED0u;
    // 0x2b7ed0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B7ED0u;
    {
        const bool branch_taken_0x2b7ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7ED0u;
        // 0x2b7ed4: 0xaf90b4a8  sw          $s0, -0x4B58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948008), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ed0) {
            ctx->pc = 0x2B7F14u;
            goto label_2b7f14;
        }
    }
    ctx->pc = 0x2B7ED8u;
    // 0x2b7ed8: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b7ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7edc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2b7edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b7ee0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x2b7ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b7ee4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2b7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2b7ee8: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x2b7ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7eec: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2b7eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b7ef0: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2b7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2b7ef4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2b7ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b7ef8: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7efc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b7efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b7f00: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x2b7f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b7f04: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2b7f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2b7f08: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x2b7f08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b7f0c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2B7F0Cu;
    {
        const bool branch_taken_0x2b7f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F0Cu;
        // 0x2b7f10: 0xaf8593a0  sw          $a1, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f0c) {
            ctx->pc = 0x2B8034u;
            goto label_2b8034;
        }
    }
    ctx->pc = 0x2B7F14u;
label_2b7f14:
    // 0x2b7f14: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B7F14u;
    SET_GPR_U32(ctx, 31, 0x2B7F1Cu);
    ctx->pc = 0x2B7F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7F14u;
    // 0x2b7f18: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B7F14u, 0x2B7F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7F1Cu;
label_2b7f1c:
    // 0x2b7f1c: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b7f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7f20: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b7f24: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b7f24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7f28: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x2b7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x2b7f2c: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2b7f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b7f30: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b7f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b7f34: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2b7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2b7f38: 0x34058003  ori         $a1, $zero, 0x8003
    ctx->pc = 0x2b7f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x2b7f3c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2b7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7f40: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2b7f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2b7f44: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2b7f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b7f48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b7f4c: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x2b7f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x2b7f50: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2b7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b7f54: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b7f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b7f58: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2b7f58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b7f5c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x2b7f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x2b7f60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7f64: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b7f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b7f68: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2b7f68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2b7f6c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x2b7f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x2b7f70: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b7f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b7f74: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2b7f74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x2b7f78: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b7f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b7f7c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2b7f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2b7f80: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7F80u;
    {
        const bool branch_taken_0x2b7f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F80u;
        // 0x2b7f84: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f80) {
            ctx->pc = 0x2B7F9Cu;
            goto label_2b7f9c;
        }
    }
    ctx->pc = 0x2B7F88u;
    // 0x2b7f88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b7f8c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7F8Cu;
    {
        const bool branch_taken_0x2b7f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F8Cu;
        // 0x2b7f90: 0x8f82b9b4  lw          $v0, -0x464C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f8c) {
            ctx->pc = 0x2B7FA4u;
            goto label_2b7fa4;
        }
    }
    ctx->pc = 0x2B7F94u;
    // 0x2b7f94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7F94u;
    {
        const bool branch_taken_0x2b7f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F94u;
        // 0x2b7f98: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f94) {
            ctx->pc = 0x2B7FB8u;
            goto label_2b7fb8;
        }
    }
    ctx->pc = 0x2B7F9Cu;
label_2b7f9c:
    // 0x2b7f9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7F9Cu;
    {
        const bool branch_taken_0x2b7f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F9Cu;
        // 0x2b7fa0: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f9c) {
            ctx->pc = 0x2B7FA8u;
            goto label_2b7fa8;
        }
    }
    ctx->pc = 0x2B7FA4u;
label_2b7fa4:
    // 0x2b7fa4: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2b7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2b7fa8:
    // 0x2b7fa8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2b7fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2b7fac: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b7facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b7fb0: 0x8f82b9b4  lw          $v0, -0x464C($gp)
    ctx->pc = 0x2b7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x2b7fb4: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x2b7fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_2b7fb8:
    // 0x2b7fb8: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x2b7fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x2b7fbc: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x2b7fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2b7fc0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2b7fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2b7fc4: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x2b7fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
    // 0x2b7fc8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b7fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b7fcc: 0x346307fc  ori         $v1, $v1, 0x7FC
    ctx->pc = 0x2b7fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2044);
    // 0x2b7fd0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x2b7fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x2b7fd4: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x2b7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x2b7fd8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b7fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b7fdc: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2b7fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2b7fe0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b7fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b7fe4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2b7fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2b7fe8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b7fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b7fec: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2b7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2b7ff0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b7ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b7ff4: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x2b7ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x2b7ff8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b7ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b7ffc: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2b7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2b8000: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b8000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b8004: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2b8004u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2b8008: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b8008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b800c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2b800cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2b8010: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b8010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b8014: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x2b8014u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x2b8018: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b8018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b801c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2b801cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2b8020: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b8020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b8024: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2b8024u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2b8028: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b8028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b802c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2b802cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2b8030: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2b8030u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_2b8034:
    // 0x2b8034: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b8034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8038: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b8038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b803c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b803cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8044: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8044u;
        // 0x2b8048: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B804Cu;
}
