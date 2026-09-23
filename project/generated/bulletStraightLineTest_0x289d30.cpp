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

// Function: bulletStraightLineTest
// Address: 0x289d30 - 0x28a1d0
void bulletStraightLineTest_0x289d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletStraightLineTest_0x289d30");
#endif

    switch (ctx->pc) {
        case 0x289dfcu: goto label_289dfc;
        case 0x289eb0u: goto label_289eb0;
        case 0x289ebcu: goto label_289ebc;
        case 0x289eecu: goto label_289eec;
        case 0x289f28u: goto label_289f28;
        case 0x28a008u: goto label_28a008;
        case 0x28a05cu: goto label_28a05c;
        case 0x28a134u: goto label_28a134;
        default: break;
    }

    ctx->pc = 0x289d30u;

    // 0x289d30: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x289d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x289d34: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x289d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x289d38: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x289d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x289d3c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x289d3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d40: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x289d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x289d44: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x289d44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d48: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x289d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x289d4c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x289d4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d50: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x289d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x289d54: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x289d54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d58: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x289d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x289d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d60: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x289d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x289d64: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x289d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x289d68: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x289d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x289d6c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x289d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x289d70: 0x8e0900dc  lw          $t1, 0xDC($s0)
    ctx->pc = 0x289d70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x289d74: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x289d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x289d78: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x289D78u;
    {
        const bool branch_taken_0x289d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D78u;
        // 0x289d7c: 0x8d3e0010  lw          $fp, 0x10($t1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d78) {
            ctx->pc = 0x289EF4u;
            goto label_289ef4;
        }
    }
    ctx->pc = 0x289D80u;
    // 0x289d80: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x289d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x289d84: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x289d84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d88: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x289d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x289d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289d90: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x289D90u;
    {
        const bool branch_taken_0x289d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x289D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D90u;
        // 0x289d94: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d90) {
            ctx->pc = 0x289DBCu;
            goto label_289dbc;
        }
    }
    ctx->pc = 0x289D98u;
    // 0x289d98: 0x8d220164  lw          $v0, 0x164($t1)
    ctx->pc = 0x289d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 356)));
    // 0x289d9c: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x289d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289da0: 0x8c44031c  lw          $a0, 0x31C($v0)
    ctx->pc = 0x289da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
    // 0x289da4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x289da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x289da8: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x289da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289dac: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x289dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x289db0: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x289db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289db4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x289DB4u;
    {
        const bool branch_taken_0x289db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289DB4u;
        // 0x289db8: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289db4) {
            ctx->pc = 0x289E40u;
            goto label_289e40;
        }
    }
    ctx->pc = 0x289DBCu;
label_289dbc:
    // 0x289dbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x289dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289dc0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x289DC0u;
    {
        const bool branch_taken_0x289dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x289DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289DC0u;
        // 0x289dc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289dc0) {
            ctx->pc = 0x289DE8u;
            goto label_289de8;
        }
    }
    ctx->pc = 0x289DC8u;
    // 0x289dc8: 0x8d220160  lw          $v0, 0x160($t1)
    ctx->pc = 0x289dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 352)));
    // 0x289dcc: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x289dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x289dd0: 0xc4400af8  lwc1        $f0, 0xAF8($v0)
    ctx->pc = 0x289dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289dd4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x289dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x289dd8: 0xc4410afc  lwc1        $f1, 0xAFC($v0)
    ctx->pc = 0x289dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289ddc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x289ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x289de0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x289DE0u;
    {
        const bool branch_taken_0x289de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289DE0u;
        // 0x289de4: 0xc4400b00  lwc1        $f0, 0xB00($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289de0) {
            ctx->pc = 0x289E3Cu;
            goto label_289e3c;
        }
    }
    ctx->pc = 0x289DE8u;
label_289de8:
    // 0x289de8: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x289DE8u;
    {
        const bool branch_taken_0x289de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x289de8) {
            ctx->pc = 0x289DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289DE8u;
            // 0x289dec: 0xc5200030  lwc1        $f0, 0x30($t1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x289E28u;
            goto label_289e28;
        }
    }
    ctx->pc = 0x289DF0u;
    // 0x289df0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x289df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289df4: 0xc09a542  jal         func_269508
    ctx->pc = 0x289DF4u;
    SET_GPR_U32(ctx, 31, 0x289DFCu);
    ctx->pc = 0x289DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289DF4u;
    // 0x289df8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269508u, 0x289DF4u, 0x289DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289DFCu;
