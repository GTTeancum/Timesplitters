#include <stdexcept>
#include <chrono>
#include <cstdlib>
#include <iostream>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: bossMainLoop
// Address: 0x200638 - 0x200c3c
void bossMainLoop_0x200638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    // Bound an optional benchmark by real game updates, after player setup.
    static const unsigned benchmarkUpdates = [] {
        const char *text = std::getenv("TS_TEST_GAME_UPDATES");
        return text ? static_cast<unsigned>(std::strtoul(text, nullptr, 10)) : 0u;
    }();
    if (benchmarkUpdates && ctx->pc == 0x200638u) {
        const uint32_t player = READ32(0x003afa20u);
        const uint32_t prop = player && player <= 0x02000000u - 0x184u ? READ32(player + 0x180u) : 0u;
        if (prop && prop <= 0x02000000u - 0x20cu && READ32(0x003afd8cu) > 0) {
            static bool started = false;
            static unsigned completed = 0;
            static std::chrono::steady_clock::time_point start;
            if (!started) {
                started = true; start = std::chrono::steady_clock::now();
                std::cerr << "[TS:benchmark] started player=0x" << std::hex << player << std::dec << '\n';
            } else if (++completed >= benchmarkUpdates) {
                const double seconds = std::chrono::duration<double>(std::chrono::steady_clock::now() - start).count();
                std::cerr << "[TS:benchmark] updates=" << completed << " seconds=" << seconds
                          << " updates_per_s=" << completed / seconds << '\n';
                runtime->requestStop();
                return;
            }
        }
    }
    // Canonical entries only; scheduler resume labels are not game updates.
    static const bool measure = std::getenv("TS_PROFILE_BOSS_CALLS") != nullptr;
    if (measure && ctx->pc == 0x200638u) {
        static auto start = std::chrono::steady_clock::now();
        static unsigned updates = 0;
        ++updates;
        const auto now = std::chrono::steady_clock::now();
        const double elapsed = std::chrono::duration<double>(now - start).count();
        if (elapsed >= 1.0) {
            std::cerr << "[TS:game-rate] game_per_s=" << updates / elapsed
                      << " window_s=" << elapsed << '\n';
            start = now; updates = 0;
        }
    }
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bossMainLoop_0x200638");
#endif

    switch (ctx->pc) {
        case 0x20066cu: goto label_20066c;
        case 0x200674u: goto label_200674;
        case 0x200688u: goto label_200688;
        case 0x200690u: goto label_200690;
        case 0x200698u: goto label_200698;
        case 0x2006a8u: goto label_2006a8;
        case 0x2006bcu: goto label_2006bc;
        case 0x2006c4u: goto label_2006c4;
        case 0x2006ccu: goto label_2006cc;
        case 0x2006e8u: goto label_2006e8;
        case 0x200704u: goto label_200704;
        case 0x20074cu: goto label_20074c;
        case 0x200764u: goto label_200764;
        case 0x2007b8u: goto label_2007b8;
        case 0x200878u: goto label_200878;
        case 0x200880u: goto label_200880;
        case 0x200888u: goto label_200888;
        case 0x2008a0u: goto label_2008a0;
        case 0x2008a8u: goto label_2008a8;
        case 0x2008b0u: goto label_2008b0;
        case 0x2008b8u: goto label_2008b8;
        case 0x2008dcu: goto label_2008dc;
        case 0x2008e4u: goto label_2008e4;
        case 0x200a00u: goto label_200a00;
        case 0x200a14u: goto label_200a14;
        case 0x200a28u: goto label_200a28;
        case 0x200a3cu: goto label_200a3c;
        case 0x200a48u: goto label_200a48;
        case 0x200a70u: goto label_200a70;
        case 0x200a94u: goto label_200a94;
        case 0x200abcu: goto label_200abc;
        case 0x200ae4u: goto label_200ae4;
        case 0x200aecu: goto label_200aec;
        case 0x200af4u: goto label_200af4;
        case 0x200b0cu: goto label_200b0c;
        case 0x200b24u: goto label_200b24;
        case 0x200b38u: goto label_200b38;
        case 0x200b4cu: goto label_200b4c;
        case 0x200b60u: goto label_200b60;
        case 0x200b84u: goto label_200b84;
        case 0x200b8cu: goto label_200b8c;
        case 0x200b94u: goto label_200b94;
        case 0x200b9cu: goto label_200b9c;
        case 0x200bb0u: goto label_200bb0;
        case 0x200bc8u: goto label_200bc8;
        case 0x200be0u: goto label_200be0;
        case 0x200be8u: goto label_200be8;
        case 0x200bf0u: goto label_200bf0;
        case 0x200bf8u: goto label_200bf8;
        default: break;
    }

    ctx->pc = 0x200638u;

    // 0x200638: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x200638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x20063c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20063cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x200640: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x200640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x200644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200648: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x200648u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x20064c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x200650: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x200650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200654: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x200654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x200658: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x200658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20065c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20065cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x200660: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x200660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x200664: 0xc0ad80a  jal         func_2B6028
    ctx->pc = 0x200664u;
    SET_GPR_U32(ctx, 31, 0x20066Cu);
    ctx->pc = 0x200668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200664u;
    // 0x200668: 0xaf82b234  sw          $v0, -0x4DCC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6028u, 0x200664u, 0x20066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20066Cu;
