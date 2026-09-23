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

// Function: propDrop
// Address: 0x26eee8 - 0x26f45c
void propDrop_0x26eee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propDrop_0x26eee8");
#endif

    switch (ctx->pc) {
        case 0x26ef9cu: goto label_26ef9c;
        case 0x26efb8u: goto label_26efb8;
        case 0x26f058u: goto label_26f058;
        case 0x26f064u: goto label_26f064;
        case 0x26f0d4u: goto label_26f0d4;
        case 0x26f100u: goto label_26f100;
        case 0x26f128u: goto label_26f128;
        case 0x26f16cu: goto label_26f16c;
        case 0x26f1c8u: goto label_26f1c8;
        case 0x26f298u: goto label_26f298;
        default: break;
    }

    ctx->pc = 0x26eee8u;

    // 0x26eee8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x26eee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x26eeec: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x26eeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x26eef0: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x26eef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x26eef4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x26eef4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eef8: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x26eef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x26eefc: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x26eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x26ef00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26ef00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef04: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x26ef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x26ef08: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x26ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x26ef0c: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x26ef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x26ef10: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x26ef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x26ef14: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x26ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x26ef18: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x26ef18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x26ef1c: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x26ef1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x26ef20: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x26ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x26ef24: 0x8c4400f4  lw          $a0, 0xF4($v0)
    ctx->pc = 0x26ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x26ef28: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26ef2c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x26ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x26ef30: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26EF30u;
    {
        const bool branch_taken_0x26ef30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF30u;
        // 0x26ef34: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef30) {
            ctx->pc = 0x26EF78u;
            goto label_26ef78;
        }
    }
    ctx->pc = 0x26EF38u;
    // 0x26ef38: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x26ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x26ef3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26ef3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ef40: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26EF40u;
    {
        const bool branch_taken_0x26ef40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ef40) {
            ctx->pc = 0x26EF78u;
            goto label_26ef78;
        }
    }
    ctx->pc = 0x26EF48u;
    // 0x26ef48: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x26ef48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ef4c: 0xc6400234  lwc1        $f0, 0x234($s2)
    ctx->pc = 0x26ef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ef50: 0xc6420238  lwc1        $f2, 0x238($s2)
    ctx->pc = 0x26ef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ef54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26ef54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ef58: 0xc643023c  lwc1        $f3, 0x23C($s2)
    ctx->pc = 0x26ef58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26ef5c: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x26ef5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x26ef60: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x26ef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ef64: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26ef64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26ef68: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x26ef68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x26ef6c: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x26ef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ef70: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x26ef70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x26ef74: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x26ef74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_26ef78:
    // 0x26ef78: 0x13c0003c  beqz        $fp, . + 4 + (0x3C << 2)
    ctx->pc = 0x26EF78u;
    {
        const bool branch_taken_0x26ef78 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF78u;
        // 0x26ef7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef78) {
            ctx->pc = 0x26F06Cu;
            goto label_26f06c;
        }
    }
    ctx->pc = 0x26EF80u;
    // 0x26ef80: 0x8ec40104  lw          $a0, 0x104($s6)
    ctx->pc = 0x26ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x26ef84: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x26ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26ef88: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x26ef88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x26ef8c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x26EF8Cu;
    {
        const bool branch_taken_0x26ef8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF8Cu;
        // 0x26ef90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef8c) {
            ctx->pc = 0x26F05Cu;
            goto label_26f05c;
        }
    }
    ctx->pc = 0x26EF94u;
    // 0x26ef94: 0xc089e58  jal         func_227960
    ctx->pc = 0x26EF94u;
    SET_GPR_U32(ctx, 31, 0x26EF9Cu);
    ctx->pc = 0x227960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227960u, 0x26EF94u, 0x26EF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF9Cu;
label_26ef9c:
    // 0x26ef9c: 0x8ec40104  lw          $a0, 0x104($s6)
    ctx->pc = 0x26ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x26efa0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x26efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26efa4: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x26efa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x26efa8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26EFA8u;
    {
        const bool branch_taken_0x26efa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26efa8) {
            ctx->pc = 0x26F05Cu;
            goto label_26f05c;
        }
    }
    ctx->pc = 0x26EFB0u;
    // 0x26efb0: 0xc089e58  jal         func_227960
    ctx->pc = 0x26EFB0u;
    SET_GPR_U32(ctx, 31, 0x26EFB8u);
    ctx->pc = 0x227960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227960u, 0x26EFB0u, 0x26EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFB8u;
