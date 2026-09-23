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

// Function: _Cdvd_cbLoop
// Address: 0x2ddf38 - 0x2de00c
void ps2__Cdvd_cbLoop_0x2ddf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Cdvd_cbLoop_0x2ddf38");
#endif

    switch (ctx->pc) {
        case 0x2ddf38u: goto label_2ddf38;
        case 0x2ddf3cu: goto label_2ddf3c;
        case 0x2ddf40u: goto label_2ddf40;
        case 0x2ddf44u: goto label_2ddf44;
        case 0x2ddf48u: goto label_2ddf48;
        case 0x2ddf4cu: goto label_2ddf4c;
        case 0x2ddf50u: goto label_2ddf50;
        case 0x2ddf54u: goto label_2ddf54;
        case 0x2ddf58u: goto label_2ddf58;
        case 0x2ddf5cu: goto label_2ddf5c;
        case 0x2ddf60u: goto label_2ddf60;
        case 0x2ddf64u: goto label_2ddf64;
        case 0x2ddf68u: goto label_2ddf68;
        case 0x2ddf6cu: goto label_2ddf6c;
        case 0x2ddf70u: goto label_2ddf70;
        case 0x2ddf74u: goto label_2ddf74;
        case 0x2ddf78u: goto label_2ddf78;
        case 0x2ddf7cu: goto label_2ddf7c;
        case 0x2ddf80u: goto label_2ddf80;
        case 0x2ddf84u: goto label_2ddf84;
        case 0x2ddf88u: goto label_2ddf88;
        case 0x2ddf8cu: goto label_2ddf8c;
        case 0x2ddf90u: goto label_2ddf90;
        case 0x2ddf94u: goto label_2ddf94;
        case 0x2ddf98u: goto label_2ddf98;
        case 0x2ddf9cu: goto label_2ddf9c;
        case 0x2ddfa0u: goto label_2ddfa0;
        case 0x2ddfa4u: goto label_2ddfa4;
        case 0x2ddfa8u: goto label_2ddfa8;
        case 0x2ddfacu: goto label_2ddfac;
        case 0x2ddfb0u: goto label_2ddfb0;
        case 0x2ddfb4u: goto label_2ddfb4;
        case 0x2ddfb8u: goto label_2ddfb8;
        case 0x2ddfbcu: goto label_2ddfbc;
        case 0x2ddfc0u: goto label_2ddfc0;
        case 0x2ddfc4u: goto label_2ddfc4;
        case 0x2ddfc8u: goto label_2ddfc8;
        case 0x2ddfccu: goto label_2ddfcc;
        case 0x2ddfd0u: goto label_2ddfd0;
        case 0x2ddfd4u: goto label_2ddfd4;
        case 0x2ddfd8u: goto label_2ddfd8;
        case 0x2ddfdcu: goto label_2ddfdc;
        case 0x2ddfe0u: goto label_2ddfe0;
        case 0x2ddfe4u: goto label_2ddfe4;
        case 0x2ddfe8u: goto label_2ddfe8;
        case 0x2ddfecu: goto label_2ddfec;
        case 0x2ddff0u: goto label_2ddff0;
        case 0x2ddff4u: goto label_2ddff4;
        case 0x2ddff8u: goto label_2ddff8;
        case 0x2ddffcu: goto label_2ddffc;
        case 0x2de000u: goto label_2de000;
        case 0x2de004u: goto label_2de004;
        case 0x2de008u: goto label_2de008;
        default: break;
    }

    ctx->pc = 0x2ddf38u;

label_2ddf38:
    // 0x2ddf38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ddf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2ddf3c:
    // 0x2ddf3c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2ddf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2ddf40:
    // 0x2ddf40: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2ddf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2ddf44:
    // 0x2ddf44: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2ddf44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddf48:
    // 0x2ddf48: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2ddf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2ddf4c:
    // 0x2ddf4c: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x2ddf4cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
label_2ddf50:
    // 0x2ddf50: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ddf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2ddf54:
    // 0x2ddf54: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x2ddf54u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
label_2ddf58:
    // 0x2ddf58: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ddf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2ddf5c:
    // 0x2ddf5c: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x2ddf5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
label_2ddf60:
    // 0x2ddf60: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ddf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2ddf64:
    // 0x2ddf64: 0x2414000b  addiu       $s4, $zero, 0xB
    ctx->pc = 0x2ddf64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2ddf68:
    // 0x2ddf68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ddf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2ddf6c:
    // 0x2ddf6c: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x2ddf6cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
