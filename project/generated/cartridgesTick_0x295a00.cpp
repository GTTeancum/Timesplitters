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

// Function: cartridgesTick
// Address: 0x295a00 - 0x295dd0
void cartridgesTick_0x295a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cartridgesTick_0x295a00");
#endif

    switch (ctx->pc) {
        case 0x295a78u: goto label_295a78;
        case 0x295a90u: goto label_295a90;
        case 0x295b04u: goto label_295b04;
        case 0x295b4cu: goto label_295b4c;
        case 0x295bf8u: goto label_295bf8;
        case 0x295c78u: goto label_295c78;
        case 0x295c88u: goto label_295c88;
        case 0x295cfcu: goto label_295cfc;
        case 0x295d14u: goto label_295d14;
        default: break;
    }

    ctx->pc = 0x295a00u;

    // 0x295a00: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x295a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x295a04: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x295a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x295a08: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x295a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x295a0c: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x295a0cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x295a10: 0x245692c0  addiu       $s6, $v0, -0x6D40
    ctx->pc = 0x295a10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x295a14: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x295a14u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x295a18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x295a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a1c: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x295a1cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x295a20: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x295a20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x295a24: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x295a24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x295a28: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x295a28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x295a2c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x295a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x295a30: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x295a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x295a34: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x295a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x295a38: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x295a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x295a3c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x295a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x295a40: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x295a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x295a44: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x295a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x295a48: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x295a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x295a4c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x295a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x295a50: 0xc7958c7c  lwc1        $f21, -0x7384($gp)
    ctx->pc = 0x295a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x295a54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x295a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x295a58: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x295a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x295a5c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x295a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x295a60: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x295a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x295a64: 0xc7978c80  lwc1        $f23, -0x7380($gp)
    ctx->pc = 0x295a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x295a68: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x295a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x295a6c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x295a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x295a70: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x295a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x295a74: 0x8ec303c4  lw          $v1, 0x3C4($s6)
    ctx->pc = 0x295a74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x369684u));
label_295a78:
    // 0x295a78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x295a78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a7c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x295a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x295a80: 0x186000bd  blez        $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x295A80u;
    {
        const bool branch_taken_0x295a80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x295A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A80u;
        // 0x295a84: 0x8ed503c0  lw          $s5, 0x3C0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a80) {
            ctx->pc = 0x295D78u;
            goto label_295d78;
        }
    }
    ctx->pc = 0x295A88u;
    // 0x295a88: 0x245e0001  addiu       $fp, $v0, 0x1
    ctx->pc = 0x295a88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x295a8c: 0x24140060  addiu       $s4, $zero, 0x60
    ctx->pc = 0x295a8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_295a90:
    // 0x295a90: 0x2b41018  mult        $v0, $s5, $s4
    ctx->pc = 0x295a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x295a94: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x295a94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x295a98: 0x568821  addu        $s1, $v0, $s6
    ctx->pc = 0x295a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x295a9c: 0x2aa2000a  slti        $v0, $s5, 0xA
    ctx->pc = 0x295a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x295aa0: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x295aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x295aa4: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x295aa4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x295aa8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x295aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x295aac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x295AACu;
    {
        const bool branch_taken_0x295aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295AACu;
        // 0x295ab0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295aac) {
            ctx->pc = 0x295AC8u;
            goto label_295ac8;
        }
    }
    ctx->pc = 0x295AB4u;
    // 0x295ab4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x295ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x295ab8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x295ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x295abc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x295abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x295ac0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x295ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x295ac4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x295ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_295ac8:
    // 0x295ac8: 0x8e370050  lw          $s7, 0x50($s1)
    ctx->pc = 0x295ac8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x295acc: 0x2ae20064  slti        $v0, $s7, 0x64
    ctx->pc = 0x295accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x295ad0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x295AD0u;
    {
        const bool branch_taken_0x295ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295ad0) {
            ctx->pc = 0x295AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295AD0u;
            // 0x295ad4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295B30u;
            goto label_295b30;
        }
    }
    ctx->pc = 0x295AD8u;
    // 0x295ad8: 0x8ec503c0  lw          $a1, 0x3C0($s6)
    ctx->pc = 0x295ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 960)));
    // 0x295adc: 0x8ec203c4  lw          $v0, 0x3C4($s6)
    ctx->pc = 0x295adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 964)));
    // 0x295ae0: 0xb42018  mult        $a0, $a1, $s4
    ctx->pc = 0x295ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295ae4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x295ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x295ae8: 0xaec203c4  sw          $v0, 0x3C4($s6)
    ctx->pc = 0x295ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 964), GPR_U32(ctx, 2));
    // 0x295aec: 0x961821  addu        $v1, $a0, $s6
    ctx->pc = 0x295aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x295af0: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x295af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x295af4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x295AF4u;
    {
        const bool branch_taken_0x295af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x295AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295AF4u;
        // 0x295af8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295af4) {
            ctx->pc = 0x295B18u;
            goto label_295b18;
        }
    }
    ctx->pc = 0x295AFCu;
    // 0x295afc: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x295AFCu;
    SET_GPR_U32(ctx, 31, 0x295B04u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x295AFCu, 0x295B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B04u;
label_295b04:
    // 0x295b04: 0x8ec503c0  lw          $a1, 0x3C0($s6)
    ctx->pc = 0x295b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 960)));
    // 0x295b08: 0xb41818  mult        $v1, $a1, $s4
    ctx->pc = 0x295b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x295b0c: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x295b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x295b10: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x295b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x295b14: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x295b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_295b18:
    // 0x295b18: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x295b18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x295b1c: 0x1460008f  bnez        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x295B1Cu;
    {
        const bool branch_taken_0x295b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B1Cu;
        // 0x295b20: 0xaec203c0  sw          $v0, 0x3C0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b1c) {
            ctx->pc = 0x295D5Cu;
            goto label_295d5c;
        }
    }
    ctx->pc = 0x295B24u;
    // 0x295b24: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x295b24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x295b28: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x295B28u;
    {
        const bool branch_taken_0x295b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B28u;
        // 0x295b2c: 0xaec003c0  sw          $zero, 0x3C0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b28) {
            ctx->pc = 0x295D60u;
            goto label_295d60;
        }
    }
    ctx->pc = 0x295B30u;
