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

// Function: propMoveTestRoom
// Address: 0x270e08 - 0x2714e0
void propMoveTestRoom_0x270e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propMoveTestRoom_0x270e08");
#endif

    switch (ctx->pc) {
        case 0x270f18u: goto label_270f18;
        case 0x270f78u: goto label_270f78;
        case 0x2710a4u: goto label_2710a4;
        case 0x271100u: goto label_271100;
        case 0x271144u: goto label_271144;
        case 0x2711fcu: goto label_2711fc;
        case 0x271270u: goto label_271270;
        case 0x2712d0u: goto label_2712d0;
        case 0x271364u: goto label_271364;
        case 0x271390u: goto label_271390;
        case 0x2713c0u: goto label_2713c0;
        default: break;
    }

    ctx->pc = 0x270e08u;

    // 0x270e08: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x270e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x270e0c: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x270e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x270e10: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x270e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x270e14: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x270e14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e18: 0x8f8cb238  lw          $t4, -0x4DC8($gp)
    ctx->pc = 0x270e18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x270e1c: 0x2e21818  mult        $v1, $s7, $v0
    ctx->pc = 0x270e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x270e20: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x270e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x270e24: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x270e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x270e28: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x270e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e2c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x270e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x270e30: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x270e30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e34: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x270e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x270e38: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x270e38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e3c: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x270e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x270e40: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x270e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x270e44: 0xe7ba0130  swc1        $f26, 0x130($sp)
    ctx->pc = 0x270e44u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x270e48: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x270e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e4c: 0xe7b90128  swc1        $f25, 0x128($sp)
    ctx->pc = 0x270e4cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x270e50: 0x46006e86  mov.s       $f26, $f13
    ctx->pc = 0x270e50u;
    ctx->f[26] = FPU_MOV_S(ctx->f[13]);
    // 0x270e54: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x270e54u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x270e58: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x270e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e5c: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x270e5cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x270e60: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x270e60u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x270e64: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x270e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x270e68: 0x4600c5c6  mov.s       $f23, $f24
    ctx->pc = 0x270e68u;
    ctx->f[23] = FPU_MOV_S(ctx->f[24]);
    // 0x270e6c: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x270e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x270e70: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x270e70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x270e74: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x270e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x270e78: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x270e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x270e7c: 0xe7bb0138  swc1        $f27, 0x138($sp)
    ctx->pc = 0x270e7cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x270e80: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x270e80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x270e84: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x270e84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x270e88: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x270e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x270e8c: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x270e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x270e90: 0x8c420bcc  lw          $v0, 0xBCC($v0)
    ctx->pc = 0x270e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x270e94: 0xafa90044  sw          $t1, 0x44($sp)
    ctx->pc = 0x270e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 9));
    // 0x270e98: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x270e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x270e9c: 0xafaa0048  sw          $t2, 0x48($sp)
    ctx->pc = 0x270e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 10));
    // 0x270ea0: 0xafab004c  sw          $t3, 0x4C($sp)
    ctx->pc = 0x270ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 11));
    // 0x270ea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270ea8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x270ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x270eac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x270EACu;
    {
        const bool branch_taken_0x270eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EACu;
        // 0x270eb0: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270eac) {
            ctx->pc = 0x270EC4u;
            goto label_270ec4;
        }
    }
    ctx->pc = 0x270EB4u;
    // 0x270eb4: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x270eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x270eb8: 0x8f9eb8fc  lw          $fp, -0x4704($gp)
    ctx->pc = 0x270eb8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949116)));
    // 0x270ebc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270EBCu;
    {
        const bool branch_taken_0x270ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EBCu;
        // 0x270ec0: 0x24423410  addiu       $v0, $v0, 0x3410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ebc) {
            ctx->pc = 0x270ED0u;
            goto label_270ed0;
        }
    }
    ctx->pc = 0x270EC4u;
label_270ec4:
    // 0x270ec4: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x270ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x270ec8: 0x8f9eb8f8  lw          $fp, -0x4708($gp)
    ctx->pc = 0x270ec8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949112)));
    // 0x270ecc: 0x24422f60  addiu       $v0, $v0, 0x2F60
    ctx->pc = 0x270eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12128));
