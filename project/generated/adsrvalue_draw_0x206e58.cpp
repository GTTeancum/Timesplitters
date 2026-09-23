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

// Function: adsrvalue_draw
// Address: 0x206e58 - 0x206ffc
void adsrvalue_draw_0x206e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("adsrvalue_draw_0x206e58");
#endif

    switch (ctx->pc) {
        case 0x206f1cu: goto label_206f1c;
        case 0x206f50u: goto label_206f50;
        case 0x206f60u: goto label_206f60;
        case 0x206f88u: goto label_206f88;
        case 0x206fa0u: goto label_206fa0;
        case 0x206fb0u: goto label_206fb0;
        case 0x206fb8u: goto label_206fb8;
        case 0x206fe8u: goto label_206fe8;
        default: break;
    }

    ctx->pc = 0x206e58u;

    // 0x206e58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x206e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x206e5c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x206e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x206e60: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x206e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x206e64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e68: 0x1220005f  beqz        $s1, . + 4 + (0x5F << 2)
    ctx->pc = 0x206E68u;
    {
        const bool branch_taken_0x206e68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x206E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E68u;
        // 0x206e6c: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e68) {
            ctx->pc = 0x206FE8u;
            goto label_206fe8;
        }
    }
    ctx->pc = 0x206E70u;
    // 0x206e70: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x206e70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x206e74: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x206e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x206e78: 0x8f849b44  lw          $a0, -0x64BC($gp)
    ctx->pc = 0x206e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941508)));
    // 0x206e7c: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x206e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x206e80: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x206e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x206e84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x206e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x206e88: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x206E88u;
    {
        const bool branch_taken_0x206e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x206E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E88u;
        // 0x206e8c: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e88) {
            ctx->pc = 0x206EB8u;
            goto label_206eb8;
        }
    }
    ctx->pc = 0x206E90u;
    // 0x206e90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x206e90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206e94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x206e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x206e98: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x206e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x206e9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x206e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x206ea0: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x206ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x206ea4: 0x0  nop
    ctx->pc = 0x206ea4u;
    // NOP
    // 0x206ea8: 0x0  nop
    ctx->pc = 0x206ea8u;
    // NOP
    // 0x206eac: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x206eacu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x206eb0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x206EB0u;
    {
        const bool branch_taken_0x206eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EB0u;
        // 0x206eb4: 0x2610e3a8  addiu       $s0, $s0, -0x1C58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206eb0) {
            ctx->pc = 0x206F48u;
            goto label_206f48;
        }
    }
    ctx->pc = 0x206EB8u;
label_206eb8:
    // 0x206eb8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x206EB8u;
    {
        const bool branch_taken_0x206eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x206eb8) {
            ctx->pc = 0x206EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206EB8u;
            // 0x206ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206ED0u;
            goto label_206ed0;
        }
    }
    ctx->pc = 0x206EC0u;
    // 0x206ec0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x206ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x206ec4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x206ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x206ec8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x206EC8u;
    {
        const bool branch_taken_0x206ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EC8u;
        // 0x206ecc: 0x24428e78  addiu       $v0, $v0, -0x7188 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ec8) {
            ctx->pc = 0x206EF4u;
            goto label_206ef4;
        }
    }
    ctx->pc = 0x206ED0u;
label_206ed0:
    // 0x206ed0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206ED0u;
    {
        const bool branch_taken_0x206ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x206ed0) {
            ctx->pc = 0x206ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206ED0u;
            // 0x206ed4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206EE8u;
            goto label_206ee8;
        }
    }
    ctx->pc = 0x206ED8u;
    // 0x206ed8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x206ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x206edc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x206edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x206ee0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x206EE0u;
    {
        const bool branch_taken_0x206ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EE0u;
        // 0x206ee4: 0x24429078  addiu       $v0, $v0, -0x6F88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ee0) {
            ctx->pc = 0x206EF4u;
            goto label_206ef4;
        }
    }
    ctx->pc = 0x206EE8u;
label_206ee8:
    // 0x206ee8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x206ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x206eec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x206eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x206ef0: 0x24428c78  addiu       $v0, $v0, -0x7388
    ctx->pc = 0x206ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937720));
label_206ef4:
    // 0x206ef4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x206ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206ef8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x206ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206f00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x206f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206f04: 0x0  nop
    ctx->pc = 0x206f04u;
    // NOP
    // 0x206f08: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x206F08u;
    {
        const bool branch_taken_0x206f08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F08u;
        // 0x206f0c: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f08) {
            ctx->pc = 0x206F24u;
            goto label_206f24;
        }
    }
    ctx->pc = 0x206F10u;
    // 0x206f10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x206f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f14: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x206F14u;
    SET_GPR_U32(ctx, 31, 0x206F1Cu);
    ctx->pc = 0x206F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F14u;
    // 0x206f18: 0x24a59b48  addiu       $a1, $a1, -0x64B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x206F14u, 0x206F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F1Cu;
