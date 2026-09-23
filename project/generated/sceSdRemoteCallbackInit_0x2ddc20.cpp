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

// Function: sceSdRemoteCallbackInit
// Address: 0x2ddc20 - 0x2ddcf4
void sceSdRemoteCallbackInit_0x2ddc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSdRemoteCallbackInit_0x2ddc20");
#endif

    switch (ctx->pc) {
        case 0x2ddc84u: goto label_2ddc84;
        case 0x2ddcbcu: goto label_2ddcbc;
        case 0x2ddcccu: goto label_2ddccc;
        case 0x2ddce0u: goto label_2ddce0;
        default: break;
    }

    ctx->pc = 0x2ddc20u;

    // 0x2ddc20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ddc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ddc24: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ddc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2ddc28: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2ddc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2ddc2c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2ddc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2ddc30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ddc30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc34: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x2ddc34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x2ddc38: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x2ddc38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x2ddc3c: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x2ddc3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x2ddc40: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x2ddc40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x2ddc44: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x2ddc44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x2ddc48: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x2ddc48u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x2ddc4c: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x2ddc4cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x2ddc50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ddc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ddc54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ddc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ddc58: 0xac402f58  sw          $zero, 0x2F58($v0)
    ctx->pc = 0x2ddc58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x382F58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382F58u, _value); } while (0);
    // 0x2ddc5c: 0x3405e620  ori         $a1, $zero, 0xE620
    ctx->pc = 0x2ddc5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58912);
    // 0x2ddc60: 0xac602f5c  sw          $zero, 0x2F5C($v1)
    ctx->pc = 0x2ddc60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x382F5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382F5Cu, _value); } while (0);
    // 0x2ddc64: 0xacc02f60  sw          $zero, 0x2F60($a2)
    ctx->pc = 0x2ddc64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x382F60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382F60u, _value); } while (0);
    // 0x2ddc68: 0xace02f64  sw          $zero, 0x2F64($a3)
    ctx->pc = 0x2ddc68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x382F64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382F64u, _value); } while (0);
    // 0x2ddc6c: 0xad002f68  sw          $zero, 0x2F68($t0)
    ctx->pc = 0x2ddc6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x382F68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382F68u, _value); } while (0);
    // 0x2ddc70: 0xad202f6c  sw          $zero, 0x2F6C($t1)
    ctx->pc = 0x2ddc70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x382F6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382F6Cu, _value); } while (0);
    // 0x2ddc74: 0xad402f70  sw          $zero, 0x2F70($t2)
    ctx->pc = 0x2ddc74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x382F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382F70u, _value); } while (0);
    // 0x2ddc78: 0xad602f74  sw          $zero, 0x2F74($t3)
    ctx->pc = 0x2ddc78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x382F74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382F74u, _value); } while (0);
    // 0x2ddc7c: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x2DDC7Cu;
    SET_GPR_U32(ctx, 31, 0x2DDC84u);
    ctx->pc = 0x2DDC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC7Cu;
    // 0x2ddc80: 0xad802f78  sw          $zero, 0x2F78($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 12152), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x2DDC7Cu, 0x2DDC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC84u;
label_2ddc84:
    // 0x2ddc84: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2ddc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2ddc88: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2ddc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2ddc8c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2ddc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2ddc90: 0x2463dcf8  addiu       $v1, $v1, -0x2308
    ctx->pc = 0x2ddc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958328));
    // 0x2ddc94: 0x24422c80  addiu       $v0, $v0, 0x2C80
    ctx->pc = 0x2ddc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11392));
    // 0x2ddc98: 0x24a547f0  addiu       $a1, $a1, 0x47F0
    ctx->pc = 0x2ddc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18416));
    // 0x2ddc9c: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x2ddc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2ddca0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2ddca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2ddca4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2ddca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2ddca8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ddca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcac: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x2ddcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x2ddcb0: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x2ddcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x2ddcb4: 0xc0b3fc8  jal         func_2CFF20
    ctx->pc = 0x2DDCB4u;
    SET_GPR_U32(ctx, 31, 0x2DDCBCu);
    ctx->pc = 0x2DDCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDCB4u;
    // 0x2ddcb8: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF20u, 0x2DDCB4u, 0x2DDCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCBCu;
label_2ddcbc:
    // 0x2ddcbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ddcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ddcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcc4: 0xc0b3fd0  jal         func_2CFF40
    ctx->pc = 0x2DDCC4u;
    SET_GPR_U32(ctx, 31, 0x2DDCCCu);
    ctx->pc = 0x2DDCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDCC4u;
    // 0x2ddcc8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF40u, 0x2DDCC4u, 0x2DDCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCCCu;
label_2ddccc:
    // 0x2ddccc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDCCCu;
    {
        const bool branch_taken_0x2ddccc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DDCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCCCu;
        // 0x2ddcd0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddccc) {
            ctx->pc = 0x2DDCE4u;
            goto label_2ddce4;
        }
    }
    ctx->pc = 0x2DDCD4u;
    // 0x2ddcd4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2ddcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2ddcd8: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2DDCD8u;
    SET_GPR_U32(ctx, 31, 0x2DDCE0u);
    ctx->pc = 0x2DDCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDCD8u;
    // 0x2ddcdc: 0x2484b240  addiu       $a0, $a0, -0x4DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2DDCD8u, 0x2DDCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCE0u;
label_2ddce0:
    // 0x2ddce0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ddce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ddce4:
    // 0x2ddce4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ddce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ddce8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2ddce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ddcec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCECu;
        // 0x2ddcf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDCF4u;
}