label_20066c:
    // 0x20066c: 0xc0836d8  jal         func_20DB60
    ctx->pc = 0x20066Cu;
    SET_GPR_U32(ctx, 31, 0x200674u);
    ctx->pc = 0x20DB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB60u, 0x20066Cu, 0x200674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200674u;
label_200674:
    // 0x200674: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20067c: 0x2406027f  addiu       $a2, $zero, 0x27F
    ctx->pc = 0x20067cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x200680: 0xc083108  jal         func_20C420
    ctx->pc = 0x200680u;
    SET_GPR_U32(ctx, 31, 0x200688u);
    ctx->pc = 0x200684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200680u;
    // 0x200684: 0x240700df  addiu       $a3, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x200680u, 0x200688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200688u;
label_200688:
    // 0x200688: 0xc0b3774  jal         func_2CDDD0
    ctx->pc = 0x200688u;
    SET_GPR_U32(ctx, 31, 0x200690u);
    ctx->pc = 0x2CDDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDD0u, 0x200688u, 0x200690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200690u;
label_200690:
    // 0x200690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200694: 0x0  nop
    ctx->pc = 0x200694u;
    // NOP
label_200698:
    // 0x200698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20069c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20069cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2006a0: 0xc080f30  jal         func_203CC0
    ctx->pc = 0x2006A0u;
    SET_GPR_U32(ctx, 31, 0x2006A8u);
    ctx->pc = 0x2006A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2006A0u;
    // 0x2006a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203CC0u, 0x2006A0u, 0x2006A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006A8u;
label_2006a8:
    // 0x2006a8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2006a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2006ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2006ACu;
    {
        const bool branch_taken_0x2006ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2006B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006ACu;
        // 0x2006b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006ac) {
            ctx->pc = 0x200698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200698;
        }
    }
    ctx->pc = 0x2006B4u;
    // 0x2006b4: 0xc0807d4  jal         func_201F50
    ctx->pc = 0x2006B4u;
    SET_GPR_U32(ctx, 31, 0x2006BCu);
    ctx->pc = 0x2006B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2006B4u;
    // 0x2006b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F50u, 0x2006B4u, 0x2006BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006BCu;
label_2006bc:
    // 0x2006bc: 0xc087bae  jal         func_21EEB8
    ctx->pc = 0x2006BCu;
    SET_GPR_U32(ctx, 31, 0x2006C4u);
    ctx->pc = 0x21EEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EEB8u, 0x2006BCu, 0x2006C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006C4u;
label_2006c4:
    // 0x2006c4: 0xc0898b2  jal         func_2262C8
    ctx->pc = 0x2006C4u;
    SET_GPR_U32(ctx, 31, 0x2006CCu);
    ctx->pc = 0x2262C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C8u, 0x2006C4u, 0x2006CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006CCu;
