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

// Function: fxSelectCharInit
// Address: 0x2384d8 - 0x2385ac
void fxSelectCharInit_0x2384d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fxSelectCharInit_0x2384d8");
#endif

    switch (ctx->pc) {
        case 0x238558u: goto label_238558;
        default: break;
    }

    ctx->pc = 0x2384d8u;

    // 0x2384d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2384d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2384dc: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2384dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2384e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2384e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2384e4: 0x24421288  addiu       $v0, $v0, 0x1288
    ctx->pc = 0x2384e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4744));
    // 0x2384e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2384e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2384ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2384ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2384f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2384f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2384f4: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x2384f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2384f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2384f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2384fc: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2384fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x238500: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x238500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x238504: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x238504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238508: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x238508u;
    {
        const bool branch_taken_0x238508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x23850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238508u;
        // 0x23850c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238508) {
            ctx->pc = 0x238548u;
            goto label_238548;
        }
    }
    ctx->pc = 0x238510u;
    // 0x238510: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x238510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x238514: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x238514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x238518: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x238518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23851c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23851Cu;
    {
        const bool branch_taken_0x23851c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23851Cu;
        // 0x238520: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23851c) {
            ctx->pc = 0x238534u;
            goto label_238534;
        }
    }
    ctx->pc = 0x238524u;
    // 0x238524: 0x24421268  addiu       $v0, $v0, 0x1268
    ctx->pc = 0x238524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x238528: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x238528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23852c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23852Cu;
    {
        const bool branch_taken_0x23852c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23852Cu;
        // 0x238530: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23852c) {
            ctx->pc = 0x238558u;
            goto label_238558;
        }
    }
    ctx->pc = 0x238534u;
label_238534:
    // 0x238534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238538: 0x24421268  addiu       $v0, $v0, 0x1268
    ctx->pc = 0x238538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x23853c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x23853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x238540: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x238540u;
    {
        const bool branch_taken_0x238540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238540u;
        // 0x238544: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238540) {
            ctx->pc = 0x238558u;
            goto label_238558;
        }
    }
    ctx->pc = 0x238548u;
label_238548:
    // 0x238548: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x238548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x23854c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23854cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238550: 0xc08d9ac  jal         func_2366B0
    ctx->pc = 0x238550u;
    SET_GPR_U32(ctx, 31, 0x238558u);
    ctx->pc = 0x238554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238550u;
    // 0x238554: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2366B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2366B0u, 0x238550u, 0x238558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238558u;
label_238558:
    // 0x238558: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x238558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23855c: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x23855cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x238560: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x238560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x238564: 0x24421298  addiu       $v0, $v0, 0x1298
    ctx->pc = 0x238564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4760));
    // 0x238568: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x238568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23856c: 0x24a512d8  addiu       $a1, $a1, 0x12D8
    ctx->pc = 0x23856cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4824));
    // 0x238570: 0x246312e8  addiu       $v1, $v1, 0x12E8
    ctx->pc = 0x238570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4840));
    // 0x238574: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x238574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x238578: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x238578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23857c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x23857cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x238580: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x238588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23858c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23858cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238590: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x238590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238594: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23859c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x23859cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2385a0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2385a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2385a4: 0x808e124  j           func_238490
    ctx->pc = 0x2385A4u;
    ctx->pc = 0x2385A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385A4u;
    // 0x2385a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238490u;
    actingsoundStop_0x238490(rdram, ctx, runtime); return;
    ctx->pc = 0x2385ACu;
}
