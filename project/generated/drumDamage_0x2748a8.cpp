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

// Function: drumDamage
// Address: 0x2748a8 - 0x274998
void drumDamage_0x2748a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drumDamage_0x2748a8");
#endif

    switch (ctx->pc) {
        case 0x27492cu: goto label_27492c;
        case 0x274944u: goto label_274944;
        case 0x274960u: goto label_274960;
        case 0x274968u: goto label_274968;
        case 0x274988u: goto label_274988;
        default: break;
    }

    ctx->pc = 0x2748a8u;

    // 0x2748a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2748a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2748ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2748acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2748b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2748b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2748b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2748b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2748b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2748b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2748bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2748bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748c0: 0xc6000214  lwc1        $f0, 0x214($s0)
    ctx->pc = 0x2748c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2748c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2748c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2748c8: 0x0  nop
    ctx->pc = 0x2748c8u;
    // NOP
    // 0x2748cc: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x2748CCu;
    {
        const bool branch_taken_0x2748cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2748D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748CCu;
        // 0x2748d0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748cc) {
            ctx->pc = 0x27498Cu;
            goto label_27498c;
        }
    }
    ctx->pc = 0x2748D4u;
    // 0x2748d4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2748d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2748d8: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x2748d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x2748dc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2748dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2748e0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2748E0u;
    {
        const bool branch_taken_0x2748e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748E0u;
        // 0x2748e4: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748e0) {
            ctx->pc = 0x27498Cu;
            goto label_27498c;
        }
    }
    ctx->pc = 0x2748E8u;
    // 0x2748e8: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x2748e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2748ec: 0xc60101fc  lwc1        $f1, 0x1FC($s0)
    ctx->pc = 0x2748ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2748f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2748f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748f4: 0xc6020200  lwc1        $f2, 0x200($s0)
    ctx->pc = 0x2748f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2748f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2748f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748fc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2748fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x274900: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x274900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x274904: 0xc6000204  lwc1        $f0, 0x204($s0)
    ctx->pc = 0x274904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274908: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x274908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27490c: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x27490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274910: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x274910u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x274914: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x274914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x274918: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x274918u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27491c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x27491cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x274920: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x274920u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x274924: 0xc0a5e30  jal         func_2978C0
    ctx->pc = 0x274924u;
    SET_GPR_U32(ctx, 31, 0x27492Cu);
    ctx->pc = 0x274928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274924u;
    // 0x274928: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x274924u, 0x27492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27492Cu;
label_27492c:
    // 0x27492c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27492cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x274930: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x274930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274934: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x274934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x274938: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x274938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27493c: 0xc0a60f8  jal         func_2983E0
    ctx->pc = 0x27493Cu;
    SET_GPR_U32(ctx, 31, 0x274944u);
    ctx->pc = 0x274940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27493Cu;
    // 0x274940: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2983E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983E0u, 0x27493Cu, 0x274944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274944u;
label_274944:
    // 0x274944: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x274944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x274948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27494c: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x27494cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x274950: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x274950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x274954: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x274954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x274958: 0xc0a92c4  jal         func_2A4B10
    ctx->pc = 0x274958u;
    SET_GPR_U32(ctx, 31, 0x274960u);
    ctx->pc = 0x27495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274958u;
    // 0x27495c: 0xa4620124  sh          $v0, 0x124($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 292), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B10u, 0x274958u, 0x274960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274960u;
label_274960:
    // 0x274960: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x274960u;
    SET_GPR_U32(ctx, 31, 0x274968u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x274960u, 0x274968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274968u;
label_274968:
    // 0x274968: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x274968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27496c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27496cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274970: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x274970u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x274974: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274974u;
    {
        const bool branch_taken_0x274974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274974) {
            ctx->pc = 0x274978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274974u;
            // 0x274978: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27497Cu;
            goto label_27497c;
        }
    }
    ctx->pc = 0x27497Cu;
label_27497c:
    // 0x27497c: 0x2010  mfhi        $a0
    ctx->pc = 0x27497cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x274980: 0xc081546  jal         func_205518
    ctx->pc = 0x274980u;
    SET_GPR_U32(ctx, 31, 0x274988u);
    ctx->pc = 0x274984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274980u;
    // 0x274984: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x274980u, 0x274988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274988u;
label_274988:
    // 0x274988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x274988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27498c:
    // 0x27498c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27498cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274990: 0x3e00008  jr          $ra
    ctx->pc = 0x274990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274990u;
        // 0x274994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274998u;
}
