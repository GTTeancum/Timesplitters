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

// Function: findbearings
// Address: 0x2c6018 - 0x2c64c8
void findbearings_0x2c6018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("findbearings_0x2c6018");
#endif

    switch (ctx->pc) {
        case 0x2c6074u: goto label_2c6074;
        case 0x2c6090u: goto label_2c6090;
        case 0x2c60b0u: goto label_2c60b0;
        case 0x2c6170u: goto label_2c6170;
        case 0x2c61c4u: goto label_2c61c4;
        case 0x2c61e8u: goto label_2c61e8;
        case 0x2c6258u: goto label_2c6258;
        case 0x2c6264u: goto label_2c6264;
        case 0x2c62f4u: goto label_2c62f4;
        case 0x2c6318u: goto label_2c6318;
        case 0x2c637cu: goto label_2c637c;
        case 0x2c6388u: goto label_2c6388;
        case 0x2c6414u: goto label_2c6414;
        case 0x2c6448u: goto label_2c6448;
        default: break;
    }

    ctx->pc = 0x2c6018u;

    // 0x2c6018: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2c6018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2c601c: 0x3c030f00  lui         $v1, 0xF00
    ctx->pc = 0x2c601cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
    // 0x2c6020: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2c6020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2c6024: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2c6024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2c6028: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c6028u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c602c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2c602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2c6030: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c6030u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6034: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2c6034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2c6038: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c603c: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2c603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2c6040: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2c6040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2c6044: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2c6044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2c6048: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2c6048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2c604c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2c604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2c6050: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2c6050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c6054: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c6054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c6058: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2C6058u;
    {
        const bool branch_taken_0x2c6058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6058u;
        // 0x2c605c: 0x8e120160  lw          $s2, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6058) {
            ctx->pc = 0x2C61B4u;
            goto label_2c61b4;
        }
    }
    ctx->pc = 0x2C6060u;
    // 0x2c6060: 0x26140030  addiu       $s4, $s0, 0x30
    ctx->pc = 0x2c6060u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2c6064: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c6064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c6068: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c6068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c606c: 0xc099ae4  jal         func_266B90
    ctx->pc = 0x2C606Cu;
    SET_GPR_U32(ctx, 31, 0x2C6074u);
    ctx->pc = 0x2C6070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C606Cu;
    // 0x2c6070: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B90u, 0x2C606Cu, 0x2C6074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6074u;
label_2c6074:
    // 0x2c6074: 0x8f8d9f74  lw          $t5, -0x608C($gp)
    ctx->pc = 0x2c6074u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c6078: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c6078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c607c: 0x19a00024  blez        $t5, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C607Cu;
    {
        const bool branch_taken_0x2c607c = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x2C6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C607Cu;
        // 0x2c6080: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c607c) {
            ctx->pc = 0x2C6110u;
            goto label_2c6110;
        }
    }
    ctx->pc = 0x2C6084u;
    // 0x2c6084: 0x8f8cb230  lw          $t4, -0x4DD0($gp)
    ctx->pc = 0x2c6084u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2c6088: 0x2403071c  addiu       $v1, $zero, 0x71C
    ctx->pc = 0x2c6088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2c608c: 0x0  nop
    ctx->pc = 0x2c608cu;
    // NOP