label_270ed0:
    // 0x270ed0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x270ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x270ed4: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x270ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x270ed8: 0x2e21818  mult        $v1, $s7, $v0
    ctx->pc = 0x270ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x270edc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x270edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x270ee0: 0x8c4311b4  lw          $v1, 0x11B4($v0)
    ctx->pc = 0x270ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4532)));
    // 0x270ee4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x270EE4u;
    {
        const bool branch_taken_0x270ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ee4) {
            ctx->pc = 0x270F04u;
            goto label_270f04;
        }
    }
    ctx->pc = 0x270EECu;
    // 0x270eec: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x270eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x270ef0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x270ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x270ef4: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x270ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x270ef8: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x270ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x270efc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x270efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x270f00: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x270f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_270f04:
    // 0x270f04: 0x1bc00148  blez        $fp, . + 4 + (0x148 << 2)
    ctx->pc = 0x270F04u;
    {
        const bool branch_taken_0x270f04 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x270F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F04u;
        // 0x270f08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f04) {
            ctx->pc = 0x271428u;
            goto label_271428;
        }
    }
    ctx->pc = 0x270F0Cu;
    // 0x270f0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270f10: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x270f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x270f14: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x270f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_270f18:
    // 0x270f18: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x270f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x270f1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x270f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x270f20: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x270f20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270f24: 0x1200013a  beqz        $s0, . + 4 + (0x13A << 2)
    ctx->pc = 0x270F24u;
    {
        const bool branch_taken_0x270f24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F24u;
        // 0x270f28: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f24) {
            ctx->pc = 0x271410u;
            goto label_271410;
        }
    }
    ctx->pc = 0x270F2Cu;
    // 0x270f2c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x270f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x270f30: 0x11020004  beq         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270F30u;
    {
        const bool branch_taken_0x270f30 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x270F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F30u;
        // 0x270f34: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f30) {
            ctx->pc = 0x270F44u;
            goto label_270f44;
        }
    }
    ctx->pc = 0x270F38u;
    // 0x270f38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x270f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x270f3c: 0x55020017  bnel        $t0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x270F3Cu;
    {
        const bool branch_taken_0x270f3c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x270f3c) {
            ctx->pc = 0x270F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270F3Cu;
            // 0x270f40: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F9Cu;
            goto label_270f9c;
        }
    }
    ctx->pc = 0x270F44u;
label_270f44:
    // 0x270f44: 0x8e0700b8  lw          $a3, 0xB8($s0)
    ctx->pc = 0x270f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x270f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f4c: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x270F4Cu;
    {
        const bool branch_taken_0x270f4c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x270F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F4Cu;
        // 0x270f50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f4c) {
            ctx->pc = 0x270FB0u;
            goto label_270fb0;
        }
    }
    ctx->pc = 0x270F54u;
    // 0x270f54: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x270f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x270f58: 0x14550005  bne         $v0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x270F58u;
    {
        const bool branch_taken_0x270f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x270F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F58u;
        // 0x270f5c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f58) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270F60u;
    // 0x270f60: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x270f60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x270f64: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x270F64u;
    {
        const bool branch_taken_0x270f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F64u;
        // 0x270f68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f64) {
            ctx->pc = 0x270FB8u;
            goto label_270fb8;
        }
    }
    ctx->pc = 0x270F6Cu;
    // 0x270f6c: 0x0  nop
    ctx->pc = 0x270f6cu;
    // NOP
label_270f70:
    // 0x270f70: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x270f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x270f74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x270f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_270f78:
    // 0x270f78: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x270f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x270f7c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x270F7Cu;
    {
        const bool branch_taken_0x270f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F7Cu;
        // 0x270f80: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f7c) {
            ctx->pc = 0x270FB8u;
            goto label_270fb8;
        }
    }
    ctx->pc = 0x270F84u;
    // 0x270f84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x270f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x270f88: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x270f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x270f8c: 0x1475fffa  bne         $v1, $s5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x270F8Cu;
    {
        const bool branch_taken_0x270f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x270F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F8Cu;
        // 0x270f90: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f8c) {
            ctx->pc = 0x270F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270f78;
        }
    }
    ctx->pc = 0x270F94u;
    // 0x270f94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x270F94u;
    {
        const bool branch_taken_0x270f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F94u;
        // 0x270f98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f94) {
            ctx->pc = 0x270FB8u;
            goto label_270fb8;
        }
    }
    ctx->pc = 0x270F9Cu;
label_270f9c:
    // 0x270f9c: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x270f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x270fa0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x270fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x270fa4: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x270fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
    // 0x270fa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270FA8u;
    {
        const bool branch_taken_0x270fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FA8u;
        // 0x270fac: 0x2c460001  sltiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fa8) {
            ctx->pc = 0x270FB8u;
            goto label_270fb8;
        }
    }
    ctx->pc = 0x270FB0u;
