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

// Function: decalTick
// Address: 0x2a4bd8 - 0x2a5b20
void decalTick_0x2a4bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalTick_0x2a4bd8");
#endif

    switch (ctx->pc) {
        case 0x2a4c9cu: goto label_2a4c9c;
        case 0x2a4ca4u: goto label_2a4ca4;
        case 0x2a4cc8u: goto label_2a4cc8;
        case 0x2a4ce0u: goto label_2a4ce0;
        case 0x2a4d34u: goto label_2a4d34;
        case 0x2a4e48u: goto label_2a4e48;
        case 0x2a4fbcu: goto label_2a4fbc;
        case 0x2a5000u: goto label_2a5000;
        case 0x2a5140u: goto label_2a5140;
        case 0x2a51c0u: goto label_2a51c0;
        case 0x2a5270u: goto label_2a5270;
        case 0x2a5304u: goto label_2a5304;
        case 0x2a5374u: goto label_2a5374;
        case 0x2a5434u: goto label_2a5434;
        case 0x2a54d8u: goto label_2a54d8;
        default: break;
    }

    ctx->pc = 0x2a4bd8u;

    // 0x2a4bd8: 0x27bdfbe0  addiu       $sp, $sp, -0x420
    ctx->pc = 0x2a4bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966240));
    // 0x2a4bdc: 0x8f86b2f8  lw          $a2, -0x4D08($gp)
    ctx->pc = 0x2a4bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947576)));
    // 0x2a4be0: 0x8f82b2fc  lw          $v0, -0x4D04($gp)
    ctx->pc = 0x2a4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947580)));
    // 0x2a4be4: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x2a4be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
    // 0x2a4be8: 0xffbe03f0  sd          $fp, 0x3F0($sp)
    ctx->pc = 0x2a4be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1008), GPR_U64(ctx, 30));
    // 0x2a4bec: 0xffb703e0  sd          $s7, 0x3E0($sp)
    ctx->pc = 0x2a4becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 992), GPR_U64(ctx, 23));
    // 0x2a4bf0: 0xffb603d0  sd          $s6, 0x3D0($sp)
    ctx->pc = 0x2a4bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 976), GPR_U64(ctx, 22));
    // 0x2a4bf4: 0xffb503c0  sd          $s5, 0x3C0($sp)
    ctx->pc = 0x2a4bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 960), GPR_U64(ctx, 21));
    // 0x2a4bf8: 0xffb403b0  sd          $s4, 0x3B0($sp)
    ctx->pc = 0x2a4bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 20));
    // 0x2a4bfc: 0xffb303a0  sd          $s3, 0x3A0($sp)
    ctx->pc = 0x2a4bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 928), GPR_U64(ctx, 19));
    // 0x2a4c00: 0xffb20390  sd          $s2, 0x390($sp)
    ctx->pc = 0x2a4c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 18));
    // 0x2a4c04: 0xffb10380  sd          $s1, 0x380($sp)
    ctx->pc = 0x2a4c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 17));
    // 0x2a4c08: 0xffb00370  sd          $s0, 0x370($sp)
    ctx->pc = 0x2a4c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 16));
    // 0x2a4c0c: 0x10c203b7  beq         $a2, $v0, . + 4 + (0x3B7 << 2)
    ctx->pc = 0x2A4C0Cu;
    {
        const bool branch_taken_0x2a4c0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C0Cu;
        // 0x2a4c10: 0xe7b40410  swc1        $f20, 0x410($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c0c) {
            ctx->pc = 0x2A5AECu;
            goto label_2a5aec;
        }
    }
    ctx->pc = 0x2A4C14u;
    // 0x2a4c14: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2a4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a4c18: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2a4c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a4c1c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2a4c1cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a4c20: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x2a4c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2a4c24: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2a4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2a4c28: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A4C28u;
    {
        const bool branch_taken_0x2a4c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4c28) {
            ctx->pc = 0x2A4C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4C28u;
            // 0x2a4c2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4C30u;
            goto label_2a4c30;
        }
    }
    ctx->pc = 0x2A4C30u;
label_2a4c30:
    // 0x2a4c30: 0x24429a40  addiu       $v0, $v0, -0x65C0
    ctx->pc = 0x2a4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941248));
    // 0x2a4c34: 0x2810  mfhi        $a1
    ctx->pc = 0x2a4c34u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2a4c38: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x2a4c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a4c3c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2a4c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4c40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a4c44: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2a4c44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a4c48: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x2a4c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x2a4c4c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2a4c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a4c50: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x2a4c50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a4c54: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x2a4c54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a4c58: 0xafa3028c  sw          $v1, 0x28C($sp)
    ctx->pc = 0x2a4c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 3));
    // 0x2a4c5c: 0x104003a3  beqz        $v0, . + 4 + (0x3A3 << 2)
    ctx->pc = 0x2A4C5Cu;
    {
        const bool branch_taken_0x2a4c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C5Cu;
        // 0x2a4c60: 0xaf85b2f8  sw          $a1, -0x4D08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947576), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c5c) {
            ctx->pc = 0x2A5AECu;
            goto label_2a5aec;
        }
    }
    ctx->pc = 0x2A4C64u;
    // 0x2a4c64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a4c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4c68: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2a4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2a4c6c: 0xafa40298  sw          $a0, 0x298($sp)
    ctx->pc = 0x2a4c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 4));
    // 0x2a4c70: 0x8c4500f4  lw          $a1, 0xF4($v0)
    ctx->pc = 0x2a4c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2a4c74: 0xafa002ac  sw          $zero, 0x2AC($sp)
    ctx->pc = 0x2a4c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 0));
    // 0x2a4c78: 0xafa50294  sw          $a1, 0x294($sp)
    ctx->pc = 0x2a4c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 5));
    // 0x2a4c7c: 0x8fa60298  lw          $a2, 0x298($sp)
    ctx->pc = 0x2a4c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2a4c80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4c84: 0xafa002b0  sw          $zero, 0x2B0($sp)
    ctx->pc = 0x2a4c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 0));
    // 0x2a4c88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a4c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c8c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a4c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a4c90: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2a4c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a4c94: 0xc0a8c30  jal         func_2A30C0
    ctx->pc = 0x2A4C94u;
    SET_GPR_U32(ctx, 31, 0x2A4C9Cu);
    ctx->pc = 0x2A4C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C94u;
    // 0x2a4c98: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A30C0u, 0x2A4C94u, 0x2A4C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C9Cu;
label_2a4c9c:
    // 0x2a4c9c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A4C9Cu;
    SET_GPR_U32(ctx, 31, 0x2A4CA4u);
    ctx->pc = 0x2A4CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C9Cu;
    // 0x2a4ca0: 0xafa202a8  sw          $v0, 0x2A8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A4C9Cu, 0x2A4CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4CA4u;
label_2a4ca4:
    // 0x2a4ca4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2a4ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a4ca8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4CA8u;
    {
        const bool branch_taken_0x2a4ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CA8u;
        // 0x2a4cac: 0xafa202b4  sw          $v0, 0x2B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ca8) {
            ctx->pc = 0x2A4CC0u;
            goto label_2a4cc0;
        }
    }
    ctx->pc = 0x2A4CB0u;
    // 0x2a4cb0: 0x8fb802b4  lw          $t8, 0x2B4($sp)
    ctx->pc = 0x2a4cb0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x2a4cb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4cb8: 0x17020007  bne         $t8, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4CB8u;
    {
        const bool branch_taken_0x2a4cb8 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4cb8) {
            ctx->pc = 0x2A4CD8u;
            goto label_2a4cd8;
        }
    }
    ctx->pc = 0x2A4CC0u;
label_2a4cc0:
    // 0x2a4cc0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A4CC0u;
    SET_GPR_U32(ctx, 31, 0x2A4CC8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A4CC0u, 0x2A4CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4CC8u;
label_2a4cc8:
    // 0x2a4cc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a4cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a4ccc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2a4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a4cd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4CD0u;
    {
        const bool branch_taken_0x2a4cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CD0u;
        // 0x2a4cd4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4cd0) {
            ctx->pc = 0x2A4CE8u;
            goto label_2a4ce8;
        }
    }
    ctx->pc = 0x2A4CD8u;
label_2a4cd8:
    // 0x2a4cd8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A4CD8u;
    SET_GPR_U32(ctx, 31, 0x2A4CE0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A4CD8u, 0x2A4CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4CE0u;
label_2a4ce0:
    // 0x2a4ce0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a4ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a4ce4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2a4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2a4ce8:
    // 0x2a4ce8: 0xafa202b8  sw          $v0, 0x2B8($sp)
    ctx->pc = 0x2a4ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 2));
    // 0x2a4cec: 0xc6050028  lwc1        $f5, 0x28($s0)
    ctx->pc = 0x2a4cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a4cf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a4cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cf4: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x2a4cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a4cf8: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x2a4cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2a4cfc: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x2a4cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a4d00: 0x27a60284  addiu       $a2, $sp, 0x284
    ctx->pc = 0x2a4d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x2a4d04: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x2a4d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a4d08: 0x27a70288  addiu       $a3, $sp, 0x288
    ctx->pc = 0x2a4d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x2a4d0c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2a4d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4d10: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2a4d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4d14: 0xe7a401e0  swc1        $f4, 0x1E0($sp)
    ctx->pc = 0x2a4d14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2a4d18: 0xe7a301e4  swc1        $f3, 0x1E4($sp)
    ctx->pc = 0x2a4d18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x2a4d1c: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x2a4d1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2a4d20: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x2a4d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x2a4d24: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2a4d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x2a4d28: 0xe7a501f8  swc1        $f5, 0x1F8($sp)
    ctx->pc = 0x2a4d28u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x2a4d2c: 0xc0a91d6  jal         func_2A4758
    ctx->pc = 0x2A4D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A4D34u);
    ctx->pc = 0x2A4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4D2Cu;
    // 0x2a4d30: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4758u, 0x2A4D2Cu, 0x2A4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D34u;