label_26efb8:
    // 0x26efb8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26EFB8u;
    {
        const bool branch_taken_0x26efb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFB8u;
        // 0x26efbc: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26efb8) {
            ctx->pc = 0x26F05Cu;
            goto label_26f05c;
        }
    }
    ctx->pc = 0x26EFC0u;
    // 0x26efc0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x26efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x26efc4: 0x10820025  beq         $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x26EFC4u;
    {
        const bool branch_taken_0x26efc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFC4u;
        // 0x26efc8: 0x28820013  slti        $v0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26efc4) {
            ctx->pc = 0x26F05Cu;
            goto label_26f05c;
        }
    }
    ctx->pc = 0x26EFCCu;
    // 0x26efcc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26EFCCu;
    {
        const bool branch_taken_0x26efcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFCCu;
        // 0x26efd0: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26efcc) {
            ctx->pc = 0x26EFECu;
            goto label_26efec;
        }
    }
    ctx->pc = 0x26EFD4u;
    // 0x26efd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26EFD4u;
    {
        const bool branch_taken_0x26efd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFD4u;
        // 0x26efd8: 0x2882000e  slti        $v0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26efd4) {
            ctx->pc = 0x26EFF8u;
            goto label_26eff8;
        }
    }
    ctx->pc = 0x26EFDCu;
    // 0x26efdc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26EFDCu;
    {
        const bool branch_taken_0x26efdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFDCu;
        // 0x26efe0: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26efdc) {
            ctx->pc = 0x26EFFCu;
            goto label_26effc;
        }
    }
    ctx->pc = 0x26EFE4u;
    // 0x26efe4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26EFE4u;
    {
        const bool branch_taken_0x26efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26efe4) {
            ctx->pc = 0x26F05Cu;
            goto label_26f05c;
        }
    }
    ctx->pc = 0x26EFECu;
label_26efec:
    // 0x26efec: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x26efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x26eff0: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26EFF0u;
    {
        const bool branch_taken_0x26eff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26eff0) {
            ctx->pc = 0x26F05Cu;
            goto label_26f05c;
        }
    }
    ctx->pc = 0x26EFF8u;
label_26eff8:
    // 0x26eff8: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x26eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_26effc:
    // 0x26effc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x26effcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x26f000: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x26f000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26f004: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x26f004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x26f008: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26f008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f00c: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x26f00cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26f010: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x26f010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x26f014: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x26f014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x26f018: 0x8c49026c  lw          $t1, 0x26C($v0)
    ctx->pc = 0x26f018u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x26f01c: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x26F01Cu;
    {
        const bool branch_taken_0x26f01c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x26F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F01Cu;
        // 0x26f020: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f01c) {
            ctx->pc = 0x26F05Cu;
            goto label_26f05c;
        }
    }
    ctx->pc = 0x26F024u;
    // 0x26f024: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f028: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x26f028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26f02c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26f02cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f030: 0x8ec60104  lw          $a2, 0x104($s6)
    ctx->pc = 0x26f030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x26f034: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x26f034u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x26f038: 0xc64d0030  lwc1        $f13, 0x30($s2)
    ctx->pc = 0x26f038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26f03c: 0x46006446  mov.s       $f17, $f12
    ctx->pc = 0x26f03cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[12]);
    // 0x26f040: 0xc64e0034  lwc1        $f14, 0x34($s2)
    ctx->pc = 0x26f040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26f044: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x26f044u;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
    // 0x26f048: 0xc64f0038  lwc1        $f15, 0x38($s2)
    ctx->pc = 0x26f048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x26f04c: 0xc79384cc  lwc1        $f19, -0x7B34($gp)
    ctx->pc = 0x26f04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x26f050: 0xc09cc38  jal         func_2730E0
    ctx->pc = 0x26F050u;
    SET_GPR_U32(ctx, 31, 0x26F058u);
    ctx->pc = 0x26F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F050u;
    // 0x26f054: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2730E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2730E0u, 0x26F050u, 0x26F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F058u;
label_26f058:
    // 0x26f058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f05c:
    // 0x26f05c: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x26F05Cu;
    SET_GPR_U32(ctx, 31, 0x26F064u);
    ctx->pc = 0x26F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F05Cu;
    // 0x26f060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x26F05Cu, 0x26F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F064u;