label_2006cc:
    // 0x2006cc: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2006ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2006d0: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2006D0u;
    {
        const bool branch_taken_0x2006d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2006D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006D0u;
        // 0x2006d4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006d0) {
            ctx->pc = 0x20075Cu;
            goto label_20075c;
        }
    }
    ctx->pc = 0x2006D8u;
    // 0x2006d8: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x2006d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2006dc: 0x3c120100  lui         $s2, 0x100
    ctx->pc = 0x2006dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)256 << 16));
    // 0x2006e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2006e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2006e4: 0x0  nop
    ctx->pc = 0x2006e4u;
    // NOP
label_2006e8:
    // 0x2006e8: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2006e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2006ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2006ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2006f0: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x2006f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2006f4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2006F4u;
    {
        const bool branch_taken_0x2006f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2006F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006F4u;
        // 0x2006f8: 0xaf82b234  sw          $v0, -0x4DCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006f4) {
            ctx->pc = 0x200744u;
            goto label_200744;
        }
    }
    ctx->pc = 0x2006FCu;
    // 0x2006fc: 0xc09f8c6  jal         func_27E318
    ctx->pc = 0x2006FCu;
    SET_GPR_U32(ctx, 31, 0x200704u);
    ctx->pc = 0x27E318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E318u, 0x2006FCu, 0x200704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200704u;
label_200704:
    // 0x200704: 0x10540009  beq         $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x200704u;
    {
        const bool branch_taken_0x200704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x200708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200704u;
        // 0x200708: 0x8f829f70  lw          $v0, -0x6090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200704) {
            ctx->pc = 0x20072Cu;
            goto label_20072c;
        }
    }
    ctx->pc = 0x20070Cu;
    // 0x20070c: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x20070Cu;
    {
        const bool branch_taken_0x20070c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x200710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20070Cu;
        // 0x200710: 0x8f85b234  lw          $a1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20070c) {
            ctx->pc = 0x20072Cu;
            goto label_20072c;
        }
    }
    ctx->pc = 0x200714u;
    // 0x200714: 0x2321804  sllv        $v1, $s2, $s1
    ctx->pc = 0x200714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 17) & 0x1F));
    // 0x200718: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x200718u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x20071c: 0x8ca40180  lw          $a0, 0x180($a1)
    ctx->pc = 0x20071cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x200720: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x200720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x200724: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x200724u;
    {
        const bool branch_taken_0x200724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200724u;
        // 0x200728: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200724) {
            ctx->pc = 0x200740u;
            goto label_200740;
        }
    }
    ctx->pc = 0x20072Cu;
label_20072c:
    // 0x20072c: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x20072cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x200730: 0x2322804  sllv        $a1, $s2, $s1
    ctx->pc = 0x200730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 17) & 0x1F));
    // 0x200734: 0x8c640180  lw          $a0, 0x180($v1)
    ctx->pc = 0x200734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x200738: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x200738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x20073c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x20073cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_200740:
    // 0x200740: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x200740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_200744:
    // 0x200744: 0xc08996a  jal         func_2265A8
    ctx->pc = 0x200744u;
    SET_GPR_U32(ctx, 31, 0x20074Cu);
    ctx->pc = 0x200748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200744u;
    // 0x200748: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265A8u, 0x200744u, 0x20074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20074Cu;
label_20074c:
    // 0x20074c: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x20074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x200750: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x200750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x200754: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x200754u;
    {
        const bool branch_taken_0x200754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200754u;
        // 0x200758: 0x2610071c  addiu       $s0, $s0, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200754) {
            ctx->pc = 0x2006E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2006e8;
        }
    }
    ctx->pc = 0x20075Cu;
label_20075c:
    // 0x20075c: 0xc0898e8  jal         func_2263A0
    ctx->pc = 0x20075Cu;
    SET_GPR_U32(ctx, 31, 0x200764u);
    ctx->pc = 0x200760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20075Cu;
    // 0x200760: 0x24100030  addiu       $s0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2263A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2263A0u, 0x20075Cu, 0x200764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200764u;
