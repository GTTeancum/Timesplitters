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

// Function: dlLoadTexture
// Address: 0x2b7b40 - 0x2b7c98
void dlLoadTexture_0x2b7b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlLoadTexture_0x2b7b40");
#endif

    switch (ctx->pc) {
        case 0x2b7b84u: goto label_2b7b84;
        default: break;
    }

    ctx->pc = 0x2b7b40u;

    // 0x2b7b40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b7b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b7b44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b7b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b7b48: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b7b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b7b4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b7b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b50: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b7b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b7b54: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2b7b54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b58: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b7b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b7b5c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2b7b5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b7b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b7b64: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2b7b64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7b6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b7b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b70: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b7b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b7b74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b7b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b7b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b7b7c: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B7B7Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B84u);
    ctx->pc = 0x2B7B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B7Cu;
    // 0x2b7b80: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B7B7Cu, 0x2B7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B84u;
label_2b7b84:
    // 0x2b7b84: 0x2932818  mult        $a1, $s4, $s3
    ctx->pc = 0x2b7b84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b7b88: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b7b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7b8c: 0x24150030  addiu       $s5, $zero, 0x30
    ctx->pc = 0x2b7b8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b7b90: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x2b7b90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2b7b94: 0xa0750003  sb          $s5, 0x3($v1)
    ctx->pc = 0x2b7b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x2b7b98: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2b7b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b7b9c: 0x4233c  dsll32      $a0, $a0, 12
    ctx->pc = 0x2b7b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 12));
    // 0x2b7ba0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x2b7ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x2b7ba4: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x2b7ba4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2b7ba8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2b7ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2b7bac: 0x8f8993a0  lw          $t1, -0x6C60($gp)
    ctx->pc = 0x2b7bacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7bb0: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x2b7bb0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x2b7bb4: 0x2308825  or          $s1, $s1, $s0
    ctx->pc = 0x2b7bb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    // 0x2b7bb8: 0x34a88000  ori         $t0, $a1, 0x8000
    ctx->pc = 0x2b7bb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2b7bbc: 0x24a70006  addiu       $a3, $a1, 0x6
    ctx->pc = 0x2b7bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x2b7bc0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b7bc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b7bc4: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x2b7bc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x2b7bc8: 0x12963c  dsll32      $s2, $s2, 24
    ctx->pc = 0x2b7bc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 24));
    // 0x2b7bcc: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x2b7bccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2b7bd0: 0x3c060600  lui         $a2, 0x600
    ctx->pc = 0x2b7bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1536 << 16));
    // 0x2b7bd4: 0x25300010  addiu       $s0, $t1, 0x10
    ctx->pc = 0x2b7bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x2b7bd8: 0x2328825  or          $s1, $s1, $s2
    ctx->pc = 0x2b7bd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
    // 0x2b7bdc: 0x2939825  or          $s3, $s4, $s3
    ctx->pc = 0x2b7bdcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) | GPR_U64(ctx, 19));
    // 0x2b7be0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2b7be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b7be4: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x2b7be4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x2b7be8: 0x3c041300  lui         $a0, 0x1300
    ctx->pc = 0x2b7be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4864 << 16));
    // 0x2b7bec: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x2b7becu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x2b7bf0: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x2b7bf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2b7bf4: 0x354a0004  ori         $t2, $t2, 0x4
    ctx->pc = 0x2b7bf4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)4);
    // 0x2b7bf8: 0x240b000e  addiu       $t3, $zero, 0xE
    ctx->pc = 0x2b7bf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b7bfc: 0x240c0050  addiu       $t4, $zero, 0x50
    ctx->pc = 0x2b7bfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b7c00: 0x240d0051  addiu       $t5, $zero, 0x51
    ctx->pc = 0x2b7c00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2b7c04: 0x240e0052  addiu       $t6, $zero, 0x52
    ctx->pc = 0x2b7c04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2b7c08: 0x240f0053  addiu       $t7, $zero, 0x53
    ctx->pc = 0x2b7c08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2b7c0c: 0xaf9093a0  sw          $s0, -0x6C60($gp)
    ctx->pc = 0x2b7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 16));
    // 0x2b7c10: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x2b7c10u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b7c14: 0xfc510020  sd          $s1, 0x20($v0)
    ctx->pc = 0x2b7c14u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 17));
    // 0x2b7c18: 0xfc530040  sd          $s3, 0x40($v0)
    ctx->pc = 0x2b7c18u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 19));
    // 0x2b7c1c: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2b7c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2b7c20: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x2b7c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2b7c24: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2b7c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2b7c28: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x2b7c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x2b7c2c: 0xfc4a0010  sd          $t2, 0x10($v0)
    ctx->pc = 0x2b7c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 10));
    // 0x2b7c30: 0xfc4b0018  sd          $t3, 0x18($v0)
    ctx->pc = 0x2b7c30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 11));
    // 0x2b7c34: 0xfc4c0028  sd          $t4, 0x28($v0)
    ctx->pc = 0x2b7c34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 12));
    // 0x2b7c38: 0xfc4d0038  sd          $t5, 0x38($v0)
    ctx->pc = 0x2b7c38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 13));
    // 0x2b7c3c: 0xfc4e0048  sd          $t6, 0x48($v0)
    ctx->pc = 0x2b7c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 14));
    // 0x2b7c40: 0xfc4f0058  sd          $t7, 0x58($v0)
    ctx->pc = 0x2b7c40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 15));
    // 0x2b7c44: 0xfc480060  sd          $t0, 0x60($v0)
    ctx->pc = 0x2b7c44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 8));
    // 0x2b7c48: 0xfc400068  sd          $zero, 0x68($v0)
    ctx->pc = 0x2b7c48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 0));
    // 0x2b7c4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b7c50: 0xfc400030  sd          $zero, 0x30($v0)
    ctx->pc = 0x2b7c50u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 0));
    // 0x2b7c54: 0xfc400050  sd          $zero, 0x50($v0)
    ctx->pc = 0x2b7c54u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 0));
    // 0x2b7c58: 0xa2150003  sb          $s5, 0x3($s0)
    ctx->pc = 0x2b7c58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x2b7c5c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b7c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b7c60: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2b7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7c64: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b7c64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7c68: 0xac560004  sw          $s6, 0x4($v0)
    ctx->pc = 0x2b7c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
    // 0x2b7c6c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2b7c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b7c70: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b7c70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b7c74: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b7c74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7c78: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b7c78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7c7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b7c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7c80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b7c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7c88: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x2b7c88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b7c8c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b7c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2b7c90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C90u;
        // 0x2b7c94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7C98u;
}
