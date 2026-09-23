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

// Function: joyGetAxisLOCAL
// Address: 0x203ee0 - 0x203fa0
void joyGetAxisLOCAL_0x203ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyGetAxisLOCAL_0x203ee0");
#endif

    switch (ctx->pc) {
        case 0x203f54u: goto label_203f54;
        case 0x203f68u: goto label_203f68;
        case 0x203f88u: goto label_203f88;
        default: break;
    }

    ctx->pc = 0x203ee0u;

    // 0x203ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203ee4: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x203ee8: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x203ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x203eec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203ef0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x203ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x203ef4: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x203ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x203ef8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x203ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x203efc: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x203efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x203f00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x203f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203f04: 0x2463c740  addiu       $v1, $v1, -0x38C0
    ctx->pc = 0x203f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952768));
    // 0x203f08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x203f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203f0c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x203f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x203f10: 0x10a40017  beq         $a1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x203F10u;
    {
        const bool branch_taken_0x203f10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x203F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F10u;
        // 0x203f14: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f10) {
            ctx->pc = 0x203F70u;
            goto label_203f70;
        }
    }
    ctx->pc = 0x203F18u;
    // 0x203f18: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x203f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x203f1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x203F1Cu;
    {
        const bool branch_taken_0x203f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f1c) {
            ctx->pc = 0x203F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203F1Cu;
            // 0x203f20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203F34u;
            goto label_203f34;
        }
    }
    ctx->pc = 0x203F24u;
    // 0x203f24: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x203F24u;
    {
        const bool branch_taken_0x203f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f24) {
            ctx->pc = 0x203F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203F24u;
            // 0x203f28: 0xc46c013c  lwc1        $f12, 0x13C($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x203F4Cu;
            goto label_203f4c;
        }
    }
    ctx->pc = 0x203F2Cu;
    // 0x203f2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x203F2Cu;
    {
        const bool branch_taken_0x203f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f2c) {
            ctx->pc = 0x203F90u;
            goto label_203f90;
        }
    }
    ctx->pc = 0x203F34u;
label_203f34:
    // 0x203f34: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203F34u;
    {
        const bool branch_taken_0x203f34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x203F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F34u;
        // 0x203f38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f34) {
            ctx->pc = 0x203F5Cu;
            goto label_203f5c;
        }
    }
    ctx->pc = 0x203F3Cu;
    // 0x203f3c: 0x50a2000f  beql        $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x203F3Cu;
    {
        const bool branch_taken_0x203f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x203f3c) {
            ctx->pc = 0x203F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203F3Cu;
            // 0x203f40: 0xc46c013c  lwc1        $f12, 0x13C($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x203F7Cu;
            goto label_203f7c;
        }
    }
    ctx->pc = 0x203F44u;
    // 0x203f44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x203F44u;
    {
        const bool branch_taken_0x203f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f44) {
            ctx->pc = 0x203F90u;
            goto label_203f90;
        }
    }
    ctx->pc = 0x203F4Cu;
label_203f4c:
    // 0x203f4c: 0xc080c22  jal         func_203088
    ctx->pc = 0x203F4Cu;
    SET_GPR_U32(ctx, 31, 0x203F54u);
    ctx->pc = 0x203F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F4Cu;
    // 0x203f50: 0x8c64012c  lw          $a0, 0x12C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203088u, 0x203F4Cu, 0x203F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F54u;
label_203f54:
    // 0x203f54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x203F54u;
    {
        const bool branch_taken_0x203f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F54u;
        // 0x203f58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f54) {
            ctx->pc = 0x203F98u;
            goto label_203f98;
        }
    }
    ctx->pc = 0x203F5Cu;
label_203f5c:
    // 0x203f5c: 0xc46c013c  lwc1        $f12, 0x13C($v1)
    ctx->pc = 0x203f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x203f60: 0xc080c22  jal         func_203088
    ctx->pc = 0x203F60u;
    SET_GPR_U32(ctx, 31, 0x203F68u);
    ctx->pc = 0x203F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F60u;
    // 0x203f64: 0x8c640130  lw          $a0, 0x130($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203088u, 0x203F60u, 0x203F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F68u;
label_203f68:
    // 0x203f68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x203F68u;
    {
        const bool branch_taken_0x203f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F68u;
        // 0x203f6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f68) {
            ctx->pc = 0x203F98u;
            goto label_203f98;
        }
    }
    ctx->pc = 0x203F70u;
label_203f70:
    // 0x203f70: 0xc46c013c  lwc1        $f12, 0x13C($v1)
    ctx->pc = 0x203f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x203f74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x203F74u;
    {
        const bool branch_taken_0x203f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F74u;
        // 0x203f78: 0x8c640134  lw          $a0, 0x134($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f74) {
            ctx->pc = 0x203F80u;
            goto label_203f80;
        }
    }
    ctx->pc = 0x203F7Cu;
label_203f7c:
    // 0x203f7c: 0x8c640138  lw          $a0, 0x138($v1)
    ctx->pc = 0x203f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
label_203f80:
    // 0x203f80: 0xc080c22  jal         func_203088
    ctx->pc = 0x203F80u;
    SET_GPR_U32(ctx, 31, 0x203F88u);
    ctx->pc = 0x203088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203088u, 0x203F80u, 0x203F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F88u;
label_203f88:
    // 0x203f88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x203F88u;
    {
        const bool branch_taken_0x203f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F88u;
        // 0x203f8c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f88) {
            ctx->pc = 0x203F94u;
            goto label_203f94;
        }
    }
    ctx->pc = 0x203F90u;
label_203f90:
    // 0x203f90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_203f94:
    // 0x203f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203f98:
    // 0x203f98: 0x3e00008  jr          $ra
    ctx->pc = 0x203F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F98u;
        // 0x203f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203FA0u;
}