label_26f064:
    // 0x26f064: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26F064u;
    {
        const bool branch_taken_0x26f064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F064u;
        // 0x26f068: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f064) {
            ctx->pc = 0x26F084u;
            goto label_26f084;
        }
    }
    ctx->pc = 0x26F06Cu;
label_26f06c:
    // 0x26f06c: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x26f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x26f070: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x26f070u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x26f074: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x26f074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x26f078: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x26f078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x26f07c: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x26f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x26f080: 0xae4000c4  sw          $zero, 0xC4($s2)
    ctx->pc = 0x26f080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
label_26f084:
    // 0x26f084: 0x124000e8  beqz        $s2, . + 4 + (0xE8 << 2)
    ctx->pc = 0x26F084u;
    {
        const bool branch_taken_0x26f084 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F084u;
        // 0x26f088: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f084) {
            ctx->pc = 0x26F428u;
            goto label_26f428;
        }
    }
    ctx->pc = 0x26F08Cu;
    // 0x26f08c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x26f08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26f090: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26f090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26f094: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x26f094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
    // 0x26f098: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x26f098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x26f09c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x26f09cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26f0a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26f0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26f0a4: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x26f0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x26f0a8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x26f0a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26f0ac: 0xae450010  sw          $a1, 0x10($s2)
    ctx->pc = 0x26f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 5));
    // 0x26f0b0: 0xae50008c  sw          $s0, 0x8C($s2)
    ctx->pc = 0x26f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 16));
    // 0x26f0b4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x26f0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f0b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f0bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0c0: 0x8e530160  lw          $s3, 0x160($s2)
    ctx->pc = 0x26f0c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x26f0c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26f0c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0c8: 0xa4c00124  sh          $zero, 0x124($a2)
    ctx->pc = 0x26f0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 292), (uint16_t)GPR_U32(ctx, 0));
    // 0x26f0cc: 0xc09829e  jal         func_260A78
    ctx->pc = 0x26F0CCu;
    SET_GPR_U32(ctx, 31, 0x26F0D4u);
    ctx->pc = 0x26F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F0CCu;
    // 0x26f0d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x26F0CCu, 0x26F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F0D4u;
label_26f0d4:
    // 0x26f0d4: 0xc79484d0  lwc1        $f20, -0x7B30($gp)
    ctx->pc = 0x26f0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26f0d8: 0xae700044  sw          $s0, 0x44($s3)
    ctx->pc = 0x26f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 16));
    // 0x26f0dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f0e0: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x26f0e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26f0e4: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x26f0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26f0e8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x26f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26f0ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26f0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0f0: 0xae630040  sw          $v1, 0x40($s3)
    ctx->pc = 0x26f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
    // 0x26f0f4: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x26f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x26f0f8: 0xc099286  jal         func_264A18
    ctx->pc = 0x26F0F8u;
    SET_GPR_U32(ctx, 31, 0x26F100u);
    ctx->pc = 0x26F0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F0F8u;
    // 0x26f0fc: 0x8ec402a8  lw          $a0, 0x2A8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A18u, 0x26F0F8u, 0x26F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F100u;
label_26f100:
    // 0x26f100: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26f100u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f104: 0x8ec302a8  lw          $v1, 0x2A8($s6)
    ctx->pc = 0x26f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 680)));
    // 0x26f108: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x26f108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x26f10c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x26f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x26f110: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26f110u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x26f114: 0x1a800022  blez        $s4, . + 4 + (0x22 << 2)
    ctx->pc = 0x26F114u;
    {
        const bool branch_taken_0x26f114 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x26F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F114u;
        // 0x26f118: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f114) {
            ctx->pc = 0x26F1A0u;
            goto label_26f1a0;
        }
    }
    ctx->pc = 0x26F11Cu;
    // 0x26f11c: 0x8f87a2ec  lw          $a3, -0x5D14($gp)
    ctx->pc = 0x26f11cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x26f120: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x26f120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x26f124: 0x0  nop
    ctx->pc = 0x26f124u;
    // NOP