label_270fb0:
    // 0x270fb0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x270fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x270fb4: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x270fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_270fb8:
    // 0x270fb8: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x270fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x270fbc: 0x10400116  beqz        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x270FBCu;
    {
        const bool branch_taken_0x270fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FBCu;
        // 0x270fc0: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fbc) {
            ctx->pc = 0x271418u;
            goto label_271418;
        }
    }
    ctx->pc = 0x270FC4u;
    // 0x270fc4: 0x10c00114  beqz        $a2, . + 4 + (0x114 << 2)
    ctx->pc = 0x270FC4u;
    {
        const bool branch_taken_0x270fc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x270FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FC4u;
        // 0x270fc8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fc4) {
            ctx->pc = 0x271418u;
            goto label_271418;
        }
    }
    ctx->pc = 0x270FCCu;
    // 0x270fcc: 0x55220096  bnel        $t1, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x270FCCu;
    {
        const bool branch_taken_0x270fcc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x270fcc) {
            ctx->pc = 0x270FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270FCCu;
            // 0x270fd0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271228u;
            goto label_271228;
        }
    }
    ctx->pc = 0x270FD4u;
    // 0x270fd4: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x270fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270fd8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x270fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270fdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270fe0: 0x0  nop
    ctx->pc = 0x270fe0u;
    // NOP
    // 0x270fe4: 0x4500010d  bc1f        . + 4 + (0x10D << 2)
    ctx->pc = 0x270FE4u;
    {
        const bool branch_taken_0x270fe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FE4u;
        // 0x270fe8: 0x7e102a  slt         $v0, $v1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fe4) {
            ctx->pc = 0x27141Cu;
            goto label_27141c;
        }
    }
    ctx->pc = 0x270FECu;
    // 0x270fec: 0x461a0840  add.s       $f1, $f1, $f26
    ctx->pc = 0x270fecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[26]);
    // 0x270ff0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x270ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270ff4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x270ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270ff8: 0x0  nop
    ctx->pc = 0x270ff8u;
    // NOP
    // 0x270ffc: 0x45000106  bc1f        . + 4 + (0x106 << 2)
    ctx->pc = 0x270FFCu;
    {
        const bool branch_taken_0x270ffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FFCu;
        // 0x271000: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ffc) {
            ctx->pc = 0x271418u;
            goto label_271418;
        }
    }
    ctx->pc = 0x271004u;
    // 0x271004: 0x50500105  beql        $v0, $s0, . + 4 + (0x105 << 2)
    ctx->pc = 0x271004u;
    {
        const bool branch_taken_0x271004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x271004) {
            ctx->pc = 0x271008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271004u;
            // 0x271008: 0x7e102a  slt         $v0, $v1, $fp (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27141Cu;
            goto label_27141c;
        }
    }
    ctx->pc = 0x27100Cu;
    // 0x27100c: 0x8c420164  lw          $v0, 0x164($v0)
    ctx->pc = 0x27100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x271010: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271010u;
    {
        const bool branch_taken_0x271010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271010) {
            ctx->pc = 0x271024u;
            goto label_271024;
        }
    }
    ctx->pc = 0x271018u;
    // 0x271018: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x271018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x27101c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27101Cu;
    {
        const bool branch_taken_0x27101c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27101c) {
            ctx->pc = 0x271020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27101Cu;
            // 0x271020: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x271034u;
            goto label_271034;
        }
    }
    ctx->pc = 0x271024u;
label_271024:
    // 0x271024: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271028: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x271028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27102c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27102Cu;
    {
        const bool branch_taken_0x27102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27102Cu;
        // 0x271030: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27102c) {
            ctx->pc = 0x27103Cu;
            goto label_27103c;
        }
    }
    ctx->pc = 0x271034u;