label_2a4d34:
    // 0x2a4d34: 0xc7948df0  lwc1        $f20, -0x7210($gp)
    ctx->pc = 0x2a4d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a4d38: 0x27a30074  addiu       $v1, $sp, 0x74
    ctx->pc = 0x2a4d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x2a4d3c: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x2a4d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2a4d40: 0xafa302c0  sw          $v1, 0x2C0($sp)
    ctx->pc = 0x2a4d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 3));
    // 0x2a4d44: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2a4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4d48: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2a4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2a4d4c: 0xafa202bc  sw          $v0, 0x2BC($sp)
    ctx->pc = 0x2a4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 2));
    // 0x2a4d50: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2a4d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a4d54: 0x8fa602ac  lw          $a2, 0x2AC($sp)
    ctx->pc = 0x2a4d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x2a4d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4d5c: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x2a4d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2a4d60: 0xafa202b0  sw          $v0, 0x2B0($sp)
    ctx->pc = 0x2a4d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
    // 0x2a4d64: 0x24180024  addiu       $t8, $zero, 0x24
    ctx->pc = 0x2a4d64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2a4d68: 0xafa402c4  sw          $a0, 0x2C4($sp)
    ctx->pc = 0x2a4d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 4));
    // 0x2a4d6c: 0x70d82818  mult1       $a1, $a2, $t8
    ctx->pc = 0x2a4d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a4d70: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x2a4d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2a4d74: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2a4d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4d78: 0xafa202f0  sw          $v0, 0x2F0($sp)
    ctx->pc = 0x2a4d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 2));
    // 0x2a4d7c: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x2a4d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2a4d80: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2a4d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a4d84: 0x27b800ac  addiu       $t8, $sp, 0xAC
    ctx->pc = 0x2a4d84u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2a4d88: 0xafa402e4  sw          $a0, 0x2E4($sp)
    ctx->pc = 0x2a4d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 4));
    // 0x2a4d8c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2a4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2a4d90: 0xafa602e8  sw          $a2, 0x2E8($sp)
    ctx->pc = 0x2a4d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 6));
    // 0x2a4d94: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a4d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d98: 0xafb802ec  sw          $t8, 0x2EC($sp)
    ctx->pc = 0x2a4d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 24));
    // 0x2a4d9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a4d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4da0: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x2a4da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x2a4da4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a4da4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4da8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2a4da8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4dac: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2a4dacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4db0: 0x8fa402bc  lw          $a0, 0x2BC($sp)
    ctx->pc = 0x2a4db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x2a4db4: 0x27b900a0  addiu       $t9, $sp, 0xA0
    ctx->pc = 0x2a4db4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4db8: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2a4db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4dbc: 0x27af009c  addiu       $t7, $sp, 0x9C
    ctx->pc = 0x2a4dbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2a4dc0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2a4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a4dc4: 0x27ae0098  addiu       $t6, $sp, 0x98
    ctx->pc = 0x2a4dc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2a4dc8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2a4dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2a4dcc: 0x27ad0094  addiu       $t5, $sp, 0x94
    ctx->pc = 0x2a4dccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x2a4dd0: 0x8fb802c0  lw          $t8, 0x2C0($sp)
    ctx->pc = 0x2a4dd0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2a4dd4: 0xe4c00080  swc1        $f0, 0x80($a2)
    ctx->pc = 0x2a4dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
    // 0x2a4dd8: 0x3032021  addu        $a0, $t8, $v1
    ctx->pc = 0x2a4dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x2a4ddc: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x2a4ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x2a4de0: 0x24a40018  addiu       $a0, $a1, 0x18
    ctx->pc = 0x2a4de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2a4de4: 0x8fa202c4  lw          $v0, 0x2C4($sp)
    ctx->pc = 0x2a4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x2a4de8: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2a4de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4dec: 0x8fa6028c  lw          $a2, 0x28C($sp)
    ctx->pc = 0x2a4decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2a4df0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4df4: 0xe4e00084  swc1        $f0, 0x84($a3)
    ctx->pc = 0x2a4df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 132), bits); }
    // 0x2a4df8: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x2a4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2a4dfc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2a4dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2a4e00: 0xafa50304  sw          $a1, 0x304($sp)
    ctx->pc = 0x2a4e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 5));
    // 0x2a4e04: 0x8fb802bc  lw          $t8, 0x2BC($sp)
    ctx->pc = 0x2a4e04u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x2a4e08: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2a4e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4e0c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x2a4e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x2a4e10: 0x982021  addu        $a0, $a0, $t8
    ctx->pc = 0x2a4e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x2a4e14: 0xafa202fc  sw          $v0, 0x2FC($sp)
    ctx->pc = 0x2a4e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 2));
    // 0x2a4e18: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x2a4e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x2a4e1c: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x2a4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x2a4e20: 0xafa402f8  sw          $a0, 0x2F8($sp)
    ctx->pc = 0x2a4e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 4));
    // 0x2a4e24: 0xafa202f4  sw          $v0, 0x2F4($sp)
    ctx->pc = 0x2a4e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
    // 0x2a4e28: 0xe5000088  swc1        $f0, 0x88($t0)
    ctx->pc = 0x2a4e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 136), bits); }
    // 0x2a4e2c: 0xafa50300  sw          $a1, 0x300($sp)
    ctx->pc = 0x2a4e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 5));
    // 0x2a4e30: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2a4e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4e34: 0xe540008c  swc1        $f0, 0x8C($t2)
    ctx->pc = 0x2a4e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 140), bits); }
    // 0x2a4e38: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x2a4e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4e3c: 0xe5210090  swc1        $f1, 0x90($t1)
    ctx->pc = 0x2a4e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 144), bits); }
    // 0x2a4e40: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2a4e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2a4e44: 0x0  nop
    ctx->pc = 0x2a4e44u;
    // NOP
label_2a4e48:
    // 0x2a4e48: 0x24180024  addiu       $t8, $zero, 0x24
    ctx->pc = 0x2a4e48u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2a4e4c: 0x8fa50304  lw          $a1, 0x304($sp)
    ctx->pc = 0x2a4e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x2a4e50: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a4e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4e54: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2a4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a4e58: 0x8fa60304  lw          $a2, 0x304($sp)
    ctx->pc = 0x2a4e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x2a4e5c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2a4e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4e60: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x2a4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x2a4e64: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2a4e64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4e68: 0x400013  mtlo        $v0
    ctx->pc = 0x2a4e68u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2a4e6c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2a4e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2a4e70: 0x72432800  madd        $a1, $s2, $v1
    ctx->pc = 0x2a4e70u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a4e74: 0x8fa302c4  lw          $v1, 0x2C4($sp)
    ctx->pc = 0x2a4e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x2a4e78: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2a4e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a4e7c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2a4e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4e80: 0x2381818  mult        $v1, $s1, $t8
    ctx->pc = 0x2a4e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a4e84: 0xafa4028c  sw          $a0, 0x28C($sp)
    ctx->pc = 0x2a4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 4));
    // 0x2a4e88: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2a4e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2a4e8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4e90: 0x10400311  beqz        $v0, . + 4 + (0x311 << 2)
    ctx->pc = 0x2A4E90u;
    {
        const bool branch_taken_0x2a4e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E90u;
        // 0x2a4e94: 0xafa202a0  sw          $v0, 0x2A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e90) {
            ctx->pc = 0x2A5AD8u;
            goto label_2a5ad8;
        }
    }
    ctx->pc = 0x2A4E98u;
    // 0x2a4e98: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2a4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a4e9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4E9Cu;
    {
        const bool branch_taken_0x2a4e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E9Cu;
        // 0x2a4ea0: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e9c) {
            ctx->pc = 0x2A4EB4u;
            goto label_2a4eb4;
        }
    }
    ctx->pc = 0x2A4EA4u;
    // 0x2a4ea4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2a4ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a4ea8: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2a4ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a4eac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4EACu;
    {
        const bool branch_taken_0x2a4eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4EACu;
        // 0x2a4eb0: 0x24a4002c  addiu       $a0, $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4eac) {
            ctx->pc = 0x2A4EC0u;
            goto label_2a4ec0;
        }
    }
    ctx->pc = 0x2A4EB4u;
label_2a4eb4:
    // 0x2a4eb4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a4eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a4eb8: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2a4eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a4ebc: 0x24a40014  addiu       $a0, $a1, 0x14
    ctx->pc = 0x2a4ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
label_2a4ec0:
    // 0x2a4ec0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4ec4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a4ec8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2a4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a4ecc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2a4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a4ed0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a4ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a4ed4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a4ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a4ed8: 0x8fa60290  lw          $a2, 0x290($sp)
    ctx->pc = 0x2a4ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2a4edc: 0xc7ac0284  lwc1        $f12, 0x284($sp)
    ctx->pc = 0x2a4edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a4ee0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2a4ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a4ee4: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a4ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2a4ee8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a4ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4eec: 0x8fa70288  lw          $a3, 0x288($sp)
    ctx->pc = 0x2a4eecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x2a4ef0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4EF0u;
    {
        const bool branch_taken_0x2a4ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4EF0u;
        // 0x2a4ef4: 0xafa402a4  sw          $a0, 0x2A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ef0) {
            ctx->pc = 0x2A4F04u;
            goto label_2a4f04;
        }
    }
    ctx->pc = 0x2A4EF8u;
    // 0x2a4ef8: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2a4ef8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2a4efc: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x2a4efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2a4f00: 0x62480a  movz        $t1, $v1, $v0
    ctx->pc = 0x2a4f00u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_2a4f04:
    // 0x2a4f04: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x2a4f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x2a4f08: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a4f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4f0c: 0x8fb802f8  lw          $t8, 0x2F8($sp)
    ctx->pc = 0x2a4f0cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x2a4f10: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2a4f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a4f14: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2a4f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2a4f18: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x2a4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2a4f1c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a4f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f20: 0xafa502d4  sw          $a1, 0x2D4($sp)
    ctx->pc = 0x2a4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 5));
    // 0x2a4f24: 0xafb80000  sw          $t8, 0x0($sp)
    ctx->pc = 0x2a4f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 24));
    // 0x2a4f28: 0x436018  mult        $t4, $v0, $v1
    ctx->pc = 0x2a4f28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2a4f2c: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x2a4f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2a4f30: 0x27180024  addiu       $t8, $t8, 0x24
    ctx->pc = 0x2a4f30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 36));
    // 0x2a4f34: 0x8fab02fc  lw          $t3, 0x2FC($sp)
    ctx->pc = 0x2a4f34u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x2a4f38: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x2a4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a4f3c: 0x8fa502b4  lw          $a1, 0x2B4($sp)
    ctx->pc = 0x2a4f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x2a4f40: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2a4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2a4f44: 0x8fa602b8  lw          $a2, 0x2B8($sp)
    ctx->pc = 0x2a4f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2a4f48: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2a4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a4f4c: 0xafb802f8  sw          $t8, 0x2F8($sp)
    ctx->pc = 0x2a4f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 24));
    // 0x2a4f50: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4f54: 0x160c02d  daddu       $t8, $t3, $zero
    ctx->pc = 0x2a4f54u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f58: 0x27180024  addiu       $t8, $t8, 0x24
    ctx->pc = 0x2a4f58u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 36));
    // 0x2a4f5c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2a4f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2a4f60: 0xafb802fc  sw          $t8, 0x2FC($sp)
    ctx->pc = 0x2a4f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 24));
    // 0x2a4f64: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x2a4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2a4f68: 0xafa20300  sw          $v0, 0x300($sp)
    ctx->pc = 0x2a4f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 2));
    // 0x2a4f6c: 0x8fb802a0  lw          $t8, 0x2A0($sp)
    ctx->pc = 0x2a4f6cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2a4f70: 0x8fa20304  lw          $v0, 0x304($sp)
    ctx->pc = 0x2a4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x2a4f74: 0x8f030020  lw          $v1, 0x20($t8)
    ctx->pc = 0x2a4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x2a4f78: 0x8fb802ac  lw          $t8, 0x2AC($sp)
    ctx->pc = 0x2a4f78u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x2a4f7c: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x2a4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2a4f80: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x2a4f80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2a4f84: 0xafa20304  sw          $v0, 0x304($sp)
    ctx->pc = 0x2a4f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 2));
    // 0x2a4f88: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x2a4f88u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x2a4f8c: 0x8fa302d4  lw          $v1, 0x2D4($sp)
    ctx->pc = 0x2a4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2a4f90: 0xafb802ac  sw          $t8, 0x2AC($sp)
    ctx->pc = 0x2a4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 24));
    // 0x2a4f94: 0x8fa80294  lw          $t0, 0x294($sp)
    ctx->pc = 0x2a4f94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x2a4f98: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x2a4f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2a4f9c: 0x8faa02a8  lw          $t2, 0x2A8($sp)
    ctx->pc = 0x2a4f9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x2a4fa0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2a4fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x2a4fa4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2a4fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2a4fa8: 0x7fad0320  sq          $t5, 0x320($sp)
    ctx->pc = 0x2a4fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 13));
    // 0x2a4fac: 0x7fae0330  sq          $t6, 0x330($sp)
    ctx->pc = 0x2a4facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 14));
    // 0x2a4fb0: 0x7faf0340  sq          $t7, 0x340($sp)
    ctx->pc = 0x2a4fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 15));
    // 0x2a4fb4: 0xc0a8c9c  jal         func_2A3270
    ctx->pc = 0x2A4FB4u;
    SET_GPR_U32(ctx, 31, 0x2A4FBCu);
    ctx->pc = 0x2A4FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4FB4u;
    // 0x2a4fb8: 0x7fb90350  sq          $t9, 0x350($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3270u, 0x2A4FB4u, 0x2A4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4FBCu;