label_206f1c:
    // 0x206f1c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x206F1Cu;
    {
        const bool branch_taken_0x206f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f1c) {
            ctx->pc = 0x206FB0u;
            goto label_206fb0;
        }
    }
    ctx->pc = 0x206F24u;
label_206f24:
    // 0x206f24: 0xc7808010  lwc1        $f0, -0x7FF0($gp)
    ctx->pc = 0x206f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206f28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x206f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206f2c: 0x0  nop
    ctx->pc = 0x206f2cu;
    // NOP
    // 0x206f30: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x206F30u;
    {
        const bool branch_taken_0x206f30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F30u;
        // 0x206f34: 0x3c10003a  lui         $s0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f30) {
            ctx->pc = 0x206F68u;
            goto label_206f68;
        }
    }
    ctx->pc = 0x206F38u;
    // 0x206f38: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x206f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x206f3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x206f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x206f40: 0x26109b58  addiu       $s0, $s0, -0x64A8
    ctx->pc = 0x206f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941528));
    // 0x206f44: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x206f44u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_206f48:
    // 0x206f48: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x206F48u;
    SET_GPR_U32(ctx, 31, 0x206F50u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x206F48u, 0x206F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F50u;
label_206f50:
    // 0x206f50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x206f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f58: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x206F58u;
    SET_GPR_U32(ctx, 31, 0x206F60u);
    ctx->pc = 0x206F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F58u;
    // 0x206f5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x206F58u, 0x206F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F60u;
label_206f60:
    // 0x206f60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x206F60u;
    {
        const bool branch_taken_0x206f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f60) {
            ctx->pc = 0x206FB0u;
            goto label_206fb0;
        }
    }
    ctx->pc = 0x206F68u;
label_206f68:
    // 0x206f68: 0xc7808014  lwc1        $f0, -0x7FEC($gp)
    ctx->pc = 0x206f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206f6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x206f6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206f70: 0x0  nop
    ctx->pc = 0x206f70u;
    // NOP
    // 0x206f74: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x206F74u;
    {
        const bool branch_taken_0x206f74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F74u;
        // 0x206f78: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f74) {
            ctx->pc = 0x206F90u;
            goto label_206f90;
        }
    }
    ctx->pc = 0x206F7Cu;
    // 0x206f7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x206f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f80: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x206F80u;
    SET_GPR_U32(ctx, 31, 0x206F88u);
    ctx->pc = 0x206F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F80u;
    // 0x206f84: 0x24a59b68  addiu       $a1, $a1, -0x6498 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x206F80u, 0x206F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F88u;
label_206f88:
    // 0x206f88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x206F88u;
    {
        const bool branch_taken_0x206f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f88) {
            ctx->pc = 0x206FB0u;
            goto label_206fb0;
        }
    }
    ctx->pc = 0x206F90u;
label_206f90:
    // 0x206f90: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x206f90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x206f94: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x206f94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x206f98: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x206F98u;
    SET_GPR_U32(ctx, 31, 0x206FA0u);
    ctx->pc = 0x206F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F98u;
    // 0x206f9c: 0x26109b78  addiu       $s0, $s0, -0x6488 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x206F98u, 0x206FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FA0u;
label_206fa0:
    // 0x206fa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fa4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x206fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fa8: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x206FA8u;
    SET_GPR_U32(ctx, 31, 0x206FB0u);
    ctx->pc = 0x206FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FA8u;
    // 0x206fac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x206FA8u, 0x206FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FB0u;
label_206fb0:
    // 0x206fb0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x206FB0u;
    SET_GPR_U32(ctx, 31, 0x206FB8u);
    ctx->pc = 0x206FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FB0u;
    // 0x206fb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x206FB0u, 0x206FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FB8u;
label_206fb8:
    // 0x206fb8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x206fb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x206fbc: 0x2442ff20  addiu       $v0, $v0, -0xE0
    ctx->pc = 0x206fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967072));
    // 0x206fc0: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x206fc0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x206fc4: 0x3c076464  lui         $a3, 0x6464
    ctx->pc = 0x206fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25700 << 16));
    // 0x206fc8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x206fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206fcc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x206fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x206fd0: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x206fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x206fd4: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x206fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x206fd8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x206fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x206fdc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x206fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fe0: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x206FE0u;
    SET_GPR_U32(ctx, 31, 0x206FE8u);
    ctx->pc = 0x206FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FE0u;
    // 0x206fe4: 0x34e76480  ori         $a3, $a3, 0x6480 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25728);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x206FE0u, 0x206FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FE8u;
label_206fe8:
    // 0x206fe8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x206fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206fec: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x206fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206ff0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x206ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x206FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FF4u;
        // 0x206ff8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206FFCu;
}