label_2c6090:
    // 0x2c6090: 0x180702d  daddu       $t6, $t4, $zero
    ctx->pc = 0x2c6090u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6094: 0x1231018  mult        $v0, $t1, $v1
    ctx->pc = 0x2c6094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c6098: 0x4c1821  addu        $v1, $v0, $t4
    ctx->pc = 0x2c6098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2c609c: 0x8c62038c  lw          $v0, 0x38C($v1)
    ctx->pc = 0x2c609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 908)));
    // 0x2c60a0: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C60A0u;
    {
        const bool branch_taken_0x2c60a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C60A0u;
        // 0x2c60a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c60a0) {
            ctx->pc = 0x2C60FCu;
            goto label_2c60fc;
        }
    }
    ctx->pc = 0x2C60A8u;
    // 0x2c60a8: 0x8f8ba2ec  lw          $t3, -0x5D14($gp)
    ctx->pc = 0x2c60a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c60ac: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x2c60acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2c60b0:
    // 0x2c60b0: 0x2405071c  addiu       $a1, $zero, 0x71C
    ctx->pc = 0x2c60b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2c60b4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2c60b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c60b8: 0x1251018  mult        $v0, $t1, $a1
    ctx->pc = 0x2c60b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c60bc: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x2c60bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2c60c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c60c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c60c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2c60c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2c60c8: 0x4e2821  addu        $a1, $v0, $t6
    ctx->pc = 0x2c60c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2c60cc: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x2c60ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c60d0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2c60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2c60d4: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x2c60d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2c60d8: 0x8466000a  lh          $a2, 0xA($v1)
    ctx->pc = 0x2c60d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2c60dc: 0x8c820390  lw          $v0, 0x390($a0)
    ctx->pc = 0x2c60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x2c60e0: 0x8ca3038c  lw          $v1, 0x38C($a1)
    ctx->pc = 0x2c60e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 908)));
    // 0x2c60e4: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x2c60e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x2c60e8: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x2c60e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c60ec: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C60ECu;
    {
        const bool branch_taken_0x2c60ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C60ECu;
        // 0x2c60f0: 0xe2980a  movz        $s3, $a3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c60ec) {
            ctx->pc = 0x2C60B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c60b0;
        }
    }
    ctx->pc = 0x2C60F4u;
    // 0x2c60f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C60F4u;
    {
        const bool branch_taken_0x2c60f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C60F4u;
        // 0x2c60f8: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c60f4) {
            ctx->pc = 0x2C6104u;
            goto label_2c6104;
        }
    }
    ctx->pc = 0x2C60FCu;
label_2c60fc:
    // 0x2c60fc: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x2c60fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2c6100: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x2c6100u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2c6104:
    // 0x2c6104: 0x12d102a  slt         $v0, $t1, $t5
    ctx->pc = 0x2c6104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x2c6108: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2C6108u;
    {
        const bool branch_taken_0x2c6108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6108u;
        // 0x2c610c: 0x2403071c  addiu       $v1, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6108) {
            ctx->pc = 0x2C6090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6090;
        }
    }
    ctx->pc = 0x2C6110u;
label_2c6110:
    // 0x2c6110: 0x1660002a  bnez        $s3, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C6110u;
    {
        const bool branch_taken_0x2c6110 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6110u;
        // 0x2c6114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6110) {
            ctx->pc = 0x2C61BCu;
            goto label_2c61bc;
        }
    }
    ctx->pc = 0x2C6118u;
    // 0x2c6118: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2c6118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c611c: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c611cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c6120: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2c6120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c6124: 0xae5102a8  sw          $s1, 0x2A8($s2)
    ctx->pc = 0x2c6124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 17));
    // 0x2c6128: 0xae400698  sw          $zero, 0x698($s2)
    ctx->pc = 0x2c6128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 0));
    // 0x2c612c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2c612cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2c6130: 0xae400a84  sw          $zero, 0xA84($s2)
    ctx->pc = 0x2c6130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2692), GPR_U32(ctx, 0));
    // 0x2c6134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c6134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c6138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c613c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6140: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2c6140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2c6144: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c6144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6148: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2c6148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2c614c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2c614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6150: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2c6150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2c6154: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x2c6154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2c6158: 0xae400b4c  sw          $zero, 0xB4C($s2)
    ctx->pc = 0x2c6158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2892), GPR_U32(ctx, 0));
    // 0x2c615c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2c615cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2c6160: 0x8e420a9c  lw          $v0, 0xA9C($s2)
    ctx->pc = 0x2c6160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2c6164: 0xae460a9c  sw          $a2, 0xA9C($s2)
    ctx->pc = 0x2c6164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 6));
    // 0x2c6168: 0xc0b1fc8  jal         func_2C7F20
    ctx->pc = 0x2C6168u;
    SET_GPR_U32(ctx, 31, 0x2C6170u);
    ctx->pc = 0x2C616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6168u;
    // 0x2c616c: 0xae420aa0  sw          $v0, 0xAA0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2720), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7F20u, 0x2C6168u, 0x2C6170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6170u;