label_2a4fbc:
    // 0x2a4fbc: 0x7bad0320  lq          $t5, 0x320($sp)
    ctx->pc = 0x2a4fbcu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a4fc0: 0x7bae0330  lq          $t6, 0x330($sp)
    ctx->pc = 0x2a4fc0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2a4fc4: 0x7baf0340  lq          $t7, 0x340($sp)
    ctx->pc = 0x2a4fc4u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2a4fc8: 0x44002c3  bltz        $v0, . + 4 + (0x2C3 << 2)
    ctx->pc = 0x2A4FC8u;
    {
        const bool branch_taken_0x2a4fc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FC8u;
        // 0x2a4fcc: 0x7bb90350  lq          $t9, 0x350($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fc8) {
            ctx->pc = 0x2A5AD8u;
            goto label_2a5ad8;
        }
    }
    ctx->pc = 0x2A4FD0u;
    // 0x2a4fd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a4fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4fd4: 0x44002c0  bltz        $v0, . + 4 + (0x2C0 << 2)
    ctx->pc = 0x2A4FD4u;
    {
        const bool branch_taken_0x2a4fd4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FD4u;
        // 0x2a4fd8: 0xafa002c8  sw          $zero, 0x2C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fd4) {
            ctx->pc = 0x2A5AD8u;
            goto label_2a5ad8;
        }
    }
    ctx->pc = 0x2A4FDCu;
    // 0x2a4fdc: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x2a4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2a4fe0: 0x2888000a  slti        $t0, $a0, 0xA
    ctx->pc = 0x2a4fe0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a4fe4: 0x110002bc  beqz        $t0, . + 4 + (0x2BC << 2)
    ctx->pc = 0x2A4FE4u;
    {
        const bool branch_taken_0x2a4fe4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FE4u;
        // 0x2a4fe8: 0x8fa50298  lw          $a1, 0x298($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fe4) {
            ctx->pc = 0x2A5AD8u;
            goto label_2a5ad8;
        }
    }
    ctx->pc = 0x2A4FECu;
    // 0x2a4fec: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x2a4fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2a4ff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a4ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ff4: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x2a4ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a4ff8: 0xafa602e0  sw          $a2, 0x2E0($sp)
    ctx->pc = 0x2a4ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 6));
    // 0x2a4ffc: 0x0  nop
    ctx->pc = 0x2a4ffcu;
    // NOP
label_2a5000:
    // 0x2a5000: 0x8fb8028c  lw          $t8, 0x28C($sp)
    ctx->pc = 0x2a5000u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2a5004: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a5004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a5008: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x2a5008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2a500c: 0x3022018  mult        $a0, $t8, $v0
    ctx->pc = 0x2a500cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a5010: 0x8fb802e0  lw          $t8, 0x2E0($sp)
    ctx->pc = 0x2a5010u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2a5014: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x2a5014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2a5018: 0x3072821  addu        $a1, $t8, $a3
    ctx->pc = 0x2a5018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x2a501c: 0x8fa302d4  lw          $v1, 0x2D4($sp)
    ctx->pc = 0x2a501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2a5020: 0x8fb802c8  lw          $t8, 0x2C8($sp)
    ctx->pc = 0x2a5020u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2a5024: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2a5024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2a5028: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2a5028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a502c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2a502cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5030: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x2a5030u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x2a5034: 0xafb802c8  sw          $t8, 0x2C8($sp)
    ctx->pc = 0x2a5034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 24));
    // 0x2a5038: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a5038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a503c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a503cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a5040: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a5040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5044: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a5048: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x2a5048u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a504c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2a504cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5050: 0x8fa202a4  lw          $v0, 0x2A4($sp)
    ctx->pc = 0x2a5050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x2a5054: 0x400013  mtlo        $v0
    ctx->pc = 0x2a5054u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2a5058: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a5058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a505c: 0x70825800  madd        $t3, $a0, $v0
    ctx->pc = 0x2a505cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2a5060: 0x8fa202a4  lw          $v0, 0x2A4($sp)
    ctx->pc = 0x2a5060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x2a5064: 0x400013  mtlo        $v0
    ctx->pc = 0x2a5064u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2a5068: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a5068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a506c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2a506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5070: 0x70a2f000  madd        $fp, $a1, $v0
    ctx->pc = 0x2a5070u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x2a5074: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x2a5074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5078: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a5078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a507c: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x2a507cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x2a5080: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x2a5080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5084: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x2a5084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5088: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a5088u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a508c: 0xe7a10224  swc1        $f1, 0x224($sp)
    ctx->pc = 0x2a508cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x2a5090: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x2a5090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5094: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x2a5094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5098: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a5098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a509c: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x2a509cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x2a50a0: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x2a50a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a50a4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x2a50a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a50a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a50a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a50ac: 0x0  nop
    ctx->pc = 0x2a50acu;
    // NOP
    // 0x2a50b0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2A50B0u;
    {
        const bool branch_taken_0x2a50b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a50b0) {
            ctx->pc = 0x2A50B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A50B0u;
            // 0x2a50b4: 0xe7a00200  swc1        $f0, 0x200($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A50C4u;
            goto label_2a50c4;
        }
    }
    ctx->pc = 0x2A50B8u;
    // 0x2a50b8: 0xe7a10200  swc1        $f1, 0x200($sp)
    ctx->pc = 0x2a50b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2a50bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A50BCu;
    {
        const bool branch_taken_0x2a50bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A50C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A50BCu;
        // 0x2a50c0: 0xc7c00000  lwc1        $f0, 0x0($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50bc) {
            ctx->pc = 0x2A50C8u;
            goto label_2a50c8;
        }
    }
    ctx->pc = 0x2A50C4u;
label_2a50c4:
    // 0x2a50c4: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2a50c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a50c8:
    // 0x2a50c8: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x2a50c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x2a50cc: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x2a50ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a50d0: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x2a50d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a50d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a50d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a50d8: 0x0  nop
    ctx->pc = 0x2a50d8u;
    // NOP
    // 0x2a50dc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2A50DCu;
    {
        const bool branch_taken_0x2a50dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a50dc) {
            ctx->pc = 0x2A50E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A50DCu;
            // 0x2a50e0: 0xe7a00204  swc1        $f0, 0x204($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A50F0u;
            goto label_2a50f0;
        }
    }
    ctx->pc = 0x2A50E4u;
    // 0x2a50e4: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x2a50e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x2a50e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A50E8u;
    {
        const bool branch_taken_0x2a50e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A50E8u;
        // 0x2a50ec: 0xc7c00004  lwc1        $f0, 0x4($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50e8) {
            ctx->pc = 0x2A50F4u;
            goto label_2a50f4;
        }
    }
    ctx->pc = 0x2A50F0u;
label_2a50f0:
    // 0x2a50f0: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x2a50f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a50f4:
    // 0x2a50f4: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x2a50f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x2a50f8: 0xc5610008  lwc1        $f1, 0x8($t3)
    ctx->pc = 0x2a50f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a50fc: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x2a50fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5100: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a5100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5104: 0x0  nop
    ctx->pc = 0x2a5104u;
    // NOP
    // 0x2a5108: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5108u;
    {
        const bool branch_taken_0x2a5108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5108) {
            ctx->pc = 0x2A510Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5108u;
            // 0x2a510c: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A511Cu;
            goto label_2a511c;
        }
    }
    ctx->pc = 0x2A5110u;
    // 0x2a5110: 0xe7a10208  swc1        $f1, 0x208($sp)
    ctx->pc = 0x2a5110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x2a5114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A5114u;
    {
        const bool branch_taken_0x2a5114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5114u;
        // 0x2a5118: 0xc7c00008  lwc1        $f0, 0x8($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5114) {
            ctx->pc = 0x2A5120u;
            goto label_2a5120;
        }
    }
    ctx->pc = 0x2A511Cu;
label_2a511c:
    // 0x2a511c: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x2a511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5120:
    // 0x2a5120: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x2a5120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x2a5124: 0x19200258  blez        $t1, . + 4 + (0x258 << 2)
    ctx->pc = 0x2A5124u;
    {
        const bool branch_taken_0x2a5124 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2A5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5124u;
        // 0x2a5128: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5124) {
            ctx->pc = 0x2A5A88u;
            goto label_2a5a88;
        }
    }
    ctx->pc = 0x2A512Cu;
    // 0x2a512c: 0x1100025a  beqz        $t0, . + 4 + (0x25A << 2)
    ctx->pc = 0x2A512Cu;
    {
        const bool branch_taken_0x2a512c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A512Cu;
        // 0x2a5130: 0x8fa302c8  lw          $v1, 0x2C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a512c) {
            ctx->pc = 0x2A5A98u;
            goto label_2a5a98;
        }
    }
    ctx->pc = 0x2A5134u;
    // 0x2a5134: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x2a5134u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a5138: 0xafa302d8  sw          $v1, 0x2D8($sp)
    ctx->pc = 0x2a5138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 3));
    // 0x2a513c: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x2a513cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_2a5140:
    // 0x2a5140: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2a5140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2a5144: 0x800013  mtlo        $a0
    ctx->pc = 0x2a5144u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x2a5148: 0x72421800  madd        $v1, $s2, $v0
    ctx->pc = 0x2a5148u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a514c: 0x8c70004c  lw          $s0, 0x4C($v1)
    ctx->pc = 0x2a514cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2a5150: 0x52000240  beql        $s0, $zero, . + 4 + (0x240 << 2)
    ctx->pc = 0x2A5150u;
    {
        const bool branch_taken_0x2a5150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5150) {
            ctx->pc = 0x2A5154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5150u;
            // 0x2a5154: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5A54u;
            goto label_2a5a54;
        }
    }
    ctx->pc = 0x2A5158u;
    // 0x2a5158: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2a5158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a515c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A515Cu;
    {
        const bool branch_taken_0x2a515c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A515Cu;
        // 0x2a5160: 0x2465002c  addiu       $a1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a515c) {
            ctx->pc = 0x2A5170u;
            goto label_2a5170;
        }
    }
    ctx->pc = 0x2A5164u;
    // 0x2a5164: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2a5164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a5168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5168u;
    {
        const bool branch_taken_0x2a5168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5168u;
        // 0x2a516c: 0xafa502cc  sw          $a1, 0x2CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5168) {
            ctx->pc = 0x2A517Cu;
            goto label_2a517c;
        }
    }
    ctx->pc = 0x2A5170u;
label_2a5170:
    // 0x2a5170: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2a5170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a5174: 0x24660014  addiu       $a2, $v1, 0x14
    ctx->pc = 0x2a5174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2a5178: 0xafa602cc  sw          $a2, 0x2CC($sp)
    ctx->pc = 0x2a5178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 6));
label_2a517c:
    // 0x2a517c: 0x94630044  lhu         $v1, 0x44($v1)
    ctx->pc = 0x2a517cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2a5180: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5180u;
    {
        const bool branch_taken_0x2a5180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5180u;
        // 0x2a5184: 0x8fb80290  lw          $t8, 0x290($sp) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5180) {
            ctx->pc = 0x2A5198u;
            goto label_2a5198;
        }
    }
    ctx->pc = 0x2A5188u;
    // 0x2a5188: 0x97020124  lhu         $v0, 0x124($t8)
    ctx->pc = 0x2a5188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 292)));
    // 0x2a518c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a518cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5190: 0x50400230  beql        $v0, $zero, . + 4 + (0x230 << 2)
    ctx->pc = 0x2A5190u;
    {
        const bool branch_taken_0x2a5190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5190) {
            ctx->pc = 0x2A5194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5190u;
            // 0x2a5194: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5A54u;
            goto label_2a5a54;
        }
    }
    ctx->pc = 0x2A5198u;
