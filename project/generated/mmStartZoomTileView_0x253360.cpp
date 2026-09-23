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

// Function: mmStartZoomTileView
// Address: 0x253360 - 0x253494
void mmStartZoomTileView_0x253360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmStartZoomTileView_0x253360");
#endif

    switch (ctx->pc) {
        case 0x2533acu: goto label_2533ac;
        case 0x2533d0u: goto label_2533d0;
        case 0x25342cu: goto label_25342c;
        case 0x253434u: goto label_253434;
        case 0x253464u: goto label_253464;
        case 0x25346cu: goto label_25346c;
        default: break;
    }

    ctx->pc = 0x253360u;

    // 0x253360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253364: 0x3c034f72  lui         $v1, 0x4F72
    ctx->pc = 0x253364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20338 << 16));
    // 0x253368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25336c: 0x3463c235  ori         $v1, $v1, 0xC235
    ctx->pc = 0x25336cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49717);
    // 0x253370: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x253370u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x253374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253378: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25337c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x25337cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x253380: 0x24847940  addiu       $a0, $a0, 0x7940
    ctx->pc = 0x253380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31040));
    // 0x253384: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x253384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x253388: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x253388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x25338c: 0x24a57230  addiu       $a1, $a1, 0x7230
    ctx->pc = 0x25338cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29232));
    // 0x253390: 0xaf90a20c  sw          $s0, -0x5DF4($gp)
    ctx->pc = 0x253390u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943244), GPR_U32(ctx, 16));
    // 0x253394: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x253394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x253398: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x253398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25339c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25339cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2533a0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2533a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2533a4: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x2533A4u;
    SET_GPR_U32(ctx, 31, 0x2533ACu);
    ctx->pc = 0x2533A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2533A4u;
    // 0x2533a8: 0xaf82a210  sw          $v0, -0x5DF0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x2533A4u, 0x2533ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2533ACu;
label_2533ac:
    // 0x2533ac: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x2533acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2533b0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2533b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2533b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2533b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2533b8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2533b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2533bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2533bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2533c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2533c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2533c4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2533c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2533c8: 0xc093f56  jal         func_24FD58
    ctx->pc = 0x2533C8u;
    SET_GPR_U32(ctx, 31, 0x2533D0u);
    ctx->pc = 0x2533CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2533C8u;
    // 0x2533cc: 0xaf85b870  sw          $a1, -0x4790($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948976), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD58u, 0x2533C8u, 0x2533D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2533D0u;
label_2533d0:
    // 0x2533d0: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x2533d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2533d4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2533d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2533d8: 0x3c050140  lui         $a1, 0x140
    ctx->pc = 0x2533d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
    // 0x2533dc: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2533dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2533e0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x2533e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x2533e4: 0x24637370  addiu       $v1, $v1, 0x7370
    ctx->pc = 0x2533e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29552));
    // 0x2533e8: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x2533e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x2533ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2533ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2533f0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2533f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2533f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2533f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2533f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2533f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2533fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2533fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253400: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x253400u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253404: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x253404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253408: 0x0  nop
    ctx->pc = 0x253408u;
    // NOP
    // 0x25340c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25340Cu;
    {
        const bool branch_taken_0x25340c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25340Cu;
        // 0x253410: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25340c) {
            ctx->pc = 0x253420u;
            goto label_253420;
        }
    }
    ctx->pc = 0x253414u;
    // 0x253414: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x253414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x253418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25341c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x25341cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_253420:
    // 0x253420: 0x240500be  addiu       $a1, $zero, 0xBE
    ctx->pc = 0x253420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x253424: 0xc094140  jal         func_250500
    ctx->pc = 0x253424u;
    SET_GPR_U32(ctx, 31, 0x25342Cu);
    ctx->pc = 0x253428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253424u;
    // 0x253428: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250500u, 0x253424u, 0x25342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25342Cu;
label_25342c:
    // 0x25342c: 0xc094180  jal         func_250600
    ctx->pc = 0x25342Cu;
    SET_GPR_U32(ctx, 31, 0x253434u);
    ctx->pc = 0x253430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25342Cu;
    // 0x253430: 0x8f84a210  lw          $a0, -0x5DF0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250600u, 0x25342Cu, 0x253434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253434u;
label_253434:
    // 0x253434: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x253434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x253438: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x253438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25343c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x253440: 0xe794a218  swc1        $f20, -0x5DE8($gp)
    ctx->pc = 0x253440u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943256), bits); }
    // 0x253444: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x253444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x253448: 0xe780a214  swc1        $f0, -0x5DEC($gp)
    ctx->pc = 0x253448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943252), bits); }
    // 0x25344c: 0x2404014a  addiu       $a0, $zero, 0x14A
    ctx->pc = 0x25344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x253450: 0xe781a21c  swc1        $f1, -0x5DE4($gp)
    ctx->pc = 0x253450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943260), bits); }
    // 0x253454: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x253454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x253458: 0xaf82a208  sw          $v0, -0x5DF8($gp)
    ctx->pc = 0x253458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943240), GPR_U32(ctx, 2));
    // 0x25345c: 0xc09414e  jal         func_250538
    ctx->pc = 0x25345Cu;
    SET_GPR_U32(ctx, 31, 0x253464u);
    ctx->pc = 0x253460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25345Cu;
    // 0x253460: 0x24060258  addiu       $a2, $zero, 0x258 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250538u, 0x25345Cu, 0x253464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253464u;
label_253464:
    // 0x253464: 0xc0940c0  jal         func_250300
    ctx->pc = 0x253464u;
    SET_GPR_U32(ctx, 31, 0x25346Cu);
    ctx->pc = 0x253468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253464u;
    // 0x253468: 0x8f84a210  lw          $a0, -0x5DF0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250300u, 0x253464u, 0x25346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25346Cu;
label_25346c:
    // 0x25346c: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x25346cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x253470: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x253470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x253474: 0x3442dfff  ori         $v0, $v0, 0xDFFF
    ctx->pc = 0x253474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57343);
    // 0x253478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x253478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25347c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25347cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x253480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253484: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x253484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x253488: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x253488u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
    // 0x25348c: 0x3e00008  jr          $ra
    ctx->pc = 0x25348Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25348Cu;
        // 0x253490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25348Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253494u;
}
