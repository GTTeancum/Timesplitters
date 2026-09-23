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

// Function: profileTimeEnd
// Address: 0x2b63c8 - 0x2b6460
void profileTimeEnd_0x2b63c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("profileTimeEnd_0x2b63c8");
#endif

    switch (ctx->pc) {
        case 0x2b640cu: goto label_2b640c;
        case 0x2b6414u: goto label_2b6414;
        default: break;
    }

    ctx->pc = 0x2b63c8u;

    // 0x2b63c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b63c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b63cc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2b63ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2b63d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b63d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b63d4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b63d8: 0x858818  mult        $s1, $a0, $a1
    ctx->pc = 0x2b63d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2b63dc: 0x8f83b450  lw          $v1, -0x4BB0($gp)
    ctx->pc = 0x2b63dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947920)));
    // 0x2b63e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b63e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b63e4: 0x245259c0  addiu       $s2, $v0, 0x59C0
    ctx->pc = 0x2b63e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
    // 0x2b63e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b63e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b63ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b63f0: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2b63f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2b63f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b63f8: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2b63f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b63fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B63FCu;
    {
        const bool branch_taken_0x2b63fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63FCu;
        // 0x2b6400: 0xaf83b450  sw          $v1, -0x4BB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947920), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63fc) {
            ctx->pc = 0x2B640Cu;
            goto label_2b640c;
        }
    }
    ctx->pc = 0x2B6404u;
    // 0x2b6404: 0xc0ad8a6  jal         func_2B6298
    ctx->pc = 0x2B6404u;
    SET_GPR_U32(ctx, 31, 0x2B640Cu);
    ctx->pc = 0x2B6298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6298u, 0x2B6404u, 0x2B640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B640Cu;
label_2b640c:
    // 0x2b640c: 0xc0ad8a8  jal         func_2B62A0
    ctx->pc = 0x2B640Cu;
    SET_GPR_U32(ctx, 31, 0x2B6414u);
    ctx->pc = 0x2B6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B640Cu;
    // 0x2b6410: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62A0u, 0x2B640Cu, 0x2B6414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6414u;
label_2b6414:
    // 0x2b6414: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x2b6414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2b6418: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b6418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b641c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b6420: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b6420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6424: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b6424u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b6428: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2b6428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b642c: 0x0  nop
    ctx->pc = 0x2b642cu;
    // NOP
    // 0x2b6430: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6430u;
    {
        const bool branch_taken_0x2b6430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6430u;
        // 0x2b6434: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6430) {
            ctx->pc = 0x2B6448u;
            goto label_2b6448;
        }
    }
    ctx->pc = 0x2B6438u;
    // 0x2b6438: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2b6438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2b643c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b643cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6440: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b6440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b6444: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b6444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b6448:
    // 0x2b6448: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b6448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b644c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b644cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6450: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b6450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6458: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6458u;
        // 0x2b645c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6460u;
}
