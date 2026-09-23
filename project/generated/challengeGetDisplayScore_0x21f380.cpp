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

// Function: challengeGetDisplayScore
// Address: 0x21f380 - 0x21f53c
void challengeGetDisplayScore_0x21f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengeGetDisplayScore_0x21f380");
#endif

    switch (ctx->pc) {
        case 0x21f3dcu: goto label_21f3dc;
        case 0x21f408u: goto label_21f408;
        case 0x21f444u: goto label_21f444;
        case 0x21f470u: goto label_21f470;
        case 0x21f4a4u: goto label_21f4a4;
        case 0x21f4d8u: goto label_21f4d8;
        case 0x21f514u: goto label_21f514;
        case 0x21f520u: goto label_21f520;
        default: break;
    }

    ctx->pc = 0x21f380u;

    // 0x21f380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21f380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21f384: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x21f384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x21f388: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21f38c: 0x24c2c4a8  addiu       $v0, $a2, -0x3B58
    ctx->pc = 0x21f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952104));
    // 0x21f390: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21f390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21f394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21f394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21f398: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21f398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f39c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f3a0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x21f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x21f3a4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x21f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4ECu));
    // 0x21f3a8: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x21f3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x21f3ac: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x21F3ACu;
    {
        const bool branch_taken_0x21f3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3ACu;
        // 0x21f3b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3ac) {
            ctx->pc = 0x21F524u;
            goto label_21f524;
        }
    }
    ctx->pc = 0x21F3B4u;
    // 0x21f3b4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x21f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x21f3b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f3bc: 0x24420940  addiu       $v0, $v0, 0x940
    ctx->pc = 0x21f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2368));
    // 0x21f3c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f3c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f3c8: 0x800008  jr          $a0
    ctx->pc = 0x21F3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F3D0u: goto label_21f3d0;
            case 0x21F478u: goto label_21f478;
            case 0x21F4ACu: goto label_21f4ac;
            case 0x21F4E0u: goto label_21f4e0;
            case 0x21F524u: goto label_21f524;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F3C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21F3D0u;
label_21f3d0:
    // 0x21f3d0: 0x24c2c4a8  addiu       $v0, $a2, -0x3B58
    ctx->pc = 0x21f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952104));
    // 0x21f3d4: 0xc087c12  jal         func_21F048
    ctx->pc = 0x21F3D4u;
    SET_GPR_U32(ctx, 31, 0x21F3DCu);
    ctx->pc = 0x21F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3D4u;
    // 0x21f3d8: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F048u, 0x21F3D4u, 0x21F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3DCu;
label_21f3dc:
    // 0x21f3dc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x21f3dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3e0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x21f3e4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21f3e8: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x21f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x21f3ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21f3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21f3f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21f3f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21f3fc: 0x8c830a54  lw          $v1, 0xA54($a0)
    ctx->pc = 0x21f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2644)));
    // 0x21f400: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x21f400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x21f404: 0x8d070014  lw          $a3, 0x14($t0)
    ctx->pc = 0x21f404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_21f408:
    // 0x21f408: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x21f408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x21f40c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x21F40Cu;
    {
        const bool branch_taken_0x21f40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F40Cu;
        // 0x21f410: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f40c) {
            ctx->pc = 0x21F524u;
            goto label_21f524;
        }
    }
    ctx->pc = 0x21F414u;
    // 0x21f414: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x21f414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x21f418: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x21f418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21f41c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x21f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21f420: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x21f420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21f424: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x21f424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21f428: 0x1445fff7  bne         $v0, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21F428u;
    {
        const bool branch_taken_0x21f428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x21F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F428u;
        // 0x21f42c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f428) {
            ctx->pc = 0x21F408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f408;
        }
    }
    ctx->pc = 0x21F430u;
    // 0x21f430: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x21f430u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x21f434: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x21f434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x21f438: 0x2610e5b8  addiu       $s0, $s0, -0x1A48
    ctx->pc = 0x21f438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960568));
    // 0x21f43c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x21F43Cu;
    SET_GPR_U32(ctx, 31, 0x21F444u);
    ctx->pc = 0x21F440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F43Cu;
    // 0x21f440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x21F43Cu, 0x21F444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F444u;
label_21f444:
    // 0x21f444: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x21f444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f448: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21f448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21f44c: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x21f44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x21f450: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21f450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21f454: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21f454u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x21f458: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x21f458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x21f45c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21f45cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21f460: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21f460u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x21f464: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x21f464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x21f468: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21F468u;
    SET_GPR_U32(ctx, 31, 0x21F470u);
    ctx->pc = 0x21F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F468u;
    // 0x21f46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21F468u, 0x21F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F470u;