label_200764:
    // 0x200764: 0x8f859318  lw          $a1, -0x6CE8($gp)
    ctx->pc = 0x200764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939416)));
    // 0x200768: 0x27829310  addiu       $v0, $gp, -0x6CF0
    ctx->pc = 0x200768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939408));
    // 0x20076c: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x20076cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x200770: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x200770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x200774: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x200774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x200778: 0x24e7eff0  addiu       $a3, $a3, -0x1010
    ctx->pc = 0x200778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963184));
    // 0x20077c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x20077cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x200780: 0x24632bc0  addiu       $v1, $v1, 0x2BC0
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11200));
    // 0x200784: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x200784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x200788: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x200788u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20078c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x20078cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x200790: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x200790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x200794: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x200794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x200798: 0xa0d00003  sb          $s0, 0x3($a2)
    ctx->pc = 0x200798u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x20079c: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x20079cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2007a0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2007a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2007a4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2007a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2007a8: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x2007a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x2007ac: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2007acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2007b0: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2007B0u;
    SET_GPR_U32(ctx, 31, 0x2007B8u);
    ctx->pc = 0x2007B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007B0u;
    // 0x2007b4: 0xaf8593a0  sw          $a1, -0x6C60($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2007B0u, 0x2007B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007B8u;
label_2007b8:
    // 0x2007b8: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x2007b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2007bc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2007bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2007c0: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2007c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2007c4: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x2007c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x2007c8: 0xa0900003  sb          $s0, 0x3($a0)
    ctx->pc = 0x2007c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x2007cc: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x2007ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x2007d0: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x2007d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x2007d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2007d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2007d8: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2007d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2007dc: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x2007dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2007e0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2007e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2007e4: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2007e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2007e8: 0xac6c0004  sw          $t4, 0x4($v1)
    ctx->pc = 0x2007e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 12));
    // 0x2007ec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2007ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2007f0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2007f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2007f4: 0x240b0046  addiu       $t3, $zero, 0x46
    ctx->pc = 0x2007f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2007f8: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2007f8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2007fc: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x2007fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x200800: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200800u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200804: 0x3c081400  lui         $t0, 0x1400
    ctx->pc = 0x200804u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5120 << 16));
    // 0x200808: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x200808u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x20080c: 0x350807fc  ori         $t0, $t0, 0x7FC
    ctx->pc = 0x20080cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2044);
    // 0x200810: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200810u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200814: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x200814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x200818: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x200818u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x20081c: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x20081cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x200820: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200820u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200824: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x200824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x200828: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x200828u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x20082c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20082cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200830: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200830u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200834: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x200834u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x200838: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x200838u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x20083c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20083cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200840: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200840u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200844: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x200844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x200848: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x200848u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x20084c: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x20084cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x200850: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200850u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200854: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x200854u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x200858: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200858u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x20085c: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x20085cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
    // 0x200860: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200860u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200864: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x200864u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x200868: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200868u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x20086c: 0xad890004  sw          $t1, 0x4($t4)
    ctx->pc = 0x20086cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 9));
    // 0x200870: 0xc0ae014  jal         func_2B8050
    ctx->pc = 0x200870u;
    SET_GPR_U32(ctx, 31, 0x200878u);
    ctx->pc = 0x200874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200870u;
    // 0x200874: 0xad880000  sw          $t0, 0x0($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8050u, 0x200870u, 0x200878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200878u;
label_200878:
    // 0x200878: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x200878u;
    SET_GPR_U32(ctx, 31, 0x200880u);
    ctx->pc = 0x20087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200878u;
    // 0x20087c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x200878u, 0x200880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200880u;
label_200880:
    // 0x200880: 0xc0896ec  jal         func_225BB0
    ctx->pc = 0x200880u;
    SET_GPR_U32(ctx, 31, 0x200888u);
    ctx->pc = 0x225BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225BB0u, 0x200880u, 0x200888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200888u;
label_200888:
    // 0x200888: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x200888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20088c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20088cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200894: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x200894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x200898: 0xc0ae05e  jal         func_2B8178
    ctx->pc = 0x200898u;
    SET_GPR_U32(ctx, 31, 0x2008A0u);
    ctx->pc = 0x20089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200898u;
    // 0x20089c: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8178u, 0x200898u, 0x2008A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008A0u;