label_271034:
    // 0x271034: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x271034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x271038: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x271038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_27103c:
    // 0x27103c: 0x4616b142  mul.s       $f5, $f22, $f22
    ctx->pc = 0x27103cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x271040: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x271040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271044: 0x4618b880  add.s       $f2, $f23, $f24
    ctx->pc = 0x271044u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x271048: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x271048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27104c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x27104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x271050: 0x46002541  sub.s       $f21, $f4, $f0
    ctx->pc = 0x271050u;
    ctx->f[21] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x271054: 0x46011d01  sub.s       $f20, $f3, $f1
    ctx->pc = 0x271054u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x271058: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x271058u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x27105c: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x27105cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x271060: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x271060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x271064: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x271064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271068: 0x0  nop
    ctx->pc = 0x271068u;
    // NOP
    // 0x27106c: 0x0  nop
    ctx->pc = 0x27106cu;
    // NOP
    // 0x271070: 0x46050303  div.s       $f12, $f0, $f5
    ctx->pc = 0x271070u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[5];
    // 0x271074: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x271074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271078: 0x0  nop
    ctx->pc = 0x271078u;
    // NOP
    // 0x27107c: 0x4502004c  bc1fl       . + 4 + (0x4C << 2)
    ctx->pc = 0x27107Cu;
    {
        const bool branch_taken_0x27107c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27107c) {
            ctx->pc = 0x271080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27107Cu;
            // 0x271080: 0xc66f0000  lwc1        $f15, 0x0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2711B0u;
            goto label_2711b0;
        }
    }
    ctx->pc = 0x271084u;
    // 0x271084: 0x0  nop
    ctx->pc = 0x271084u;
    // NOP
    // 0x271088: 0x0  nop
    ctx->pc = 0x271088u;
    // NOP
    // 0x27108c: 0x460c0044  c1          0xC0044
    ctx->pc = 0x27108cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x271090: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x271090u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271094: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x271094u;
    {
        const bool branch_taken_0x271094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271094) {
            ctx->pc = 0x2710A8u;
            goto label_2710a8;
        }
    }
    ctx->pc = 0x27109Cu;
    // 0x27109c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x27109Cu;
    SET_GPR_U32(ctx, 31, 0x2710A4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x27109Cu, 0x2710A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710A4u;
label_2710a4:
    // 0x2710a4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2710a4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2710a8:
    // 0x2710a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2710a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2710ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2710acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2710b0: 0x0  nop
    ctx->pc = 0x2710b0u;
    // NOP
    // 0x2710b4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2710B4u;
    {
        const bool branch_taken_0x2710b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2710B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710B4u;
        // 0x2710b8: 0x46180dc1  sub.s       $f23, $f1, $f24 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710b4) {
            ctx->pc = 0x2710F8u;
            goto label_2710f8;
        }
    }
    ctx->pc = 0x2710BCu;
    // 0x2710bc: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x2710bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2710c0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2710C0u;
    {
        const bool branch_taken_0x2710c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2710c0) {
            ctx->pc = 0x2710D4u;
            goto label_2710d4;
        }
    }
    ctx->pc = 0x2710C8u;
    // 0x2710c8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2710c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2710cc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2710CCu;
    {
        const bool branch_taken_0x2710cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2710cc) {
            ctx->pc = 0x2710F8u;
            goto label_2710f8;
        }
    }
    ctx->pc = 0x2710D4u;
label_2710d4:
    // 0x2710d4: 0x0  nop
    ctx->pc = 0x2710d4u;
    // NOP
    // 0x2710d8: 0x0  nop
    ctx->pc = 0x2710d8u;
    // NOP
    // 0x2710dc: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x2710dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
    // 0x2710e0: 0x0  nop
    ctx->pc = 0x2710e0u;
    // NOP
    // 0x2710e4: 0x0  nop
    ctx->pc = 0x2710e4u;
    // NOP
    // 0x2710e8: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x2710e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[1];
    // 0x2710ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2710ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2710f0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2710F0u;
    {
        const bool branch_taken_0x2710f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2710F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710F0u;
        // 0x2710f4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710f0) {
            ctx->pc = 0x2711ACu;
            goto label_2711ac;
        }
    }
    ctx->pc = 0x2710F8u;
label_2710f8:
    // 0x2710f8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2710F8u;
    SET_GPR_U32(ctx, 31, 0x271100u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2710F8u, 0x271100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271100u;
label_271100:
    // 0x271100: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271100u;
    {
        const bool branch_taken_0x271100 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x271104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271100u;
        // 0x271104: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271100) {
            ctx->pc = 0x271114u;
            goto label_271114;
        }
    }
    ctx->pc = 0x271108u;
    // 0x271108: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x271108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27110c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27110Cu;
    {
        const bool branch_taken_0x27110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27110Cu;
        // 0x271110: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27110c) {
            ctx->pc = 0x271128u;
            goto label_271128;
        }
    }
    ctx->pc = 0x271114u;
label_271114:
    // 0x271114: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x271114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x271118: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x271118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27111c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27111cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271120: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x271120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x271124: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x271124u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_271128:
    // 0x271128: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x271128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x27112c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27112cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271130: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x271130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x271134: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x271134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x271138: 0x461b0001  sub.s       $f0, $f0, $f27
    ctx->pc = 0x271138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[27]);
    // 0x27113c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x27113Cu;
    SET_GPR_U32(ctx, 31, 0x271144u);
    ctx->pc = 0x271140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27113Cu;
    // 0x271140: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x27113Cu, 0x271144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271144u;
label_271144:
    // 0x271144: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271144u;
    {
        const bool branch_taken_0x271144 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x271148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271144u;
        // 0x271148: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271144) {
            ctx->pc = 0x271158u;
            goto label_271158;
        }
    }
    ctx->pc = 0x27114Cu;
    // 0x27114c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27114cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271150: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x271150u;
    {
        const bool branch_taken_0x271150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271150u;
        // 0x271154: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271150) {
            ctx->pc = 0x27116Cu;
            goto label_27116c;
        }
    }
    ctx->pc = 0x271158u;
