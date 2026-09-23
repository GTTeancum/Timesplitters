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

// Function: fxSelectCharReset
// Address: 0x2380f8 - 0x238264
void fxSelectCharReset_0x2380f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fxSelectCharReset_0x2380f8");
#endif

    switch (ctx->pc) {
        case 0x2381b8u: goto label_2381b8;
        default: break;
    }

    ctx->pc = 0x2380f8u;

    // 0x2380f8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2380f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2380fc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2380fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238100: 0x24a59090  addiu       $a1, $a1, -0x6F70
    ctx->pc = 0x238100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938768));
    // 0x238104: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x238104u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x238108: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x238108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23810c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x23810cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x238110: 0x24c69030  addiu       $a2, $a2, -0x6FD0
    ctx->pc = 0x238110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938672));
    // 0x238114: 0x24639060  addiu       $v1, $v1, -0x6FA0
    ctx->pc = 0x238114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938720));
    // 0x238118: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x238118u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23811c: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x23811cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x238120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238124: 0x3c0e01fc  lui         $t6, 0x1FC
    ctx->pc = 0x238124u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)508 << 16));
    // 0x238128: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x238128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23812c: 0x3c0d01fc  lui         $t5, 0x1FC
    ctx->pc = 0x23812cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)508 << 16));
    // 0x238130: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x238130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x238134: 0x3c0c01fc  lui         $t4, 0x1FC
    ctx->pc = 0x238134u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)508 << 16));
    // 0x238138: 0x3c0b01fc  lui         $t3, 0x1FC
    ctx->pc = 0x238138u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)508 << 16));
    // 0x23813c: 0x3c0a01fc  lui         $t2, 0x1FC
    ctx->pc = 0x23813cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)508 << 16));
    // 0x238140: 0x3c0901fc  lui         $t1, 0x1FC
    ctx->pc = 0x238140u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)508 << 16));
    // 0x238144: 0x3c0801fc  lui         $t0, 0x1FC
    ctx->pc = 0x238144u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)508 << 16));
    // 0x238148: 0x3c0701fc  lui         $a3, 0x1FC
    ctx->pc = 0x238148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)508 << 16));
    // 0x23814c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x238150: 0x24901278  addiu       $s0, $a0, 0x1278
    ctx->pc = 0x238150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4728));
    // 0x238154: 0x60c02d  daddu       $t8, $v1, $zero
    ctx->pc = 0x238154u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238158: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x238158u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23815c: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x23815cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x238160: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x238160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x238164: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x238164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x238168: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23816c: 0x27320038  addiu       $s2, $t9, 0x38
    ctx->pc = 0x23816cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 25), 56));
    // 0x238170: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x238170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x238174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238178: 0x245112f8  addiu       $s1, $v0, 0x12F8
    ctx->pc = 0x238178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4856));
    // 0x23817c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23817cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x238180: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x238180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x238184: 0x24e712c8  addiu       $a3, $a3, 0x12C8
    ctx->pc = 0x238184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4808));
    // 0x238188: 0x250812b8  addiu       $t0, $t0, 0x12B8
    ctx->pc = 0x238188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4792));
    // 0x23818c: 0x252912a8  addiu       $t1, $t1, 0x12A8
    ctx->pc = 0x23818cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4776));
    // 0x238190: 0x254a1298  addiu       $t2, $t2, 0x1298
    ctx->pc = 0x238190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4760));
    // 0x238194: 0x256b1288  addiu       $t3, $t3, 0x1288
    ctx->pc = 0x238194u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4744));
    // 0x238198: 0x258c1268  addiu       $t4, $t4, 0x1268
    ctx->pc = 0x238198u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4712));
    // 0x23819c: 0x25ad1258  addiu       $t5, $t5, 0x1258
    ctx->pc = 0x23819cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4696));
    // 0x2381a0: 0x25ce1248  addiu       $t6, $t6, 0x1248
    ctx->pc = 0x2381a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4680));
    // 0x2381a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2381a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2381a8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2381a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2381ac: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2381acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2381b0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2381b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2381b4: 0x0  nop
    ctx->pc = 0x2381b4u;
    // NOP
label_2381b8:
    // 0x2381b8: 0xe7200000  swc1        $f0, 0x0($t9)
    ctx->pc = 0x2381b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
    // 0x2381bc: 0xe7200004  swc1        $f0, 0x4($t9)
    ctx->pc = 0x2381bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4), bits); }
    // 0x2381c0: 0xe5e20000  swc1        $f2, 0x0($t7)
    ctx->pc = 0x2381c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x2381c4: 0x2739000c  addiu       $t9, $t9, 0xC
    ctx->pc = 0x2381c4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 12));
    // 0x2381c8: 0xe5e20004  swc1        $f2, 0x4($t7)
    ctx->pc = 0x2381c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x2381cc: 0xe7010000  swc1        $f1, 0x0($t8)
    ctx->pc = 0x2381ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x2381d0: 0x25ef000c  addiu       $t7, $t7, 0xC
    ctx->pc = 0x2381d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12));
    // 0x2381d4: 0xe7010004  swc1        $f1, 0x4($t8)
    ctx->pc = 0x2381d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4), bits); }
    // 0x2381d8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2381d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2381dc: 0x2718000c  addiu       $t8, $t8, 0xC
    ctx->pc = 0x2381dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 12));
    // 0x2381e0: 0xadc00000  sw          $zero, 0x0($t6)
    ctx->pc = 0x2381e0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 0));
    // 0x2381e4: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x2381e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2381e8: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x2381e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x2381ec: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x2381ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x2381f0: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x2381f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
    // 0x2381f4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2381f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2381f8: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x2381f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x2381fc: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x2381fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x238200: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x238200u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x238204: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x238204u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x238208: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x238208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x23820c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x23820cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x238210: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x238210u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x238214: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x238214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x238218: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x238218u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x23821c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x23821cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x238220: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x238220u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x238224: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x238224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x238228: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x238228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x23822c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23822cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x238230: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x238230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x238234: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x238234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x238238: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x238238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x23823c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x23823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x238240: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x238240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x238244: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x238244u;
    {
        const bool branch_taken_0x238244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238244u;
        // 0x238248: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238244) {
            ctx->pc = 0x2381B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2381b8;
        }
    }
    ctx->pc = 0x23824Cu;
    // 0x23824c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23824cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238250: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238258: 0xaf80a28c  sw          $zero, -0x5D74($gp)
    ctx->pc = 0x238258u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943372), GPR_U32(ctx, 0));
    // 0x23825c: 0x3e00008  jr          $ra
    ctx->pc = 0x23825Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23825Cu;
        // 0x238260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23825Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238264u;
}