label_26f128:
    // 0x26f128: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x26f128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26f12c: 0x2e28021  addu        $s0, $s7, $v0
    ctx->pc = 0x26f12cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x26f130: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x26f130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26f134: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26f138: 0xc78184d4  lwc1        $f1, -0x7B2C($gp)
    ctx->pc = 0x26f138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f13c: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x26f13cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26f140: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x26f140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x26f144: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x26f144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f148: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x26f148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x26f14c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26f14cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f150: 0x0  nop
    ctx->pc = 0x26f150u;
    // NOP
    // 0x26f154: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x26F154u;
    {
        const bool branch_taken_0x26f154 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f154) {
            ctx->pc = 0x26F158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F154u;
            // 0x26f158: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F18Cu;
            goto label_26f18c;
        }
    }
    ctx->pc = 0x26F15Cu;
    // 0x26f15c: 0x8ec40bcc  lw          $a0, 0xBCC($s6)
    ctx->pc = 0x26f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3020)));
    // 0x26f160: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f164: 0xc0b1a02  jal         func_2C6808
    ctx->pc = 0x26F164u;
    SET_GPR_U32(ctx, 31, 0x26F16Cu);
    ctx->pc = 0x26F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F164u;
    // 0x26f168: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6808u, 0x26F164u, 0x26F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F16Cu;
label_26f16c:
    // 0x26f16c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F16Cu;
    {
        const bool branch_taken_0x26f16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F16Cu;
        // 0x26f170: 0x151880  sll         $v1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f16c) {
            ctx->pc = 0x26F184u;
            goto label_26f184;
        }
    }
    ctx->pc = 0x26F174u;
    // 0x26f174: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26f174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26f178: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x26f178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x26f17c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26f17cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x26f180: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x26f180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
label_26f184:
    // 0x26f184: 0x8f87a2ec  lw          $a3, -0x5D14($gp)
    ctx->pc = 0x26f184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x26f188: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26f188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26f18c:
    // 0x26f18c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x26f18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x26f190: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x26F190u;
    {
        const bool branch_taken_0x26f190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F190u;
        // 0x26f194: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f190) {
            ctx->pc = 0x26F128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f128;
        }
    }
    ctx->pc = 0x26F198u;
    // 0x26f198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F198u;
    {
        const bool branch_taken_0x26f198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F198u;
        // 0x26f19c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f198) {
            ctx->pc = 0x26F1A8u;
            goto label_26f1a8;
        }
    }
    ctx->pc = 0x26F1A0u;
label_26f1a0:
    // 0x26f1a0: 0x8f87a2ec  lw          $a3, -0x5D14($gp)
    ctx->pc = 0x26f1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x26f1a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26f1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f1a8:
    // 0x26f1a8: 0x1aa0002d  blez        $s5, . + 4 + (0x2D << 2)
    ctx->pc = 0x26F1A8u;
    {
        const bool branch_taken_0x26f1a8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x26F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1A8u;
        // 0x26f1ac: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1a8) {
            ctx->pc = 0x26F260u;
            goto label_26f260;
        }
    }
    ctx->pc = 0x26F1B0u;
    // 0x26f1b0: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x26f1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26f1b4: 0xc6450030  lwc1        $f5, 0x30($s2)
    ctx->pc = 0x26f1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26f1b8: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x26f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26f1bc: 0xc6660014  lwc1        $f6, 0x14($s3)
    ctx->pc = 0x26f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26f1c0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x26f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x26f1c4: 0x0  nop
    ctx->pc = 0x26f1c4u;
    // NOP
label_26f1c8:
    // 0x26f1c8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x26f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26f1cc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x26f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26f1d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26f1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f1d4: 0x833018  mult        $a2, $a0, $v1
    ctx->pc = 0x26f1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x26f1d8: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x26f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x26f1dc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x26f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f1e0: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x26f1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f1e4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x26f1e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x26f1e8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x26f1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f1ec: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x26f1ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x26f1f0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x26f1f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x26f1f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x26f1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26f1f8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x26f1f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26f1fc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x26f1fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26f200: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26f200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26f204: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x26f204u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26f208: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x26f208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f20c: 0x0  nop
    ctx->pc = 0x26f20cu;
    // NOP
    // 0x26f210: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x26F210u;
    {
        const bool branch_taken_0x26f210 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f210) {
            ctx->pc = 0x26F214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F210u;
            // 0x26f214: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F24Cu;
            goto label_26f24c;
        }
    }
    ctx->pc = 0x26F218u;
    // 0x26f218: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x26f218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x26f21c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f220: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26f220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f224: 0x0  nop
    ctx->pc = 0x26f224u;
    // NOP
    // 0x26f228: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x26F228u;
    {
        const bool branch_taken_0x26f228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F228u;
        // 0x26f22c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f228) {
            ctx->pc = 0x26F248u;
            goto label_26f248;
        }
    }
    ctx->pc = 0x26F230u;
    // 0x26f230: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x26f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26f234: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26f234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26f238: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F238u;
    {
        const bool branch_taken_0x26f238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f238) {
            ctx->pc = 0x26F23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F238u;
            // 0x26f23c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F24Cu;
            goto label_26f24c;
        }
    }
    ctx->pc = 0x26F240u;
    // 0x26f240: 0xae640040  sw          $a0, 0x40($s3)
    ctx->pc = 0x26f240u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 4));
    // 0x26f244: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x26f244u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_26f248:
    // 0x26f248: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26f248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26f24c:
    // 0x26f24c: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x26f24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x26f250: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x26F250u;
    {
        const bool branch_taken_0x26f250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F250u;
        // 0x26f254: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f250) {
            ctx->pc = 0x26F1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f1c8;
        }
    }
    ctx->pc = 0x26F258u;
    // 0x26f258: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F258u;
    {
        const bool branch_taken_0x26f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F258u;
        // 0x26f25c: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f258) {
            ctx->pc = 0x26F268u;
            goto label_26f268;
        }
    }
    ctx->pc = 0x26F260u;