label_2a5198:
    // 0x2a5198: 0x5080022e  beql        $a0, $zero, . + 4 + (0x22E << 2)
    ctx->pc = 0x2A5198u;
    {
        const bool branch_taken_0x2a5198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5198) {
            ctx->pc = 0x2A519Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5198u;
            // 0x2a519c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5A54u;
            goto label_2a5a54;
        }
    }
    ctx->pc = 0x2A51A0u;
    // 0x2a51a0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2a51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a51a4: 0x440022a  bltz        $v0, . + 4 + (0x22A << 2)
    ctx->pc = 0x2A51A4u;
    {
        const bool branch_taken_0x2a51a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51A4u;
        // 0x2a51a8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51a4) {
            ctx->pc = 0x2A5A50u;
            goto label_2a5a50;
        }
    }
    ctx->pc = 0x2A51ACu;
    // 0x2a51ac: 0x11000228  beqz        $t0, . + 4 + (0x228 << 2)
    ctx->pc = 0x2A51ACu;
    {
        const bool branch_taken_0x2a51ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51ACu;
        // 0x2a51b0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51ac) {
            ctx->pc = 0x2A5A50u;
            goto label_2a5a50;
        }
    }
    ctx->pc = 0x2A51B4u;
    // 0x2a51b4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2a51b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a51b8: 0xafa202dc  sw          $v0, 0x2DC($sp)
    ctx->pc = 0x2a51b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 2));
    // 0x2a51bc: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x2a51bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a51c0:
    // 0x2a51c0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2a51c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a51c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a51c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a51c8: 0x0  nop
    ctx->pc = 0x2a51c8u;
    // NOP
    // 0x2a51cc: 0x45000211  bc1f        . + 4 + (0x211 << 2)
    ctx->pc = 0x2A51CCu;
    {
        const bool branch_taken_0x2a51cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51CCu;
        // 0x2a51d0: 0xc7a1020c  lwc1        $f1, 0x20C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51cc) {
            ctx->pc = 0x2A5A14u;
            goto label_2a5a14;
        }
    }
    ctx->pc = 0x2A51D4u;
    // 0x2a51d4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a51d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a51d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a51d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a51dc: 0x0  nop
    ctx->pc = 0x2a51dcu;
    // NOP
    // 0x2a51e0: 0x4500020c  bc1f        . + 4 + (0x20C << 2)
    ctx->pc = 0x2A51E0u;
    {
        const bool branch_taken_0x2a51e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51E0u;
        // 0x2a51e4: 0xc7a10204  lwc1        $f1, 0x204($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51e0) {
            ctx->pc = 0x2A5A14u;
            goto label_2a5a14;
        }
    }
    ctx->pc = 0x2A51E8u;
    // 0x2a51e8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2a51e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a51ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a51ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a51f0: 0x0  nop
    ctx->pc = 0x2a51f0u;
    // NOP
    // 0x2a51f4: 0x45000207  bc1f        . + 4 + (0x207 << 2)
    ctx->pc = 0x2A51F4u;
    {
        const bool branch_taken_0x2a51f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51F4u;
        // 0x2a51f8: 0xc7a10210  lwc1        $f1, 0x210($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51f4) {
            ctx->pc = 0x2A5A14u;
            goto label_2a5a14;
        }
    }
    ctx->pc = 0x2A51FCu;
    // 0x2a51fc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a51fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5200: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a5200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5204: 0x0  nop
    ctx->pc = 0x2a5204u;
    // NOP
    // 0x2a5208: 0x45000202  bc1f        . + 4 + (0x202 << 2)
    ctx->pc = 0x2A5208u;
    {
        const bool branch_taken_0x2a5208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5208u;
        // 0x2a520c: 0xc7a10208  lwc1        $f1, 0x208($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5208) {
            ctx->pc = 0x2A5A14u;
            goto label_2a5a14;
        }
    }
    ctx->pc = 0x2A5210u;
    // 0x2a5210: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2a5210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5214: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a5214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5218: 0x0  nop
    ctx->pc = 0x2a5218u;
    // NOP
    // 0x2a521c: 0x450001fd  bc1f        . + 4 + (0x1FD << 2)
    ctx->pc = 0x2A521Cu;
    {
        const bool branch_taken_0x2a521c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A521Cu;
        // 0x2a5220: 0xc7a10214  lwc1        $f1, 0x214($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a521c) {
            ctx->pc = 0x2A5A14u;
            goto label_2a5a14;
        }
    }
    ctx->pc = 0x2A5224u;
    // 0x2a5224: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a5224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5228: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a5228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a522c: 0x0  nop
    ctx->pc = 0x2a522cu;
    // NOP
    // 0x2a5230: 0x450001f8  bc1f        . + 4 + (0x1F8 << 2)
    ctx->pc = 0x2A5230u;
    {
        const bool branch_taken_0x2a5230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5230u;
        // 0x2a5234: 0x2418000c  addiu       $t8, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5230) {
            ctx->pc = 0x2A5A14u;
            goto label_2a5a14;
        }
    }
    ctx->pc = 0x2A5238u;
    // 0x2a5238: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2a5238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a523c: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x2a523cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2a5240: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a5240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5244: 0x581018  mult        $v0, $v0, $t8
    ctx->pc = 0x2a5244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a5248: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2a5248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a524c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2a524cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2a5250: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5254: 0x18a001ef  blez        $a1, . + 4 + (0x1EF << 2)
    ctx->pc = 0x2A5254u;
    {
        const bool branch_taken_0x2a5254 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2A5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5254u;
        // 0x2a5258: 0xafa302d0  sw          $v1, 0x2D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5254) {
            ctx->pc = 0x2A5A14u;
            goto label_2a5a14;
        }
    }
    ctx->pc = 0x2A525Cu;
    // 0x2a525c: 0x10c001ed  beqz        $a2, . + 4 + (0x1ED << 2)
    ctx->pc = 0x2A525Cu;
    {
        const bool branch_taken_0x2a525c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A525Cu;
        // 0x2a5260: 0x24950018  addiu       $s5, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a525c) {
            ctx->pc = 0x2A5A14u;
            goto label_2a5a14;
        }
    }
    ctx->pc = 0x2A5264u;
    // 0x2a5264: 0x26140024  addiu       $s4, $s0, 0x24
    ctx->pc = 0x2a5264u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2a5268: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x2a5268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2a526c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a5270:
    // 0x2a5270: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x2a5270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5274: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x2a5274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a5278: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x2a5278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a527c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a527cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5280: 0xc7a30228  lwc1        $f3, 0x228($sp)
    ctx->pc = 0x2a5280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a5284: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2a5284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2a5288: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a528c: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x2a528cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a5290: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a5290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a5294: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a5294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a5298: 0x0  nop
    ctx->pc = 0x2a5298u;
    // NOP
    // 0x2a529c: 0x0  nop
    ctx->pc = 0x2a529cu;
    // NOP
    // 0x2a52a0: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x2a52a0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[20];
    // 0x2a52a4: 0xe7a20230  swc1        $f2, 0x230($sp)
    ctx->pc = 0x2a52a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x2a52a8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a52a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a52ac: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x2a52acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a52b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a52b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a52b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a52b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a52b8: 0x0  nop
    ctx->pc = 0x2a52b8u;
    // NOP
    // 0x2a52bc: 0x0  nop
    ctx->pc = 0x2a52bcu;
    // NOP
    // 0x2a52c0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2a52c0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2a52c4: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x2a52c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    // 0x2a52c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a52c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a52cc: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x2a52ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2a52d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a52d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a52d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a52d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a52d8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2a52d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a52dc: 0x0  nop
    ctx->pc = 0x2a52dcu;
    // NOP
    // 0x2a52e0: 0x0  nop
    ctx->pc = 0x2a52e0u;
    // NOP
    // 0x2a52e4: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x2a52e4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[20];
    // 0x2a52e8: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x2a52e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a52ec: 0xe7a10238  swc1        $f1, 0x238($sp)
    ctx->pc = 0x2a52ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x2a52f0: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x2a52f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2a52f4: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x2a52f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a52f8: 0x0  nop
    ctx->pc = 0x2a52f8u;
    // NOP
    // 0x2a52fc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2A52FCu;
    {
        const bool branch_taken_0x2a52fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52FCu;
        // 0x2a5300: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52fc) {
            ctx->pc = 0x2A5320u;
            goto label_2a5320;
        }
    }
    ctx->pc = 0x2A5304u;
label_2a5304:
    // 0x2a5304: 0xc7808df4  lwc1        $f0, -0x720C($gp)
    ctx->pc = 0x2a5304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5308: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a5308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a530c: 0x0  nop
    ctx->pc = 0x2a530cu;
    // NOP
    // 0x2a5310: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5310u;
    {
        const bool branch_taken_0x2a5310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5310u;
        // 0x2a5314: 0xc7a90230  lwc1        $f9, 0x230($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5310) {
            ctx->pc = 0x2A5328u;
            goto label_2a5328;
        }
    }
    ctx->pc = 0x2A5318u;
    // 0x2a5318: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x2A5318u;
    {
        const bool branch_taken_0x2a5318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5318u;
        // 0x2a531c: 0x26270001  addiu       $a3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5318) {
            ctx->pc = 0x2A59F0u;
            goto label_2a59f0;
        }
    }
    ctx->pc = 0x2A5320u;
label_2a5320:
    // 0x2a5320: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A5320u;
    {
        const bool branch_taken_0x2a5320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5320u;
        // 0x2a5324: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5320) {
            ctx->pc = 0x2A5304u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5304;
        }
    }
    ctx->pc = 0x2A5328u;
label_2a5328:
    // 0x2a5328: 0xc7a80234  lwc1        $f8, 0x234($sp)
    ctx->pc = 0x2a5328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a532c: 0x46094802  mul.s       $f0, $f9, $f9
    ctx->pc = 0x2a532cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x2a5330: 0xc7a70238  lwc1        $f7, 0x238($sp)
    ctx->pc = 0x2a5330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a5334: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x2a5334u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2a5338: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x2a5338u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2a533c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a533cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a5340: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2a5340u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a5344: 0x0  nop
    ctx->pc = 0x2a5344u;
    // NOP
    // 0x2a5348: 0x0  nop
    ctx->pc = 0x2a5348u;
    // NOP
    // 0x2a534c: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2a534cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2a5350: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2a5350u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5354: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2A5354u;
    {
        const bool branch_taken_0x2a5354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5354) {
            ctx->pc = 0x2A5398u;
            goto label_2a5398;
        }
    }
    ctx->pc = 0x2A535Cu;
    // 0x2a535c: 0x7fab0310  sq          $t3, 0x310($sp)
    ctx->pc = 0x2a535cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 11));
    // 0x2a5360: 0x7fad0320  sq          $t5, 0x320($sp)
    ctx->pc = 0x2a5360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 13));
    // 0x2a5364: 0x7fae0330  sq          $t6, 0x330($sp)
    ctx->pc = 0x2a5364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 14));
    // 0x2a5368: 0x7faf0340  sq          $t7, 0x340($sp)
    ctx->pc = 0x2a5368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 15));
    // 0x2a536c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2A536Cu;
    SET_GPR_U32(ctx, 31, 0x2A5374u);
    ctx->pc = 0x2A5370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A536Cu;
    // 0x2a5370: 0x7fb90350  sq          $t9, 0x350($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2A536Cu, 0x2A5374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5374u;
