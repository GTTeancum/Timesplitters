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

// Function: drawCharName
// Address: 0x236f40 - 0x237030
void drawCharName_0x236f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawCharName_0x236f40");
#endif

    switch (ctx->pc) {
        case 0x236f6cu: goto label_236f6c;
        case 0x236f94u: goto label_236f94;
        case 0x236fc8u: goto label_236fc8;
        default: break;
    }

    ctx->pc = 0x236f40u;

    // 0x236f40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x236f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x236f44: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x236f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x236f48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x236f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x236f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236f50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x236f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f54: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x236f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x236f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x236f5c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x236f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x236f60: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x236f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x236f64: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x236F64u;
    SET_GPR_U32(ctx, 31, 0x236F6Cu);
    ctx->pc = 0x236F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F64u;
    // 0x236f68: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x236F64u, 0x236F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F6Cu;
label_236f6c:
    // 0x236f6c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x236F6Cu;
    {
        const bool branch_taken_0x236f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F6Cu;
        // 0x236f70: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f6c) {
            ctx->pc = 0x237010u;
            goto label_237010;
        }
    }
    ctx->pc = 0x236F74u;
    // 0x236f74: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x236f74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x236f78: 0x268399f0  addiu       $v1, $s4, -0x6610
    ctx->pc = 0x236f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941168));
    // 0x236f7c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x236f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x236f80: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x236F80u;
    {
        const bool branch_taken_0x236f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F80u;
        // 0x236f84: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f80) {
            ctx->pc = 0x236FB8u;
            goto label_236fb8;
        }
    }
    ctx->pc = 0x236F88u;
    // 0x236f88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x236f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f8c: 0xc08db98  jal         func_236E60
    ctx->pc = 0x236F8Cu;
    SET_GPR_U32(ctx, 31, 0x236F94u);
    ctx->pc = 0x236F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F8Cu;
    // 0x236f90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236E60u, 0x236F8Cu, 0x236F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F94u;
label_236f94:
    // 0x236f94: 0x3c107f7f  lui         $s0, 0x7F7F
    ctx->pc = 0x236f94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32639 << 16));
    // 0x236f98: 0x8f83b45c  lw          $v1, -0x4BA4($gp)
    ctx->pc = 0x236f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x236f9c: 0x3c024078  lui         $v0, 0x4078
    ctx->pc = 0x236f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16504 << 16));
    // 0x236fa0: 0x36107f80  ori         $s0, $s0, 0x7F80
    ctx->pc = 0x236fa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32640);
    // 0x236fa4: 0x34427880  ori         $v0, $v0, 0x7880
    ctx->pc = 0x236fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30848);
    // 0x236fa8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x236fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x236fac: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x236facu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x236fb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236FB0u;
    {
        const bool branch_taken_0x236fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FB0u;
        // 0x236fb4: 0x24135080  addiu       $s3, $zero, 0x5080 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fb0) {
            ctx->pc = 0x236FC0u;
            goto label_236fc0;
        }
    }
    ctx->pc = 0x236FB8u;
label_236fb8:
    // 0x236fb8: 0x8f90a01c  lw          $s0, -0x5FE4($gp)
    ctx->pc = 0x236fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x236fbc: 0x8f93a020  lw          $s3, -0x5FE0($gp)
    ctx->pc = 0x236fbcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
label_236fc0:
    // 0x236fc0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x236FC0u;
    SET_GPR_U32(ctx, 31, 0x236FC8u);
    ctx->pc = 0x236FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FC0u;
    // 0x236fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x236FC0u, 0x236FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FC8u;
label_236fc8:
    // 0x236fc8: 0x268399f0  addiu       $v1, $s4, -0x6610
    ctx->pc = 0x236fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941168));
    // 0x236fcc: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x236fccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x236fd0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x236fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x236fd4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x236fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x236fd8: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x236fd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x236fdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x236fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fe0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x236fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x236fe4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x236fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fe8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x236fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fec: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x236fecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ff0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x236ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236ff4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x236ff4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236ff8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x236ff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236ffc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237000: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x237000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237008: 0x80808ec  j           func_2023B0
    ctx->pc = 0x237008u;
    ctx->pc = 0x23700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237008u;
    // 0x23700c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    textOutline_0x2023b0(rdram, ctx, runtime); return;
    ctx->pc = 0x237010u;
label_237010:
    // 0x237010: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x237010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237014: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x237014u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237018: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x237018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23701c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23701cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237020: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x237020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237028: 0x3e00008  jr          $ra
    ctx->pc = 0x237028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237028u;
        // 0x23702c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237030u;
}
