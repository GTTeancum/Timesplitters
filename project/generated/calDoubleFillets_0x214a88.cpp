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

// Function: calDoubleFillets
// Address: 0x214a88 - 0x214b54
void calDoubleFillets_0x214a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calDoubleFillets_0x214a88");
#endif

    switch (ctx->pc) {
        case 0x214aa8u: goto label_214aa8;
        case 0x214b10u: goto label_214b10;
        case 0x214b30u: goto label_214b30;
        default: break;
    }

    ctx->pc = 0x214a88u;

label_214a88:
    // 0x214a88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214a8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x214a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x214a90: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x214a90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x214a94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x214a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x214a9c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x214a9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x214aa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214aa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x214aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_214aa8:
    // 0x214aa8: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x214aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x214aac: 0xa82018  mult        $a0, $a1, $t0
    ctx->pc = 0x214aacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x214ab0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x214ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214ab4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x214ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214ab8: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x214ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x214abc: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x214abcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214ac0: 0xc48021  addu        $s0, $a2, $a0
    ctx->pc = 0x214ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x214ac4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x214ac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214ac8: 0x54450012  bnel        $v0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x214AC8u;
    {
        const bool branch_taken_0x214ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x214ac8) {
            ctx->pc = 0x214ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214AC8u;
            // 0x214acc: 0x82050003  lb          $a1, 0x3($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214B14u;
            goto label_214b14;
        }
    }
    ctx->pc = 0x214AD0u;
    // 0x214ad0: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x214ad0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x214ad4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x214ad4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x214ad8: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x214ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x214adc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ae0: 0x482018  mult        $a0, $v0, $t0
    ctx->pc = 0x214ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x214ae4: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x214ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214ae8: 0x82080001  lb          $t0, 0x1($s0)
    ctx->pc = 0x214ae8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x214aec: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x214aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x214af0: 0x80450001  lb          $a1, 0x1($v0)
    ctx->pc = 0x214af0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x214af4: 0x83180  sll         $a2, $t0, 6
    ctx->pc = 0x214af4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x214af8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x214af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214afc: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x214afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x214b00: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x214b00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x214b04: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x214b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x214b08: 0xc0ad702  jal         func_2B5C08
    ctx->pc = 0x214B08u;
    SET_GPR_U32(ctx, 31, 0x214B10u);
    ctx->pc = 0x214B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B08u;
    // 0x214b0c: 0x1252821  addu        $a1, $t1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5C08u, 0x214B08u, 0x214B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B10u;
label_214b10:
    // 0x214b10: 0x82050003  lb          $a1, 0x3($s0)
    ctx->pc = 0x214b10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_214b14:
    // 0x214b14: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x214B14u;
    {
        const bool branch_taken_0x214b14 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x214B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B14u;
        // 0x214b18: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b14) {
            ctx->pc = 0x214B30u;
            goto label_214b30;
        }
    }
    ctx->pc = 0x214B1Cu;
    // 0x214b1c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x214b1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214b20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214B20u;
    {
        const bool branch_taken_0x214b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x214B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B20u;
        // 0x214b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b20) {
            ctx->pc = 0x214B30u;
            goto label_214b30;
        }
    }
    ctx->pc = 0x214B28u;
    // 0x214b28: 0xc0852a2  jal         func_214A88
    ctx->pc = 0x214B28u;
    SET_GPR_U32(ctx, 31, 0x214B30u);
    ctx->pc = 0x214B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B28u;
    // 0x214b2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214A88u;
    goto label_214a88;
    ctx->pc = 0x214B30u;
label_214b30:
    // 0x214b30: 0x82050004  lb          $a1, 0x4($s0)
    ctx->pc = 0x214b30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214b34: 0x4a3ffdc  bgezl       $a1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x214B34u;
    {
        const bool branch_taken_0x214b34 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x214b34) {
            ctx->pc = 0x214B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214B34u;
            // 0x214b38: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214aa8;
        }
    }
    ctx->pc = 0x214B3Cu;
    // 0x214b3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x214b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214b40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214b40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214b44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214b48: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x214b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x214b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x214B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B4Cu;
        // 0x214b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214B54u;
}