label_2a5374:
    // 0x2a5374: 0xc7a90230  lwc1        $f9, 0x230($sp)
    ctx->pc = 0x2a5374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a5378: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2a5378u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2a537c: 0xc7a80234  lwc1        $f8, 0x234($sp)
    ctx->pc = 0x2a537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a5380: 0xc7a70238  lwc1        $f7, 0x238($sp)
    ctx->pc = 0x2a5380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a5384: 0x7bb90350  lq          $t9, 0x350($sp)
    ctx->pc = 0x2a5384u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x2a5388: 0x7baf0340  lq          $t7, 0x340($sp)
    ctx->pc = 0x2a5388u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2a538c: 0x7bae0330  lq          $t6, 0x330($sp)
    ctx->pc = 0x2a538cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2a5390: 0x7bad0320  lq          $t5, 0x320($sp)
    ctx->pc = 0x2a5390u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a5394: 0x7bab0310  lq          $t3, 0x310($sp)
    ctx->pc = 0x2a5394u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_2a5398:
    // 0x2a5398: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a539c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a539cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a53a0: 0xc7a301f0  lwc1        $f3, 0x1F0($sp)
    ctx->pc = 0x2a53a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a53a4: 0x0  nop
    ctx->pc = 0x2a53a4u;
    // NOP
    // 0x2a53a8: 0x0  nop
    ctx->pc = 0x2a53a8u;
    // NOP
    // 0x2a53ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2a53acu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a53b0: 0xc7a401f4  lwc1        $f4, 0x1F4($sp)
    ctx->pc = 0x2a53b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a53b4: 0xc7a501f8  lwc1        $f5, 0x1F8($sp)
    ctx->pc = 0x2a53b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a53b8: 0xc7868df8  lwc1        $f6, -0x7208($gp)
    ctx->pc = 0x2a53b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a53bc: 0x46004842  mul.s       $f1, $f9, $f0
    ctx->pc = 0x2a53bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2a53c0: 0x46004082  mul.s       $f2, $f8, $f0
    ctx->pc = 0x2a53c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2a53c4: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2a53c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2a53c8: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x2a53c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a53cc: 0xe7a10230  swc1        $f1, 0x230($sp)
    ctx->pc = 0x2a53ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x2a53d0: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x2a53d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2a53d4: 0xe7a20234  swc1        $f2, 0x234($sp)
    ctx->pc = 0x2a53d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    // 0x2a53d8: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x2a53d8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2a53dc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2a53dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2a53e0: 0x46051bc0  add.s       $f15, $f3, $f5
    ctx->pc = 0x2a53e0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2a53e4: 0x460f3036  c.le.s      $f6, $f15
    ctx->pc = 0x2a53e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a53e8: 0x0  nop
    ctx->pc = 0x2a53e8u;
    // NOP
    // 0x2a53ec: 0x4500011c  bc1f        . + 4 + (0x11C << 2)
    ctx->pc = 0x2A53ECu;
    {
        const bool branch_taken_0x2a53ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A53ECu;
        // 0x2a53f0: 0xe7a00238  swc1        $f0, 0x238($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a53ec) {
            ctx->pc = 0x2A5860u;
            goto label_2a5860;
        }
    }
    ctx->pc = 0x2A53F4u;
    // 0x2a53f4: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x2a53f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2a53f8: 0x18600024  blez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A53F8u;
    {
        const bool branch_taken_0x2a53f8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2A53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A53F8u;
        // 0x2a53fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a53f8) {
            ctx->pc = 0x2A548Cu;
            goto label_2a548c;
        }
    }
    ctx->pc = 0x2A5400u;
    // 0x2a5400: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a5400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a5404: 0x1452000a  bne         $v0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2A5404u;
    {
        const bool branch_taken_0x2a5404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2A5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5404u;
        // 0x2a5408: 0x26270001  addiu       $a3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5404) {
            ctx->pc = 0x2A5430u;
            goto label_2a5430;
        }
    }
    ctx->pc = 0x2A540Cu;
    // 0x2a540c: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x2a540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2a5410: 0x14570008  bne         $v0, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5410u;
    {
        const bool branch_taken_0x2a5410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x2A5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5410u;
        // 0x2a5414: 0x8fa402b0  lw          $a0, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5410) {
            ctx->pc = 0x2A5434u;
            goto label_2a5434;
        }
    }
    ctx->pc = 0x2A5418u;
    // 0x2a5418: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a5418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a541c: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A541Cu;
    {
        const bool branch_taken_0x2a541c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2A5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A541Cu;
        // 0x2a5420: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a541c) {
            ctx->pc = 0x2A5438u;
            goto label_2a5438;
        }
    }
    ctx->pc = 0x2A5424u;
    // 0x2a5424: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A5424u;
    {
        const bool branch_taken_0x2a5424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5424u;
        // 0x2a5428: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5424) {
            ctx->pc = 0x2A5490u;
            goto label_2a5490;
        }
    }
    ctx->pc = 0x2A542Cu;
    // 0x2a542c: 0x0  nop
    ctx->pc = 0x2a542cu;
    // NOP
label_2a5430:
    // 0x2a5430: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x2a5430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_2a5434:
    // 0x2a5434: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a5434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2a5438:
    // 0x2a5438: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x2a5438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a543c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A543Cu;
    {
        const bool branch_taken_0x2a543c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A543Cu;
        // 0x2a5440: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a543c) {
            ctx->pc = 0x2A5490u;
            goto label_2a5490;
        }
    }
    ctx->pc = 0x2A5444u;
    // 0x2a5444: 0x8fb802bc  lw          $t8, 0x2BC($sp)
    ctx->pc = 0x2a5444u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x2a5448: 0xc52018  mult        $a0, $a2, $a1
    ctx->pc = 0x2a5448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a544c: 0x3041021  addu        $v0, $t8, $a0
    ctx->pc = 0x2a544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x2a5450: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a5450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5454: 0x5472fff7  bnel        $v1, $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A5454u;
    {
        const bool branch_taken_0x2a5454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2a5454) {
            ctx->pc = 0x2A5458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5454u;
            // 0x2a5458: 0x8fa402b0  lw          $a0, 0x2B0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5434;
        }
    }
    ctx->pc = 0x2A545Cu;
    // 0x2a545c: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x2a545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2a5460: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2a5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a5464: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a5464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5468: 0x5477fff2  bnel        $v1, $s7, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A5468u;
    {
        const bool branch_taken_0x2a5468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x2a5468) {
            ctx->pc = 0x2A546Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5468u;
            // 0x2a546c: 0x8fa402b0  lw          $a0, 0x2B0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5434;
        }
    }
    ctx->pc = 0x2A5470u;
    // 0x2a5470: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x2a5470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x2a5474: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2a5474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a5478: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a5478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a547c: 0x1471ffed  bne         $v1, $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A547Cu;
    {
        const bool branch_taken_0x2a547c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2A5480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A547Cu;
        // 0x2a5480: 0x8fa402b0  lw          $a0, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a547c) {
            ctx->pc = 0x2A5434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5434;
        }
    }
    ctx->pc = 0x2A5484u;
    // 0x2a5484: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A5484u;
    {
        const bool branch_taken_0x2a5484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5484u;
        // 0x2a5488: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5484) {
            ctx->pc = 0x2A5490u;
            goto label_2a5490;
        }
    }
    ctx->pc = 0x2A548Cu;
label_2a548c:
    // 0x2a548c: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x2a548cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a5490:
    // 0x2a5490: 0x12c00156  beqz        $s6, . + 4 + (0x156 << 2)
    ctx->pc = 0x2A5490u;
    {
        const bool branch_taken_0x2a5490 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5490u;
        // 0x2a5494: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5490) {
            ctx->pc = 0x2A59ECu;
            goto label_2a59ec;
        }
    }
    ctx->pc = 0x2A5498u;
    // 0x2a5498: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2a5498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a549c: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2a549cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a54a0: 0xafa40360  sw          $a0, 0x360($sp)
    ctx->pc = 0x2a54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 4));
    // 0x2a54a4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2a54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a54a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a54a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a54ac: 0x1060014f  beqz        $v1, . + 4 + (0x14F << 2)
    ctx->pc = 0x2A54ACu;
    {
        const bool branch_taken_0x2a54ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54ACu;
        // 0x2a54b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a54ac) {
            ctx->pc = 0x2A59ECu;
            goto label_2a59ec;
        }
    }
    ctx->pc = 0x2A54B4u;
    // 0x2a54b4: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x2a54b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a54b8: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2a54b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2a54bc: 0x2366018  mult        $t4, $s1, $s6
    ctx->pc = 0x2a54bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2a54c0: 0xc7ae0224  lwc1        $f14, 0x224($sp)
    ctx->pc = 0x2a54c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a54c4: 0xc7ad0228  lwc1        $f13, 0x228($sp)
    ctx->pc = 0x2a54c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a54c8: 0xc7ac0220  lwc1        $f12, 0x220($sp)
    ctx->pc = 0x2a54c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a54cc: 0x1841821  addu        $v1, $t4, $a0
    ctx->pc = 0x2a54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2a54d0: 0x24c90001  addiu       $t1, $a2, 0x1
    ctx->pc = 0x2a54d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a54d4: 0x0  nop
    ctx->pc = 0x2a54d4u;
    // NOP
label_2a54d8:
    // 0x2a54d8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a54d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a54dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a54dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a54e0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2a54e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a54e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a54e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a54e8: 0x122001a  div         $zero, $t1, $v0
    ctx->pc = 0x2a54e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a54ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A54ECu;
    {
        const bool branch_taken_0x2a54ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a54ec) {
            ctx->pc = 0x2A54F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A54ECu;
            // 0x2a54f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A54F4u;
            goto label_2a54f4;
        }
    }
    ctx->pc = 0x2A54F4u;
label_2a54f4:
    // 0x2a54f4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2a54f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2a54f8: 0x8fb802d0  lw          $t8, 0x2D0($sp)
    ctx->pc = 0x2a54f8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2a54fc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a54fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a5500: 0x3000013  mtlo        $t8
    ctx->pc = 0x2a5500u;
    ctx->lo = GPR_U64(ctx, 24);
    // 0x2a5504: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x2a5504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5508: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a5508u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a550c: 0x2810  mfhi        $a1
    ctx->pc = 0x2a550cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2a5510: 0x70563000  madd        $a2, $v0, $s6
    ctx->pc = 0x2a5510u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2a5514: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a5514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a5518: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2a5518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a551c: 0x300202d  daddu       $a0, $t8, $zero
    ctx->pc = 0x2a551cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5520: 0x800013  mtlo        $a0
    ctx->pc = 0x2a5520u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x2a5524: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a5524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5528: 0x70561000  madd        $v0, $v0, $s6
    ctx->pc = 0x2a5528u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a552c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a552cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a5530: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x2a5530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x2a5534: 0x46100032  c.eq.s      $f0, $f16
    ctx->pc = 0x2a5534u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5538: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2a5538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a553c: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x2a553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5540: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x2a5540u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a5544: 0xe7a40244  swc1        $f4, 0x244($sp)
    ctx->pc = 0x2a5544u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x2a5548: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2a5548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a554c: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x2a554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5550: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2a5550u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a5554: 0xe7a30248  swc1        $f3, 0x248($sp)
    ctx->pc = 0x2a5554u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x2a5558: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2a5558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a555c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5560: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a5560u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a5564: 0xe7a10250  swc1        $f1, 0x250($sp)
    ctx->pc = 0x2a5564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x2a5568: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x2a5568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a556c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a5570: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a5570u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a5574: 0xe7a20254  swc1        $f2, 0x254($sp)
    ctx->pc = 0x2a5574u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
    // 0x2a5578: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a5578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a557c: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x2a557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5580: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a5580u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a5584: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5584u;
    {
        const bool branch_taken_0x2a5584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5584u;
        // 0x2a5588: 0xe7a10258  swc1        $f1, 0x258($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5584) {
            ctx->pc = 0x2A55ACu;
            goto label_2a55ac;
        }
    }
    ctx->pc = 0x2A558Cu;
    // 0x2a558c: 0x46102032  c.eq.s      $f4, $f16
    ctx->pc = 0x2a558cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5590: 0x0  nop
    ctx->pc = 0x2a5590u;
    // NOP
    // 0x2a5594: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5594u;
    {
        const bool branch_taken_0x2a5594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5594u;
        // 0x2a5598: 0xc7ab0250  lwc1        $f11, 0x250($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5594) {
            ctx->pc = 0x2A55B0u;
            goto label_2a55b0;
        }
    }
    ctx->pc = 0x2A559Cu;
    // 0x2a559c: 0x46101832  c.eq.s      $f3, $f16
    ctx->pc = 0x2a559cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a55a0: 0x0  nop
    ctx->pc = 0x2a55a0u;
    // NOP
    // 0x2a55a4: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2A55A4u;
    {
        const bool branch_taken_0x2a55a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a55a4) {
            ctx->pc = 0x2A55A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A55A4u;
            // 0x2a55a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A55B0u;
            goto label_2a55b0;
        }
    }
    ctx->pc = 0x2A55ACu;
