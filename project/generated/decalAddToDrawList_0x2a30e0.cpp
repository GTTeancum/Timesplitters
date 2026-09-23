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

// Function: decalAddToDrawList
// Address: 0x2a30e0 - 0x2a31c4
void decalAddToDrawList_0x2a30e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalAddToDrawList_0x2a30e0");
#endif

    switch (ctx->pc) {
        case 0x2a3158u: goto label_2a3158;
        default: break;
    }

    ctx->pc = 0x2a30e0u;

    // 0x2a30e0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2a30e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a30e8: 0x68182a  slt         $v1, $v1, $t0
    ctx->pc = 0x2a30e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2a30ec: 0x25020007  addiu       $v0, $t0, 0x7
    ctx->pc = 0x2a30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2a30f0: 0x103100b  movn        $v0, $t0, $v1
    ctx->pc = 0x2a30f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x2a30f4: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x2a30f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
    // 0x2a30f8: 0x248c3  sra         $t1, $v0, 3
    ctx->pc = 0x2a30f8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a30fc: 0x24a59d48  addiu       $a1, $a1, -0x62B8
    ctx->pc = 0x2a30fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942024));
    // 0x2a3100: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2a3100u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a3104: 0x8f82b304  lw          $v0, -0x4CFC($gp)
    ctx->pc = 0x2a3104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947588)));
    // 0x2a3108: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2a3108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a310c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a310cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3110: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a3110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a3114: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3114u;
    {
        const bool branch_taken_0x2a3114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3114u;
        // 0x2a3118: 0x1222018  mult        $a0, $t1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3114) {
            ctx->pc = 0x2A3124u;
            goto label_2a3124;
        }
    }
    ctx->pc = 0x2A311Cu;
    // 0x2a311c: 0xac6700c4  sw          $a3, 0xC4($v1)
    ctx->pc = 0x2a311cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 7));
    // 0x2a3120: 0xace300c0  sw          $v1, 0xC0($a3)
    ctx->pc = 0x2a3120u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 192), GPR_U32(ctx, 3));
label_2a3124:
    // 0x2a3124: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2a3124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2a3128: 0xace800d0  sw          $t0, 0xD0($a3)
    ctx->pc = 0x2a3128u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 208), GPR_U32(ctx, 8));
    // 0x2a312c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2a312cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a3130: 0x8f83b300  lw          $v1, -0x4D00($gp)
    ctx->pc = 0x2a3130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947584)));
    // 0x2a3134: 0x8f85b304  lw          $a1, -0x4CFC($gp)
    ctx->pc = 0x2a3134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947588)));
    // 0x2a3138: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a3138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a313c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2a313cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x2a3140: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2a3140u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3144: 0x18a0001d  blez        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A3144u;
    {
        const bool branch_taken_0x2a3144 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2A3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3144u;
        // 0x2a3148: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3144) {
            ctx->pc = 0x2A31BCu;
            goto label_2a31bc;
        }
    }
    ctx->pc = 0x2A314Cu;
    // 0x2a314c: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x2a314cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2a3150: 0x3c0901ff  lui         $t1, 0x1FF
    ctx->pc = 0x2a3150u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)511 << 16));
    // 0x2a3154: 0x0  nop
    ctx->pc = 0x2a3154u;
    // NOP
label_2a3158:
    // 0x2a3158: 0x25239cd8  addiu       $v1, $t1, -0x6328
    ctx->pc = 0x2a3158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941912));
    // 0x2a315c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A315Cu;
    {
        const bool branch_taken_0x2a315c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a315c) {
            ctx->pc = 0x2A3160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A315Cu;
            // 0x2a3160: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3164u;
            goto label_2a3164;
        }
    }
    ctx->pc = 0x2A3164u;
label_2a3164:
    // 0x2a3164: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2a3164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a3168: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x2a3168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2a316c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a3170: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2a3170u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a3174: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x2a3174u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a3178: 0x2010  mfhi        $a0
    ctx->pc = 0x2a3178u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a317c: 0x2882000b  slti        $v0, $a0, 0xB
    ctx->pc = 0x2a317cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2a3180: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3180u;
    {
        const bool branch_taken_0x2a3180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3180) {
            ctx->pc = 0x2A319Cu;
            goto label_2a319c;
        }
    }
    ctx->pc = 0x2A3188u;
    // 0x2a3188: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a3188u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a318c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a318cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a3190: 0xc7818dcc  lwc1        $f1, -0x7234($gp)
    ctx->pc = 0x2a3190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3194: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3194u;
    {
        const bool branch_taken_0x2a3194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3194u;
        // 0x2a3198: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3194) {
            ctx->pc = 0x2A31A4u;
            goto label_2a31a4;
        }
    }
    ctx->pc = 0x2A319Cu;
label_2a319c:
    // 0x2a319c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a319cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a31a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a31a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a31a4:
    // 0x2a31a4: 0xe4e000e0  swc1        $f0, 0xE0($a3)
    ctx->pc = 0x2a31a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 224), bits); }
    // 0x2a31a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a31a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a31ac: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2a31acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31b0: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x2a31b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a31b4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2A31B4u;
    {
        const bool branch_taken_0x2a31b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A31B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A31B4u;
        // 0x2a31b8: 0x24e700f0  addiu       $a3, $a3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a31b4) {
            ctx->pc = 0x2A3158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3158;
        }
    }
    ctx->pc = 0x2A31BCu;
label_2a31bc:
    // 0x2a31bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A31BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A31BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A31C4u;
}