label_2c6170:
    // 0x2c6170: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2c6170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2c6174: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x2c6174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x2c6178: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x2c6178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x2c617c: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x2c617cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x2c6180: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2c6180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6184: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2c6184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2c6188: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2c6188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c618c: 0xe441006c  swc1        $f1, 0x6C($v0)
    ctx->pc = 0x2c618cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2c6190: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2c6190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6194: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2c6194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2c6198: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2c6198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c619c: 0xe4410074  swc1        $f1, 0x74($v0)
    ctx->pc = 0x2c619cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2c61a0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2c61a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c61a4: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2c61a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2c61a8: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2c61a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c61ac: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2C61ACu;
    {
        const bool branch_taken_0x2c61ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61ACu;
        // 0x2c61b0: 0xe441007c  swc1        $f1, 0x7C($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61ac) {
            ctx->pc = 0x2C649Cu;
            goto label_2c649c;
        }
    }
    ctx->pc = 0x2C61B4u;
label_2c61b4:
    // 0x2c61b4: 0x26140030  addiu       $s4, $s0, 0x30
    ctx->pc = 0x2c61b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2c61b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c61b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c61bc:
    // 0x2c61bc: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C61BCu;
    SET_GPR_U32(ctx, 31, 0x2C61C4u);
    ctx->pc = 0x2C61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C61BCu;
    // 0x2c61c0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C61BCu, 0x2C61C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61C4u;
label_2c61c4:
    // 0x2c61c4: 0x8e420bb8  lw          $v0, 0xBB8($s2)
    ctx->pc = 0x2c61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3000)));
    // 0x2c61c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C61C8u;
    {
        const bool branch_taken_0x2c61c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c61c8) {
            ctx->pc = 0x2C61DCu;
            goto label_2c61dc;
        }
    }
    ctx->pc = 0x2C61D0u;
    // 0x2c61d0: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2c61d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2c61d4: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C61D4u;
    {
        const bool branch_taken_0x2c61d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2C61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61D4u;
        // 0x2c61d8: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61d4) {
            ctx->pc = 0x2C61F0u;
            goto label_2c61f0;
        }
    }
    ctx->pc = 0x2C61DCu;
label_2c61dc:
    // 0x2c61dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c61dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c61e0: 0xc099ae4  jal         func_266B90
    ctx->pc = 0x2C61E0u;
    SET_GPR_U32(ctx, 31, 0x2C61E8u);
    ctx->pc = 0x2C61E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C61E0u;
    // 0x2c61e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B90u, 0x2C61E0u, 0x2C61E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61E8u;
label_2c61e8:
    // 0x2c61e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2C61E8u;
    {
        const bool branch_taken_0x2c61e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61E8u;
        // 0x2c61ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61e8) {
            ctx->pc = 0x2C6268u;
            goto label_2c6268;
        }
    }
    ctx->pc = 0x2C61F0u;
