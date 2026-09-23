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

// Function: __ieee754_sqrtf
// Address: 0x2daf40 - 0x2db078
void ps2___ieee754_sqrtf_0x2daf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_sqrtf_0x2daf40");
#endif

    switch (ctx->pc) {
        case 0x2dafc0u: goto label_2dafc0;
        case 0x2db028u: goto label_2db028;
        default: break;
    }

    ctx->pc = 0x2daf40u;

    // 0x2daf40: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2daf40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2daf44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2daf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf48: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x2daf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x2daf4c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x2daf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2daf50: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAF50u;
    {
        const bool branch_taken_0x2daf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2daf50) {
            ctx->pc = 0x2DAF68u;
            goto label_2daf68;
        }
    }
    ctx->pc = 0x2DAF58u;
    // 0x2daf58: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x2daf58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2daf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF5Cu;
        // 0x2daf60: 0x460c0000  add.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAF64u;
    // 0x2daf64: 0x0  nop
    ctx->pc = 0x2daf64u;
    // NOP
label_2daf68:
    // 0x2daf68: 0x1ca0000e  bgtz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2DAF68u;
    {
        const bool branch_taken_0x2daf68 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2DAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF68u;
        // 0x2daf6c: 0x535c3  sra         $a2, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf68) {
            ctx->pc = 0x2DAFA4u;
            goto label_2dafa4;
        }
    }
    ctx->pc = 0x2DAF70u;
    // 0x2daf70: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2daf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2daf74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2daf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2daf78: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2daf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2daf7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAF7Cu;
    {
        const bool branch_taken_0x2daf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF7Cu;
        // 0x2daf80: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf7c) {
            ctx->pc = 0x2DAF9Cu;
            goto label_2daf9c;
        }
    }
    ctx->pc = 0x2DAF84u;
    // 0x2daf84: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAF84u;
    {
        const bool branch_taken_0x2daf84 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2daf84) {
            ctx->pc = 0x2DAFA4u;
            goto label_2dafa4;
        }
    }
    ctx->pc = 0x2DAF8Cu;
    // 0x2daf8c: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x2daf8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x2daf90: 0x0  nop
    ctx->pc = 0x2daf90u;
    // NOP
    // 0x2daf94: 0x0  nop
    ctx->pc = 0x2daf94u;
    // NOP
    // 0x2daf98: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x2daf98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
label_2daf9c:
    // 0x2daf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAFA4u;
label_2dafa4:
    // 0x2dafa4: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DAFA4u;
    {
        const bool branch_taken_0x2dafa4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFA4u;
        // 0x2dafa8: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dafa4) {
            ctx->pc = 0x2DAFF0u;
            goto label_2daff0;
        }
    }
    ctx->pc = 0x2DAFACu;
    // 0x2dafac: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2dafacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2dafb0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2dafb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2dafb4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DAFB4u;
    {
        const bool branch_taken_0x2dafb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFB4u;
        // 0x2dafb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dafb4) {
            ctx->pc = 0x2DAFE4u;
            goto label_2dafe4;
        }
    }
    ctx->pc = 0x2DAFBCu;
    // 0x2dafbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dafbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dafc0:
    // 0x2dafc0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2dafc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2dafc4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2dafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2dafc8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2dafc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2dafcc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2dafccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dafd0: 0x0  nop
    ctx->pc = 0x2dafd0u;
    // NOP
    // 0x2dafd4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DAFD4u;
    {
        const bool branch_taken_0x2dafd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dafd4) {
            ctx->pc = 0x2DAFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dafc0;
        }
    }
    ctx->pc = 0x2DAFDCu;
    // 0x2dafdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DAFDCu;
    {
        const bool branch_taken_0x2dafdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFDCu;
        // 0x2dafe0: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dafdc) {
            ctx->pc = 0x2DAFECu;
            goto label_2dafec;
        }
    }
    ctx->pc = 0x2DAFE4u;
label_2dafe4:
    // 0x2dafe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dafe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dafe8: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x2dafe8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2dafec:
    // 0x2dafec: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x2dafecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_2daff0:
    // 0x2daff0: 0x24c6ff81  addiu       $a2, $a2, -0x7F
    ctx->pc = 0x2daff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x2daff4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2daff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2daff8: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x2daff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2daffc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2daffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2db000: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2db000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2db004: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2db004u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2db008: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2db008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2db00c: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x2db00cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x2db010: 0x645c0  sll         $t0, $a2, 23
    ctx->pc = 0x2db010u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x2db014: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2db014u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2db018: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2db018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db01c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2db01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db020: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x2db020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x2db024: 0x0  nop
    ctx->pc = 0x2db024u;
    // NOP
label_2db028:
    // 0x2db028: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x2db028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2db02c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2db02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2db030: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB030u;
    {
        const bool branch_taken_0x2db030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db030) {
            ctx->pc = 0x2DB034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB030u;
            // 0x2db034: 0x63042  srl         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB048u;
            goto label_2db048;
        }
    }
    ctx->pc = 0x2DB038u;
    // 0x2db038: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2db038u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2db03c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x2db03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2db040: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2db040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2db044: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x2db044u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_2db048:
    // 0x2db048: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DB048u;
    {
        const bool branch_taken_0x2db048 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB048u;
        // 0x2db04c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db048) {
            ctx->pc = 0x2DB028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db028;
        }
    }
    ctx->pc = 0x2DB050u;
    // 0x2db050: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB050u;
    {
        const bool branch_taken_0x2db050 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB050u;
        // 0x2db054: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db050) {
            ctx->pc = 0x2DB05Cu;
            goto label_2db05c;
        }
    }
    ctx->pc = 0x2DB058u;
    // 0x2db058: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2db058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2db05c:
    // 0x2db05c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2db05cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2db060: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2db060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2db064: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2db064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2db068: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x2db068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2db06c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db070: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB078u;
}
