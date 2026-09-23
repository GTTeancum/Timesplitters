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

// Function: emReset
// Address: 0x2b6ad0 - 0x2b6b9c
void emReset_0x2b6ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emReset_0x2b6ad0");
#endif

    switch (ctx->pc) {
        case 0x2b6af0u: goto label_2b6af0;
        case 0x2b6b28u: goto label_2b6b28;
        case 0x2b6b3cu: goto label_2b6b3c;
        case 0x2b6b50u: goto label_2b6b50;
        case 0x2b6b64u: goto label_2b6b64;
        case 0x2b6b78u: goto label_2b6b78;
        case 0x2b6b90u: goto label_2b6b90;
        default: break;
    }

    ctx->pc = 0x2b6ad0u;

    // 0x2b6ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6ad4: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2b6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2b6ad8: 0x2442b3e0  addiu       $v0, $v0, -0x4C20
    ctx->pc = 0x2b6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947808));
    // 0x2b6adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6ae0: 0x8f859f70  lw          $a1, -0x6090($gp)
    ctx->pc = 0x2b6ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2b6ae4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b6ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b6ae8: 0x2442270e  addiu       $v0, $v0, 0x270E
    ctx->pc = 0x2b6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9998));
    // 0x2b6aec: 0x24031387  addiu       $v1, $zero, 0x1387
    ctx->pc = 0x2b6aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4999));
label_2b6af0:
    // 0x2b6af0: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2b6af0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b6af4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b6af8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2b6af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2b6afc: 0x0  nop
    ctx->pc = 0x2b6afcu;
    // NOP
    // 0x2b6b00: 0x0  nop
    ctx->pc = 0x2b6b00u;
    // NOP
    // 0x2b6b04: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B6B04u;
    {
        const bool branch_taken_0x2b6b04 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2b6b04) {
            ctx->pc = 0x2B6AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6af0;
        }
    }
    ctx->pc = 0x2B6B0Cu;
    // 0x2b6b0c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x2b6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2b6b10: 0x14a2001b  bne         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B6B10u;
    {
        const bool branch_taken_0x2b6b10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B10u;
        // 0x2b6b14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b10) {
            ctx->pc = 0x2B6B80u;
            goto label_2b6b80;
        }
    }
    ctx->pc = 0x2B6B18u;
    // 0x2b6b18: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x2b6b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2b6b1c: 0x24060120  addiu       $a2, $zero, 0x120
    ctx->pc = 0x2b6b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2b6b20: 0xc0ada88  jal         func_2B6A20
    ctx->pc = 0x2B6B20u;
    SET_GPR_U32(ctx, 31, 0x2B6B28u);
    ctx->pc = 0x2B6B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B20u;
    // 0x2b6b24: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6A20u, 0x2B6B20u, 0x2B6B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B28u;
label_2b6b28:
    // 0x2b6b28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b6b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6b2c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x2b6b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2b6b30: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2b6b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b6b34: 0xc0ada88  jal         func_2B6A20
    ctx->pc = 0x2B6B34u;
    SET_GPR_U32(ctx, 31, 0x2B6B3Cu);
    ctx->pc = 0x2B6B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B34u;
    // 0x2b6b38: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6A20u, 0x2B6B34u, 0x2B6B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B3Cu;
label_2b6b3c:
    // 0x2b6b3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b6b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6b40: 0x240501d0  addiu       $a1, $zero, 0x1D0
    ctx->pc = 0x2b6b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x2b6b44: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2b6b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b6b48: 0xc0ada88  jal         func_2B6A20
    ctx->pc = 0x2B6B48u;
    SET_GPR_U32(ctx, 31, 0x2B6B50u);
    ctx->pc = 0x2B6B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B48u;
    // 0x2b6b4c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6A20u, 0x2B6B48u, 0x2B6B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B50u;
label_2b6b50:
    // 0x2b6b50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b6b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b6b54: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x2b6b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x2b6b58: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2b6b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b6b5c: 0xc0ada88  jal         func_2B6A20
    ctx->pc = 0x2B6B5Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B64u);
    ctx->pc = 0x2B6B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B5Cu;
    // 0x2b6b60: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6A20u, 0x2B6B5Cu, 0x2B6B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B64u;
label_2b6b64:
    // 0x2b6b64: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b6b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b6b68: 0x240501f0  addiu       $a1, $zero, 0x1F0
    ctx->pc = 0x2b6b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x2b6b6c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2b6b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b6b70: 0xc0ada88  jal         func_2B6A20
    ctx->pc = 0x2B6B70u;
    SET_GPR_U32(ctx, 31, 0x2B6B78u);
    ctx->pc = 0x2B6B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B70u;
    // 0x2b6b74: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6A20u, 0x2B6B70u, 0x2B6B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B78u;
label_2b6b78:
    // 0x2b6b78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6B78u;
    {
        const bool branch_taken_0x2b6b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B78u;
        // 0x2b6b7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b78) {
            ctx->pc = 0x2B6B94u;
            goto label_2b6b94;
        }
    }
    ctx->pc = 0x2B6B80u;
label_2b6b80:
    // 0x2b6b80: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x2b6b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2b6b84: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x2b6b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x2b6b88: 0xc0ada88  jal         func_2B6A20
    ctx->pc = 0x2B6B88u;
    SET_GPR_U32(ctx, 31, 0x2B6B90u);
    ctx->pc = 0x2B6B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B88u;
    // 0x2b6b8c: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6A20u, 0x2B6B88u, 0x2B6B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B90u;
label_2b6b90:
    // 0x2b6b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6b94:
    // 0x2b6b94: 0x80adab2  j           func_2B6AC8
    ctx->pc = 0x2B6B94u;
    ctx->pc = 0x2B6B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B94u;
    // 0x2b6b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6AC8u;
    emRestart_0x2b6ac8(rdram, ctx, runtime); return;
    ctx->pc = 0x2B6B9Cu;
}