label_295b30:
    // 0x295b30: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x295B30u;
    {
        const bool branch_taken_0x295b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B30u;
        // 0x295b34: 0xc785b468  lwc1        $f5, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b30) {
            ctx->pc = 0x295B6Cu;
            goto label_295b6c;
        }
    }
    ctx->pc = 0x295B38u;
    // 0x295b38: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x295b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x295b3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295b40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x295b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295b44: 0xc09829e  jal         func_260A78
    ctx->pc = 0x295B44u;
    SET_GPR_U32(ctx, 31, 0x295B4Cu);
    ctx->pc = 0x295B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B44u;
    // 0x295b48: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x295B44u, 0x295B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B4Cu;
label_295b4c:
    // 0x295b4c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x295b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x295b50: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x295b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x295b54: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x295b54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x295b58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295b5c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x295b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x295b60: 0x8e370050  lw          $s7, 0x50($s1)
    ctx->pc = 0x295b60u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x295b64: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x295B64u;
    {
        const bool branch_taken_0x295b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B64u;
        // 0x295b68: 0x8f94b460  lw          $s4, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b64) {
            ctx->pc = 0x295CC0u;
            goto label_295cc0;
        }
    }
    ctx->pc = 0x295B6Cu;
label_295b6c:
    // 0x295b6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x295b6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b70: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x295b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295b74: 0xc6080040  lwc1        $f8, 0x40($s0)
    ctx->pc = 0x295b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x295b78: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x295b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x295b7c: 0xc6040044  lwc1        $f4, 0x44($s0)
    ctx->pc = 0x295b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x295b80: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x295b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295b84: 0x460541c2  mul.s       $f7, $f8, $f5
    ctx->pc = 0x295b84u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x295b88: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x295b88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x295b8c: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x295b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295b90: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x295b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x295b94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x295b94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x295b98: 0xc7808c84  lwc1        $f0, -0x737C($gp)
    ctx->pc = 0x295b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295b9c: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x295b9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x295ba0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x295ba0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x295ba4: 0xc6060048  lwc1        $f6, 0x48($s0)
    ctx->pc = 0x295ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x295ba8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x295ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x295bac: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x295bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x295bb0: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x295bb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x295bb4: 0xe6030038  swc1        $f3, 0x38($s0)
    ctx->pc = 0x295bb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x295bb8: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x295bb8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x295bbc: 0xc6070058  lwc1        $f7, 0x58($s0)
    ctx->pc = 0x295bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x295bc0: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x295bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295bc4: 0x8f94b460  lw          $s4, -0x4BA0($gp)
    ctx->pc = 0x295bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x295bc8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x295bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x295bcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x295bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295bd0: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x295bd0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x295bd4: 0xe6060048  swc1        $f6, 0x48($s0)
    ctx->pc = 0x295bd4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x295bd8: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x295bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295bdc: 0xe6080040  swc1        $f8, 0x40($s0)
    ctx->pc = 0x295bdcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x295be0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x295be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x295be4: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x295be4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x295be8: 0x1a80000e  blez        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x295BE8u;
    {
        const bool branch_taken_0x295be8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x295BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BE8u;
        // 0x295bec: 0xe6070058  swc1        $f7, 0x58($s0) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295be8) {
            ctx->pc = 0x295C24u;
            goto label_295c24;
        }
    }
    ctx->pc = 0x295BF0u;
    // 0x295bf0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x295bf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x295bf4: 0x0  nop
    ctx->pc = 0x295bf4u;
    // NOP