label_289dfc:
    // 0x289dfc: 0x8e0900dc  lw          $t1, 0xDC($s0)
    ctx->pc = 0x289dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x289e00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x289e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x289e04: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x289e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x289e08: 0x8d230160  lw          $v1, 0x160($t1)
    ctx->pc = 0x289e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 352)));
    // 0x289e0c: 0x8c770060  lw          $s7, 0x60($v1)
    ctx->pc = 0x289e0cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x289e10: 0x8c640078  lw          $a0, 0x78($v1)
    ctx->pc = 0x289e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x289e14: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x289e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x289e18: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x289e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x289e1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x289e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x289e20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x289E20u;
    {
        const bool branch_taken_0x289e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E20u;
        // 0x289e24: 0xaee20010  sw          $v0, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e20) {
            ctx->pc = 0x289E40u;
            goto label_289e40;
        }
    }
    ctx->pc = 0x289E28u;
label_289e28:
    // 0x289e28: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x289e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x289e2c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x289e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x289e30: 0xc5210034  lwc1        $f1, 0x34($t1)
    ctx->pc = 0x289e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289e34: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x289e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x289e38: 0xc5200038  lwc1        $f0, 0x38($t1)
    ctx->pc = 0x289e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289e3c:
    // 0x289e3c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x289e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_289e40:
    // 0x289e40: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x289e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289e44: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x289e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x289e48: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x289e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289e4c: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x289e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x289e50: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x289e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289e54: 0x26120064  addiu       $s2, $s0, 0x64
    ctx->pc = 0x289e54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x289e58: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x289e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x289e5c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x289e5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x289e60: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x289e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289e64: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x289e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x289e68: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x289e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289e6c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x289e6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x289e70: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x289e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x289e74: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x289e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x289e78: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x289e78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x289e7c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x289e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x289e80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x289e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x289e84: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x289e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x289e88: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x289e88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
    // 0x289e8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x289e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e90: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x289e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x289e94: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x289e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e98: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x289e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x289e9c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x289e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ea0: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x289ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
    // 0x289ea4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x289ea4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ea8: 0xc09640e  jal         func_259038
    ctx->pc = 0x289EA8u;
    SET_GPR_U32(ctx, 31, 0x289EB0u);
    ctx->pc = 0x289EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EA8u;
    // 0x289eac: 0x240b0030  addiu       $t3, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x289EA8u, 0x289EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EB0u;
label_289eb0:
    // 0x289eb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289eb4: 0xc0a271c  jal         func_289C70
    ctx->pc = 0x289EB4u;
    SET_GPR_U32(ctx, 31, 0x289EBCu);
    ctx->pc = 0x289EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EB4u;
    // 0x289eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289C70u, 0x289EB4u, 0x289EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EBCu;
label_289ebc:
    // 0x289ebc: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x289EBCu;
    {
        const bool branch_taken_0x289ebc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x289EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EBCu;
        // 0x289ec0: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ebc) {
            ctx->pc = 0x289EC8u;
            goto label_289ec8;
        }
    }
    ctx->pc = 0x289EC4u;
    // 0x289ec4: 0xaee20010  sw          $v0, 0x10($s7)
    ctx->pc = 0x289ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 2));
label_289ec8:
    // 0x289ec8: 0x562000af  bnel        $s1, $zero, . + 4 + (0xAF << 2)
    ctx->pc = 0x289EC8u;
    {
        const bool branch_taken_0x289ec8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x289ec8) {
            ctx->pc = 0x289ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289EC8u;
            // 0x289ecc: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A188u;
            goto label_28a188;
        }
    }
    ctx->pc = 0x289ED0u;
    // 0x289ed0: 0x52c0000a  beql        $s6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x289ED0u;
    {
        const bool branch_taken_0x289ed0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x289ed0) {
            ctx->pc = 0x289ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289ED0u;
            // 0x289ed4: 0x8e170064  lw          $s7, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289EFCu;
            goto label_289efc;
        }
    }
    ctx->pc = 0x289ED8u;
    // 0x289ed8: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x289ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x289edc: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x289EDCu;
    {
        const bool branch_taken_0x289edc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x289edc) {
            ctx->pc = 0x289EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289EDCu;
            // 0x289ee0: 0x8e170064  lw          $s7, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289EFCu;
            goto label_289efc;
        }
    }
    ctx->pc = 0x289EE4u;
    // 0x289ee4: 0xc0a3486  jal         func_28D218
    ctx->pc = 0x289EE4u;
    SET_GPR_U32(ctx, 31, 0x289EECu);
    ctx->pc = 0x289EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EE4u;
    // 0x289ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D218u, 0x289EE4u, 0x289EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EECu;
