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

// Function: ingamemenuPause
// Address: 0x2129e0 - 0x212a90
void ingamemenuPause_0x2129e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ingamemenuPause_0x2129e0");
#endif

    switch (ctx->pc) {
        case 0x212a0cu: goto label_212a0c;
        case 0x212a20u: goto label_212a20;
        case 0x212a44u: goto label_212a44;
        case 0x212a70u: goto label_212a70;
        default: break;
    }

    ctx->pc = 0x2129e0u;

    // 0x2129e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2129e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2129e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2129e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2129e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2129ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2129ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2129f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2129f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2129f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2129f8: 0x240400de  addiu       $a0, $zero, 0xDE
    ctx->pc = 0x2129f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x2129fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2129fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x212a00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x212a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a04: 0xc081546  jal         func_205518
    ctx->pc = 0x212A04u;
    SET_GPR_U32(ctx, 31, 0x212A0Cu);
    ctx->pc = 0x212A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A04u;
    // 0x212a08: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x212A04u, 0x212A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A0Cu;
label_212a0c:
    // 0x212a0c: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x212a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x212a10: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x212A10u;
    {
        const bool branch_taken_0x212a10 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x212A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A10u;
        // 0x212a14: 0xaf92b688  sw          $s2, -0x4978($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948488), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a10) {
            ctx->pc = 0x212A68u;
            goto label_212a68;
        }
    }
    ctx->pc = 0x212A18u;
    // 0x212a18: 0x3c1301fb  lui         $s3, 0x1FB
    ctx->pc = 0x212a18u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)507 << 16));
    // 0x212a1c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x212a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_212a20:
    // 0x212a20: 0x26643240  addiu       $a0, $s3, 0x3240
    ctx->pc = 0x212a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12864));
    // 0x212a24: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x212a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212a28: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x212a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212a2c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x212a2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x212a30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x212a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x212a34: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x212A34u;
    {
        const bool branch_taken_0x212a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212a34) {
            ctx->pc = 0x212A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212A34u;
            // 0x212a38: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212A5Cu;
            goto label_212a5c;
        }
    }
    ctx->pc = 0x212A3Cu;
    // 0x212a3c: 0xc084a4c  jal         func_212930
    ctx->pc = 0x212A3Cu;
    SET_GPR_U32(ctx, 31, 0x212A44u);
    ctx->pc = 0x212A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A3Cu;
    // 0x212a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212930u, 0x212A3Cu, 0x212A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A44u;
label_212a44:
    // 0x212a44: 0x12320004  beq         $s1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x212A44u;
    {
        const bool branch_taken_0x212a44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x212A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A44u;
        // 0x212a48: 0x8f859f74  lw          $a1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a44) {
            ctx->pc = 0x212A58u;
            goto label_212a58;
        }
    }
    ctx->pc = 0x212A4Cu;
    // 0x212a4c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x212a4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x212a50: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x212a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x212a54: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x212a54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_212a58:
    // 0x212a58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x212a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_212a5c:
    // 0x212a5c: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x212a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x212a60: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x212A60u;
    {
        const bool branch_taken_0x212a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A60u;
        // 0x212a64: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a60) {
            ctx->pc = 0x212A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212a20;
        }
    }
    ctx->pc = 0x212A68u;
label_212a68:
    // 0x212a68: 0xc08b2c8  jal         func_22CB20
    ctx->pc = 0x212A68u;
    SET_GPR_U32(ctx, 31, 0x212A70u);
    ctx->pc = 0x212A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A68u;
    // 0x212a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB20u, 0x212A68u, 0x212A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A70u;
label_212a70:
    // 0x212a70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x212a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212a74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x212a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212a78: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x212a78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212a7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x212a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x212a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212a88: 0x80ada06  j           func_2B6818
    ctx->pc = 0x212A88u;
    ctx->pc = 0x212A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A88u;
    // 0x212a8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6818u;
    timePause_0x2b6818(rdram, ctx, runtime); return;
    ctx->pc = 0x212A90u;
}