label_295bf8:
    // 0x295bf8: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x295bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295bfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x295bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x295c00: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x295c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295c04: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x295c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x295c08: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x295c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x295c0c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x295c0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x295c10: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x295c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x295c14: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x295C14u;
    {
        const bool branch_taken_0x295c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C14u;
        // 0x295c18: 0xe6410044  swc1        $f1, 0x44($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c14) {
            ctx->pc = 0x295BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295bf8;
        }
    }
    ctx->pc = 0x295C1Cu;
    // 0x295c1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x295C1Cu;
    {
        const bool branch_taken_0x295c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C1Cu;
        // 0x295c20: 0xc6400034  lwc1        $f0, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c1c) {
            ctx->pc = 0x295C2Cu;
            goto label_295c2c;
        }
    }
    ctx->pc = 0x295C24u;
label_295c24:
    // 0x295c24: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x295c24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x295c28: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x295c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295c2c:
    // 0x295c2c: 0xc6240054  lwc1        $f4, 0x54($s1)
    ctx->pc = 0x295c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x295c30: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x295c30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295c34: 0x0  nop
    ctx->pc = 0x295c34u;
    // NOP
    // 0x295c38: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
    ctx->pc = 0x295C38u;
    {
        const bool branch_taken_0x295c38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x295c38) {
            ctx->pc = 0x295C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295C38u;
            // 0x295c3c: 0xc60e0058  lwc1        $f14, 0x58($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x295CC4u;
            goto label_295cc4;
        }
    }
    ctx->pc = 0x295C40u;
    // 0x295c40: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x295c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295c44: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x295c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295c48: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x295c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295c4c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x295c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x295c50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x295c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x295c54: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x295c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x295c58: 0x46190842  mul.s       $f1, $f1, $f25
    ctx->pc = 0x295c58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
    // 0x295c5c: 0xe6040034  swc1        $f4, 0x34($s0)
    ctx->pc = 0x295c5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x295c60: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x295c60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x295c64: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x295c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x295c68: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x295c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x295c6c: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x295c6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    // 0x295c70: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x295C70u;
    SET_GPR_U32(ctx, 31, 0x295C78u);
    ctx->pc = 0x295C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C70u;
    // 0x295c74: 0xe6020040  swc1        $f2, 0x40($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x295C70u, 0x295C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C78u;
label_295c78:
    // 0x295c78: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x295c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x295c7c: 0xdc258e20  ld          $a1, -0x71E0($at)
    ctx->pc = 0x295c7cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A8E20u));
    // 0x295c80: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x295C80u;
    SET_GPR_U32(ctx, 31, 0x295C88u);
    ctx->pc = 0x295C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C80u;
    // 0x295c84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x295C80u, 0x295C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C88u;
label_295c88:
    // 0x295c88: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x295C88u;
    {
        const bool branch_taken_0x295c88 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x295c88) {
            ctx->pc = 0x295C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295C88u;
            // 0x295c8c: 0xc640003c  lwc1        $f0, 0x3C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x295CACu;
            goto label_295cac;
        }
    }
    ctx->pc = 0x295C90u;
    // 0x295c90: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x295c90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x295c94: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x295c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x295c98: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x295c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x295c9c: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x295c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x295ca0: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x295ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x295ca4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x295CA4u;
    {
        const bool branch_taken_0x295ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CA4u;
        // 0x295ca8: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ca4) {
            ctx->pc = 0x295CC0u;
            goto label_295cc0;
        }
    }
    ctx->pc = 0x295CACu;