label_2a55ac:
    // 0x2a55ac: 0xc7ab0250  lwc1        $f11, 0x250($sp)
    ctx->pc = 0x2a55acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_2a55b0:
    // 0x2a55b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a55b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a55b4: 0x46015832  c.eq.s      $f11, $f1
    ctx->pc = 0x2a55b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[11], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a55b8: 0x0  nop
    ctx->pc = 0x2a55b8u;
    // NOP
    // 0x2a55bc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2A55BCu;
    {
        const bool branch_taken_0x2a55bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55BCu;
        // 0x2a55c0: 0x46005886  mov.s       $f2, $f11 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55bc) {
            ctx->pc = 0x2A55E8u;
            goto label_2a55e8;
        }
    }
    ctx->pc = 0x2A55C4u;
    // 0x2a55c4: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x2a55c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a55c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a55c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a55cc: 0x0  nop
    ctx->pc = 0x2a55ccu;
    // NOP
    // 0x2a55d0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A55D0u;
    {
        const bool branch_taken_0x2a55d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A55D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55D0u;
        // 0x2a55d4: 0xc7a00258  lwc1        $f0, 0x258($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55d0) {
            ctx->pc = 0x2A55E8u;
            goto label_2a55e8;
        }
    }
    ctx->pc = 0x2A55D8u;
    // 0x2a55d8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a55d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a55dc: 0x0  nop
    ctx->pc = 0x2a55dcu;
    // NOP
    // 0x2a55e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A55E0u;
    {
        const bool branch_taken_0x2a55e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a55e0) {
            ctx->pc = 0x2A55E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A55E0u;
            // 0x2a55e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A55E8u;
            goto label_2a55e8;
        }
    }
    ctx->pc = 0x2A55E8u;
label_2a55e8:
    // 0x2a55e8: 0x1100002b  beqz        $t0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A55E8u;
    {
        const bool branch_taken_0x2a55e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a55e8) {
            ctx->pc = 0x2A5698u;
            goto label_2a5698;
        }
    }
    ctx->pc = 0x2A55F0u;
    // 0x2a55f0: 0x54600087  bnel        $v1, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x2A55F0u;
    {
        const bool branch_taken_0x2a55f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a55f0) {
            ctx->pc = 0x2A55F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A55F0u;
            // 0x2a55f4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5810u;
            goto label_2a5810;
        }
    }
    ctx->pc = 0x2A55F8u;
    // 0x2a55f8: 0xc7a10258  lwc1        $f1, 0x258($sp)
    ctx->pc = 0x2a55f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a55fc: 0x46027142  mul.s       $f5, $f14, $f2
    ctx->pc = 0x2a55fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x2a5600: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x2a5600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5604: 0x46026902  mul.s       $f4, $f13, $f2
    ctx->pc = 0x2a5604u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x2a5608: 0x46017082  mul.s       $f2, $f14, $f1
    ctx->pc = 0x2a5608u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x2a560c: 0x460068c2  mul.s       $f3, $f13, $f0
    ctx->pc = 0x2a560cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2a5610: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2a5610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2a5614: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2a5614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2a5618: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2a5618u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2a561c: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2a561cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2a5620: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2a5620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a5624: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2a5624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2a5628: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2a5628u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x2a562c: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x2a562cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5630: 0xe7a20260  swc1        $f2, 0x260($sp)
    ctx->pc = 0x2a5630u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x2a5634: 0xe7a40264  swc1        $f4, 0x264($sp)
    ctx->pc = 0x2a5634u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
    // 0x2a5638: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A5638u;
    {
        const bool branch_taken_0x2a5638 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5638u;
        // 0x2a563c: 0xe7a00268  swc1        $f0, 0x268($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5638) {
            ctx->pc = 0x2A5644u;
            goto label_2a5644;
        }
    }
    ctx->pc = 0x2A5640u;
    // 0x2a5640: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a5640u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2a5644:
    // 0x2a5644: 0x46041836  c.le.s      $f3, $f4
    ctx->pc = 0x2a5644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5648: 0x0  nop
    ctx->pc = 0x2a5648u;
    // NOP
    // 0x2a564c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A564Cu;
    {
        const bool branch_taken_0x2a564c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A564Cu;
        // 0x2a5650: 0xe7a10260  swc1        $f1, 0x260($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a564c) {
            ctx->pc = 0x2A5658u;
            goto label_2a5658;
        }
    }
    ctx->pc = 0x2A5654u;
    // 0x2a5654: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x2a5654u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_2a5658:
    // 0x2a5658: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2a5658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a565c: 0x0  nop
    ctx->pc = 0x2a565cu;
    // NOP
    // 0x2a5660: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A5660u;
    {
        const bool branch_taken_0x2a5660 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5660u;
        // 0x2a5664: 0xe7a40264  swc1        $f4, 0x264($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5660) {
            ctx->pc = 0x2A566Cu;
            goto label_2a566c;
        }
    }
    ctx->pc = 0x2A5668u;
    // 0x2a5668: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a5668u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2a566c:
    // 0x2a566c: 0xc7828dfc  lwc1        $f2, -0x7204($gp)
    ctx->pc = 0x2a566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a5670: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2a5670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5674: 0x0  nop
    ctx->pc = 0x2a5674u;
    // NOP
    // 0x2a5678: 0x45000065  bc1f        . + 4 + (0x65 << 2)
    ctx->pc = 0x2A5678u;
    {
        const bool branch_taken_0x2a5678 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5678u;
        // 0x2a567c: 0xe7a00268  swc1        $f0, 0x268($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5678) {
            ctx->pc = 0x2A5810u;
            goto label_2a5810;
        }
    }
    ctx->pc = 0x2A5680u;
    // 0x2a5680: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x2a5680u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5684: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x2A5684u;
    {
        const bool branch_taken_0x2a5684 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5684) {
            ctx->pc = 0x2A5810u;
            goto label_2a5810;
        }
    }
    ctx->pc = 0x2A568Cu;
    // 0x2a568c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2a568cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5690: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2A5690u;
    {
        const bool branch_taken_0x2a5690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5690) {
            ctx->pc = 0x2A5808u;
            goto label_2a5808;
        }
    }
    ctx->pc = 0x2A5698u;
label_2a5698:
    // 0x2a5698: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2A5698u;
    {
        const bool branch_taken_0x2a5698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5698u;
        // 0x2a569c: 0xc7a40248  lwc1        $f4, 0x248($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5698) {
            ctx->pc = 0x2A5740u;
            goto label_2a5740;
        }
    }
    ctx->pc = 0x2A56A0u;
    // 0x2a56a0: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x2a56a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a56a4: 0x46047042  mul.s       $f1, $f14, $f4
    ctx->pc = 0x2a56a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x2a56a8: 0xc7a20240  lwc1        $f2, 0x240($sp)
    ctx->pc = 0x2a56a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a56ac: 0x460068c2  mul.s       $f3, $f13, $f0
    ctx->pc = 0x2a56acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2a56b0: 0x46027142  mul.s       $f5, $f14, $f2
    ctx->pc = 0x2a56b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x2a56b4: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x2a56b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2a56b8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a56b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a56bc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2a56bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2a56c0: 0x46026882  mul.s       $f2, $f13, $f2
    ctx->pc = 0x2a56c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x2a56c4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2a56c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2a56c8: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2a56c8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2a56cc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2a56ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2a56d0: 0xe7a10260  swc1        $f1, 0x260($sp)
    ctx->pc = 0x2a56d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x2a56d4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2a56d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2a56d8: 0x46033036  c.le.s      $f6, $f3
    ctx->pc = 0x2a56d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a56dc: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x2a56dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x2a56e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A56E0u;
    {
        const bool branch_taken_0x2a56e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56E0u;
        // 0x2a56e4: 0xe7a20264  swc1        $f2, 0x264($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a56e0) {
            ctx->pc = 0x2A56ECu;
            goto label_2a56ec;
        }
    }
    ctx->pc = 0x2A56E8u;
    // 0x2a56e8: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2a56e8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_2a56ec:
    // 0x2a56ec: 0x46023036  c.le.s      $f6, $f2
    ctx->pc = 0x2a56ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a56f0: 0x0  nop
    ctx->pc = 0x2a56f0u;
    // NOP
    // 0x2a56f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A56F4u;
    {
        const bool branch_taken_0x2a56f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56F4u;
        // 0x2a56f8: 0xe7a30260  swc1        $f3, 0x260($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a56f4) {
            ctx->pc = 0x2A5700u;
            goto label_2a5700;
        }
    }
    ctx->pc = 0x2A56FCu;
    // 0x2a56fc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2a56fcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2a5700:
    // 0x2a5700: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x2a5700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5704: 0x0  nop
    ctx->pc = 0x2a5704u;
    // NOP
    // 0x2a5708: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A5708u;
    {
        const bool branch_taken_0x2a5708 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5708u;
        // 0x2a570c: 0xe7a20264  swc1        $f2, 0x264($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5708) {
            ctx->pc = 0x2A5714u;
            goto label_2a5714;
        }
    }
    ctx->pc = 0x2A5710u;
    // 0x2a5710: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a5710u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2a5714:
    // 0x2a5714: 0xc7818e00  lwc1        $f1, -0x7200($gp)
    ctx->pc = 0x2a5714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5718: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x2a5718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a571c: 0x0  nop
    ctx->pc = 0x2a571cu;
    // NOP
    // 0x2a5720: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x2A5720u;
    {
        const bool branch_taken_0x2a5720 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5720u;
        // 0x2a5724: 0xe7a00268  swc1        $f0, 0x268($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5720) {
            ctx->pc = 0x2A5810u;
            goto label_2a5810;
        }
    }
    ctx->pc = 0x2A5728u;
    // 0x2a5728: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2a5728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a572c: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x2A572Cu;
    {
        const bool branch_taken_0x2a572c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a572c) {
            ctx->pc = 0x2A5810u;
            goto label_2a5810;
        }
    }
    ctx->pc = 0x2A5734u;
    // 0x2a5734: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a5734u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5738: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2A5738u;
    {
        const bool branch_taken_0x2a5738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5738) {
            ctx->pc = 0x2A5808u;
            goto label_2a5808;
        }
    }
    ctx->pc = 0x2A5740u;