label_2ddf70:
    // 0x2ddf70: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ddf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2ddf74:
    // 0x2ddf74: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x2ddf74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
label_2ddf78:
    // 0x2ddf78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ddf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2ddf7c:
    // 0x2ddf7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ddf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ddf80:
    // 0x2ddf80: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ddf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2ddf84:
    // 0x2ddf84: 0x0  nop
    ctx->pc = 0x2ddf84u;
    // NOP
label_2ddf88:
    // 0x2ddf88: 0x8c442fa8  lw          $a0, 0x2FA8($v0)
    ctx->pc = 0x2ddf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12200)));
label_2ddf8c:
    // 0x2ddf8c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2ddf8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_2ddf90:
    // 0x2ddf90: 0xc0b4058  jal         func_2D0160
label_2ddf94:
    if (ctx->pc == 0x2DDF94u) {
        ctx->pc = 0x2DDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF90u;
        // 0x2ddf94: 0x3c110038  lui         $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDF98u;
        goto label_2ddf98;
    }
    ctx->pc = 0x2DDF90u;
    SET_GPR_U32(ctx, 31, 0x2DDF98u);
    ctx->pc = 0x2DDF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDF90u;
    // 0x2ddf94: 0x3c110038  lui         $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0160u, 0x2DDF90u, 0x2DDF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF98u;
label_2ddf98:
    // 0x2ddf98: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ddf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2ddf9c:
    // 0x2ddf9c: 0x8c432fe0  lw          $v1, 0x2FE0($v0)
    ctx->pc = 0x2ddf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12256)));
label_2ddfa0:
    // 0x2ddfa0: 0x147e0005  bne         $v1, $fp, . + 4 + (0x5 << 2)
label_2ddfa4:
    if (ctx->pc == 0x2DDFA4u) {
        ctx->pc = 0x2DDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFA0u;
        // 0x2ddfa4: 0x8ee22f90  lw          $v0, 0x2F90($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFA8u;
        goto label_2ddfa8;
    }
    ctx->pc = 0x2DDFA0u;
    {
        const bool branch_taken_0x2ddfa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        ctx->pc = 0x2DDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFA0u;
        // 0x2ddfa4: 0x8ee22f90  lw          $v0, 0x2F90($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfa0) {
            ctx->pc = 0x2DDFB8u;
            goto label_2ddfb8;
        }
    }
    ctx->pc = 0x2DDFA8u;
label_2ddfa8:
    // 0x2ddfa8: 0xae602fac  sw          $zero, 0x2FAC($s3)
    ctx->pc = 0x2ddfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12204), GPR_U32(ctx, 0));
label_2ddfac:
    // 0x2ddfac: 0xc0b3fd4  jal         func_2CFF50
label_2ddfb0:
    if (ctx->pc == 0x2DDFB0u) {
        ctx->pc = 0x2DDFB4u;
        goto label_2ddfb4;
    }
    ctx->pc = 0x2DDFACu;
    SET_GPR_U32(ctx, 31, 0x2DDFB4u);
    ctx->pc = 0x2CFF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF50u, 0x2DDFACu, 0x2DDFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDFB4u;
label_2ddfb4:
    // 0x2ddfb4: 0x8ee22f90  lw          $v0, 0x2F90($s7)
    ctx->pc = 0x2ddfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12176)));
label_2ddfb8:
    // 0x2ddfb8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2ddfbc:
    if (ctx->pc == 0x2DDFBCu) {
        ctx->pc = 0x2DDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFB8u;
        // 0x2ddfbc: 0x26c4b2a8  addiu       $a0, $s6, -0x4D58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFC0u;
        goto label_2ddfc0;
    }
    ctx->pc = 0x2DDFB8u;
    {
        const bool branch_taken_0x2ddfb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFB8u;
        // 0x2ddfbc: 0x26c4b2a8  addiu       $a0, $s6, -0x4D58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfb8) {
            ctx->pc = 0x2DDFCCu;
            goto label_2ddfcc;
        }
    }
    ctx->pc = 0x2DDFC0u;
label_2ddfc0:
    // 0x2ddfc0: 0x8ea52fdc  lw          $a1, 0x2FDC($s5)
    ctx->pc = 0x2ddfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12252)));
label_2ddfc4:
    // 0x2ddfc4: 0xc0b95c8  jal         func_2E5720
