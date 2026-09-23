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

// Function: statsNew
// Address: 0x220080 - 0x2201d4
void statsNew_0x220080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("statsNew_0x220080");
#endif

    switch (ctx->pc) {
        case 0x2200b0u: goto label_2200b0;
        case 0x2200e8u: goto label_2200e8;
        case 0x220128u: goto label_220128;
        case 0x220188u: goto label_220188;
        case 0x2201acu: goto label_2201ac;
        case 0x2201b4u: goto label_2201b4;
        default: break;
    }

    ctx->pc = 0x220080u;

    // 0x220080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x220080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x220084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x220084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22008c: 0x24060af4  addiu       $a2, $zero, 0xAF4
    ctx->pc = 0x22008cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2804));
    // 0x220090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x220090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220094: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x220094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x220098: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x220098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22009c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2200a0: 0x261207dc  addiu       $s2, $s0, 0x7DC
    ctx->pc = 0x2200a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2012));
    // 0x2200a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2200a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2200a8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2200A8u;
    SET_GPR_U32(ctx, 31, 0x2200B0u);
    ctx->pc = 0x2200ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200A8u;
    // 0x2200ac: 0x26130968  addiu       $s3, $s0, 0x968 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 2408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2200A8u, 0x2200B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200B0u;
label_2200b0:
    // 0x2200b0: 0x26180140  addiu       $t8, $s0, 0x140
    ctx->pc = 0x2200b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2200b4: 0x260f0160  addiu       $t7, $s0, 0x160
    ctx->pc = 0x2200b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x2200b8: 0x260e0144  addiu       $t6, $s0, 0x144
    ctx->pc = 0x2200b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 324));
    // 0x2200bc: 0x260d0148  addiu       $t5, $s0, 0x148
    ctx->pc = 0x2200bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x2200c0: 0x2608014c  addiu       $t0, $s0, 0x14C
    ctx->pc = 0x2200c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
    // 0x2200c4: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x2200c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2200c8: 0x26060154  addiu       $a2, $s0, 0x154
    ctx->pc = 0x2200c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
    // 0x2200cc: 0x26050158  addiu       $a1, $s0, 0x158
    ctx->pc = 0x2200ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x2200d0: 0x2602015c  addiu       $v0, $s0, 0x15C
    ctx->pc = 0x2200d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x2200d4: 0x26040578  addiu       $a0, $s0, 0x578
    ctx->pc = 0x2200d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1400));
    // 0x2200d8: 0x2619057c  addiu       $t9, $s0, 0x57C
    ctx->pc = 0x2200d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 1404));
    // 0x2200dc: 0x26110650  addiu       $s1, $s0, 0x650
    ctx->pc = 0x2200dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x2200e0: 0x2610013c  addiu       $s0, $s0, 0x13C
    ctx->pc = 0x2200e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 316));
    // 0x2200e4: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x2200e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_2200e8:
    // 0x2200e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2200e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2200ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2200ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2200f0: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x2200f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x2200f4: 0x0  nop
    ctx->pc = 0x2200f4u;
    // NOP
    // 0x2200f8: 0x0  nop
    ctx->pc = 0x2200f8u;
    // NOP
    // 0x2200fc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2200FCu;
    {
        const bool branch_taken_0x2200fc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2200fc) {
            ctx->pc = 0x2200E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2200e8;
        }
    }
    ctx->pc = 0x220104u;
    // 0x220104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220108: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x220108u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22010c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x22010cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220110: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x220110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220114: 0x260c0438  addiu       $t4, $s0, 0x438
    ctx->pc = 0x220114u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 1080));
    // 0x220118: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x220118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22011c: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x22011cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220120: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x220120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220124: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x220124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_220128:
    // 0x220128: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x220128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x22012c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x22012cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x220130: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x220130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x220134: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x220134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x220138: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x220138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x22013c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x22013cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x220140: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x220140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x220144: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x220144u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x220148: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x220148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x22014c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x22014cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x220150: 0x25080024  addiu       $t0, $t0, 0x24
    ctx->pc = 0x220150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
    // 0x220154: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x220154u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x220158: 0x25290024  addiu       $t1, $t1, 0x24
    ctx->pc = 0x220158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 36));
    // 0x22015c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x22015cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x220160: 0x254a0024  addiu       $t2, $t2, 0x24
    ctx->pc = 0x220160u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 36));
    // 0x220164: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x220164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x220168: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x220168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x22016c: 0x20c102a  slt         $v0, $s0, $t4
    ctx->pc = 0x22016cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x220170: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x220170u;
    {
        const bool branch_taken_0x220170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220170u;
        // 0x220174: 0x256b0024  addiu       $t3, $t3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220170) {
            ctx->pc = 0x220128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220128;
        }
    }
    ctx->pc = 0x220178u;
    // 0x220178: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x220178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22017c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22017cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220180: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x220180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x220184: 0x0  nop
    ctx->pc = 0x220184u;
    // NOP
label_220188:
    // 0x220188: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x220188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x22018c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22018cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x220190: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x220190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x220194: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x220194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x220198: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x220198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22019c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22019Cu;
    {
        const bool branch_taken_0x22019c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x22019c) {
            ctx->pc = 0x220188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220188;
        }
    }
    ctx->pc = 0x2201A4u;
    // 0x2201a4: 0xc08910a  jal         func_224428
    ctx->pc = 0x2201A4u;
    SET_GPR_U32(ctx, 31, 0x2201ACu);
    ctx->pc = 0x2201A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201A4u;
    // 0x2201a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224428u, 0x2201A4u, 0x2201ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201ACu;
label_2201ac:
    // 0x2201ac: 0xc08910a  jal         func_224428
    ctx->pc = 0x2201ACu;
    SET_GPR_U32(ctx, 31, 0x2201B4u);
    ctx->pc = 0x2201B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201ACu;
    // 0x2201b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224428u, 0x2201ACu, 0x2201B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201B4u;
label_2201b4:
    // 0x2201b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2201b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2201b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2201bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2201bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2201c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2201c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2201c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2201c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2201c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2201c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2201cc: 0x808910a  j           func_224428
    ctx->pc = 0x2201CCu;
    ctx->pc = 0x2201D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201CCu;
    // 0x2201d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224428u;
    StatsLifeReset_0x224428(rdram, ctx, runtime); return;
    ctx->pc = 0x2201D4u;
}