label_2c61f0:
    // 0x2c61f0: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c61f4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2c61f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c61f8: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x2c61f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c61fc: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x2c61fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6200: 0xc6050038  lwc1        $f5, 0x38($s0)
    ctx->pc = 0x2c6200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c6204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c6204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c6208: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2c6208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c620c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6210: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c6210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6214: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x2c6214u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2c6218: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2c6218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c621c: 0x46012881  sub.s       $f2, $f5, $f1
    ctx->pc = 0x2c621cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2c6220: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2c6220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c6224: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c6224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c6228: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c6228u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c622c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c622cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6230: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2c6230u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c6234: 0x0  nop
    ctx->pc = 0x2c6234u;
    // NOP
    // 0x2c6238: 0x0  nop
    ctx->pc = 0x2c6238u;
    // NOP
    // 0x2c623c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2c623cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c6240: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2c6240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6244: 0x0  nop
    ctx->pc = 0x2c6244u;
    // NOP
    // 0x2c6248: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6248u;
    {
        const bool branch_taken_0x2c6248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6248) {
            ctx->pc = 0x2C624Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6248u;
            // 0x2c624c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C625Cu;
            goto label_2c625c;
        }
    }
    ctx->pc = 0x2C6250u;
    // 0x2c6250: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C6250u;
    SET_GPR_U32(ctx, 31, 0x2C6258u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C6250u, 0x2C6258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6258u;
label_2c6258:
    // 0x2c6258: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c6258u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c625c:
    // 0x2c625c: 0xc099ae4  jal         func_266B90
    ctx->pc = 0x2C625Cu;
    SET_GPR_U32(ctx, 31, 0x2C6264u);
    ctx->pc = 0x2C6260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C625Cu;
    // 0x2c6260: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B90u, 0x2C625Cu, 0x2C6264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6264u;
label_2c6264:
    // 0x2c6264: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c6264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6268:
    // 0x2c6268: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2c6268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c626c: 0x12330022  beq         $s1, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C626Cu;
    {
        const bool branch_taken_0x2c626c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x2C6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C626Cu;
        // 0x2c6270: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c626c) {
            ctx->pc = 0x2C62F8u;
            goto label_2c62f8;
        }
    }
    ctx->pc = 0x2C6274u;
    // 0x2c6274: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c6274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c6278: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2c6278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c627c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2c627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6280: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x2c6280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6284: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c6284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6288: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x2c6288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c628c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2c628cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c6290: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2c6290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c6294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c6294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c6298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c629c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x2c629cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c62a0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2c62a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c62a4: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2c62a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c62a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c62a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c62ac: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x2c62acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2c62b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c62b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c62b4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c62b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c62b8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2c62b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c62bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2c62bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c62c0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2c62c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c62c4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c62c8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c62c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c62cc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2c62ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c62d0: 0xc6400bc0  lwc1        $f0, 0xBC0($s2)
    ctx->pc = 0x2c62d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c62d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c62d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c62d8: 0xc6410bc4  lwc1        $f1, 0xBC4($s2)
    ctx->pc = 0x2c62d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c62dc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2c62dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c62e0: 0xc6400bc8  lwc1        $f0, 0xBC8($s2)
    ctx->pc = 0x2c62e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c62e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2c62e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2c62e8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c62e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c62ec: 0xc09640e  jal         func_259038
    ctx->pc = 0x2C62ECu;
    SET_GPR_U32(ctx, 31, 0x2C62F4u);
    ctx->pc = 0x2C62F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C62ECu;
    // 0x2c62f0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2C62ECu, 0x2C62F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C62F4u;
label_2c62f4:
    // 0x2c62f4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c62f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c62f8:
    // 0x2c62f8: 0x12e0004e  beqz        $s7, . + 4 + (0x4E << 2)
    ctx->pc = 0x2C62F8u;
    {
        const bool branch_taken_0x2c62f8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62F8u;
        // 0x2c62fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62f8) {
            ctx->pc = 0x2C6434u;
            goto label_2c6434;
        }
    }
    ctx->pc = 0x2C6300u;
    // 0x2c6300: 0x1233004e  beq         $s1, $s3, . + 4 + (0x4E << 2)
    ctx->pc = 0x2C6300u;
    {
        const bool branch_taken_0x2c6300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x2C6304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6300u;
        // 0x2c6304: 0x2ac2004b  slti        $v0, $s6, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6300) {
            ctx->pc = 0x2C643Cu;
            goto label_2c643c;
        }
    }
    ctx->pc = 0x2C6308u;
    // 0x2c6308: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2C6308u;
    {
        const bool branch_taken_0x2c6308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6308u;
        // 0x2c630c: 0x2415001c  addiu       $s5, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6308) {
            ctx->pc = 0x2C6430u;
            goto label_2c6430;
        }
    }
    ctx->pc = 0x2C6310u;
    // 0x2c6310: 0x2351018  mult        $v0, $s1, $s5
    ctx->pc = 0x2c6310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c6314: 0x0  nop
    ctx->pc = 0x2c6314u;
    // NOP