label_289eec:
    // 0x289eec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289EECu;
    {
        const bool branch_taken_0x289eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EECu;
        // 0x289ef0: 0x8e170064  lw          $s7, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289eec) {
            ctx->pc = 0x289EFCu;
            goto label_289efc;
        }
    }
    ctx->pc = 0x289EF4u;
label_289ef4:
    // 0x289ef4: 0x26120064  addiu       $s2, $s0, 0x64
    ctx->pc = 0x289ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x289ef8: 0x8e170064  lw          $s7, 0x64($s0)
    ctx->pc = 0x289ef8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_289efc:
    // 0x289efc: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x289efcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f00: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x289f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
    // 0x289f04: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x289f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x289f08: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x289f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x289f0c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x289f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f10: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x289f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x289f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f18: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x289f18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f1c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x289f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f20: 0xc09640e  jal         func_259038
    ctx->pc = 0x289F20u;
    SET_GPR_U32(ctx, 31, 0x289F28u);
    ctx->pc = 0x289F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289F20u;
    // 0x289f24: 0x240b0072  addiu       $t3, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x289F20u, 0x289F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F28u;
label_289f28:
    // 0x289f28: 0x8e1200b8  lw          $s2, 0xB8($s0)
    ctx->pc = 0x289f28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x289f2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f30: 0x12400045  beqz        $s2, . + 4 + (0x45 << 2)
    ctx->pc = 0x289F30u;
    {
        const bool branch_taken_0x289f30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x289F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F30u;
        // 0x289f34: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f30) {
            ctx->pc = 0x28A048u;
            goto label_28a048;
        }
    }
    ctx->pc = 0x289F38u;
    // 0x289f38: 0xc6860000  lwc1        $f6, 0x0($s4)
    ctx->pc = 0x289f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x289f3c: 0xc6870004  lwc1        $f7, 0x4($s4)
    ctx->pc = 0x289f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x289f40: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x289f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289f44: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x289f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289f48: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x289f48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x289f4c: 0xc6850008  lwc1        $f5, 0x8($s4)
    ctx->pc = 0x289f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x289f50: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x289f50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x289f54: 0xc60900a0  lwc1        $f9, 0xA0($s0)
    ctx->pc = 0x289f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x289f58: 0xc60a00a4  lwc1        $f10, 0xA4($s0)
    ctx->pc = 0x289f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x289f5c: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x289f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289f60: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x289f60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x289f64: 0x460350c1  sub.s       $f3, $f10, $f3
    ctx->pc = 0x289f64u;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x289f68: 0xc60800a8  lwc1        $f8, 0xA8($s0)
    ctx->pc = 0x289f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x289f6c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x289f6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x289f70: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x289f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x289f74: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x289f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x289f78: 0x46033902  mul.s       $f4, $f7, $f3
    ctx->pc = 0x289f78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x289f7c: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x289f7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x289f80: 0x46024081  sub.s       $f2, $f8, $f2
    ctx->pc = 0x289f80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x289f84: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x289f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x289f88: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x289f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x289f8c: 0x46022842  mul.s       $f1, $f5, $f2
    ctx->pc = 0x289f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x289f90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x289f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x289f94: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x289f94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289f98: 0x0  nop
    ctx->pc = 0x289f98u;
    // NOP
    // 0x289f9c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x289F9Cu;
    {
        const bool branch_taken_0x289f9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F9Cu;
        // 0x289fa0: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f9c) {
            ctx->pc = 0x28A048u;
            goto label_28a048;
        }
    }
    ctx->pc = 0x289FA4u;
    // 0x289fa4: 0x52200013  beql        $s1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x289FA4u;
    {
        const bool branch_taken_0x289fa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x289fa4) {
            ctx->pc = 0x289FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289FA4u;
            // 0x289fa8: 0x8e0400bc  lw          $a0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289FF4u;
            goto label_289ff4;
        }
    }
    ctx->pc = 0x289FACu;
    // 0x289fac: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x289facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289fb0: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x289fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289fb4: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x289fb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x289fb8: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x289fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289fbc: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x289fbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x289fc0: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x289fc0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x289fc4: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x289fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x289fc8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x289fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x289fcc: 0x46023902  mul.s       $f4, $f7, $f2
    ctx->pc = 0x289fccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x289fd0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x289fd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x289fd4: 0x46032842  mul.s       $f1, $f5, $f3
    ctx->pc = 0x289fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x289fd8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x289fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x289fdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x289fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x289fe0: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x289fe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289fe4: 0x0  nop
    ctx->pc = 0x289fe4u;
    // NOP
    // 0x289fe8: 0x45010066  bc1t        . + 4 + (0x66 << 2)
    ctx->pc = 0x289FE8u;
    {
        const bool branch_taken_0x289fe8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x289FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289FE8u;
        // 0x289fec: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289fe8) {
            ctx->pc = 0x28A184u;
            goto label_28a184;
        }
    }
    ctx->pc = 0x289FF0u;
    // 0x289ff0: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x289ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_289ff4:
    // 0x289ff4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ff8: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x289ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x289ffc: 0x8e0600c4  lw          $a2, 0xC4($s0)
    ctx->pc = 0x289ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x28a000: 0xc098dc6  jal         func_263718
    ctx->pc = 0x28A000u;
    SET_GPR_U32(ctx, 31, 0x28A008u);
    ctx->pc = 0x28A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A000u;
    // 0x28a004: 0x8e0700c8  lw          $a3, 0xC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263718u, 0x28A000u, 0x28A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A008u;