label_2a5740:
    // 0x2a5740: 0xc7a90244  lwc1        $f9, 0x244($sp)
    ctx->pc = 0x2a5740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a5744: 0xc7aa0258  lwc1        $f10, 0x258($sp)
    ctx->pc = 0x2a5744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a5748: 0xc7a80248  lwc1        $f8, 0x248($sp)
    ctx->pc = 0x2a5748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a574c: 0x46024942  mul.s       $f5, $f9, $f2
    ctx->pc = 0x2a574cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x2a5750: 0xc7a70254  lwc1        $f7, 0x254($sp)
    ctx->pc = 0x2a5750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a5754: 0x460a4802  mul.s       $f0, $f9, $f10
    ctx->pc = 0x2a5754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x2a5758: 0xc7a60240  lwc1        $f6, 0x240($sp)
    ctx->pc = 0x2a5758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a575c: 0x46024102  mul.s       $f4, $f8, $f2
    ctx->pc = 0x2a575cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2a5760: 0x46074042  mul.s       $f1, $f8, $f7
    ctx->pc = 0x2a5760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x2a5764: 0x460730c2  mul.s       $f3, $f6, $f7
    ctx->pc = 0x2a5764u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2a5768: 0x460a3082  mul.s       $f2, $f6, $f10
    ctx->pc = 0x2a5768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x2a576c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a576cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a5770: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x2a5770u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x2a5774: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2a5774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a5778: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x2a5778u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2a577c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2a577cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2a5780: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x2a5780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5784: 0xe7a00260  swc1        $f0, 0x260($sp)
    ctx->pc = 0x2a5784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x2a5788: 0xe7a30268  swc1        $f3, 0x268($sp)
    ctx->pc = 0x2a5788u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x2a578c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A578Cu;
    {
        const bool branch_taken_0x2a578c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A578Cu;
        // 0x2a5790: 0xe7a40264  swc1        $f4, 0x264($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a578c) {
            ctx->pc = 0x2A5798u;
            goto label_2a5798;
        }
    }
    ctx->pc = 0x2A5794u;
    // 0x2a5794: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a5794u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2a5798:
    // 0x2a5798: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x2a5798u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a579c: 0x0  nop
    ctx->pc = 0x2a579cu;
    // NOP
    // 0x2a57a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A57A0u;
    {
        const bool branch_taken_0x2a57a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A57A0u;
        // 0x2a57a4: 0xe7a10260  swc1        $f1, 0x260($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a57a0) {
            ctx->pc = 0x2A57ACu;
            goto label_2a57ac;
        }
    }
    ctx->pc = 0x2A57A8u;
    // 0x2a57a8: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x2a57a8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_2a57ac:
    // 0x2a57ac: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x2a57acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a57b0: 0x0  nop
    ctx->pc = 0x2a57b0u;
    // NOP
    // 0x2a57b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A57B4u;
    {
        const bool branch_taken_0x2a57b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A57B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A57B4u;
        // 0x2a57b8: 0xe7a40264  swc1        $f4, 0x264($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a57b4) {
            ctx->pc = 0x2A57C0u;
            goto label_2a57c0;
        }
    }
    ctx->pc = 0x2A57BCu;
    // 0x2a57bc: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2a57bcu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_2a57c0:
    // 0x2a57c0: 0xc7808e04  lwc1        $f0, -0x71FC($gp)
    ctx->pc = 0x2a57c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a57c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a57c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a57c8: 0x0  nop
    ctx->pc = 0x2a57c8u;
    // NOP
    // 0x2a57cc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2A57CCu;
    {
        const bool branch_taken_0x2a57cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A57CCu;
        // 0x2a57d0: 0xe7a30268  swc1        $f3, 0x268($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a57cc) {
            ctx->pc = 0x2A5810u;
            goto label_2a5810;
        }
    }
    ctx->pc = 0x2A57D4u;
    // 0x2a57d4: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x2a57d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a57d8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2A57D8u;
    {
        const bool branch_taken_0x2a57d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a57d8) {
            ctx->pc = 0x2A5810u;
            goto label_2a5810;
        }
    }
    ctx->pc = 0x2A57E0u;
    // 0x2a57e0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2a57e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a57e4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2A57E4u;
    {
        const bool branch_taken_0x2a57e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a57e4) {
            ctx->pc = 0x2A5810u;
            goto label_2a5810;
        }
    }
    ctx->pc = 0x2A57ECu;
    // 0x2a57ec: 0x460b3002  mul.s       $f0, $f6, $f11
    ctx->pc = 0x2a57ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x2a57f0: 0x46074842  mul.s       $f1, $f9, $f7
    ctx->pc = 0x2a57f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x2a57f4: 0x460a4082  mul.s       $f2, $f8, $f10
    ctx->pc = 0x2a57f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x2a57f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a57f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a57fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a57fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a5800: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x2a5800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5804: 0x0  nop
    ctx->pc = 0x2a5804u;
    // NOP
label_2a5808:
    // 0x2a5808: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A5808u;
    {
        const bool branch_taken_0x2a5808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5808) {
            ctx->pc = 0x2A580Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5808u;
            // 0x2a580c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5810u;
            goto label_2a5810;
        }
    }
    ctx->pc = 0x2A5810u;
label_2a5810:
    // 0x2a5810: 0x1140000b  beqz        $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x2A5810u;
    {
        const bool branch_taken_0x2a5810 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5810u;
        // 0x2a5814: 0x8fa40360  lw          $a0, 0x360($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5810) {
            ctx->pc = 0x2A5840u;
            goto label_2a5840;
        }
    }
    ctx->pc = 0x2A5818u;
    // 0x2a5818: 0xc7808e08  lwc1        $f0, -0x71F8($gp)
    ctx->pc = 0x2a5818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a581c: 0x460f0036  c.le.s      $f0, $f15
    ctx->pc = 0x2a581cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5820: 0x0  nop
    ctx->pc = 0x2a5820u;
    // NOP
    // 0x2a5824: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2A5824u;
    {
        const bool branch_taken_0x2a5824 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5824u;
        // 0x2a5828: 0x8fa502b0  lw          $a1, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5824) {
            ctx->pc = 0x2A5868u;
            goto label_2a5868;
        }
    }
    ctx->pc = 0x2A582Cu;
    // 0x2a582c: 0xc7808e0c  lwc1        $f0, -0x71F4($gp)
    ctx->pc = 0x2a582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5830: 0x460f0036  c.le.s      $f0, $f15
    ctx->pc = 0x2a5830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5834: 0x0  nop
    ctx->pc = 0x2a5834u;
    // NOP
    // 0x2a5838: 0x45030025  bc1tl       . + 4 + (0x25 << 2)
    ctx->pc = 0x2A5838u;
    {
        const bool branch_taken_0x2a5838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5838) {
            ctx->pc = 0x2A583Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5838u;
            // 0x2a583c: 0xc4c20000  lwc1        $f2, 0x0($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A58D0u;
            goto label_2a58d0;
        }
    }
    ctx->pc = 0x2A5840u;
label_2a5840:
    // 0x2a5840: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2a5840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5844: 0x1841821  addu        $v1, $t4, $a0
    ctx->pc = 0x2a5844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2a5848: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a5848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a584c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2a584cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a5850: 0x1440ff21  bnez        $v0, . + 4 + (-0xDF << 2)
    ctx->pc = 0x2A5850u;
    {
        const bool branch_taken_0x2a5850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5850u;
        // 0x2a5854: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5850) {
            ctx->pc = 0x2A54D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a54d8;
        }
    }
    ctx->pc = 0x2A5858u;
    // 0x2a5858: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2A5858u;
    {
        const bool branch_taken_0x2a5858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5858u;
        // 0x2a585c: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5858) {
            ctx->pc = 0x2A59F0u;
            goto label_2a59f0;
        }
    }
    ctx->pc = 0x2A5860u;
label_2a5860:
    // 0x2a5860: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2A5860u;
    {
        const bool branch_taken_0x2a5860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5860u;
        // 0x2a5864: 0x26270001  addiu       $a3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5860) {
            ctx->pc = 0x2A59ECu;
            goto label_2a59ec;
        }
    }
    ctx->pc = 0x2A5868u;
label_2a5868:
    // 0x2a5868: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2a5868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a586c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a586cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a5870: 0xafa502b0  sw          $a1, 0x2B0($sp)
    ctx->pc = 0x2a5870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 5));
    // 0x2a5874: 0xadb20000  sw          $s2, 0x0($t5)
    ctx->pc = 0x2a5874u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 18));
    // 0x2a5878: 0xe7200000  swc1        $f0, 0x0($t9)
    ctx->pc = 0x2a5878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
    // 0x2a587c: 0x25ad0024  addiu       $t5, $t5, 0x24
    ctx->pc = 0x2a587cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 36));
    // 0x2a5880: 0xadd70000  sw          $s7, 0x0($t6)
    ctx->pc = 0x2a5880u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 23));
    // 0x2a5884: 0x27390024  addiu       $t9, $t9, 0x24
    ctx->pc = 0x2a5884u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 36));
    // 0x2a5888: 0x25ce0024  addiu       $t6, $t6, 0x24
    ctx->pc = 0x2a5888u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 36));
    // 0x2a588c: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2a588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5890: 0xadf10000  sw          $s1, 0x0($t7)
    ctx->pc = 0x2a5890u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 17));
    // 0x2a5894: 0x25ef0024  addiu       $t7, $t7, 0x24
    ctx->pc = 0x2a5894u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 36));
    // 0x2a5898: 0x8fa602f4  lw          $a2, 0x2F4($sp)
    ctx->pc = 0x2a5898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x2a589c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2a589cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a58a0: 0x8fa602f4  lw          $a2, 0x2F4($sp)
    ctx->pc = 0x2a58a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x2a58a4: 0x8fb802f0  lw          $t8, 0x2F0($sp)
    ctx->pc = 0x2a58a4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2a58a8: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2a58a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a58ac: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x2a58acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x2a58b0: 0xafa602f4  sw          $a2, 0x2F4($sp)
    ctx->pc = 0x2a58b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 6));
    // 0x2a58b4: 0xe7000000  swc1        $f0, 0x0($t8)
    ctx->pc = 0x2a58b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x2a58b8: 0x8fb802f0  lw          $t8, 0x2F0($sp)
    ctx->pc = 0x2a58b8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2a58bc: 0x8fa202ec  lw          $v0, 0x2EC($sp)
    ctx->pc = 0x2a58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
    // 0x2a58c0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2a58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2a58c4: 0x27180024  addiu       $t8, $t8, 0x24
    ctx->pc = 0x2a58c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 36));
    // 0x2a58c8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2A58C8u;
    {
        const bool branch_taken_0x2a58c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A58CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A58C8u;
        // 0x2a58cc: 0xc7a00230  lwc1        $f0, 0x230($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a58c8) {
            ctx->pc = 0x2A59A4u;
            goto label_2a59a4;
        }
    }
    ctx->pc = 0x2A58D0u;
label_2a58d0:
    // 0x2a58d0: 0xc7a601e0  lwc1        $f6, 0x1E0($sp)
    ctx->pc = 0x2a58d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a58d4: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x2a58d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2a58d8: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2a58d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2a58dc: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x2a58dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a58e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a58e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a58e4: 0xc7a50230  lwc1        $f5, 0x230($sp)
    ctx->pc = 0x2a58e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a58e8: 0xafa502b0  sw          $a1, 0x2B0($sp)
    ctx->pc = 0x2a58e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 5));
    // 0x2a58ec: 0xe7a20270  swc1        $f2, 0x270($sp)
    ctx->pc = 0x2a58ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x2a58f0: 0xc7a301e8  lwc1        $f3, 0x1E8($sp)
    ctx->pc = 0x2a58f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a58f4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2a58f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2a58f8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2a58f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a58fc: 0xc7a70234  lwc1        $f7, 0x234($sp)
    ctx->pc = 0x2a58fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a5900: 0xc7a40238  lwc1        $f4, 0x238($sp)
    ctx->pc = 0x2a5900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a5904: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a5904u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a5908: 0xadb20000  sw          $s2, 0x0($t5)
    ctx->pc = 0x2a5908u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 18));
    // 0x2a590c: 0xadd70000  sw          $s7, 0x0($t6)
    ctx->pc = 0x2a590cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 23));
    // 0x2a5910: 0x25ad0024  addiu       $t5, $t5, 0x24
    ctx->pc = 0x2a5910u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 36));
    // 0x2a5914: 0xadf10000  sw          $s1, 0x0($t7)
    ctx->pc = 0x2a5914u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 17));
    // 0x2a5918: 0x25ce0024  addiu       $t6, $t6, 0x24
    ctx->pc = 0x2a5918u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 36));
    // 0x2a591c: 0xe7a10274  swc1        $f1, 0x274($sp)
    ctx->pc = 0x2a591cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x2a5920: 0x25ef0024  addiu       $t7, $t7, 0x24
    ctx->pc = 0x2a5920u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 36));
    // 0x2a5924: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2a5924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2a5928: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2a5928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a592c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2a592cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2a5930: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2a5930u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2a5934: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2a5934u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2a5938: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x2a5938u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2a593c: 0xe7a30278  swc1        $f3, 0x278($sp)
    ctx->pc = 0x2a593cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x2a5940: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2a5940u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2a5944: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2a5944u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2a5948: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x2a5948u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2a594c: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x2a594cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2a5950: 0xe7260000  swc1        $f6, 0x0($t9)
    ctx->pc = 0x2a5950u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
    // 0x2a5954: 0x27390024  addiu       $t9, $t9, 0x24
    ctx->pc = 0x2a5954u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 36));
    // 0x2a5958: 0xc7a00234  lwc1        $f0, 0x234($sp)
    ctx->pc = 0x2a5958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a595c: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x2a595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5960: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a5960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a5964: 0x8fa602f4  lw          $a2, 0x2F4($sp)
    ctx->pc = 0x2a5964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x2a5968: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a5968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a596c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2a596cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a5970: 0x8fa602f4  lw          $a2, 0x2F4($sp)
    ctx->pc = 0x2a5970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x2a5974: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x2a5974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5978: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2a5978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a597c: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x2a597cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x2a5980: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a5980u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a5984: 0x8fb802f0  lw          $t8, 0x2F0($sp)
    ctx->pc = 0x2a5984u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2a5988: 0xafa602f4  sw          $a2, 0x2F4($sp)
    ctx->pc = 0x2a5988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 6));
    // 0x2a598c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a598cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a5990: 0xe7000000  swc1        $f0, 0x0($t8)
    ctx->pc = 0x2a5990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x2a5994: 0x8fb802f0  lw          $t8, 0x2F0($sp)
    ctx->pc = 0x2a5994u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2a5998: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x2a5998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a599c: 0x8fa202ec  lw          $v0, 0x2EC($sp)
    ctx->pc = 0x2a599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
    // 0x2a59a0: 0x27180024  addiu       $t8, $t8, 0x24
    ctx->pc = 0x2a59a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 36));