label_271158:
    // 0x271158: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x271158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27115c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27115cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x271160: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x271160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271164: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x271164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x271168: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x271168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27116c:
    // 0x27116c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x27116cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x271170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x271170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271174: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x271174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x271178: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x271178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27117c: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x27117cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x271180: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x271180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x271184: 0x461b0001  sub.s       $f0, $f0, $f27
    ctx->pc = 0x271184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[27]);
    // 0x271188: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x271188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27118c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x27118cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x271190: 0x0  nop
    ctx->pc = 0x271190u;
    // NOP
    // 0x271194: 0x0  nop
    ctx->pc = 0x271194u;
    // NOP
    // 0x271198: 0x4602d883  div.s       $f2, $f27, $f2
    ctx->pc = 0x271198u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[27] * 0.0f); } else ctx->f[2] = ctx->f[27] / ctx->f[2];
    // 0x27119c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27119cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2711a0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2711a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2711a4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2711a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2711a8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2711a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2711ac:
    // 0x2711ac: 0xc66f0000  lwc1        $f15, 0x0($s3)
    ctx->pc = 0x2711acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_2711b0:
    // 0x2711b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2711b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2711b4: 0x46017832  c.eq.s      $f15, $f1
    ctx->pc = 0x2711b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[15], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2711b8: 0x0  nop
    ctx->pc = 0x2711b8u;
    // NOP
    // 0x2711bc: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2711BCu;
    {
        const bool branch_taken_0x2711bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2711bc) {
            ctx->pc = 0x2711C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2711BCu;
            // 0x2711c0: 0x4616c382  mul.s       $f14, $f24, $f22 (Delay Slot)
            ctx->f[14] = FPU_MUL_S(ctx->f[24], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2711DCu;
            goto label_2711dc;
        }
    }
    ctx->pc = 0x2711C4u;
    // 0x2711c4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2711c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2711c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2711c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2711cc: 0x0  nop
    ctx->pc = 0x2711ccu;
    // NOP
    // 0x2711d0: 0x45010091  bc1t        . + 4 + (0x91 << 2)
    ctx->pc = 0x2711D0u;
    {
        const bool branch_taken_0x2711d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2711D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711D0u;
        // 0x2711d4: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711d0) {
            ctx->pc = 0x271418u;
            goto label_271418;
        }
    }
    ctx->pc = 0x2711D8u;
    // 0x2711d8: 0x4616c382  mul.s       $f14, $f24, $f22
    ctx->pc = 0x2711d8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[24], ctx->f[22]);
label_2711dc:
    // 0x2711dc: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2711dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2711e0: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x2711e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2711e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2711e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2711e8: 0xc6700004  lwc1        $f16, 0x4($s3)
    ctx->pc = 0x2711e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2711ec: 0xc6110030  lwc1        $f17, 0x30($s0)
    ctx->pc = 0x2711ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2711f0: 0x460074c6  mov.s       $f19, $f14
    ctx->pc = 0x2711f0u;
    ctx->f[19] = FPU_MOV_S(ctx->f[14]);
    // 0x2711f4: 0xc082528  jal         func_2094A0
    ctx->pc = 0x2711F4u;
    SET_GPR_U32(ctx, 31, 0x2711FCu);
    ctx->pc = 0x2711F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2711F4u;
    // 0x2711f8: 0xc6120038  lwc1        $f18, 0x38($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2094A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2094A0u, 0x2711F4u, 0x2711FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711FCu;
label_2711fc:
    // 0x2711fc: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x2711fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271200: 0x0  nop
    ctx->pc = 0x271200u;
    // NOP
    // 0x271204: 0x45000083  bc1f        . + 4 + (0x83 << 2)
    ctx->pc = 0x271204u;
    {
        const bool branch_taken_0x271204 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271204u;
        // 0x271208: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271204) {
            ctx->pc = 0x271414u;
            goto label_271414;
        }
    }
    ctx->pc = 0x27120Cu;
    // 0x27120c: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x27120cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x271210: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x271210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271214: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x271214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x271218: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x271218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27121c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27121cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x271220: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x271220u;
    {
        const bool branch_taken_0x271220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271220u;
        // 0x271224: 0x8c560000  lw          $s6, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271220) {
            ctx->pc = 0x271414u;
            goto label_271414;
        }
    }
    ctx->pc = 0x271228u;