label_2008a0:
    // 0x2008a0: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2008A0u;
    SET_GPR_U32(ctx, 31, 0x2008A8u);
    ctx->pc = 0x2008A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2008A0u;
    // 0x2008a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2008A0u, 0x2008A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008A8u;
label_2008a8:
    // 0x2008a8: 0xc0b377c  jal         func_2CDDF0
    ctx->pc = 0x2008A8u;
    SET_GPR_U32(ctx, 31, 0x2008B0u);
    ctx->pc = 0x2CDDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDF0u, 0x2008A8u, 0x2008B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008B0u;
label_2008b0:
    // 0x2008b0: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2008B0u;
    {
        const bool branch_taken_0x2008b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008B0u;
        // 0x2008b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008b0) {
            ctx->pc = 0x200AE4u;
            goto label_200ae4;
        }
    }
    ctx->pc = 0x2008B8u;
label_2008b8:
    // 0x2008b8: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2008b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2008bc: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2008bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2008c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2008c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2008c4: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x2008c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2008c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2008c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2008cc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2008ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2008d0: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2008d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2008d4: 0xc083108  jal         func_20C420
    ctx->pc = 0x2008D4u;
    SET_GPR_U32(ctx, 31, 0x2008DCu);
    ctx->pc = 0x2008D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2008D4u;
    // 0x2008d8: 0xaf82b234  sw          $v0, -0x4DCC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x2008D4u, 0x2008DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008DCu;
label_2008dc:
    // 0x2008dc: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2008DCu;
    SET_GPR_U32(ctx, 31, 0x2008E4u);
    ctx->pc = 0x2008E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2008DCu;
    // 0x2008e0: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2008DCu, 0x2008E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008E4u;
label_2008e4:
    // 0x2008e4: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2008e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2008e8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2008e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2008ec: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2008ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008f0: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x2008f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x2008f4: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2008f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2008f8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2008f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2008fc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x2008fcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x200900: 0x3c061400  lui         $a2, 0x1400
    ctx->pc = 0x200900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5120 << 16));
    // 0x200904: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x200904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x200908: 0x34c6079d  ori         $a2, $a2, 0x79D
    ctx->pc = 0x200908u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1949);
    // 0x20090c: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x200910: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x200910u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x200914: 0x8c4406e0  lw          $a0, 0x6E0($v0)
    ctx->pc = 0x200914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
    // 0x200918: 0xacac0004  sw          $t4, 0x4($a1)
    ctx->pc = 0x200918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 12));
    // 0x20091c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x20091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x200920: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x200920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200924: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200924u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200928: 0xaf8293a0  sw          $v0, -0x6C60($gp)
    ctx->pc = 0x200928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 2));
    // 0x20092c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x20092cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x200930: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200930u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200934: 0xa4b20000  sh          $s2, 0x0($a1)
    ctx->pc = 0x200934u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x200938: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x200938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20093c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x20093cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x200940: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200940u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200944: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x200944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x200948: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x200948u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x20094c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x20094cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200950: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x200950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x200954: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x200954u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x200958: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200958u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x20095c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x20095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x200960: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x200960u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x200964: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200964u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200968: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x200968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x20096c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x20096cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x200970: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200970u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200974: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x200974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x200978: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x200978u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x20097c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x20097cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200980: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x200980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x200984: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x200984u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x200988: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200988u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x20098c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x20098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x200990: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x200990u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x200994: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200994u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200998: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x200998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x20099c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x20099cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2009a0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2009a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2009a4: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2009a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2009a8: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2009a8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2009ac: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2009acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2009b0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2009b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2009b4: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2009b4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2009b8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2009b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2009bc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2009bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2009c0: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2009c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2009c4: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x2009c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2009c8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2009c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2009cc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x2009ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x2009d0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2009d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2009d4: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2009d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2009d8: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2009d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2009dc: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2009dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2009e0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x2009e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2009e4: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2009e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2009e8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2009e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2009ec: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x2009ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x2009f0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2009f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2009f4: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x2009f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x2009f8: 0xc0899be  jal         func_2266F8
    ctx->pc = 0x2009F8u;
    SET_GPR_U32(ctx, 31, 0x200A00u);
    ctx->pc = 0x2009FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009F8u;
    // 0x2009fc: 0xad800004  sw          $zero, 0x4($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F8u, 0x2009F8u, 0x200A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A00u;
