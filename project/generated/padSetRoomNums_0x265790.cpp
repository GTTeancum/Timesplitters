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

// Function: padSetRoomNums
// Address: 0x265790 - 0x265828
void padSetRoomNums_0x265790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padSetRoomNums_0x265790");
#endif

    switch (ctx->pc) {
        case 0x2657b8u: goto label_2657b8;
        case 0x2657e4u: goto label_2657e4;
        default: break;
    }

    ctx->pc = 0x265790u;

    // 0x265790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265794: 0x8f85a348  lw          $a1, -0x5CB8($gp)
    ctx->pc = 0x265794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x265798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x265798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26579c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26579cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2657a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2657a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2657a4: 0x18a0001b  blez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2657A4u;
    {
        const bool branch_taken_0x2657a4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2657A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657A4u;
        // 0x2657a8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657a4) {
            ctx->pc = 0x265814u;
            goto label_265814;
        }
    }
    ctx->pc = 0x2657ACu;
    // 0x2657ac: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2657acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2657b0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2657b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2657b4: 0x0  nop
    ctx->pc = 0x2657b4u;
    // NOP
label_2657b8:
    // 0x2657b8: 0x2028818  mult        $s1, $s0, $v0
    ctx->pc = 0x2657b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2657bc: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2657bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2657c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2657c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2657c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2657c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2657c8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2657C8u;
    {
        const bool branch_taken_0x2657c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2657c8) {
            ctx->pc = 0x2657CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2657C8u;
            // 0x2657cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265808u;
            goto label_265808;
        }
    }
    ctx->pc = 0x2657D0u;
    // 0x2657d0: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2657d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x2657d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2657d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2657d8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2657d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2657dc: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x2657DCu;
    SET_GPR_U32(ctx, 31, 0x2657E4u);
    ctx->pc = 0x2657E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2657DCu;
    // 0x2657e0: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x2657DCu, 0x2657E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2657E4u;
label_2657e4:
    // 0x2657e4: 0xc782b1d4  lwc1        $f2, -0x4E2C($gp)
    ctx->pc = 0x2657e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2657e8: 0xc78083b4  lwc1        $f0, -0x7C4C($gp)
    ctx->pc = 0x2657e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2657ec: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2657ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2657f0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2657f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2657f4: 0x8f85a348  lw          $a1, -0x5CB8($gp)
    ctx->pc = 0x2657f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x2657f8: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2657f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2657fc: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x2657fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x265800: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x265800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x265804: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x265804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_265808:
    // 0x265808: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x265808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26580c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x26580Cu;
    {
        const bool branch_taken_0x26580c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26580Cu;
        // 0x265810: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26580c) {
            ctx->pc = 0x2657B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2657b8;
        }
    }
    ctx->pc = 0x265814u;
label_265814:
    // 0x265814: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x265814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265818: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x265818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26581c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26581cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265820: 0x3e00008  jr          $ra
    ctx->pc = 0x265820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265820u;
        // 0x265824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265828u;
}