label_271228:
    // 0x271228: 0x240201a9  addiu       $v0, $zero, 0x1A9
    ctx->pc = 0x271228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
    // 0x27122c: 0x54620053  bnel        $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x27122Cu;
    {
        const bool branch_taken_0x27122c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27122c) {
            ctx->pc = 0x271230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27122Cu;
            // 0x271230: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27137Cu;
            goto label_27137c;
        }
    }
    ctx->pc = 0x271234u;
    // 0x271234: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x271234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271238: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x271238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27123c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27123cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271240: 0x0  nop
    ctx->pc = 0x271240u;
    // NOP
    // 0x271244: 0x45000074  bc1f        . + 4 + (0x74 << 2)
    ctx->pc = 0x271244u;
    {
        const bool branch_taken_0x271244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271244u;
        // 0x271248: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271244) {
            ctx->pc = 0x271418u;
            goto label_271418;
        }
    }
    ctx->pc = 0x27124Cu;
    // 0x27124c: 0xc780852c  lwc1        $f0, -0x7AD4($gp)
    ctx->pc = 0x27124cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271250: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x271250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271254: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x271254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x271258: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x271258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27125c: 0x0  nop
    ctx->pc = 0x27125cu;
    // NOP
    // 0x271260: 0x4500006d  bc1f        . + 4 + (0x6D << 2)
    ctx->pc = 0x271260u;
    {
        const bool branch_taken_0x271260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271260u;
        // 0x271264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271260) {
            ctx->pc = 0x271418u;
            goto label_271418;
        }
    }
    ctx->pc = 0x271268u;
    // 0x271268: 0xc09a542  jal         func_269508
    ctx->pc = 0x271268u;
    SET_GPR_U32(ctx, 31, 0x271270u);
    ctx->pc = 0x27126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271268u;
    // 0x27126c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269508u, 0x271268u, 0x271270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271270u;
label_271270:
    // 0x271270: 0xc7968530  lwc1        $f22, -0x7AD0($gp)
    ctx->pc = 0x271270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x271274: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x271274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271278: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x271278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27127c: 0x4616b880  add.s       $f2, $f23, $f22
    ctx->pc = 0x27127cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x271280: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x271280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x271284: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x271284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x271288: 0x46011d41  sub.s       $f21, $f3, $f1
    ctx->pc = 0x271288u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x27128c: 0x46002501  sub.s       $f20, $f4, $f0
    ctx->pc = 0x27128cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x271290: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x271290u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x271294: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x271294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x271298: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x271298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x27129c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x27129cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2712a0: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x2712a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2712a4: 0x0  nop
    ctx->pc = 0x2712a4u;
    // NOP
    // 0x2712a8: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x2712A8u;
    {
        const bool branch_taken_0x2712a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2712a8) {
            ctx->pc = 0x2712ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2712A8u;
            // 0x2712ac: 0xc66f0000  lwc1        $f15, 0x0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x271318u;
            goto label_271318;
        }
    }
    ctx->pc = 0x2712B0u;
    // 0x2712b0: 0x0  nop
    ctx->pc = 0x2712b0u;
    // NOP
    // 0x2712b4: 0x0  nop
    ctx->pc = 0x2712b4u;
    // NOP
    // 0x2712b8: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2712b8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2712bc: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2712bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2712c0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2712C0u;
    {
        const bool branch_taken_0x2712c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2712c0) {
            ctx->pc = 0x2712D4u;
            goto label_2712d4;
        }
    }
    ctx->pc = 0x2712C8u;
    // 0x2712c8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2712C8u;
    SET_GPR_U32(ctx, 31, 0x2712D0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2712C8u, 0x2712D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2712D0u;
label_2712d0:
    // 0x2712d0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2712d0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2712d4:
    // 0x2712d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2712d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2712d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2712d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2712dc: 0x0  nop
    ctx->pc = 0x2712dcu;
    // NOP
    // 0x2712e0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2712E0u;
    {
        const bool branch_taken_0x2712e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2712E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712E0u;
        // 0x2712e4: 0x46160dc1  sub.s       $f23, $f1, $f22 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712e0) {
            ctx->pc = 0x27130Cu;
            goto label_27130c;
        }
    }
    ctx->pc = 0x2712E8u;
    // 0x2712e8: 0x0  nop
    ctx->pc = 0x2712e8u;
    // NOP
    // 0x2712ec: 0x0  nop
    ctx->pc = 0x2712ecu;
    // NOP
    // 0x2712f0: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x2712f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
    // 0x2712f4: 0x0  nop
    ctx->pc = 0x2712f4u;
    // NOP
    // 0x2712f8: 0x0  nop
    ctx->pc = 0x2712f8u;
    // NOP
    // 0x2712fc: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x2712fcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[1];
    // 0x271300: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x271300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x271304: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271304u;
    {
        const bool branch_taken_0x271304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271304u;
        // 0x271308: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271304) {
            ctx->pc = 0x271314u;
            goto label_271314;
        }
    }
    ctx->pc = 0x27130Cu;