label_2c6318:
    // 0x2c6318: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c6318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c631c: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x2c631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6320: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x2c6320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6324: 0xc6050038  lwc1        $f5, 0x38($s0)
    ctx->pc = 0x2c6324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c6328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c6328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c632c: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2c632cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6330: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c6330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6334: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c6334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6338: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x2c6338u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2c633c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2c633cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c6340: 0x46012881  sub.s       $f2, $f5, $f1
    ctx->pc = 0x2c6340u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2c6344: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2c6344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c6348: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c6348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c634c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c634cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c6350: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6354: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2c6354u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c6358: 0x0  nop
    ctx->pc = 0x2c6358u;
    // NOP
    // 0x2c635c: 0x0  nop
    ctx->pc = 0x2c635cu;
    // NOP
    // 0x2c6360: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2c6360u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c6364: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2c6364u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6368: 0x0  nop
    ctx->pc = 0x2c6368u;
    // NOP
    // 0x2c636c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C636Cu;
    {
        const bool branch_taken_0x2c636c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c636c) {
            ctx->pc = 0x2C6370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C636Cu;
            // 0x2c6370: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6380u;
            goto label_2c6380;
        }
    }
    ctx->pc = 0x2C6374u;
    // 0x2c6374: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C6374u;
    SET_GPR_U32(ctx, 31, 0x2C637Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C6374u, 0x2C637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C637Cu;
label_2c637c:
    // 0x2c637c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c637cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c6380:
    // 0x2c6380: 0xc099ae4  jal         func_266B90
    ctx->pc = 0x2C6380u;
    SET_GPR_U32(ctx, 31, 0x2C6388u);
    ctx->pc = 0x2C6384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6380u;
    // 0x2c6384: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B90u, 0x2C6380u, 0x2C6388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6388u;
label_2c6388:
    // 0x2c6388: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2c6388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c638c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c638cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6390: 0x12330021  beq         $s1, $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C6390u;
    {
        const bool branch_taken_0x2c6390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x2C6394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6390u;
        // 0x2c6394: 0x2351018  mult        $v0, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6390) {
            ctx->pc = 0x2C6418u;
            goto label_2c6418;
        }
    }
    ctx->pc = 0x2C6398u;
    // 0x2c6398: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c6398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c639c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2c639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c63a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c63a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c63a4: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x2c63a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c63a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2c63a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c63ac: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x2c63acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c63b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c63b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c63b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c63b8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2c63b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c63bc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2c63bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c63c0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x2c63c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c63c4: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2c63c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c63c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c63c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c63cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c63ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c63d0: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x2c63d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2c63d4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c63d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c63d8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2c63d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c63dc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2c63dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c63e0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2c63e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c63e4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c63e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c63e8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c63e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c63ec: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2c63ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c63f0: 0xc6400bc0  lwc1        $f0, 0xBC0($s2)
    ctx->pc = 0x2c63f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c63f4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c63f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c63f8: 0xc6410bc4  lwc1        $f1, 0xBC4($s2)
    ctx->pc = 0x2c63f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c63fc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2c63fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c6400: 0xc6400bc8  lwc1        $f0, 0xBC8($s2)
    ctx->pc = 0x2c6400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6404: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2c6404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2c6408: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c6408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c640c: 0xc09640e  jal         func_259038
    ctx->pc = 0x2C640Cu;
    SET_GPR_U32(ctx, 31, 0x2C6414u);
    ctx->pc = 0x2C6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C640Cu;
    // 0x2c6410: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2C640Cu, 0x2C6414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6414u;