label_2a59a4:
    // 0x2a59a4: 0xafb802f0  sw          $t8, 0x2F0($sp)
    ctx->pc = 0x2a59a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 24));
    // 0x2a59a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a59a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a59ac: 0x8fa202ec  lw          $v0, 0x2EC($sp)
    ctx->pc = 0x2a59acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
    // 0x2a59b0: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x2a59b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2a59b4: 0xc7a00234  lwc1        $f0, 0x234($sp)
    ctx->pc = 0x2a59b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a59b8: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x2a59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2a59bc: 0xafa202ec  sw          $v0, 0x2EC($sp)
    ctx->pc = 0x2a59bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
    // 0x2a59c0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a59c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a59c4: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x2a59c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2a59c8: 0x8fa402e4  lw          $a0, 0x2E4($sp)
    ctx->pc = 0x2a59c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
    // 0x2a59cc: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x2a59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x2a59d0: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2a59d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a59d4: 0xafa302e8  sw          $v1, 0x2E8($sp)
    ctx->pc = 0x2a59d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 3));
    // 0x2a59d8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2a59d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2a59dc: 0x8fa402e4  lw          $a0, 0x2E4($sp)
    ctx->pc = 0x2a59dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
    // 0x2a59e0: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x2a59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x2a59e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A59E4u;
    {
        const bool branch_taken_0x2a59e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A59E4u;
        // 0x2a59e8: 0xafa402e4  sw          $a0, 0x2E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a59e4) {
            ctx->pc = 0x2A59F0u;
            goto label_2a59f0;
        }
    }
    ctx->pc = 0x2A59ECu;
label_2a59ec:
    // 0x2a59ec: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2a59ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a59f0:
    // 0x2a59f0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a59f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59f4: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x2a59f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a59f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A59F8u;
    {
        const bool branch_taken_0x2a59f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A59F8u;
        // 0x2a59fc: 0x8fa602b0  lw          $a2, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a59f8) {
            ctx->pc = 0x2A5A20u;
            goto label_2a5a20;
        }
    }
    ctx->pc = 0x2A5A00u;
    // 0x2a5a00: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x2a5a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a5a04: 0x1440fe1a  bnez        $v0, . + 4 + (-0x1E6 << 2)
    ctx->pc = 0x2A5A04u;
    {
        const bool branch_taken_0x2a5a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A04u;
        // 0x2a5a08: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a04) {
            ctx->pc = 0x2A5270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5270;
        }
    }
    ctx->pc = 0x2A5A0Cu;
    // 0x2a5a0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5A0Cu;
    {
        const bool branch_taken_0x2a5a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A0Cu;
        // 0x2a5a10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a0c) {
            ctx->pc = 0x2A5A24u;
            goto label_2a5a24;
        }
    }
    ctx->pc = 0x2A5A14u;
label_2a5a14:
    // 0x2a5a14: 0x24950018  addiu       $s5, $a0, 0x18
    ctx->pc = 0x2a5a14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2a5a18: 0x26140024  addiu       $s4, $s0, 0x24
    ctx->pc = 0x2a5a18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2a5a1c: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x2a5a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2a5a20:
    // 0x2a5a20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a5a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a24:
    // 0x2a5a24: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2a5a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a28: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2a5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a5a2c: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A5A2Cu;
    {
        const bool branch_taken_0x2a5a2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A2Cu;
        // 0x2a5a30: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a2c) {
            ctx->pc = 0x2A5A5Cu;
            goto label_2a5a5c;
        }
    }
    ctx->pc = 0x2A5A34u;
    // 0x2a5a34: 0x8fb802b0  lw          $t8, 0x2B0($sp)
    ctx->pc = 0x2a5a34u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2a5a38: 0x2b06000a  slti        $a2, $t8, 0xA
    ctx->pc = 0x2a5a38u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a5a3c: 0x14c0fde0  bnez        $a2, . + 4 + (-0x220 << 2)
    ctx->pc = 0x2A5A3Cu;
    {
        const bool branch_taken_0x2a5a3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A3Cu;
        // 0x2a5a40: 0xc7a10200  lwc1        $f1, 0x200($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a3c) {
            ctx->pc = 0x2A51C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a51c0;
        }
    }
    ctx->pc = 0x2A5A44u;
    // 0x2a5a44: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x2a5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2a5a48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5A48u;
    {
        const bool branch_taken_0x2a5a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A48u;
        // 0x2a5a4c: 0x8c490000  lw          $t1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a48) {
            ctx->pc = 0x2A5A64u;
            goto label_2a5a64;
        }
    }
    ctx->pc = 0x2A5A50u;
label_2a5a50:
    // 0x2a5a50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a5a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2a5a54:
    // 0x2a5a54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5A54u;
    {
        const bool branch_taken_0x2a5a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A54u;
        // 0x2a5a58: 0xafb202dc  sw          $s2, 0x2DC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a54) {
            ctx->pc = 0x2A5A64u;
            goto label_2a5a64;
        }
    }
    ctx->pc = 0x2A5A5Cu;
label_2a5a5c:
    // 0x2a5a5c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x2a5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2a5a60: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2a5a60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a5a64:
    // 0x2a5a64: 0x8fb202dc  lw          $s2, 0x2DC($sp)
    ctx->pc = 0x2a5a64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x2a5a68: 0x249102a  slt         $v0, $s2, $t1
    ctx->pc = 0x2a5a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2a5a6c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A5A6Cu;
    {
        const bool branch_taken_0x2a5a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A6Cu;
        // 0x2a5a70: 0x8fa402b0  lw          $a0, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a6c) {
            ctx->pc = 0x2A5AA4u;
            goto label_2a5aa4;
        }
    }
    ctx->pc = 0x2A5A74u;
    // 0x2a5a74: 0x2888000a  slti        $t0, $a0, 0xA
    ctx->pc = 0x2a5a74u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a5a78: 0x1500fdb1  bnez        $t0, . + 4 + (-0x24F << 2)
    ctx->pc = 0x2A5A78u;
    {
        const bool branch_taken_0x2a5a78 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A78u;
        // 0x2a5a7c: 0x8fa4029c  lw          $a0, 0x29C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a78) {
            ctx->pc = 0x2A5140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5140;
        }
    }
    ctx->pc = 0x2A5A80u;
    // 0x2a5a80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5A80u;
    {
        const bool branch_taken_0x2a5a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A80u;
        // 0x2a5a84: 0x8fb802d8  lw          $t8, 0x2D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a80) {
            ctx->pc = 0x2A5AA8u;
            goto label_2a5aa8;
        }
    }
    ctx->pc = 0x2A5A88u;
label_2a5a88:
    // 0x2a5a88: 0x8fa502c8  lw          $a1, 0x2C8($sp)
    ctx->pc = 0x2a5a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2a5a8c: 0x28a50008  slti        $a1, $a1, 0x8
    ctx->pc = 0x2a5a8cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a5a90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5A90u;
    {
        const bool branch_taken_0x2a5a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A90u;
        // 0x2a5a94: 0xafa502d8  sw          $a1, 0x2D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a90) {
            ctx->pc = 0x2A5AA4u;
            goto label_2a5aa4;
        }
    }
    ctx->pc = 0x2A5A98u;
label_2a5a98:
    // 0x2a5a98: 0x8fa602c8  lw          $a2, 0x2C8($sp)
    ctx->pc = 0x2a5a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2a5a9c: 0x28c60008  slti        $a2, $a2, 0x8
    ctx->pc = 0x2a5a9cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a5aa0: 0xafa602d8  sw          $a2, 0x2D8($sp)
    ctx->pc = 0x2a5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 6));
label_2a5aa4:
    // 0x2a5aa4: 0x8fb802d8  lw          $t8, 0x2D8($sp)
    ctx->pc = 0x2a5aa4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_2a5aa8:
    // 0x2a5aa8: 0x1300000b  beqz        $t8, . + 4 + (0xB << 2)
    ctx->pc = 0x2A5AA8u;
    {
        const bool branch_taken_0x2a5aa8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5AA8u;
        // 0x2a5aac: 0x8fa302c8  lw          $v1, 0x2C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5aa8) {
            ctx->pc = 0x2A5AD8u;
            goto label_2a5ad8;
        }
    }
    ctx->pc = 0x2A5AB0u;
    // 0x2a5ab0: 0x8fa402d4  lw          $a0, 0x2D4($sp)
    ctx->pc = 0x2a5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2a5ab4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a5ab8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a5ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5abc: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2a5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2a5ac0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a5ac4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5AC4u;
    {
        const bool branch_taken_0x2a5ac4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5AC4u;
        // 0x2a5ac8: 0x8fa502b0  lw          $a1, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ac4) {
            ctx->pc = 0x2A5AD8u;
            goto label_2a5ad8;
        }
    }
    ctx->pc = 0x2A5ACCu;
    // 0x2a5acc: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x2a5accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a5ad0: 0x1440fd4b  bnez        $v0, . + 4 + (-0x2B5 << 2)
    ctx->pc = 0x2A5AD0u;
    {
        const bool branch_taken_0x2a5ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5AD0u;
        // 0x2a5ad4: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ad0) {
            ctx->pc = 0x2A5000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5000;
        }
    }
    ctx->pc = 0x2A5AD8u;
label_2a5ad8:
    // 0x2a5ad8: 0x8fa602ac  lw          $a2, 0x2AC($sp)
    ctx->pc = 0x2a5ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x2a5adc: 0x8fb802b0  lw          $t8, 0x2B0($sp)
    ctx->pc = 0x2a5adcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2a5ae0: 0xd8102a  slt         $v0, $a2, $t8
    ctx->pc = 0x2a5ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x2a5ae4: 0x1440fcd8  bnez        $v0, . + 4 + (-0x328 << 2)
    ctx->pc = 0x2A5AE4u;
    {
        const bool branch_taken_0x2a5ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5AE4u;
        // 0x2a5ae8: 0x8fa402c0  lw          $a0, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ae4) {
            ctx->pc = 0x2A4E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4e48;
        }
    }
    ctx->pc = 0x2A5AECu;
label_2a5aec:
    // 0x2a5aec: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x2a5aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2a5af0: 0xdfbe03f0  ld          $fp, 0x3F0($sp)
    ctx->pc = 0x2a5af0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x2a5af4: 0xdfb703e0  ld          $s7, 0x3E0($sp)
    ctx->pc = 0x2a5af4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x2a5af8: 0xdfb603d0  ld          $s6, 0x3D0($sp)
    ctx->pc = 0x2a5af8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x2a5afc: 0xdfb503c0  ld          $s5, 0x3C0($sp)
    ctx->pc = 0x2a5afcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x2a5b00: 0xdfb403b0  ld          $s4, 0x3B0($sp)
    ctx->pc = 0x2a5b00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x2a5b04: 0xdfb303a0  ld          $s3, 0x3A0($sp)
    ctx->pc = 0x2a5b04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x2a5b08: 0xdfb20390  ld          $s2, 0x390($sp)
    ctx->pc = 0x2a5b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x2a5b0c: 0xdfb10380  ld          $s1, 0x380($sp)
    ctx->pc = 0x2a5b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x2a5b10: 0xdfb00370  ld          $s0, 0x370($sp)
    ctx->pc = 0x2a5b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x2a5b14: 0xc7b40410  lwc1        $f20, 0x410($sp)
    ctx->pc = 0x2a5b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a5b18: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B18u;
        // 0x2a5b1c: 0x27bd0420  addiu       $sp, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5B20u;
}
