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

// Function: joySetCentreZone
// Address: 0x203b30 - 0x203bb8
void joySetCentreZone_0x203b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joySetCentreZone_0x203b30");
#endif

    switch (ctx->pc) {
        case 0x203b5cu: goto label_203b5c;
        case 0x203b70u: goto label_203b70;
        default: break;
    }

    ctx->pc = 0x203b30u;

    // 0x203b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x203b34: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x203b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x203b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203b3c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x203b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x203b40: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x203b40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x203b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203b4c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x203B4Cu;
    {
        const bool branch_taken_0x203b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B4Cu;
        // 0x203b50: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b4c) {
            ctx->pc = 0x203B78u;
            goto label_203b78;
        }
    }
    ctx->pc = 0x203B54u;
    // 0x203b54: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203B54u;
    SET_GPR_U32(ctx, 31, 0x203B5Cu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203B54u, 0x203B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B5Cu;
label_203b5c:
    // 0x203b5c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x203b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x203b60: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203B60u;
    {
        const bool branch_taken_0x203b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B60u;
        // 0x203b64: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b60) {
            ctx->pc = 0x203B7Cu;
            goto label_203b7c;
        }
    }
    ctx->pc = 0x203B68u;
    // 0x203b68: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203B68u;
    SET_GPR_U32(ctx, 31, 0x203B70u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203B68u, 0x203B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B70u;
label_203b70:
    // 0x203b70: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x203b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x203b74: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x203b74u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_203b78:
    // 0x203b78: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_203b7c:
    // 0x203b7c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x203b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x203b80: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x203b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x203b84: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x203b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x203b88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x203b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x203b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203b90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x203b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203b94: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x203b98: 0x2442c740  addiu       $v0, $v0, -0x38C0
    ctx->pc = 0x203b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x203b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203ba0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x203ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x203ba4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x203ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x203ba8: 0xe454013c  swc1        $f20, 0x13C($v0)
    ctx->pc = 0x203ba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 316), bits); }
    // 0x203bac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x203bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x203bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x203BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BB0u;
        // 0x203bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203BB8u;
}