label_2c6414:
    // 0x2c6414: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c6414u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6418:
    // 0x2c6418: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6418u;
    {
        const bool branch_taken_0x2c6418 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6418u;
        // 0x2c641c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6418) {
            ctx->pc = 0x2C6430u;
            goto label_2c6430;
        }
    }
    ctx->pc = 0x2C6420u;
    // 0x2c6420: 0x12330006  beq         $s1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6420u;
    {
        const bool branch_taken_0x2c6420 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x2C6424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6420u;
        // 0x2c6424: 0x2ac2004b  slti        $v0, $s6, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6420) {
            ctx->pc = 0x2C643Cu;
            goto label_2c643c;
        }
    }
    ctx->pc = 0x2C6428u;
    // 0x2c6428: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x2C6428u;
    {
        const bool branch_taken_0x2c6428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6428u;
        // 0x2c642c: 0x2351018  mult        $v0, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6428) {
            ctx->pc = 0x2C6318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6318;
        }
    }
    ctx->pc = 0x2C6430u;
label_2c6430:
    // 0x2c6430: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c6430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c6434:
    // 0x2c6434: 0x56220012  bnel        $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C6434u;
    {
        const bool branch_taken_0x2c6434 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6434) {
            ctx->pc = 0x2C6438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6434u;
            // 0x2c6438: 0x8e430a9c  lw          $v1, 0xA9C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6480u;
            goto label_2c6480;
        }
    }
    ctx->pc = 0x2C643Cu;
label_2c643c:
    // 0x2c643c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c643cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c6440: 0xc099ae4  jal         func_266B90
    ctx->pc = 0x2C6440u;
    SET_GPR_U32(ctx, 31, 0x2C6448u);
    ctx->pc = 0x2C6444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6440u;
    // 0x2c6444: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B90u, 0x2C6440u, 0x2C6448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6448u;
label_2c6448:
    // 0x2c6448: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c6448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c644c: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c644cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c6450: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2c6450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c6454: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2c6454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c6458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c6458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c645c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6460: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2c6460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2c6464: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c6464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6468: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2c6468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2c646c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2c646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6470: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2c6470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2c6474: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x2c6474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2c6478: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2c6478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2c647c: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2c647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
label_2c6480:
    // 0x2c6480: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2c6480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2c6484: 0xae420a9c  sw          $v0, 0xA9C($s2)
    ctx->pc = 0x2c6484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 2));
    // 0x2c6488: 0xae5102a8  sw          $s1, 0x2A8($s2)
    ctx->pc = 0x2c6488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 17));
    // 0x2c648c: 0xae430aa0  sw          $v1, 0xAA0($s2)
    ctx->pc = 0x2c648cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2720), GPR_U32(ctx, 3));
    // 0x2c6490: 0xae400698  sw          $zero, 0x698($s2)
    ctx->pc = 0x2c6490u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 0));
    // 0x2c6494: 0xae400a84  sw          $zero, 0xA84($s2)
    ctx->pc = 0x2c6494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2692), GPR_U32(ctx, 0));
    // 0x2c6498: 0xae400b4c  sw          $zero, 0xB4C($s2)
    ctx->pc = 0x2c6498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2892), GPR_U32(ctx, 0));
label_2c649c:
    // 0x2c649c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2c649cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c64a0: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2c64a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c64a4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2c64a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c64a8: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2c64a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c64ac: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2c64acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c64b0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2c64b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c64b4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2c64b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c64b8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2c64b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c64bc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2c64bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c64c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C64C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64C0u;
        // 0x2c64c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C64C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C64C8u;
}
