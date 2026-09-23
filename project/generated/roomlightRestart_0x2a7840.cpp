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

// Function: roomlightRestart
// Address: 0x2a7840 - 0x2a7994
void roomlightRestart_0x2a7840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("roomlightRestart_0x2a7840");
#endif

    switch (ctx->pc) {
        case 0x2a7868u: goto label_2a7868;
        case 0x2a7930u: goto label_2a7930;
        default: break;
    }

    ctx->pc = 0x2a7840u;

    // 0x2a7840: 0x8f82a264  lw          $v0, -0x5D9C($gp)
    ctx->pc = 0x2a7840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2a7844: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2a7844u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7848: 0x18400050  blez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2A7848u;
    {
        const bool branch_taken_0x2a7848 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7848u;
        // 0x2a784c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7848) {
            ctx->pc = 0x2A798Cu;
            goto label_2a798c;
        }
    }
    ctx->pc = 0x2A7850u;
    // 0x2a7850: 0x8f8db32c  lw          $t5, -0x4CD4($gp)
    ctx->pc = 0x2a7850u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947628)));
    // 0x2a7854: 0x8f8ca270  lw          $t4, -0x5D90($gp)
    ctx->pc = 0x2a7854u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
    // 0x2a7858: 0x8f8ab334  lw          $t2, -0x4CCC($gp)
    ctx->pc = 0x2a7858u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947636)));
    // 0x2a785c: 0x8f8bb330  lw          $t3, -0x4CD0($gp)
    ctx->pc = 0x2a785cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947632)));
    // 0x2a7860: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2a7860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a7864: 0x0  nop
    ctx->pc = 0x2a7864u;
    // NOP
label_2a7868:
    // 0x2a7868: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2a7868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a786c: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x2a786cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a7870: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2a7870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2a7874: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2a7874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a7878: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x2a7878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2a787c: 0x11400012  beqz        $t2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A787Cu;
    {
        const bool branch_taken_0x2a787c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A787Cu;
        // 0x2a7880: 0x1a32821  addu        $a1, $t5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a787c) {
            ctx->pc = 0x2A78C8u;
            goto label_2a78c8;
        }
    }
    ctx->pc = 0x2A7884u;
    // 0x2a7884: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2a7884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a7888: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2a7888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2a788c: 0x1032018  mult        $a0, $t0, $v1
    ctx->pc = 0x2a788cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a7890: 0x34420f0f  ori         $v0, $v0, 0xF0F
    ctx->pc = 0x2a7890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3855);
    // 0x2a7894: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x2a7894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2a7898: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a7898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a789c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2a789cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2a78a0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2a78a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2a78a4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a78a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a78a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a78ac: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2a78acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2a78b0: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x2a78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x2a78b4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a78b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a78b8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a78bc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2a78bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2a78c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A78C0u;
    {
        const bool branch_taken_0x2a78c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A78C0u;
        // 0x2a78c4: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a78c0) {
            ctx->pc = 0x2A78F8u;
            goto label_2a78f8;
        }
    }
    ctx->pc = 0x2A78C8u;
label_2a78c8:
    // 0x2a78c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a78c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a78cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a78ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a78d0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2a78d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2a78d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2a78d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2a78d8: 0x34420f0f  ori         $v0, $v0, 0xF0F
    ctx->pc = 0x2a78d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3855);
    // 0x2a78dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a78dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a78e0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2a78e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2a78e4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2a78e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x2a78e8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2a78e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2a78ec: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a78ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2a78f0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2a78f4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x2a78f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_2a78f8:
    // 0x2a78f8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2a78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a78fc: 0x8cc70020  lw          $a3, 0x20($a2)
    ctx->pc = 0x2a78fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a7900: 0x1c31018  mult        $v0, $t6, $v1
    ctx->pc = 0x2a7900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a7904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7908: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x2a7908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2a790c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a7910: 0xace300f8  sw          $v1, 0xF8($a3)
    ctx->pc = 0x2a7910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 3));
    // 0x2a7914: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a7914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7918: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2a7918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2a791c: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A791Cu;
    {
        const bool branch_taken_0x2a791c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A791Cu;
        // 0x2a7920: 0x1c47021  addu        $t6, $t6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a791c) {
            ctx->pc = 0x2A7978u;
            goto label_2a7978;
        }
    }
    ctx->pc = 0x2A7924u;
    // 0x2a7924: 0x8f89a264  lw          $t1, -0x5D9C($gp)
    ctx->pc = 0x2a7924u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2a7928: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a7928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a792c: 0x0  nop
    ctx->pc = 0x2a792cu;
    // NOP
label_2a7930:
    // 0x2a7930: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2a7930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a7934: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2a7934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a7938: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x2a7938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a793c: 0x8ce500f8  lw          $a1, 0xF8($a3)
    ctx->pc = 0x2a793cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x2a7940: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a7940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a7944: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a7944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a7948: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2a7948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a794c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a7950: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2a7950u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a7954: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2a7954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2a7958: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a7958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a795c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a795cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a7960: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2a7960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2a7964: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2a7964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2a7968: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A7968u;
    {
        const bool branch_taken_0x2a7968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7968u;
        // 0x2a796c: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7968) {
            ctx->pc = 0x2A7930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7930;
        }
    }
    ctx->pc = 0x2A7970u;
    // 0x2a7970: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7970u;
    {
        const bool branch_taken_0x2a7970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7970u;
        // 0x2a7974: 0x109102a  slt         $v0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7970) {
            ctx->pc = 0x2A7984u;
            goto label_2a7984;
        }
    }
    ctx->pc = 0x2A7978u;
label_2a7978:
    // 0x2a7978: 0x8f89a264  lw          $t1, -0x5D9C($gp)
    ctx->pc = 0x2a7978u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2a797c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a797cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a7980: 0x109102a  slt         $v0, $t0, $t1
    ctx->pc = 0x2a7980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_2a7984:
    // 0x2a7984: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x2A7984u;
    {
        const bool branch_taken_0x2a7984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7984u;
        // 0x2a7988: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7984) {
            ctx->pc = 0x2A7868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7868;
        }
    }
    ctx->pc = 0x2A798Cu;
label_2a798c:
    // 0x2a798c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A798Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A798Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7994u;
}
