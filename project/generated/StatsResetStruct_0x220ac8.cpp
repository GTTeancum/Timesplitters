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

// Function: StatsResetStruct
// Address: 0x220ac8 - 0x220b9c
void StatsResetStruct_0x220ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsResetStruct_0x220ac8");
#endif

    switch (ctx->pc) {
        case 0x220ad8u: goto label_220ad8;
        case 0x220b10u: goto label_220b10;
        case 0x220b20u: goto label_220b20;
        case 0x220b58u: goto label_220b58;
        case 0x220b68u: goto label_220b68;
        default: break;
    }

    ctx->pc = 0x220ac8u;

    // 0x220ac8: 0x24850114  addiu       $a1, $a0, 0x114
    ctx->pc = 0x220ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
    // 0x220acc: 0x248603a8  addiu       $a2, $a0, 0x3A8
    ctx->pc = 0x220accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 936));
    // 0x220ad0: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x220ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x220ad4: 0x24820110  addiu       $v0, $a0, 0x110
    ctx->pc = 0x220ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
label_220ad8:
    // 0x220ad8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x220ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x220adc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x220adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x220ae0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x220ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x220ae4: 0x0  nop
    ctx->pc = 0x220ae4u;
    // NOP
    // 0x220ae8: 0x0  nop
    ctx->pc = 0x220ae8u;
    // NOP
    // 0x220aec: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x220AECu;
    {
        const bool branch_taken_0x220aec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x220aec) {
            ctx->pc = 0x220AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220ad8;
        }
    }
    ctx->pc = 0x220AF4u;
    // 0x220af4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x220af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x220af8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x220af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220afc: 0xc440e5cc  lwc1        $f0, -0x1A34($v0)
    ctx->pc = 0x220afcu;
    { uint32_t bits = FAST_READ32(0x3AE5CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220b00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x220b00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b04: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x220b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x220b08: 0xe4800108  swc1        $f0, 0x108($a0)
    ctx->pc = 0x220b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x220b0c: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x220b0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_220b10:
    // 0x220b10: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x220b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x220b14: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x220b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x220b18: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x220b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x220b1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x220b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_220b20:
    // 0x220b20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x220b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x220b24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x220b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x220b28: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x220b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x220b2c: 0x0  nop
    ctx->pc = 0x220b2cu;
    // NOP
    // 0x220b30: 0x0  nop
    ctx->pc = 0x220b30u;
    // NOP
    // 0x220b34: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x220B34u;
    {
        const bool branch_taken_0x220b34 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x220b34) {
            ctx->pc = 0x220B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220b20;
        }
    }
    ctx->pc = 0x220B3Cu;
    // 0x220b3c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x220b3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b40: 0x28620021  slti        $v0, $v1, 0x21
    ctx->pc = 0x220b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x220b44: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x220B44u;
    {
        const bool branch_taken_0x220b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B44u;
        // 0x220b48: 0x652018  mult        $a0, $v1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b44) {
            ctx->pc = 0x220B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220b10;
        }
    }
    ctx->pc = 0x220B4Cu;
    // 0x220b4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x220b4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b50: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x220b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x220b54: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x220b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_220b58:
    // 0x220b58: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x220b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x220b5c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x220b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x220b60: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x220b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x220b64: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_220b68:
    // 0x220b68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x220b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x220b6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x220b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x220b70: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x220b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x220b74: 0x0  nop
    ctx->pc = 0x220b74u;
    // NOP
    // 0x220b78: 0x0  nop
    ctx->pc = 0x220b78u;
    // NOP
    // 0x220b7c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x220B7Cu;
    {
        const bool branch_taken_0x220b7c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x220b7c) {
            ctx->pc = 0x220B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220b68;
        }
    }
    ctx->pc = 0x220B84u;
    // 0x220b84: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x220b84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b88: 0x2862000e  slti        $v0, $v1, 0xE
    ctx->pc = 0x220b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x220b8c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x220B8Cu;
    {
        const bool branch_taken_0x220b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B8Cu;
        // 0x220b90: 0x652018  mult        $a0, $v1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b8c) {
            ctx->pc = 0x220B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220b58;
        }
    }
    ctx->pc = 0x220B94u;
    // 0x220b94: 0x3e00008  jr          $ra
    ctx->pc = 0x220B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220B9Cu;
}