label_27130c:
    // 0x27130c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x27130cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x271310: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x271310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_271314:
    // 0x271314: 0xc66f0000  lwc1        $f15, 0x0($s3)
    ctx->pc = 0x271314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_271318:
    // 0x271318: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x271318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27131c: 0x46017832  c.eq.s      $f15, $f1
    ctx->pc = 0x27131cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[15], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271320: 0x0  nop
    ctx->pc = 0x271320u;
    // NOP
    // 0x271324: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x271324u;
    {
        const bool branch_taken_0x271324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x271324) {
            ctx->pc = 0x271328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271324u;
            // 0x271328: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x271344u;
            goto label_271344;
        }
    }
    ctx->pc = 0x27132Cu;
    // 0x27132c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x27132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271330: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x271330u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271334: 0x0  nop
    ctx->pc = 0x271334u;
    // NOP
    // 0x271338: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x271338u;
    {
        const bool branch_taken_0x271338 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271338u;
        // 0x27133c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271338) {
            ctx->pc = 0x271418u;
            goto label_271418;
        }
    }
    ctx->pc = 0x271340u;
    // 0x271340: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x271340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_271344:
    // 0x271344: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x271344u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x271348: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x271348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27134c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x27134cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x271350: 0xc6700004  lwc1        $f16, 0x4($s3)
    ctx->pc = 0x271350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x271354: 0xc7b10030  lwc1        $f17, 0x30($sp)
    ctx->pc = 0x271354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x271358: 0xc7938534  lwc1        $f19, -0x7ACC($gp)
    ctx->pc = 0x271358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x27135c: 0xc082528  jal         func_2094A0
    ctx->pc = 0x27135Cu;
    SET_GPR_U32(ctx, 31, 0x271364u);
    ctx->pc = 0x271360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27135Cu;
    // 0x271360: 0xc7b20038  lwc1        $f18, 0x38($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2094A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2094A0u, 0x27135Cu, 0x271364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271364u;
label_271364:
    // 0x271364: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x271364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271368: 0x0  nop
    ctx->pc = 0x271368u;
    // NOP
    // 0x27136c: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x27136Cu;
    {
        const bool branch_taken_0x27136c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27136Cu;
        // 0x271370: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27136c) {
            ctx->pc = 0x271414u;
            goto label_271414;
        }
    }
    ctx->pc = 0x271374u;
    // 0x271374: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x271374u;
    {
        const bool branch_taken_0x271374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271374u;
        // 0x271378: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271374) {
            ctx->pc = 0x2713FCu;
            goto label_2713fc;
        }
    }
    ctx->pc = 0x27137Cu;
label_27137c:
    // 0x27137c: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27137Cu;
    {
        const bool branch_taken_0x27137c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x27137c) {
            ctx->pc = 0x271380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27137Cu;
            // 0x271380: 0x8e0201e4  lw          $v0, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271394u;
            goto label_271394;
        }
    }
    ctx->pc = 0x271384u;
    // 0x271384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271388: 0xc099cce  jal         func_267338
    ctx->pc = 0x271388u;
    SET_GPR_U32(ctx, 31, 0x271390u);
    ctx->pc = 0x27138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271388u;
    // 0x27138c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267338u, 0x271388u, 0x271390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271390u;
label_271390:
    // 0x271390: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x271390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_271394:
    // 0x271394: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x271394u;
    {
        const bool branch_taken_0x271394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271394u;
        // 0x271398: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271394) {
            ctx->pc = 0x271414u;
            goto label_271414;
        }
    }
    ctx->pc = 0x27139Cu;
    // 0x27139c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27139cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2713a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2713a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713a8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x2713a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x2713ac: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x2713acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x2713b0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2713b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713b4: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x2713b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2713b8: 0xc09c254  jal         func_270950
    ctx->pc = 0x2713B8u;
    SET_GPR_U32(ctx, 31, 0x2713C0u);
    ctx->pc = 0x2713BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713B8u;
    // 0x2713bc: 0x27aa0040  addiu       $t2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270950u, 0x2713B8u, 0x2713C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713C0u;
