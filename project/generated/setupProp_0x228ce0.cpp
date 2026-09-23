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

// Function: setupProp
// Address: 0x228ce0 - 0x228d84
void setupProp_0x228ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setupProp_0x228ce0");
#endif

    switch (ctx->pc) {
        case 0x228cf8u: goto label_228cf8;
        case 0x228d70u: goto label_228d70;
        default: break;
    }

    ctx->pc = 0x228ce0u;

    // 0x228ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x228ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x228ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228ce8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x228ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x228cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228cf0: 0xc099c80  jal         func_267200
    ctx->pc = 0x228CF0u;
    SET_GPR_U32(ctx, 31, 0x228CF8u);
    ctx->pc = 0x228CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228CF0u;
    // 0x228cf4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267200u, 0x228CF0u, 0x228CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228CF8u;
label_228cf8:
    // 0x228cf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x228cf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228cfc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x228cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x228d00: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228D00u;
    {
        const bool branch_taken_0x228d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D00u;
        // 0x228d04: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d00) {
            ctx->pc = 0x228D18u;
            goto label_228d18;
        }
    }
    ctx->pc = 0x228D08u;
    // 0x228d08: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x228D08u;
    {
        const bool branch_taken_0x228d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D08u;
        // 0x228d0c: 0xc60f0014  lwc1        $f15, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d08) {
            ctx->pc = 0x228D40u;
            goto label_228d40;
        }
    }
    ctx->pc = 0x228D10u;
    // 0x228d10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x228D10u;
    {
        const bool branch_taken_0x228d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D10u;
        // 0x228d14: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d10) {
            ctx->pc = 0x228D60u;
            goto label_228d60;
        }
    }
    ctx->pc = 0x228D18u;
label_228d18:
    // 0x228d18: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x228d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x228d1c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x228d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x228d20: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x228d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x228d24: 0xc60d000c  lwc1        $f13, 0xC($s0)
    ctx->pc = 0x228d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x228d28: 0xc60e0010  lwc1        $f14, 0x10($s0)
    ctx->pc = 0x228d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x228d2c: 0xc60f0014  lwc1        $f15, 0x14($s0)
    ctx->pc = 0x228d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x228d30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228d38: 0x809defe  j           func_277BF8
    ctx->pc = 0x228D38u;
    ctx->pc = 0x228D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D38u;
    // 0x228d3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277BF8u;
    specialPropNew_0x277bf8(rdram, ctx, runtime); return;
    ctx->pc = 0x228D40u;
label_228d40:
    // 0x228d40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x228d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x228d44: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x228d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x228d48: 0xc60d000c  lwc1        $f13, 0xC($s0)
    ctx->pc = 0x228d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x228d4c: 0xc60e0010  lwc1        $f14, 0x10($s0)
    ctx->pc = 0x228d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x228d50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228d58: 0x809e2a8  j           func_278AA0
    ctx->pc = 0x228D58u;
    ctx->pc = 0x228D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D58u;
    // 0x228d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278AA0u;
    waterPropNew_0x278aa0(rdram, ctx, runtime); return;
    ctx->pc = 0x228D60u;
label_228d60:
    // 0x228d60: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x228d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x228d64: 0xc60d000c  lwc1        $f13, 0xC($s0)
    ctx->pc = 0x228d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x228d68: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x228D68u;
    SET_GPR_U32(ctx, 31, 0x228D70u);
    ctx->pc = 0x228D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D68u;
    // 0x228d6c: 0xc60e0010  lwc1        $f14, 0x10($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x228D68u, 0x228D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D70u;
label_228d70:
    // 0x228d70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x228d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228d7c: 0x80b1f96  j           func_2C7E58
    ctx->pc = 0x228D7Cu;
    ctx->pc = 0x228D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D7Cu;
    // 0x228d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7E58u;
    enemyAddToPropList_0x2c7e58(rdram, ctx, runtime); return;
    ctx->pc = 0x228D84u;
}