label_28a008:
    // 0x28a008: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x28a008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a00c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28a00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a010: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x28a010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x28a014: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x28a014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x28a018: 0xac7e0010  sw          $fp, 0x10($v1)
    ctx->pc = 0x28a018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 30));
    // 0x28a01c: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x28a01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a020: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x28a020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x28a024: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x28a024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a028: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x28a028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x28a02c: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x28a02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a030: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x28a030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x28a034: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x28a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a038: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x28a038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x28a03c: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x28a03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a040: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x28A040u;
    {
        const bool branch_taken_0x28a040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A040u;
        // 0x28a044: 0xe6a00008  swc1        $f0, 0x8($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a040) {
            ctx->pc = 0x28A1A0u;
            goto label_28a1a0;
        }
    }
    ctx->pc = 0x28A048u;
label_28a048:
    // 0x28a048: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x28a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28a04c: 0x52e2004e  beql        $s7, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x28A04Cu;
    {
        const bool branch_taken_0x28a04c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x28a04c) {
            ctx->pc = 0x28A050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A04Cu;
            // 0x28a050: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A188u;
            goto label_28a188;
        }
    }
    ctx->pc = 0x28A054u;
    // 0x28a054: 0xc0a271c  jal         func_289C70
    ctx->pc = 0x28A054u;
    SET_GPR_U32(ctx, 31, 0x28A05Cu);
    ctx->pc = 0x28A058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A054u;
    // 0x28a058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289C70u, 0x28A054u, 0x28A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A05Cu;