label_26f260:
    // 0x26f260: 0xc6660014  lwc1        $f6, 0x14($s3)
    ctx->pc = 0x26f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26f264: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x26f264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_26f268:
    // 0x26f268: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26f268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f26c: 0x14820023  bne         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x26F26Cu;
    {
        const bool branch_taken_0x26f26c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f26c) {
            ctx->pc = 0x26F2FCu;
            goto label_26f2fc;
        }
    }
    ctx->pc = 0x26F274u;
    // 0x26f274: 0x8ec202a8  lw          $v0, 0x2A8($s6)
    ctx->pc = 0x26f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 680)));
    // 0x26f278: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26f278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f27c: 0xc79484d8  lwc1        $f20, -0x7B28($gp)
    ctx->pc = 0x26f27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26f280: 0x1a80001e  blez        $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x26F280u;
    {
        const bool branch_taken_0x26f280 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x26F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F280u;
        // 0x26f284: 0xae620040  sw          $v0, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f280) {
            ctx->pc = 0x26F2FCu;
            goto label_26f2fc;
        }
    }
    ctx->pc = 0x26F288u;
    // 0x26f288: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x26f288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26f28c: 0xc6450030  lwc1        $f5, 0x30($s2)
    ctx->pc = 0x26f28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26f290: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x26f290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26f294: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x26f294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_26f298:
    // 0x26f298: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x26f298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26f29c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x26f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x26f2a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f2a4: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x26f2a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26f2a8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x26f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x26f2ac: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x26f2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f2b0: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x26f2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f2b4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x26f2b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x26f2b8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x26f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f2bc: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x26f2bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x26f2c0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x26f2c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x26f2c4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x26f2c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26f2c8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x26f2c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26f2cc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x26f2ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26f2d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26f2d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26f2d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26f2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26f2d8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x26f2d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f2dc: 0x0  nop
    ctx->pc = 0x26f2dcu;
    // NOP
    // 0x26f2e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26F2E0u;
    {
        const bool branch_taken_0x26f2e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2E0u;
        // 0x26f2e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2e0) {
            ctx->pc = 0x26F2F0u;
            goto label_26f2f0;
        }
    }
    ctx->pc = 0x26F2E8u;
    // 0x26f2e8: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x26f2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    // 0x26f2ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26f2ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_26f2f0:
    // 0x26f2f0: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x26f2f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x26f2f4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x26F2F4u;
    {
        const bool branch_taken_0x26f2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2F4u;
        // 0x26f2f8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2f4) {
            ctx->pc = 0x26F298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f298;
        }
    }
    ctx->pc = 0x26F2FCu;
label_26f2fc:
    // 0x26f2fc: 0x57c0000e  bnel        $fp, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x26F2FCu;
    {
        const bool branch_taken_0x26f2fc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f2fc) {
            ctx->pc = 0x26F300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F2FCu;
            // 0x26f300: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F338u;
            goto label_26f338;
        }
    }
    ctx->pc = 0x26F304u;
    // 0x26f304: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x26f304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26f308: 0x34850003  ori         $a1, $a0, 0x3
    ctx->pc = 0x26f308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x26f30c: 0xae450010  sw          $a1, 0x10($s2)
    ctx->pc = 0x26f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 5));
    // 0x26f310: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x26f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x26f314: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x26f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x26f318: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F318u;
    {
        const bool branch_taken_0x26f318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F318u;
        // 0x26f31c: 0x34820043  ori         $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)67);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f318) {
            ctx->pc = 0x26F32Cu;
            goto label_26f32c;
        }
    }
    ctx->pc = 0x26F320u;
    // 0x26f320: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26f320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26f324: 0x3442ffbf  ori         $v0, $v0, 0xFFBF
    ctx->pc = 0x26f324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65471);
    // 0x26f328: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x26f328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_26f32c:
    // 0x26f32c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x26f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x26f330: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x26f330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x26f334: 0xae640024  sw          $a0, 0x24($s3)
    ctx->pc = 0x26f334u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 4));