label_21f470:
    // 0x21f470: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x21F470u;
    {
        const bool branch_taken_0x21f470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F470u;
        // 0x21f474: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f470) {
            ctx->pc = 0x21F524u;
            goto label_21f524;
        }
    }
    ctx->pc = 0x21F478u;
label_21f478:
    // 0x21f478: 0x8f849354  lw          $a0, -0x6CAC($gp)
    ctx->pc = 0x21f478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21f47c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x21f480: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x21f480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x21f484: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x21f484u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x21f488: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21f488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21f48c: 0x2610e5b0  addiu       $s0, $s0, -0x1A50
    ctx->pc = 0x21f48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960560));
    // 0x21f490: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21f490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21f494: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21f498: 0x8c430a58  lw          $v1, 0xA58($v0)
    ctx->pc = 0x21f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2648)));
    // 0x21f49c: 0xc0968be  jal         func_25A2F8
    ctx->pc = 0x21F49Cu;
    SET_GPR_U32(ctx, 31, 0x21F4A4u);
    ctx->pc = 0x21F4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F49Cu;
    // 0x21f4a0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2F8u, 0x21F49Cu, 0x21F4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4A4u;
label_21f4a4:
    // 0x21f4a4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x21F4A4u;
    {
        const bool branch_taken_0x21f4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4A4u;
        // 0x21f4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4a4) {
            ctx->pc = 0x21F518u;
            goto label_21f518;
        }
    }
    ctx->pc = 0x21F4ACu;
label_21f4ac:
    // 0x21f4ac: 0x8f849354  lw          $a0, -0x6CAC($gp)
    ctx->pc = 0x21f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21f4b0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x21f4b4: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x21f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x21f4b8: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x21f4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x21f4bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21f4c0: 0x2610e5b0  addiu       $s0, $s0, -0x1A50
    ctx->pc = 0x21f4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960560));
    // 0x21f4c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21f4c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21f4cc: 0x8c430a5c  lw          $v1, 0xA5C($v0)
    ctx->pc = 0x21f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2652)));
    // 0x21f4d0: 0xc09d592  jal         func_275648
    ctx->pc = 0x21F4D0u;
    SET_GPR_U32(ctx, 31, 0x21F4D8u);
    ctx->pc = 0x21F4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4D0u;
    // 0x21f4d4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275648u, 0x21F4D0u, 0x21F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4D8u;
label_21f4d8:
    // 0x21f4d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21F4D8u;
    {
        const bool branch_taken_0x21f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4D8u;
        // 0x21f4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4d8) {
            ctx->pc = 0x21F518u;
            goto label_21f518;
        }
    }
    ctx->pc = 0x21F4E0u;
label_21f4e0:
    // 0x21f4e0: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x21f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21f4e4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21f4e8: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x21f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21f4ec: 0x8f86b238  lw          $a2, -0x4DC8($gp)
    ctx->pc = 0x21f4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x21f4f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f4f4: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x21f4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x21f4f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f4fc: 0x8cc41228  lw          $a0, 0x1228($a2)
    ctx->pc = 0x21f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4648)));
    // 0x21f500: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x21f500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f504: 0x2610e5b0  addiu       $s0, $s0, -0x1A50
    ctx->pc = 0x21f504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960560));
    // 0x21f508: 0x8ca20a60  lw          $v0, 0xA60($a1)
    ctx->pc = 0x21f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2656)));
    // 0x21f50c: 0xc0a241e  jal         func_289078
    ctx->pc = 0x21F50Cu;
    SET_GPR_U32(ctx, 31, 0x21F514u);
    ctx->pc = 0x21F510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F50Cu;
    // 0x21f510: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289078u, 0x21F50Cu, 0x21F514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F514u;
label_21f514:
    // 0x21f514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21f518:
    // 0x21f518: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21F518u;
    SET_GPR_U32(ctx, 31, 0x21F520u);
    ctx->pc = 0x21F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F518u;
    // 0x21f51c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21F518u, 0x21F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F520u;
label_21f520:
    // 0x21f520: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21f520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_21f524:
    // 0x21f524: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21f524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f528: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21f528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f52c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21f52cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f534: 0x3e00008  jr          $ra
    ctx->pc = 0x21F534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F534u;
        // 0x21f538: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F53Cu;
}
