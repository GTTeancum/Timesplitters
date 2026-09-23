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

// Function: ingamemenuExit
// Address: 0x212ae8 - 0x212b98
void ingamemenuExit_0x212ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ingamemenuExit_0x212ae8");
#endif

    switch (ctx->pc) {
        case 0x212b00u: goto label_212b00;
        case 0x212b40u: goto label_212b40;
        case 0x212b70u: goto label_212b70;
        case 0x212b80u: goto label_212b80;
        default: break;
    }

    ctx->pc = 0x212ae8u;

    // 0x212ae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x212af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x212af8: 0xc084a24  jal         func_212890
    ctx->pc = 0x212AF8u;
    SET_GPR_U32(ctx, 31, 0x212B00u);
    ctx->pc = 0x212AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AF8u;
    // 0x212afc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212890u, 0x212AF8u, 0x212B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B00u;
label_212b00:
    // 0x212b00: 0x8f82b688  lw          $v0, -0x4978($gp)
    ctx->pc = 0x212b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948488)));
    // 0x212b04: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x212B04u;
    {
        const bool branch_taken_0x212b04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x212B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B04u;
        // 0x212b08: 0x3c1101fb  lui         $s1, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)507 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b04) {
            ctx->pc = 0x212B34u;
            goto label_212b34;
        }
    }
    ctx->pc = 0x212B0Cu;
    // 0x212b0c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x212b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x212b10: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x212b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212b14: 0x26243240  addiu       $a0, $s1, 0x3240
    ctx->pc = 0x212b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12864));
    // 0x212b18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x212b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212b1c: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x212b1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x212b20: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x212b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x212b24: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x212B24u;
    {
        const bool branch_taken_0x212b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B24u;
        // 0x212b28: 0x240400de  addiu       $a0, $zero, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b24) {
            ctx->pc = 0x212B78u;
            goto label_212b78;
        }
    }
    ctx->pc = 0x212B2Cu;
    // 0x212b2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x212B2Cu;
    {
        const bool branch_taken_0x212b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212b2c) {
            ctx->pc = 0x212B38u;
            goto label_212b38;
        }
    }
    ctx->pc = 0x212B34u;
label_212b34:
    // 0x212b34: 0x240400de  addiu       $a0, $zero, 0xDE
    ctx->pc = 0x212b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
label_212b38:
    // 0x212b38: 0xc081546  jal         func_205518
    ctx->pc = 0x212B38u;
    SET_GPR_U32(ctx, 31, 0x212B40u);
    ctx->pc = 0x212B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B38u;
    // 0x212b3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x212B38u, 0x212B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B40u;
label_212b40:
    // 0x212b40: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x212b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x212b44: 0x26243240  addiu       $a0, $s1, 0x3240
    ctx->pc = 0x212b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12864));
    // 0x212b48: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x212b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212b4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x212b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212b50: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x212b50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x212b54: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x212b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x212b58: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x212b58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x212b5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x212b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x212b60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x212B60u;
    {
        const bool branch_taken_0x212b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B60u;
        // 0x212b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b60) {
            ctx->pc = 0x212B84u;
            goto label_212b84;
        }
    }
    ctx->pc = 0x212B68u;
    // 0x212b68: 0xc08494e  jal         func_212538
    ctx->pc = 0x212B68u;
    SET_GPR_U32(ctx, 31, 0x212B70u);
    ctx->pc = 0x212B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B68u;
    // 0x212b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212538u, 0x212B68u, 0x212B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B70u;
label_212b70:
    // 0x212b70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x212B70u;
    {
        const bool branch_taken_0x212b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B70u;
        // 0x212b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b70) {
            ctx->pc = 0x212B84u;
            goto label_212b84;
        }
    }
    ctx->pc = 0x212B78u;
label_212b78:
    // 0x212b78: 0xc084aa4  jal         func_212A90
    ctx->pc = 0x212B78u;
    SET_GPR_U32(ctx, 31, 0x212B80u);
    ctx->pc = 0x212B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B78u;
    // 0x212b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212A90u, 0x212B78u, 0x212B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B80u;
label_212b80:
    // 0x212b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_212b84:
    // 0x212b84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x212b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212b88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x212b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b90: 0x8080ea2  j           func_203A88
    ctx->pc = 0x212B90u;
    ctx->pc = 0x212B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B90u;
    // 0x212b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    joyClearAll_0x203a88(rdram, ctx, runtime); return;
    ctx->pc = 0x212B98u;
}