label_200a00:
    // 0x200a00: 0x8f829cbc  lw          $v0, -0x6344($gp)
    ctx->pc = 0x200a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941884)));
    // 0x200a04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200A04u;
    {
        const bool branch_taken_0x200a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A04u;
        // 0x200a08: 0x8f829cc0  lw          $v0, -0x6340($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a04) {
            ctx->pc = 0x200A18u;
            goto label_200a18;
        }
    }
    ctx->pc = 0x200A0Cu;
    // 0x200a0c: 0xc08018a  jal         func_200628
    ctx->pc = 0x200A0Cu;
    SET_GPR_U32(ctx, 31, 0x200A14u);
    ctx->pc = 0x200628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200628u, 0x200A0Cu, 0x200A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A14u;
label_200a14:
    // 0x200a14: 0x8f829cc0  lw          $v0, -0x6340($gp)
    ctx->pc = 0x200a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
label_200a18:
    // 0x200a18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x200A18u;
    {
        const bool branch_taken_0x200a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a18) {
            ctx->pc = 0x200A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200A18u;
            // 0x200a1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200A2Cu;
            goto label_200a2c;
        }
    }
    ctx->pc = 0x200A20u;
    // 0x200a20: 0xc08018c  jal         func_200630
    ctx->pc = 0x200A20u;
    SET_GPR_U32(ctx, 31, 0x200A28u);
    ctx->pc = 0x200630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200630u, 0x200A20u, 0x200A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A28u;
label_200a28:
    // 0x200a28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200a2c:
    // 0x200a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a30: 0x2406027f  addiu       $a2, $zero, 0x27F
    ctx->pc = 0x200a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x200a34: 0xc0ae014  jal         func_2B8050
    ctx->pc = 0x200A34u;
    SET_GPR_U32(ctx, 31, 0x200A3Cu);
    ctx->pc = 0x200A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A34u;
    // 0x200a38: 0x240700df  addiu       $a3, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8050u, 0x200A34u, 0x200A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A3Cu;
label_200a3c:
    // 0x200a3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x200a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x200a40: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x200A40u;
    SET_GPR_U32(ctx, 31, 0x200A48u);
    ctx->pc = 0x200A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A40u;
    // 0x200a44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x200A40u, 0x200A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A48u;
label_200a48:
    // 0x200a48: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x200a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x200a4c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x200a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x200a50: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x200a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x200a54: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x200a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x200a58: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x200a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x200a5c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x200a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x200a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x200a64: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x200a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x200a68: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x200A68u;
    SET_GPR_U32(ctx, 31, 0x200A70u);
    ctx->pc = 0x200A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A68u;
    // 0x200a6c: 0x2484fffe  addiu       $a0, $a0, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x200A68u, 0x200A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A70u;
label_200a70:
    // 0x200a70: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x200a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x200a74: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x200a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x200a78: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x200a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x200a7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x200a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x200a80: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x200a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x200a84: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x200a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x200a88: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x200a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x200a8c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x200A8Cu;
    SET_GPR_U32(ctx, 31, 0x200A94u);
    ctx->pc = 0x200A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A8Cu;
    // 0x200a90: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x200A8Cu, 0x200A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A94u;
label_200a94:
    // 0x200a94: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x200a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x200a98: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x200a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x200a9c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x200a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x200aa0: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x200aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x200aa4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x200aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x200aa8: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x200aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x200aac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x200aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x200ab0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x200ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x200ab4: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x200AB4u;
    SET_GPR_U32(ctx, 31, 0x200ABCu);
    ctx->pc = 0x200AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AB4u;
    // 0x200ab8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x200AB4u, 0x200ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200ABCu;
label_200abc:
    // 0x200abc: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x200abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x200ac0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x200ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x200ac4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x200ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x200ac8: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x200ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x200acc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x200accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x200ad0: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x200ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x200ad4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x200ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x200ad8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x200ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x200adc: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x200ADCu;
    SET_GPR_U32(ctx, 31, 0x200AE4u);
    ctx->pc = 0x200AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200ADCu;
    // 0x200ae0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x200ADCu, 0x200AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AE4u;