label_2713c0:
    // 0x2713c0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2713c0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2713c4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2713c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2713c8: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x2713c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2713cc: 0x0  nop
    ctx->pc = 0x2713ccu;
    // NOP
    // 0x2713d0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2713D0u;
    {
        const bool branch_taken_0x2713d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2713D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713D0u;
        // 0x2713d4: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713d0) {
            ctx->pc = 0x2713E8u;
            goto label_2713e8;
        }
    }
    ctx->pc = 0x2713D8u;
    // 0x2713d8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2713d8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2713dc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2713dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2713e0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2713e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2713e4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2713e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2713e8:
    // 0x2713e8: 0x46191034  c.lt.s      $f2, $f25
    ctx->pc = 0x2713e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2713ec: 0x0  nop
    ctx->pc = 0x2713ecu;
    // NOP
    // 0x2713f0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2713F0u;
    {
        const bool branch_taken_0x2713f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2713F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713F0u;
        // 0x2713f4: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713f0) {
            ctx->pc = 0x271414u;
            goto label_271414;
        }
    }
    ctx->pc = 0x2713F8u;
    // 0x2713f8: 0x46001646  mov.s       $f25, $f2
    ctx->pc = 0x2713f8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[2]);
label_2713fc:
    // 0x2713fc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2713fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271400: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x271400u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x271404: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x271404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x271408: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x271408u;
    {
        const bool branch_taken_0x271408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271408u;
        // 0x27140c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271408) {
            ctx->pc = 0x271414u;
            goto label_271414;
        }
    }
    ctx->pc = 0x271410u;
label_271410:
    // 0x271410: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x271410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_271414:
    // 0x271414: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x271414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271418:
    // 0x271418: 0x7e102a  slt         $v0, $v1, $fp
    ctx->pc = 0x271418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_27141c:
    // 0x27141c: 0x1440febe  bnez        $v0, . + 4 + (-0x142 << 2)
    ctx->pc = 0x27141Cu;
    {
        const bool branch_taken_0x27141c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27141Cu;
        // 0x271420: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27141c) {
            ctx->pc = 0x270F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270f18;
        }
    }
    ctx->pc = 0x271424u;
    // 0x271424: 0x8f8cb238  lw          $t4, -0x4DC8($gp)
    ctx->pc = 0x271424u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_271428:
    // 0x271428: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x271428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x27142c: 0x2e21818  mult        $v1, $s7, $v0
    ctx->pc = 0x27142cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x271430: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x271430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x271434: 0x8c4411b4  lw          $a0, 0x11B4($v0)
    ctx->pc = 0x271434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4532)));
    // 0x271438: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x271438u;
    {
        const bool branch_taken_0x271438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271438u;
        // 0x27143c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271438) {
            ctx->pc = 0x271444u;
            goto label_271444;
        }
    }
    ctx->pc = 0x271440u;
    // 0x271440: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x271440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_271444:
    // 0x271444: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x271444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x271448: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x271448u;
    {
        const bool branch_taken_0x271448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271448) {
            ctx->pc = 0x27144Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271448u;
            // 0x27144c: 0xe4790000  swc1        $f25, 0x0($v1) (Delay Slot)
            { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x271450u;
            goto label_271450;
        }
    }
    ctx->pc = 0x271450u;
label_271450:
    // 0x271450: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x271450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x271454: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271454u;
    {
        const bool branch_taken_0x271454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271454u;
        // 0x271458: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271454) {
            ctx->pc = 0x271468u;
            goto label_271468;
        }
    }
    ctx->pc = 0x27145Cu;
    // 0x27145c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x27145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271460: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x271460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x271464: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x271464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_271468:
    // 0x271468: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x271468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x27146c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27146Cu;
    {
        const bool branch_taken_0x27146c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27146c) {
            ctx->pc = 0x271470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27146Cu;
            // 0x271470: 0xe4570000  swc1        $f23, 0x0($v0) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x271474u;
            goto label_271474;
        }
    }
    ctx->pc = 0x271474u;
label_271474:
    // 0x271474: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x271474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x271478: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x271478u;
    {
        const bool branch_taken_0x271478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271478u;
        // 0x27147c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271478) {
            ctx->pc = 0x27148Cu;
            goto label_27148c;
        }
    }
    ctx->pc = 0x271480u;
    // 0x271480: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x271480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271484: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x271484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x271488: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x271488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27148c:
    // 0x27148c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x27148cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271490: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x271490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x271494: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x271494u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x271498: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x271498u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27149c: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x27149cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2714a0: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x2714a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2714a4: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2714a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2714a8: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x2714a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2714ac: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2714acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2714b0: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2714b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2714b4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2714b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2714b8: 0xc7bb0138  lwc1        $f27, 0x138($sp)
    ctx->pc = 0x2714b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2714bc: 0xc7ba0130  lwc1        $f26, 0x130($sp)
    ctx->pc = 0x2714bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2714c0: 0xc7b90128  lwc1        $f25, 0x128($sp)
    ctx->pc = 0x2714c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2714c4: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x2714c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2714c8: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x2714c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2714cc: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x2714ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2714d0: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2714d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2714d4: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2714d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2714d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2714D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2714DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714D8u;
        // 0x2714dc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2714D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2714E0u;
}