label_295cac:
    // 0x295cac: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x295cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x295cb0: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x295cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x295cb4: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x295cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295cb8: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x295cb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x295cbc: 0xe621004c  swc1        $f1, 0x4C($s1)
    ctx->pc = 0x295cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_295cc0:
    // 0x295cc0: 0xc60e0058  lwc1        $f14, 0x58($s0)
    ctx->pc = 0x295cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_295cc4:
    // 0x295cc4: 0x2f41021  addu        $v0, $s7, $s4
    ctx->pc = 0x295cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x295cc8: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x295cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x295ccc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x295cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295cd0: 0x46177382  mul.s       $f14, $f14, $f23
    ctx->pc = 0x295cd0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[23]);
    // 0x295cd4: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x295cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x295cd8: 0x46176302  mul.s       $f12, $f12, $f23
    ctx->pc = 0x295cd8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    // 0x295cdc: 0x0  nop
    ctx->pc = 0x295cdcu;
    // NOP
    // 0x295ce0: 0x0  nop
    ctx->pc = 0x295ce0u;
    // NOP
    // 0x295ce4: 0x46167383  div.s       $f14, $f14, $f22
    ctx->pc = 0x295ce4u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[22];
    // 0x295ce8: 0x0  nop
    ctx->pc = 0x295ce8u;
    // NOP
    // 0x295cec: 0x0  nop
    ctx->pc = 0x295cecu;
    // NOP
    // 0x295cf0: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x295cf0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x295cf4: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x295CF4u;
    SET_GPR_U32(ctx, 31, 0x295CFCu);
    ctx->pc = 0x295CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295CF4u;
    // 0x295cf8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x295CF4u, 0x295CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295CFCu;
label_295cfc:
    // 0x295cfc: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x295cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x295d00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x295d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x295d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d08: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x295d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x295d0c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x295D0Cu;
    SET_GPR_U32(ctx, 31, 0x295D14u);
    ctx->pc = 0x295D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D0Cu;
    // 0x295d10: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x295D0Cu, 0x295D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D14u;
label_295d14:
    // 0x295d14: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x295d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x295d18: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x295d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x295d1c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x295d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x295d20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x295d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x295d24: 0xe4740030  swc1        $f20, 0x30($v1)
    ctx->pc = 0x295d24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x295d28: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x295d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x295d2c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x295d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x295d30: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x295d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x295d34: 0xe4940034  swc1        $f20, 0x34($a0)
    ctx->pc = 0x295d34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x295d38: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x295d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x295d3c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x295d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x295d40: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x295d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x295d44: 0xe4940038  swc1        $f20, 0x38($a0)
    ctx->pc = 0x295d44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x295d48: 0x8ca30180  lw          $v1, 0x180($a1)
    ctx->pc = 0x295d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x295d4c: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x295d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x295d50: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x295d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x295d54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295D54u;
    {
        const bool branch_taken_0x295d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D54u;
        // 0x295d58: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d54) {
            ctx->pc = 0x295D60u;
            goto label_295d60;
        }
    }
    ctx->pc = 0x295D5Cu;
label_295d5c:
    // 0x295d5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x295d5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_295d60:
    // 0x295d60: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x295d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295d64: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x295d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x295d68: 0x1440ff49  bnez        $v0, . + 4 + (-0xB7 << 2)
    ctx->pc = 0x295D68u;
    {
        const bool branch_taken_0x295d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D68u;
        // 0x295d6c: 0x24140060  addiu       $s4, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d68) {
            ctx->pc = 0x295A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295a90;
        }
    }
    ctx->pc = 0x295D70u;
    // 0x295d70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x295D70u;
    {
        const bool branch_taken_0x295d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D70u;
        // 0x295d74: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d70) {
            ctx->pc = 0x295D80u;
            goto label_295d80;
        }
    }
    ctx->pc = 0x295D78u;
label_295d78:
    // 0x295d78: 0x245e0001  addiu       $fp, $v0, 0x1
    ctx->pc = 0x295d78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x295d7c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x295d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_295d80:
    // 0x295d80: 0x5840ff3d  blezl       $v0, . + 4 + (-0xC3 << 2)
    ctx->pc = 0x295D80u;
    {
        const bool branch_taken_0x295d80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x295d80) {
            ctx->pc = 0x295D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295D80u;
            // 0x295d84: 0x8ec303c4  lw          $v1, 0x3C4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 964)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295a78;
        }
    }
    ctx->pc = 0x295D88u;
    // 0x295d88: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x295d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x295d8c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x295d8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x295d90: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x295d90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x295d94: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x295d94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x295d98: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x295d98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x295d9c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x295d9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x295da0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x295da0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x295da4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x295da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295da8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x295da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295dac: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x295dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295db0: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x295db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x295db4: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x295db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x295db8: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x295db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x295dbc: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x295dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x295dc0: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x295dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x295dc4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x295dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x295dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x295DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DC8u;
        // 0x295dcc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295DD0u;
}
