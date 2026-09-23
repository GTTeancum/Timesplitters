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

// Function: transformHead
// Address: 0x2634c8 - 0x263624
void transformHead_0x2634c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("transformHead_0x2634c8");
#endif

    switch (ctx->pc) {
        case 0x263518u: goto label_263518;
        case 0x263550u: goto label_263550;
        case 0x263558u: goto label_263558;
        case 0x263594u: goto label_263594;
        case 0x2635c0u: goto label_2635c0;
        default: break;
    }

    ctx->pc = 0x2634c8u;

    // 0x2634c8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2634c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2634cc: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2634ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2634d0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2634d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2634d4: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2634d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2634d8: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2634d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2634dc: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2634dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2634e0: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2634e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2634e4: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2634e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2634e8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2634e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2634ec: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2634ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2634f0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2634f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2634f4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2634f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2634f8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2634F8u;
    {
        const bool branch_taken_0x2634f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2634FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634F8u;
        // 0x2634fc: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634f8) {
            ctx->pc = 0x2635F4u;
            goto label_2635f4;
        }
    }
    ctx->pc = 0x263500u;
    // 0x263500: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x263500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263504: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x263504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x263508: 0x440003a  bltz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x263508u;
    {
        const bool branch_taken_0x263508 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263508u;
        // 0x26350c: 0x24b70014  addiu       $s7, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263508) {
            ctx->pc = 0x2635F4u;
            goto label_2635f4;
        }
    }
    ctx->pc = 0x263510u;
    // 0x263510: 0x241e000c  addiu       $fp, $zero, 0xC
    ctx->pc = 0x263510u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x263514: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x263514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_263518:
    // 0x263518: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x263518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26351c: 0x8ee50014  lw          $a1, 0x14($s7)
    ctx->pc = 0x26351cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x263520: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x263520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263524: 0x5e1018  mult        $v0, $v0, $fp
    ctx->pc = 0x263524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x263528: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x263528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x26352c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x26352cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x263530: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x263530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x263534: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x263534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263538: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x263538u;
    {
        const bool branch_taken_0x263538 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263538u;
        // 0x26353c: 0x65900b  movn        $s2, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263538) {
            ctx->pc = 0x2635E0u;
            goto label_2635e0;
        }
    }
    ctx->pc = 0x263540u;
    // 0x263540: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x263540u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x263544: 0x26350018  addiu       $s5, $s1, 0x18
    ctx->pc = 0x263544u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x263548: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x263548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26354c: 0x0  nop
    ctx->pc = 0x26354cu;
    // NOP
label_263550:
    // 0x263550: 0xc0b57d8  jal         func_2D5F60
    ctx->pc = 0x263550u;
    SET_GPR_U32(ctx, 31, 0x263558u);
    ctx->pc = 0x263554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263550u;
    // 0x263554: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5F60u, 0x263550u, 0x263558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263558u;
label_263558:
    // 0x263558: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x263558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26355c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26355cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263560: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x263560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263564: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x263564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263568: 0xc6820034  lwc1        $f2, 0x34($s4)
    ctx->pc = 0x263568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26356c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26356cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263570: 0xc6830038  lwc1        $f3, 0x38($s4)
    ctx->pc = 0x263570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263574: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x263574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x263578: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x263578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26357c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x26357cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x263580: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x263580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x263584: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x263584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263588: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x263588u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x26358c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x26358Cu;
    SET_GPR_U32(ctx, 31, 0x263594u);
    ctx->pc = 0x263590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26358Cu;
    // 0x263590: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x26358Cu, 0x263594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263594u;
label_263594:
    // 0x263594: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x263594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263598: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x263598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x26359c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x26359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2635a0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2635a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2635a4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2635a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2635a8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2635a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2635ac: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2635ACu;
    {
        const bool branch_taken_0x2635ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2635B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635ACu;
        // 0x2635b0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635ac) {
            ctx->pc = 0x2635C4u;
            goto label_2635c4;
        }
    }
    ctx->pc = 0x2635B4u;
    // 0x2635b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2635b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635b8: 0xc0ad568  jal         func_2B55A0
    ctx->pc = 0x2635B8u;
    SET_GPR_U32(ctx, 31, 0x2635C0u);
    ctx->pc = 0x2635BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2635B8u;
    // 0x2635bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B55A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B55A0u, 0x2635B8u, 0x2635C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2635C0u;
label_2635c0:
    // 0x2635c0: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2635c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2635c4:
    // 0x2635c4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2635c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2635c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2635c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2635cc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2635ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2635d0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2635D0u;
    {
        const bool branch_taken_0x2635d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2635D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635D0u;
        // 0x2635d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635d0) {
            ctx->pc = 0x263550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263550;
        }
    }
    ctx->pc = 0x2635D8u;
    // 0x2635d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2635D8u;
    {
        const bool branch_taken_0x2635d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2635DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635D8u;
        // 0x2635dc: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635d8) {
            ctx->pc = 0x2635E8u;
            goto label_2635e8;
        }
    }
    ctx->pc = 0x2635E0u;
label_2635e0:
    // 0x2635e0: 0x26350018  addiu       $s5, $s1, 0x18
    ctx->pc = 0x2635e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2635e4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x2635e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2635e8:
    // 0x2635e8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2635e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2635ec: 0x443ffca  bgezl       $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2635ECu;
    {
        const bool branch_taken_0x2635ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2635ec) {
            ctx->pc = 0x2635F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2635ECu;
            // 0x2635f0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263518;
        }
    }
    ctx->pc = 0x2635F4u;
label_2635f4:
    // 0x2635f4: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2635f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2635f8: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2635f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2635fc: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2635fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x263600: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x263600u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x263604: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x263604u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x263608: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x263608u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26360c: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x26360cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x263610: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x263610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x263614: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x263614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x263618: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x263618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26361c: 0x3e00008  jr          $ra
    ctx->pc = 0x26361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26361Cu;
        // 0x263620: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263624u;
}
