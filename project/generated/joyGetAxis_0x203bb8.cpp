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

// Function: joyGetAxis
// Address: 0x203bb8 - 0x203cc0
void joyGetAxis_0x203bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyGetAxis_0x203bb8");
#endif

    switch (ctx->pc) {
        case 0x203be4u: goto label_203be4;
        case 0x203bf8u: goto label_203bf8;
        case 0x203c6cu: goto label_203c6c;
        case 0x203c80u: goto label_203c80;
        case 0x203ca0u: goto label_203ca0;
        default: break;
    }

    ctx->pc = 0x203bb8u;

    // 0x203bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x203bbc: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x203bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x203bc0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x203bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x203bc4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x203bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x203bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203bcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x203bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203bd4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x203BD4u;
    {
        const bool branch_taken_0x203bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BD4u;
        // 0x203bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bd4) {
            ctx->pc = 0x203C00u;
            goto label_203c00;
        }
    }
    ctx->pc = 0x203BDCu;
    // 0x203bdc: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203BDCu;
    SET_GPR_U32(ctx, 31, 0x203BE4u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203BDCu, 0x203BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BE4u;
label_203be4:
    // 0x203be4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x203be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x203be8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203BE8u;
    {
        const bool branch_taken_0x203be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BE8u;
        // 0x203bec: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203be8) {
            ctx->pc = 0x203C04u;
            goto label_203c04;
        }
    }
    ctx->pc = 0x203BF0u;
    // 0x203bf0: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203BF0u;
    SET_GPR_U32(ctx, 31, 0x203BF8u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203BF0u, 0x203BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BF8u;
label_203bf8:
    // 0x203bf8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x203bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x203bfc: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x203bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_203c00:
    // 0x203c00: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_203c04:
    // 0x203c04: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x203c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x203c08: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x203c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x203c0c: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x203c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x203c10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x203c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x203c14: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x203c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x203c18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x203c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203c1c: 0x2484c740  addiu       $a0, $a0, -0x38C0
    ctx->pc = 0x203c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
    // 0x203c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203c24: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x203c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x203c28: 0x12230017  beq         $s1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x203C28u;
    {
        const bool branch_taken_0x203c28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x203C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C28u;
        // 0x203c2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c28) {
            ctx->pc = 0x203C88u;
            goto label_203c88;
        }
    }
    ctx->pc = 0x203C30u;
    // 0x203c30: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x203c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x203c34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x203C34u;
    {
        const bool branch_taken_0x203c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203c34) {
            ctx->pc = 0x203C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203C34u;
            // 0x203c38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203C4Cu;
            goto label_203c4c;
        }
    }
    ctx->pc = 0x203C3Cu;
    // 0x203c3c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x203C3Cu;
    {
        const bool branch_taken_0x203c3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x203c3c) {
            ctx->pc = 0x203C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203C3Cu;
            // 0x203c40: 0xc48c013c  lwc1        $f12, 0x13C($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x203C64u;
            goto label_203c64;
        }
    }
    ctx->pc = 0x203C44u;
    // 0x203c44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x203C44u;
    {
        const bool branch_taken_0x203c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203c44) {
            ctx->pc = 0x203CA8u;
            goto label_203ca8;
        }
    }
    ctx->pc = 0x203C4Cu;
label_203c4c:
    // 0x203c4c: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203C4Cu;
    {
        const bool branch_taken_0x203c4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x203C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C4Cu;
        // 0x203c50: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c4c) {
            ctx->pc = 0x203C74u;
            goto label_203c74;
        }
    }
    ctx->pc = 0x203C54u;
    // 0x203c54: 0x5222000f  beql        $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x203C54u;
    {
        const bool branch_taken_0x203c54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x203c54) {
            ctx->pc = 0x203C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203C54u;
            // 0x203c58: 0xc48c013c  lwc1        $f12, 0x13C($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x203C94u;
            goto label_203c94;
        }
    }
    ctx->pc = 0x203C5Cu;
    // 0x203c5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x203C5Cu;
    {
        const bool branch_taken_0x203c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203c5c) {
            ctx->pc = 0x203CA8u;
            goto label_203ca8;
        }
    }
    ctx->pc = 0x203C64u;
label_203c64:
    // 0x203c64: 0xc080c22  jal         func_203088
    ctx->pc = 0x203C64u;
    SET_GPR_U32(ctx, 31, 0x203C6Cu);
    ctx->pc = 0x203C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C64u;
    // 0x203c68: 0x8c84012c  lw          $a0, 0x12C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203088u, 0x203C64u, 0x203C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C6Cu;
label_203c6c:
    // 0x203c6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x203C6Cu;
    {
        const bool branch_taken_0x203c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C6Cu;
        // 0x203c70: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c6c) {
            ctx->pc = 0x203CB0u;
            goto label_203cb0;
        }
    }
    ctx->pc = 0x203C74u;
label_203c74:
    // 0x203c74: 0xc48c013c  lwc1        $f12, 0x13C($a0)
    ctx->pc = 0x203c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x203c78: 0xc080c22  jal         func_203088
    ctx->pc = 0x203C78u;
    SET_GPR_U32(ctx, 31, 0x203C80u);
    ctx->pc = 0x203C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C78u;
    // 0x203c7c: 0x8c840130  lw          $a0, 0x130($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203088u, 0x203C78u, 0x203C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C80u;
label_203c80:
    // 0x203c80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x203C80u;
    {
        const bool branch_taken_0x203c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C80u;
        // 0x203c84: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c80) {
            ctx->pc = 0x203CB0u;
            goto label_203cb0;
        }
    }
    ctx->pc = 0x203C88u;
label_203c88:
    // 0x203c88: 0xc48c013c  lwc1        $f12, 0x13C($a0)
    ctx->pc = 0x203c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x203c8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x203C8Cu;
    {
        const bool branch_taken_0x203c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C8Cu;
        // 0x203c90: 0x8c840134  lw          $a0, 0x134($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c8c) {
            ctx->pc = 0x203C98u;
            goto label_203c98;
        }
    }
    ctx->pc = 0x203C94u;
label_203c94:
    // 0x203c94: 0x8c840138  lw          $a0, 0x138($a0)
    ctx->pc = 0x203c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
label_203c98:
    // 0x203c98: 0xc080c22  jal         func_203088
    ctx->pc = 0x203C98u;
    SET_GPR_U32(ctx, 31, 0x203CA0u);
    ctx->pc = 0x203088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203088u, 0x203C98u, 0x203CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CA0u;
label_203ca0:
    // 0x203ca0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x203CA0u;
    {
        const bool branch_taken_0x203ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CA0u;
        // 0x203ca4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ca0) {
            ctx->pc = 0x203CACu;
            goto label_203cac;
        }
    }
    ctx->pc = 0x203CA8u;
label_203ca8:
    // 0x203ca8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_203cac:
    // 0x203cac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_203cb0:
    // 0x203cb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x203cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x203CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CB8u;
        // 0x203cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203CC0u;
}