label_200ae4:
    // 0x200ae4: 0xc0b377c  jal         func_2CDDF0
    ctx->pc = 0x200AE4u;
    SET_GPR_U32(ctx, 31, 0x200AECu);
    ctx->pc = 0x2CDDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDF0u, 0x200AE4u, 0x200AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AECu;
label_200aec:
    // 0x200aec: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x200AECu;
    SET_GPR_U32(ctx, 31, 0x200AF4u);
    ctx->pc = 0x200AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AECu;
    // 0x200af0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x200AECu, 0x200AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AF4u;
label_200af4:
    // 0x200af4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x200af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x200af8: 0x230802a  slt         $s0, $s1, $s0
    ctx->pc = 0x200af8u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x200afc: 0x1600ff6e  bnez        $s0, . + 4 + (-0x92 << 2)
    ctx->pc = 0x200AFCu;
    {
        const bool branch_taken_0x200afc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x200B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AFCu;
        // 0x200b00: 0x2403071c  addiu       $v1, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200afc) {
            ctx->pc = 0x2008B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2008b8;
        }
    }
    ctx->pc = 0x200B04u;
    // 0x200b04: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x200B04u;
    SET_GPR_U32(ctx, 31, 0x200B0Cu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x200B04u, 0x200B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B0Cu;
label_200b0c:
    // 0x200b0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x200b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x200b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x200b14: 0x1622001d  bne         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x200B14u;
    {
        const bool branch_taken_0x200b14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x200b14) {
            ctx->pc = 0x200B8Cu;
            goto label_200b8c;
        }
    }
    ctx->pc = 0x200B1Cu;
    // 0x200b1c: 0xc0896ec  jal         func_225BB0
    ctx->pc = 0x200B1Cu;
    SET_GPR_U32(ctx, 31, 0x200B24u);
    ctx->pc = 0x225BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225BB0u, 0x200B1Cu, 0x200B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B24u;
label_200b24:
    // 0x200b24: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x200b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x200b28: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x200B28u;
    {
        const bool branch_taken_0x200b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x200B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B28u;
        // 0x200b2c: 0x8f90b230  lw          $s0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b28) {
            ctx->pc = 0x200B8Cu;
            goto label_200b8c;
        }
    }
    ctx->pc = 0x200B30u;
    // 0x200b30: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x200B30u;
    SET_GPR_U32(ctx, 31, 0x200B38u);
    ctx->pc = 0x200B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B30u;
    // 0x200b34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x200B30u, 0x200B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B38u;
label_200b38:
    // 0x200b38: 0xae111554  sw          $s1, 0x1554($s0)
    ctx->pc = 0x200b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5460), GPR_U32(ctx, 17));
    // 0x200b3c: 0x26101554  addiu       $s0, $s0, 0x1554
    ctx->pc = 0x200b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5460));
    // 0x200b40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x200b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b44: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x200B44u;
    SET_GPR_U32(ctx, 31, 0x200B4Cu);
    ctx->pc = 0x200B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B44u;
    // 0x200b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x200B44u, 0x200B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B4Cu;
label_200b4c:
    // 0x200b4c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x200b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200b50: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x200b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x200b54: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x200b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x200b58: 0xc083108  jal         func_20C420
    ctx->pc = 0x200B58u;
    SET_GPR_U32(ctx, 31, 0x200B60u);
    ctx->pc = 0x200B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B58u;
    // 0x200b5c: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x200B58u, 0x200B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B60u;
label_200b60:
    // 0x200b60: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x200b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200b64: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x200b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x200b68: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x200b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x200b6c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x200b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x200b70: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x200b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x200b74: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x200b74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x200b78: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x200b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x200b7c: 0xc0ae05e  jal         func_2B8178
    ctx->pc = 0x200B7Cu;
    SET_GPR_U32(ctx, 31, 0x200B84u);
    ctx->pc = 0x200B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B7Cu;
    // 0x200b80: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8178u, 0x200B7Cu, 0x200B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B84u;
label_200b84:
    // 0x200b84: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x200B84u;
    SET_GPR_U32(ctx, 31, 0x200B8Cu);
    ctx->pc = 0x200B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B84u;
    // 0x200b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x200B84u, 0x200B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B8Cu;