label_2ddfc8:
    if (ctx->pc == 0x2DDFC8u) {
        ctx->pc = 0x2DDFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFC4u;
        // 0x2ddfc8: 0x8e462fe4  lw          $a2, 0x2FE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFCCu;
        goto label_2ddfcc;
    }
    ctx->pc = 0x2DDFC4u;
    SET_GPR_U32(ctx, 31, 0x2DDFCCu);
    ctx->pc = 0x2DDFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDFC4u;
    // 0x2ddfc8: 0x8e462fe4  lw          $a2, 0x2FE4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2DDFC4u, 0x2DDFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDFCCu;
label_2ddfcc:
    // 0x2ddfcc: 0x8e032fdc  lw          $v1, 0x2FDC($s0)
    ctx->pc = 0x2ddfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12252)));
label_2ddfd0:
    // 0x2ddfd0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2ddfd4:
    if (ctx->pc == 0x2DDFD4u) {
        ctx->pc = 0x2DDFD8u;
        goto label_2ddfd8;
    }
    ctx->pc = 0x2DDFD0u;
    {
        const bool branch_taken_0x2ddfd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddfd0) {
            ctx->pc = 0x2DDFECu;
            goto label_2ddfec;
        }
    }
    ctx->pc = 0x2DDFD8u;
label_2ddfd8:
    // 0x2ddfd8: 0x8e422fe4  lw          $v0, 0x2FE4($s2)
    ctx->pc = 0x2ddfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12260)));
label_2ddfdc:
    // 0x2ddfdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ddfe0:
    if (ctx->pc == 0x2DDFE0u) {
        ctx->pc = 0x2DDFE4u;
        goto label_2ddfe4;
    }
    ctx->pc = 0x2DDFDCu;
    {
        const bool branch_taken_0x2ddfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddfdc) {
            ctx->pc = 0x2DDFECu;
            goto label_2ddfec;
        }
    }
    ctx->pc = 0x2DDFE4u;
label_2ddfe4:
    // 0x2ddfe4: 0x60f809  jalr        $v1
label_2ddfe8:
    if (ctx->pc == 0x2DDFE8u) {
        ctx->pc = 0x2DDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFE4u;
        // 0x2ddfe8: 0x8e242fe4  lw          $a0, 0x2FE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFECu;
        goto label_2ddfec;
    }
    ctx->pc = 0x2DDFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DDFECu);
        ctx->pc = 0x2DDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFE4u;
        // 0x2ddfe8: 0x8e242fe4  lw          $a0, 0x2FE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDFE4u, 0x2DDFECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DDFECu;
label_2ddfec:
    // 0x2ddfec: 0x8e422fe4  lw          $v0, 0x2FE4($s2)
    ctx->pc = 0x2ddfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12260)));
label_2ddff0:
    // 0x2ddff0: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
label_2ddff4:
    if (ctx->pc == 0x2DDFF4u) {
        ctx->pc = 0x2DDFF8u;
        goto label_2ddff8;
    }
    ctx->pc = 0x2DDFF0u;
    {
        const bool branch_taken_0x2ddff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2ddff0) {
            ctx->pc = 0x2DE000u;
            goto label_2de000;
        }
    }
    ctx->pc = 0x2DDFF8u;
label_2ddff8:
    // 0x2ddff8: 0xc0b78e4  jal         func_2DE390
label_2ddffc:
    if (ctx->pc == 0x2DDFFCu) {
        ctx->pc = 0x2DE000u;
        goto label_2de000;
    }
    ctx->pc = 0x2DDFF8u;
    SET_GPR_U32(ctx, 31, 0x2DE000u);
    ctx->pc = 0x2DE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE390u, 0x2DDFF8u, 0x2DE000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE000u;
label_2de000:
    // 0x2de000: 0xae602fac  sw          $zero, 0x2FAC($s3)
    ctx->pc = 0x2de000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12204), GPR_U32(ctx, 0));
label_2de004:
    // 0x2de004: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
label_2de008:
    if (ctx->pc == 0x2DE008u) {
        ctx->pc = 0x2DE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE004u;
        // 0x2de008: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE00Cu;
        goto label_fallthrough_0x2de004;
    }
    ctx->pc = 0x2DE004u;
    {
        const bool branch_taken_0x2de004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE004u;
        // 0x2de008: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de004) {
            ctx->pc = 0x2DDF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ddf88;
        }
    }
label_fallthrough_0x2de004:
    ctx->pc = 0x2DE00Cu;
}
