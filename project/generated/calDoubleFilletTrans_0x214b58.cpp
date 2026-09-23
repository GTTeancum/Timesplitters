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

// Function: calDoubleFilletTrans
// Address: 0x214b58 - 0x214c4c
void calDoubleFilletTrans_0x214b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calDoubleFilletTrans_0x214b58");
#endif

    switch (ctx->pc) {
        case 0x214b70u: goto label_214b70;
        case 0x214c2cu: goto label_214c2c;
        default: break;
    }

    ctx->pc = 0x214b58u;

label_214b58:
    // 0x214b58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214b5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x214b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x214b60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x214b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x214b64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214b6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x214b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_214b70:
    // 0x214b70: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x214b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x214b74: 0xa62018  mult        $a0, $a1, $a2
    ctx->pc = 0x214b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x214b78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x214b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214b7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x214b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214b80: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x214b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x214b84: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x214b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214b88: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x214b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x214b8c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x214b8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214b90: 0x1445001f  bne         $v0, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x214B90u;
    {
        const bool branch_taken_0x214b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x214B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B90u;
        // 0x214b94: 0x82050003  lb          $a1, 0x3($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b90) {
            ctx->pc = 0x214C10u;
            goto label_214c10;
        }
    }
    ctx->pc = 0x214B98u;
    // 0x214b98: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x214b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214b9c: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x214b9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x214ba0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x214ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214ba4: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x214ba4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x214ba8: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x214ba8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x214bac: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x214bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214bb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x214bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x214bb4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x214bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x214bb8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x214bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214bbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x214bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x214bc0: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x214bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x214bc4: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x214bc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x214bc8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x214bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214bcc: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x214bccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x214bd0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x214bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214bd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x214bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x214bd8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x214bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214bdc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x214bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x214be0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x214be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x214be4: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x214be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x214be8: 0x80a40001  lb          $a0, 0x1($a1)
    ctx->pc = 0x214be8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x214bec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x214becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214bf0: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x214bf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x214bf4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x214bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x214bf8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x214bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x214bfc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x214bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214c00: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x214c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x214c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214c08: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x214c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x214c0c: 0x82050003  lb          $a1, 0x3($s0)
    ctx->pc = 0x214c0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_214c10:
    // 0x214c10: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x214C10u;
    {
        const bool branch_taken_0x214c10 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x214C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C10u;
        // 0x214c14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c10) {
            ctx->pc = 0x214C2Cu;
            goto label_214c2c;
        }
    }
    ctx->pc = 0x214C18u;
    // 0x214c18: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x214c18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214c1c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214C1Cu;
    {
        const bool branch_taken_0x214c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x214c1c) {
            ctx->pc = 0x214C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214C1Cu;
            // 0x214c20: 0x82050004  lb          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214C30u;
            goto label_214c30;
        }
    }
    ctx->pc = 0x214C24u;
    // 0x214c24: 0xc0852d6  jal         func_214B58
    ctx->pc = 0x214C24u;
    SET_GPR_U32(ctx, 31, 0x214C2Cu);
    ctx->pc = 0x214C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C24u;
    // 0x214c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B58u;
    goto label_214b58;
    ctx->pc = 0x214C2Cu;
label_214c2c:
    // 0x214c2c: 0x82050004  lb          $a1, 0x4($s0)
    ctx->pc = 0x214c2cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_214c30:
    // 0x214c30: 0x4a3ffcf  bgezl       $a1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x214C30u;
    {
        const bool branch_taken_0x214c30 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x214c30) {
            ctx->pc = 0x214C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214C30u;
            // 0x214c34: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214b70;
        }
    }
    ctx->pc = 0x214C38u;
    // 0x214c38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x214c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214c3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214c3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214c44: 0x3e00008  jr          $ra
    ctx->pc = 0x214C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C44u;
        // 0x214c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214C4Cu;
}