label_28a05c:
    // 0x28a05c: 0x8e1200b8  lw          $s2, 0xB8($s0)
    ctx->pc = 0x28a05cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x28a060: 0x52400049  beql        $s2, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x28A060u;
    {
        const bool branch_taken_0x28a060 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a060) {
            ctx->pc = 0x28A064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A060u;
            // 0x28a064: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A188u;
            goto label_28a188;
        }
    }
    ctx->pc = 0x28A068u;
    // 0x28a068: 0xc6860000  lwc1        $f6, 0x0($s4)
    ctx->pc = 0x28a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28a06c: 0xc6870004  lwc1        $f7, 0x4($s4)
    ctx->pc = 0x28a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28a070: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x28a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a074: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x28a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28a078: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x28a078u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x28a07c: 0xc6850008  lwc1        $f5, 0x8($s4)
    ctx->pc = 0x28a07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28a080: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x28a080u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x28a084: 0xc60900a0  lwc1        $f9, 0xA0($s0)
    ctx->pc = 0x28a084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x28a088: 0xc60a00a4  lwc1        $f10, 0xA4($s0)
    ctx->pc = 0x28a088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28a08c: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x28a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28a090: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x28a090u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x28a094: 0x460350c1  sub.s       $f3, $f10, $f3
    ctx->pc = 0x28a094u;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x28a098: 0xc60800a8  lwc1        $f8, 0xA8($s0)
    ctx->pc = 0x28a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28a09c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x28a09cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x28a0a0: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x28a0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x28a0a4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x28a0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28a0a8: 0x46033902  mul.s       $f4, $f7, $f3
    ctx->pc = 0x28a0a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x28a0ac: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x28a0acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28a0b0: 0x46024081  sub.s       $f2, $f8, $f2
    ctx->pc = 0x28a0b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x28a0b4: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x28a0b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x28a0b8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x28a0b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x28a0bc: 0x46022842  mul.s       $f1, $f5, $f2
    ctx->pc = 0x28a0bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x28a0c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28a0c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28a0c4: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x28a0c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a0c8: 0x0  nop
    ctx->pc = 0x28a0c8u;
    // NOP
    // 0x28a0cc: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x28A0CCu;
    {
        const bool branch_taken_0x28a0cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0CCu;
        // 0x28a0d0: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0cc) {
            ctx->pc = 0x28A184u;
            goto label_28a184;
        }
    }
    ctx->pc = 0x28A0D4u;
    // 0x28a0d4: 0x52200013  beql        $s1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x28A0D4u;
    {
        const bool branch_taken_0x28a0d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a0d4) {
            ctx->pc = 0x28A0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A0D4u;
            // 0x28a0d8: 0x8e0400bc  lw          $a0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A124u;
            goto label_28a124;
        }
    }
    ctx->pc = 0x28A0DCu;
    // 0x28a0dc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x28a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a0e0: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x28a0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28a0e4: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x28a0e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x28a0e8: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x28a0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28a0ec: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x28a0ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x28a0f0: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x28a0f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x28a0f4: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x28a0f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x28a0f8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x28a0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28a0fc: 0x46023902  mul.s       $f4, $f7, $f2
    ctx->pc = 0x28a0fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x28a100: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x28a100u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28a104: 0x46032842  mul.s       $f1, $f5, $f3
    ctx->pc = 0x28a104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x28a108: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x28a108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x28a10c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28a10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28a110: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x28a110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a114: 0x0  nop
    ctx->pc = 0x28a114u;
    // NOP
    // 0x28a118: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x28A118u;
    {
        const bool branch_taken_0x28a118 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A118u;
        // 0x28a11c: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a118) {
            ctx->pc = 0x28A184u;
            goto label_28a184;
        }
    }
    ctx->pc = 0x28A120u;
    // 0x28a120: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x28a120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_28a124:
    // 0x28a124: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x28a124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x28a128: 0x8e0600c4  lw          $a2, 0xC4($s0)
    ctx->pc = 0x28a128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x28a12c: 0xc098dc6  jal         func_263718
    ctx->pc = 0x28A12Cu;
    SET_GPR_U32(ctx, 31, 0x28A134u);
    ctx->pc = 0x28A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A12Cu;
    // 0x28a130: 0x8e0700c8  lw          $a3, 0xC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263718u, 0x28A12Cu, 0x28A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A134u;
label_28a134:
    // 0x28a134: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x28a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a138: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x28a138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x28a13c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x28a13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x28a140: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x28a140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x28a144: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x28a144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a148: 0xac5e0010  sw          $fp, 0x10($v0)
    ctx->pc = 0x28a148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 30));
    // 0x28a14c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x28a14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x28a150: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x28a150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a154: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x28a154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x28a158: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x28a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a15c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x28a15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x28a160: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x28a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a164: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x28a164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x28a168: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x28a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a16c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A16Cu;
    {
        const bool branch_taken_0x28a16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A16Cu;
        // 0x28a170: 0xe6a00008  swc1        $f0, 0x8($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a16c) {
            ctx->pc = 0x28A17Cu;
            goto label_28a17c;
        }
    }
    ctx->pc = 0x28A174u;
    // 0x28a174: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x28a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28a178: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x28a178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_28a17c:
    // 0x28a17c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28A17Cu;
    {
        const bool branch_taken_0x28a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A17Cu;
        // 0x28a180: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a17c) {
            ctx->pc = 0x28A1A0u;
            goto label_28a1a0;
        }
    }
    ctx->pc = 0x28A184u;
label_28a184:
    // 0x28a184: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x28a184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_28a188:
    // 0x28a188: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x28a188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x28a18c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A18Cu;
    {
        const bool branch_taken_0x28a18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A18Cu;
        // 0x28a190: 0xac5e0010  sw          $fp, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a18c) {
            ctx->pc = 0x28A19Cu;
            goto label_28a19c;
        }
    }
    ctx->pc = 0x28A194u;
    // 0x28a194: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x28a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28a198: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x28a198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_28a19c:
    // 0x28a19c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28a19cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a1a0:
    // 0x28a1a0: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x28a1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28a1a4: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x28a1a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28a1a8: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x28a1a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28a1ac: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x28a1acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28a1b0: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x28a1b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28a1b4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x28a1b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28a1b8: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x28a1b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a1bc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x28a1bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a1c0: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x28a1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a1c4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x28a1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x28A1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1C8u;
        // 0x28a1cc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A1D0u;
}