label_200b8c:
    // 0x200b8c: 0xc0a9c02  jal         func_2A7008
    ctx->pc = 0x200B8Cu;
    SET_GPR_U32(ctx, 31, 0x200B94u);
    ctx->pc = 0x2A7008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7008u, 0x200B8Cu, 0x200B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B94u;
label_200b94:
    // 0x200b94: 0xc0a9c16  jal         func_2A7058
    ctx->pc = 0x200B94u;
    SET_GPR_U32(ctx, 31, 0x200B9Cu);
    ctx->pc = 0x2A7058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7058u, 0x200B94u, 0x200B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B9Cu;
label_200b9c:
    // 0x200b9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ba4: 0x2406027f  addiu       $a2, $zero, 0x27F
    ctx->pc = 0x200ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x200ba8: 0xc083108  jal         func_20C420
    ctx->pc = 0x200BA8u;
    SET_GPR_U32(ctx, 31, 0x200BB0u);
    ctx->pc = 0x200BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200BA8u;
    // 0x200bac: 0x240700df  addiu       $a3, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x200BA8u, 0x200BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BB0u;
label_200bb0:
    // 0x200bb0: 0x26a299f0  addiu       $v0, $s5, -0x6610
    ctx->pc = 0x200bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x200bb4: 0x8ea499f0  lw          $a0, -0x6610($s5)
    ctx->pc = 0x200bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941168)));
    // 0x200bb8: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x200bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x200bbc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x200bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x200bc0: 0xc0ae014  jal         func_2B8050
    ctx->pc = 0x200BC0u;
    SET_GPR_U32(ctx, 31, 0x200BC8u);
    ctx->pc = 0x200BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200BC0u;
    // 0x200bc4: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8050u, 0x200BC0u, 0x200BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BC8u;
label_200bc8:
    // 0x200bc8: 0x8f839dac  lw          $v1, -0x6254($gp)
    ctx->pc = 0x200bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
    // 0x200bcc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x200bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x200bd0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200BD0u;
    {
        const bool branch_taken_0x200bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x200bd0) {
            ctx->pc = 0x200BE0u;
            goto label_200be0;
        }
    }
    ctx->pc = 0x200BD8u;
    // 0x200bd8: 0xc08baec  jal         func_22EBB0
    ctx->pc = 0x200BD8u;
    SET_GPR_U32(ctx, 31, 0x200BE0u);
    ctx->pc = 0x22EBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EBB0u, 0x200BD8u, 0x200BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BE0u;
label_200be0:
    // 0x200be0: 0xc0836e4  jal         func_20DB90
    ctx->pc = 0x200BE0u;
    SET_GPR_U32(ctx, 31, 0x200BE8u);
    ctx->pc = 0x20DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB90u, 0x200BE0u, 0x200BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BE8u;
label_200be8:
    // 0x200be8: 0xc0ad8a0  jal         func_2B6280
    ctx->pc = 0x200BE8u;
    SET_GPR_U32(ctx, 31, 0x200BF0u);
    ctx->pc = 0x2B6280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6280u, 0x200BE8u, 0x200BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BF0u;
label_200bf0:
    // 0x200bf0: 0xc0ade84  jal         func_2B7A10
    ctx->pc = 0x200BF0u;
    SET_GPR_U32(ctx, 31, 0x200BF8u);
    ctx->pc = 0x2B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7A10u, 0x200BF0u, 0x200BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BF8u;
label_200bf8:
    // 0x200bf8: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x200bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x200bfc: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x200bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x200c00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x200c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x200c04: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x200c04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x200c08: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x200c08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x200c0c: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x200c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x200c10: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x200c10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200c14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x200c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x200c18: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x200c18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200c1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x200c1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200c20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x200c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200c28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x200c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x200c2c: 0xaf8293a0  sw          $v0, -0x6C60($gp)
    ctx->pc = 0x200c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 2));
    // 0x200c30: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x200c30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x200c34: 0x3e00008  jr          $ra
    ctx->pc = 0x200C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C34u;
        // 0x200c38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200C3Cu;
}