label_26f338:
    // 0x26f338: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x26f338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26f33c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x26f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x26f340: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x26f340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26f344: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x26f344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x26f348: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26f34c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26f34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26f350: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x26f350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x26f354: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x26f354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x26f358: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x26f358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26f35c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x26f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x26f360: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x26f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f364: 0xe6620034  swc1        $f2, 0x34($s3)
    ctx->pc = 0x26f364u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x26f368: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x26f368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f36c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x26f36cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x26f370: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x26f370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x26f374: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x26f374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f378: 0xe661003c  swc1        $f1, 0x3C($s3)
    ctx->pc = 0x26f378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x26f37c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x26f37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f380: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x26f380u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26f384: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x26f384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26f388: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x26f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f38c: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x26f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f390: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26f390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26f394: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26f394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26f398: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x26f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f39c: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x26f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f3a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26f3a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26f3a4: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F3A4u;
    {
        const bool branch_taken_0x26f3a4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3A4u;
        // 0x26f3a8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3a4) {
            ctx->pc = 0x26F3B4u;
            goto label_26f3b4;
        }
    }
    ctx->pc = 0x26F3ACu;
    // 0x26f3ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F3ACu;
    {
        const bool branch_taken_0x26f3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3ACu;
        // 0x26f3b0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3ac) {
            ctx->pc = 0x26F3B8u;
            goto label_26f3b8;
        }
    }
    ctx->pc = 0x26F3B4u;
label_26f3b4:
    // 0x26f3b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x26f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_26f3b8:
    // 0x26f3b8: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x26f3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
    // 0x26f3bc: 0xc663004c  lwc1        $f3, 0x4C($s3)
    ctx->pc = 0x26f3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26f3c0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x26f3c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x26f3c4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x26f3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f3c8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x26f3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x26f3cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26f3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26f3d0: 0x0  nop
    ctx->pc = 0x26f3d0u;
    // NOP
    // 0x26f3d4: 0x0  nop
    ctx->pc = 0x26f3d4u;
    // NOP
    // 0x26f3d8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x26f3d8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x26f3dc: 0xe642003c  swc1        $f2, 0x3C($s2)
    ctx->pc = 0x26f3dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x26f3e0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x26f3e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x26f3e4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x26f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f3e8: 0x0  nop
    ctx->pc = 0x26f3e8u;
    // NOP
    // 0x26f3ec: 0x0  nop
    ctx->pc = 0x26f3ecu;
    // NOP
    // 0x26f3f0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x26f3f0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x26f3f4: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x26f3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x26f3f8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x26f3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f3fc: 0x0  nop
    ctx->pc = 0x26f3fcu;
    // NOP
    // 0x26f400: 0x0  nop
    ctx->pc = 0x26f400u;
    // NOP
    // 0x26f404: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x26f404u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x26f408: 0xe6410040  swc1        $f1, 0x40($s2)
    ctx->pc = 0x26f408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x26f40c: 0xe6620050  swc1        $f2, 0x50($s3)
    ctx->pc = 0x26f40cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x26f410: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x26f410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f414: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x26f414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x26f418: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x26f418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x26f41c: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x26f41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f420: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x26f420u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x26f424: 0xe6610058  swc1        $f1, 0x58($s3)
    ctx->pc = 0x26f424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
label_26f428:
    // 0x26f428: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x26f428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x26f42c: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x26f42cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x26f430: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x26f430u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26f434: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x26f434u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26f438: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x26f438u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26f43c: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x26f43cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26f440: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x26f440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26f444: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x26f444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26f448: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x26f448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26f44c: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x26f44cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26f450: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x26f450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26f454: 0x3e00008  jr          $ra
    ctx->pc = 0x26F454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F454u;
        // 0x26f458: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F45Cu;
}
