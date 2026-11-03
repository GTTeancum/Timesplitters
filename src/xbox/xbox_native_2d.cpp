// Native 2D display-list emitters (make TS_NATIVE_2D=1, Xbox only): the
// builders' natives, the item ring and its tokens, the rebuilt VIF bytes
// and the decoder's fast-route plan. See xbox_native_2d.h.
#include "xbox_native_2d.h"

#if TS_NATIVE_2D

#ifndef TS_NATIVE_2D_HOST_TEST
#define TS_NATIVE_2D_HOST_TEST 0 // test/native_2d_test.cpp: the ring, the rebuilt bytes and the plan only
#endif
#if !TS_NATIVE_2D_HOST_TEST
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_recompiled_functions.h"
#endif
#include "runtime/ps2_vu1_watch.h"

#include <cstring>
#include <vector>

namespace
{
    // ---- Items: what each builder's REFs would have sent, in order.
    enum Kind : uint32_t
    {
        kRef = 1,   // a static block: addr, qwc
        kRect = 2,  // dlTextureRectangle(+Float): header REF, its 5 QW, trailer REF
        kFill = 3,  // dlFillRectangle: its 5 QW packet
        kFillF = 4, // dlFillRectangleFloat: its 5 QW packet
        kClip = 5,  // dlSetClip: its 3 QW packet
    };
    constexpr uint32_t itemWords(uint32_t kind)
    {
        return kind == kRef ? 3u : kind == kRect ? 10u : kind == kFill ? 4u : kind == kFillF ? 6u : 3u;
    }

    // The rectangle's static blocks (dlTextureRectangle's REFs around its packet).
    constexpr uint32_t kRectHeader = 0x3808F0u; // 2 QW: NOPs, UNPACK 6, the GIF tag
    constexpr uint32_t kRectTrailer = 0x380910u; // 1 QW: MSCAL 0x3FE0, FLUSH, NOPs

    // ---- The ring of items and the batch index (as xbox_part_prologue.cpp's).
    constexpr uint32_t kRingWords = 1u << 16;  // 256 KB: several frames of HUD and text
    constexpr uint32_t kBatches = 1u << 11;    // divides 2^24: the index survives the sequence's wrap
    constexpr uint32_t kBatchWords = 8192u;    // a longer batch goes on under the next token
    struct Batch
    {
        uint32_t sequence = ~0u, start = 0, words = 0, slot = 0;
        bool walked = false;
        uint32_t marker[4] = {};
    };
    uint32_t g_ring[kRingWords];
    Batch g_batches[kBatches];
    uint32_t g_written = 0;   // words ever written (the ring position is this modulo kRingWords)
    uint32_t g_sequence = 0;  // the next batch's
    uint32_t g_open = ~0u;    // the batch the next item may join (~0u: none)
    uint8_t *g_rdram = nullptr;
    XboxNative2dStats g_stats;

    bool batchLive(const Batch &b, uint32_t sequence)
    {
        return b.sequence == sequence && g_written - b.start <= kRingWords;
    }

#if !TS_NATIVE_2D_HOST_TEST
    // ---- The recompiler's integer semantics (as project/game/ts_native_game.cpp)
#define TS2D_INL inline __attribute__((always_inline))
#define G_ARGS uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime
#define G_PASS rdram, ctx, runtime

    TS2D_INL uint32_t lo32(uint64_t v) { return static_cast<uint32_t>(v); }
    TS2D_INL uint64_t sext32(uint32_t v) { return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(v))); }
    TS2D_INL uint64_t addiu(uint64_t rs, int32_t imm) { return sext32(lo32(rs) + static_cast<uint32_t>(imm)); }
    TS2D_INL uint64_t addu(uint64_t a, uint64_t b) { return sext32(lo32(a) + lo32(b)); }
    TS2D_INL uint64_t slt(uint64_t a, uint64_t b) { return static_cast<int64_t>(a) < static_cast<int64_t>(b) ? 1u : 0u; }
    TS2D_INL uint64_t slti(uint64_t a, int32_t imm) { return static_cast<int64_t>(a) < static_cast<int64_t>(imm) ? 1u : 0u; }
    TS2D_INL uint64_t sll32(uint64_t a, uint32_t sa) { return sext32(lo32(a) << sa); }
    TS2D_INL uint64_t srl32(uint64_t a, uint32_t sa) { return sext32(lo32(a) >> sa); }
    TS2D_INL uint64_t sra32(uint64_t a, uint32_t sa) { return sext32(static_cast<uint32_t>(static_cast<int32_t>(lo32(a)) >> sa)); }
#define LW(addr) sext32(READ32(addr))

    TS2D_INL uint32_t bitsOf(float value)
    {
        uint32_t bits;
        std::memcpy(&bits, &value, sizeof(bits));
        return bits;
    }
    TS2D_INL float floatOf(uint32_t bits)
    {
        float value;
        std::memcpy(&value, &bits, sizeof(value));
        return value;
    }
#define LWC1(addr) floatOf(READ32(addr))
#define SWC1(addr, f) WRITE32(addr, bitsOf(f))

    // movz/movn copy the whole 128-bit register (ts_native_game.cpp).
    TS2D_INL void copyHigh(R5900Context *ctx, int dst, int src)
    {
        std::memcpy(reinterpret_cast<uint8_t *>(&ctx->r[dst]) + 8, reinterpret_cast<const uint8_t *>(&ctx->r[src]) + 8, 8);
    }
    TS2D_INL void zeroHigh(R5900Context *ctx, int dst)
    {
        std::memset(reinterpret_cast<uint8_t *>(&ctx->r[dst]) + 8, 0, 8);
    }

    // A guest call through the function table, as the translation makes it.
    // false: the callee did not return to `next` (the original resumes there
    // later from the registers stored before the call).
    TS2D_INL bool guestCall(G_ARGS, uint32_t target, uint32_t source, uint32_t next)
    {
        SET_GPR_U32(ctx, 31, next);
        return runtime->dispatchGuestBranch(rdram, ctx, target, source, next, PS2Runtime::GuestBranchKind::DirectCall,
                                            "JAL");
    }
    TS2D_INL void returnToCaller(R5900Context *ctx) { ctx->pc = GPR_U32(ctx, 31); }

    // ---- Guest addresses
    constexpr uint32_t kListPointer = 0x6C60u;  // gp-: the current display list's next slot
    constexpr uint32_t kPushedList = 0x4B50u;   // gp-: dlPushDmaTag's saved pointer (0: none)
    constexpr uint32_t kZbMode = 0x4B5Cu;       // gp-: dlSetZB's current mode
    constexpr uint32_t kDitherMode = 0x4B54u;   // gp-: dlSetDitherMatrix's current mode
    constexpr uint32_t kDither0 = 0x380770u, kDither1 = 0x3807A0u, kDither2 = 0x3807D0u; // 3 QW each

    // A list the game keeps (a precalculated chain under dlPushDmaTag):
    // the original builds it.
    TS2D_INL bool keptList(G_ARGS)
    {
        if (READ32(GPR_U32(ctx, 28) - kPushedList) == 0u)
            return false;
        ++g_stats.pushed;
        return true;
    }

    // Room for an item of `words` in the open batch, or a new batch with its
    // token in the current list slot (the slot written as the builders write
    // a REF: QWC, ID byte, ADDR; the byte between is left as it is).
    uint32_t *putItem(G_ARGS, uint32_t words)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t ptr = READ32(gp - kListPointer);
        Batch *open = g_open != ~0u ? &g_batches[g_open % kBatches] : nullptr;
        const uint32_t position = g_written & (kRingWords - 1u);
        const bool fits = position + words <= kRingWords;
        if (!(open && open->sequence == g_open && !open->walked && open->slot + 16u == ptr && fits &&
              open->words + words <= kBatchWords && READ16(open->slot) == 0u && READ8(open->slot + 3u) == 0x30u &&
              READ32(open->slot + 4u) == (kXboxNative2dTag | g_open)))
        {
            if (!fits)
                g_written += kRingWords - position; // a batch never wraps: on from the ring's start
            const uint32_t sequence = g_sequence++ & kXboxNative2dIndexMask;
            Batch &b = g_batches[sequence % kBatches];
            b.sequence = sequence;
            b.start = g_written;
            b.words = 0;
            b.slot = ptr;
            b.walked = false;
            b.marker[0] = (kXboxNative2dOpcode << 24) | sequence;
            b.marker[1] = b.marker[2] = b.marker[3] = 0u;
            WRITE16(ptr, 0u);
            WRITE8(ptr + 3u, 0x30u);
            WRITE32(ptr + 4u, kXboxNative2dTag | sequence);
            WRITE32(gp - kListPointer, ptr + 16u);
            g_open = sequence;
            open = &b;
            ++g_stats.tokens;
        }
        uint32_t *out = &g_ring[g_written & (kRingWords - 1u)];
        g_written += words;
        open->words += words;
        ++g_stats.items;
        return out;
    }

    void putRef(G_ARGS, uint32_t addr, uint32_t qwc)
    {
        uint32_t *w = putItem(G_PASS, itemWords(kRef));
        w[0] = kRef;
        w[1] = addr;
        w[2] = qwc;
    }

    // A static block the walker would take as one piece in main RAM (else
    // the builder runs as its original).
    TS2D_INL bool staticBlock(uint32_t addr, uint32_t qwc)
    {
        const uint32_t a = addr & 0x7FFFFFFFu;
        return a < PS2_RAM_SIZE && qwc * 16u <= PS2_RAM_SIZE - a;
    }

    // ---- dlSetZB (0x2b7cd0): the depth mode. Not the current mode and not
    // -1: a REF of the mode's 4 QW block (TEST_1, ZBUF_1), the mode stored.
    // Returns the previous mode.
    void nativeDlSetZB(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint64_t a3 = LW(gp - kZbMode);
        const uint64_t a2 = GPR_U64(ctx, 4);
        SET_GPR_U64(ctx, 6, a2);
        SET_GPR_U64(ctx, 7, a3);
        if (a2 == a3)
        {
            SET_GPR_U64(ctx, 2, a3);
            returnToCaller(ctx);
            return;
        }
        const uint64_t a1 = LW(gp - kListPointer);
        if (a2 == ~0ull)
        {
            SET_GPR_U64(ctx, 5, a1);
            SET_GPR_U64(ctx, 2, a3);
            returnToCaller(ctx);
            return;
        }
        const uint64_t v1 = addu(sll32(a2, 6), 0x380670u);
        if (!staticBlock(lo32(v1), 4u) || keptList(G_PASS))
        {
            dlSetZB_0x2b7cd0(G_PASS);
            return;
        }
        WRITE32(gp - kZbMode, lo32(a2));
        putRef(G_PASS, lo32(v1), 4u);
        SET_GPR_U64(ctx, 2, a3);
        SET_GPR_U64(ctx, 3, v1);
        SET_GPR_U64(ctx, 4, addiu(a1, 0x10));
        SET_GPR_U64(ctx, 5, 4u);
        returnToCaller(ctx);
    }

    // ---- dlSetDitherMatrix (0x2b7df0): modes 0-2 REF a 3 QW DIMX block;
    // other modes (but -1 and the current one) are only stored.
    void nativeDlSetDitherMatrix(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint64_t a3 = LW(gp - kDitherMode);
        const uint64_t a2 = GPR_U64(ctx, 4);
        SET_GPR_U64(ctx, 6, a2);
        SET_GPR_U64(ctx, 7, a3);
        if (a2 == a3)
        {
            SET_GPR_U64(ctx, 2, a3);
            returnToCaller(ctx);
            return;
        }
        if (a2 == ~0ull)
        {
            SET_GPR_U64(ctx, 2, a3);
            returnToCaller(ctx);
            return;
        }
        uint32_t block = 0u;
        if (a2 == 1u)
            block = kDither1;
        else if (!slti(a2, 2))
        {
            if (a2 == 2u)
                block = kDither2;
        }
        else if (a2 == 0u)
            block = kDither0;
        if (block == 0u)
        {
            // Stored only: a0 holds the list slot (the delay slots' load),
            // v0 the last compare's constant before the return's delay slot.
            SET_GPR_U64(ctx, 4, LW(gp - kListPointer));
            WRITE32(gp - kDitherMode, lo32(a2));
            SET_GPR_U64(ctx, 2, a3);
            returnToCaller(ctx);
            return;
        }
        if (keptList(G_PASS))
        {
            dlSetDitherMatrix_0x2b7df0(G_PASS);
            return;
        }
        const uint64_t ptr = LW(gp - kListPointer);
        putRef(G_PASS, block, 3u);
        WRITE32(gp - kDitherMode, lo32(a2));
        SET_GPR_U64(ctx, 2, a3);
        SET_GPR_U64(ctx, 3, sext32(block));
        SET_GPR_U64(ctx, 4, addiu(ptr, 0x10));
        SET_GPR_U64(ctx, 5, 3u);
        returnToCaller(ctx);
    }

    // The rectangle item's words: the colour and the packet's UV/XYZ words.
    void putRect(G_ARGS, uint32_t rgba, uint32_t u0, uint32_t v0, uint32_t x0, uint32_t y0, uint32_t u1, uint32_t v1,
                 uint32_t x1, uint32_t y1)
    {
        uint32_t *w = putItem(G_PASS, itemWords(kRect));
        w[0] = kRect;
        w[1] = rgba;
        w[2] = u0;
        w[3] = v0;
        w[4] = x0;
        w[5] = y0;
        w[6] = u1;
        w[7] = v1;
        w[8] = x1;
        w[9] = y1;
    }

    // ---- dlTextureRectangle (0x2b8c08)(x0, y0, x1, y1, u0, v0, u1, v1, rgba
    // on the stack): depth mode 0, a SPRITE (TME, ABE, FST) between the
    // static header and trailer, the previous depth mode back (a tail call).
    void nativeDlTextureRectangle(G_ARGS)
    {
        if (keptList(G_PASS))
        {
            dlTextureRectangle_0x2b8c08(G_PASS);
            return;
        }
        const uint32_t sp = GPR_U32(ctx, 29) - 0xB0u;
        WRITE64(sp + 0x30u, GPR_U64(ctx, 18));
        WRITE64(sp + 0x90u, GPR_U64(ctx, 30));
        const uint64_t s2 = GPR_U64(ctx, 4);
        WRITE64(sp + 0x80u, GPR_U64(ctx, 23));
        const uint64_t fp = GPR_U64(ctx, 10);
        WRITE64(sp + 0x70u, GPR_U64(ctx, 22));
        const uint64_t s7 = GPR_U64(ctx, 7);
        WRITE64(sp + 0x60u, GPR_U64(ctx, 21));
        const uint64_t s6 = GPR_U64(ctx, 6);
        WRITE64(sp + 0x50u, GPR_U64(ctx, 20));
        const uint64_t s5 = GPR_U64(ctx, 9);
        WRITE64(sp + 0x40u, GPR_U64(ctx, 19));
        const uint64_t s4 = GPR_U64(ctx, 8);
        WRITE64(sp + 0x20u, GPR_U64(ctx, 17));
        const uint64_t s3 = GPR_U64(ctx, 5);
        const uint64_t s1 = LW(sp + 0xB0u);
        WRITE64(sp + 0x10u, GPR_U64(ctx, 16));
        WRITE32(sp, GPR_U32(ctx, 11));
        WRITE64(sp + 0xA0u, GPR_U64(ctx, 31));
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(sp));
        SET_GPR_U64(ctx, 17, s1);
        SET_GPR_U64(ctx, 18, s2);
        SET_GPR_U64(ctx, 19, s3);
        SET_GPR_U64(ctx, 20, s4);
        SET_GPR_U64(ctx, 21, s5);
        SET_GPR_U64(ctx, 22, s6);
        SET_GPR_U64(ctx, 23, s7);
        SET_GPR_U64(ctx, 30, fp);
        SET_GPR_U64(ctx, 4, 0x50u);
        if (!guestCall(G_PASS, 0x201F78u, 0x2B8C58u, 0x2B8C60u)) // memdbAlloc(0x50): the packet's block
            return;
        // 0x2b8c60
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
        SET_GPR_U64(ctx, 4, 0u);
        if (!guestCall(G_PASS, 0x2B7CD0u, 0x2B8C64u, 0x2B8C6Cu)) // dlSetZB(0)
            return;
        // 0x2b8c6c
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t frame = GPR_U32(ctx, 29);
        const uint64_t prev = GPR_U64(ctx, 2);
        const uint64_t r1 = GPR_U64(ctx, 17), r2 = GPR_U64(ctx, 18), r3 = GPR_U64(ctx, 19), r4 = GPR_U64(ctx, 20);
        const uint64_t r5 = GPR_U64(ctx, 21), r6 = GPR_U64(ctx, 22), r7 = GPR_U64(ctx, 23), rfp = GPR_U64(ctx, 30);
        const uint64_t ptr = LW(gp - kListPointer); // where the original's three REFs would go
        const uint64_t t3 = addiu(LW(frame), 8);
        putRect(G_PASS, lo32(r1), lo32(addiu(r4, 8)), lo32(addiu(r5, 8)), lo32(addiu(sll32(r2, 4), 0x6C00)),
                lo32(addiu(sll32(r3, 4), 0x7900)), lo32(addiu(rfp, 8)), lo32(t3), lo32(addiu(sll32(r6, 4), 0x6C00)),
                lo32(addiu(sll32(r7, 4), 0x7900)));
        SET_GPR_U64(ctx, 10, 0x30u);                 // t2
        SET_GPR_U64(ctx, 8, ~0ull);                  // t0
        SET_GPR_U64(ctx, 9, addiu(rfp, 8));          // t1
        SET_GPR_U64(ctx, 11, t3);                    // t3
        SET_GPR_U64(ctx, 6, addiu(ptr, 0x20));       // a2
        SET_GPR_U64(ctx, 5, sext32(kRectTrailer));   // a1
        SET_GPR_U64(ctx, 7, 1u);                     // a3
        SET_GPR_U64(ctx, 2, addiu(ptr, 0x20));       // v0
        SET_GPR_U64(ctx, 3, addiu(ptr, 0x30));       // v1
        // The epilogue: saved registers back, the frame popped.
        SET_GPR_U64(ctx, 31, READ64(frame + 0xA0u));
        SET_GPR_U64(ctx, 30, READ64(frame + 0x90u));
        SET_GPR_U64(ctx, 23, READ64(frame + 0x80u));
        SET_GPR_U64(ctx, 22, READ64(frame + 0x70u));
        SET_GPR_U64(ctx, 21, READ64(frame + 0x60u));
        SET_GPR_U64(ctx, 20, READ64(frame + 0x50u));
        SET_GPR_U64(ctx, 19, READ64(frame + 0x40u));
        SET_GPR_U64(ctx, 18, READ64(frame + 0x30u));
        SET_GPR_U64(ctx, 17, READ64(frame + 0x20u));
        SET_GPR_U64(ctx, 16, READ64(frame + 0x10u));
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(frame + 0xB0u));
        SET_GPR_U64(ctx, 4, prev);
        nativeDlSetZB(G_PASS); // j dlSetZB: the previous mode back
    }

    // ---- dlTextureRectangleFloat (0x2b8df8)(u0, v0, u1, v1, rgba; x0, y0,
    // x1, y1 in f12-f15): the same packet, the corners x16 and converted.
    void nativeDlTextureRectangleFloat(G_ARGS)
    {
        if (keptList(G_PASS))
        {
            dlTextureRectangleFloat_0x2b8df8(G_PASS);
            return;
        }
        const uint32_t sp = GPR_U32(ctx, 29) - 0x90u;
        WRITE64(sp + 0x30u, GPR_U64(ctx, 19));
        WRITE64(sp + 0x50u, GPR_U64(ctx, 21));
        const uint64_t s3 = GPR_U64(ctx, 4);
        WRITE64(sp + 0x40u, GPR_U64(ctx, 20));
        const uint64_t s5 = GPR_U64(ctx, 7);
        WRITE64(sp + 0x20u, GPR_U64(ctx, 18));
        const uint64_t s4 = GPR_U64(ctx, 6);
        WRITE64(sp + 0x10u, GPR_U64(ctx, 17));
        const uint64_t s2 = GPR_U64(ctx, 5);
        SWC1(sp + 0x88u, ctx->f[23]);
        const uint64_t s1 = GPR_U64(ctx, 8);
        SWC1(sp + 0x80u, ctx->f[22]);
        ctx->f[23] = FPU_MOV_S(ctx->f[15]);
        SWC1(sp + 0x78u, ctx->f[21]);
        ctx->f[22] = FPU_MOV_S(ctx->f[14]);
        SWC1(sp + 0x70u, ctx->f[20]);
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        WRITE64(sp, GPR_U64(ctx, 16));
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        WRITE64(sp + 0x60u, GPR_U64(ctx, 31));
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(sp));
        SET_GPR_U64(ctx, 17, s1);
        SET_GPR_U64(ctx, 18, s2);
        SET_GPR_U64(ctx, 19, s3);
        SET_GPR_U64(ctx, 20, s4);
        SET_GPR_U64(ctx, 21, s5);
        SET_GPR_U64(ctx, 4, 0x50u);
        if (!guestCall(G_PASS, 0x201F78u, 0x2B8E4Cu, 0x2B8E54u))
            return;
        // 0x2b8e54
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
        SET_GPR_U64(ctx, 4, 0u);
        if (!guestCall(G_PASS, 0x2B7CD0u, 0x2B8E58u, 0x2B8E60u))
            return;
        // 0x2b8e60
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t frame = GPR_U32(ctx, 29);
        const uint64_t prev = GPR_U64(ctx, 2);
        const uint64_t r1 = GPR_U64(ctx, 17), r2 = GPR_U64(ctx, 18), r3 = GPR_U64(ctx, 19);
        const uint64_t r4 = GPR_U64(ctx, 20), r5 = GPR_U64(ctx, 21);
        const uint64_t ptr = LW(gp - kListPointer);
        SET_GPR_S32(ctx, 1, static_cast<int32_t>(0x41800000u));
        { uint32_t bits = 0x41800000u; std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
        uint32_t f1;
        std::memcpy(&f1, &ctx->f[1], sizeof(f1));
        const uint64_t x0 = addiu(sext32(f1), 0x6C00);
        { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
        std::memcpy(&f1, &ctx->f[1], sizeof(f1));
        const uint64_t y0 = addiu(sext32(f1), 0x7900);
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        uint32_t f0;
        std::memcpy(&f0, &ctx->f[0], sizeof(f0));
        const uint64_t x1 = addiu(sext32(f0), 0x6C00);
        { int32_t tmp = FPU_CVT_W_S(ctx->f[23]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        std::memcpy(&f0, &ctx->f[0], sizeof(f0));
        const uint64_t y1 = addiu(sext32(f0), 0x7900);
        putRect(G_PASS, lo32(r1), lo32(addiu(r3, 8)), lo32(addiu(r2, 8)), lo32(x0), lo32(y0), lo32(addiu(r4, 8)),
                lo32(addiu(r5, 8)), lo32(x1), lo32(y1));
        SET_GPR_U64(ctx, 11, 0x30u);                     // t3
        SET_GPR_U64(ctx, 9, addiu(ptr, 0x10));           // t1: the packet REF's slot
        SET_GPR_U64(ctx, 10, ~0ull);                     // t2
        SET_GPR_U64(ctx, 12, addiu(ptr, 0x20));          // t4: the trailer REF's slot
        SET_GPR_U64(ctx, 7, x1);                         // a3
        SET_GPR_U64(ctx, 8, y1);                         // t0
        SET_GPR_U64(ctx, 6, sext32(kRectTrailer));       // a2
        SET_GPR_U64(ctx, 5, 1u);                         // a1
        SET_GPR_U64(ctx, 2, addiu(ptr, 0x20));           // v0
        SET_GPR_U64(ctx, 3, addiu(ptr, 0x30));           // v1
        SET_GPR_U64(ctx, 31, READ64(frame + 0x60u));
        SET_GPR_U64(ctx, 21, READ64(frame + 0x50u));
        SET_GPR_U64(ctx, 20, READ64(frame + 0x40u));
        SET_GPR_U64(ctx, 19, READ64(frame + 0x30u));
        SET_GPR_U64(ctx, 18, READ64(frame + 0x20u));
        SET_GPR_U64(ctx, 17, READ64(frame + 0x10u));
        SET_GPR_U64(ctx, 16, READ64(frame));
        ctx->f[23] = LWC1(frame + 0x88u);
        ctx->f[22] = LWC1(frame + 0x80u);
        ctx->f[21] = LWC1(frame + 0x78u);
        ctx->f[20] = LWC1(frame + 0x70u);
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(frame + 0x90u));
        SET_GPR_U64(ctx, 4, prev);
        nativeDlSetZB(G_PASS);
    }

    // ---- dlFillRectangle (0x2b8420)(x0, y0, x1, y1, rgba): an untextured
    // SPRITE (IIP, ABE) by A+D: RGBAQ (Q 1.0), XYZ2, XYZ2.
    void nativeDlFillRectangle(G_ARGS)
    {
        if (keptList(G_PASS))
        {
            dlFillRectangle_0x2b8420(G_PASS);
            return;
        }
        const uint32_t sp = GPR_U32(ctx, 29) - 0x60u;
        WRITE64(sp, GPR_U64(ctx, 16));
        WRITE64(sp + 0x40u, GPR_U64(ctx, 20));
        const uint64_t s0 = GPR_U64(ctx, 4);
        WRITE64(sp + 0x30u, GPR_U64(ctx, 19));
        const uint64_t s4 = GPR_U64(ctx, 7);
        WRITE64(sp + 0x20u, GPR_U64(ctx, 18));
        const uint64_t s3 = GPR_U64(ctx, 6);
        WRITE64(sp + 0x10u, GPR_U64(ctx, 17));
        const uint64_t s2 = GPR_U64(ctx, 8);
        const uint64_t s1 = GPR_U64(ctx, 5);
        WRITE64(sp + 0x50u, GPR_U64(ctx, 31));
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(sp));
        SET_GPR_U64(ctx, 16, s0);
        SET_GPR_U64(ctx, 17, s1);
        SET_GPR_U64(ctx, 18, s2);
        SET_GPR_U64(ctx, 19, s3);
        SET_GPR_U64(ctx, 20, s4);
        SET_GPR_U64(ctx, 4, 0x50u);
        if (!guestCall(G_PASS, 0x201F78u, 0x2B8450u, 0x2B8458u))
            return;
        // 0x2b8458
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t frame = GPR_U32(ctx, 29);
        const uint64_t packet = GPR_U64(ctx, 2);
        const uint64_t r0 = GPR_U64(ctx, 16), r1 = GPR_U64(ctx, 17), r2 = GPR_U64(ctx, 18);
        const uint64_t r3 = GPR_U64(ctx, 19), r4 = GPR_U64(ctx, 20);
        const uint64_t ptr = LW(gp - kListPointer);
        const uint64_t mid = sll32(sra32(r2, 8) & 0xFFu, 16) | (sra32(r2, 8) & 0xFF00u);
        const uint32_t rgba = lo32(srl32(r2, 24) | sll32(r2, 24) | mid);
        const uint32_t xy0 = lo32((addiu(sll32(r0, 4), 0x6C00) & 0xFFFFu) | sll32(addiu(sll32(r1, 4), 0x7900), 16));
        const uint32_t xy1 = lo32((addiu(sll32(r3, 4), 0x6C10) & 0xFFFFu) | sll32(addiu(sll32(r4, 4), 0x7910), 16));
        uint32_t *w = putItem(G_PASS, itemWords(kFill));
        w[0] = kFill;
        w[1] = rgba;
        w[2] = xy0;
        w[3] = xy1;
        SET_GPR_U64(ctx, 31, READ64(frame + 0x50u));
        SET_GPR_U64(ctx, 20, READ64(frame + 0x40u));
        SET_GPR_U64(ctx, 19, READ64(frame + 0x30u));
        SET_GPR_U64(ctx, 18, READ64(frame + 0x20u));
        SET_GPR_U64(ctx, 17, READ64(frame + 0x10u));
        SET_GPR_U64(ctx, 16, READ64(frame));
        SET_GPR_U64(ctx, 2, addiu(packet, 0x48));
        SET_GPR_U64(ctx, 3, sext32(0x140007FCu));
        SET_GPR_U64(ctx, 4, addiu(ptr, 0x10));
        SET_GPR_U64(ctx, 5, ~0ull);
        SET_GPR_U64(ctx, 6, 5u);
        SET_GPR_U64(ctx, 7, sext32(0x11000000u));
        SET_GPR_U64(ctx, 8, ptr);
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(frame + 0x60u));
        returnToCaller(ctx);
    }

    // ---- dlFillRectangleFloat (0x2b85c8)(rgba; x0, y0, x1, y1 in f12-f15):
    // the same SPRITE by PACKED RGBAQ, XYZ2, XYZ2.
    void nativeDlFillRectangleFloat(G_ARGS)
    {
        if (keptList(G_PASS))
        {
            dlFillRectangleFloat_0x2b85c8(G_PASS);
            return;
        }
        const uint32_t sp = GPR_U32(ctx, 29) - 0x40u;
        WRITE64(sp, GPR_U64(ctx, 16));
        const uint64_t s0 = GPR_U64(ctx, 4);
        SWC1(sp + 0x38u, ctx->f[23]);
        SWC1(sp + 0x30u, ctx->f[22]);
        ctx->f[23] = FPU_MOV_S(ctx->f[15]);
        SWC1(sp + 0x28u, ctx->f[21]);
        ctx->f[22] = FPU_MOV_S(ctx->f[14]);
        SWC1(sp + 0x20u, ctx->f[20]);
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        WRITE64(sp + 0x10u, GPR_U64(ctx, 31));
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(sp));
        SET_GPR_U64(ctx, 16, s0);
        SET_GPR_U64(ctx, 4, 0x50u);
        if (!guestCall(G_PASS, 0x201F78u, 0x2B85F8u, 0x2B8600u))
            return;
        // 0x2b8600
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t frame = GPR_U32(ctx, 29);
        const uint64_t packet = GPR_U64(ctx, 2);
        const uint64_t r0 = GPR_U64(ctx, 16);
        const uint64_t ptr = LW(gp - kListPointer);
        SET_GPR_S32(ctx, 1, static_cast<int32_t>(0x41800000u));
        { uint32_t bits = 0x41800000u; std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
        uint32_t f1;
        std::memcpy(&f1, &ctx->f[1], sizeof(f1));
        const uint64_t x0 = addiu(sext32(f1), 0x6C00);
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
        std::memcpy(&f1, &ctx->f[1], sizeof(f1));
        const uint64_t y0 = addiu(sext32(f1), 0x7900);
        ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        uint32_t f0;
        std::memcpy(&f0, &ctx->f[0], sizeof(f0));
        const uint64_t x1 = addiu(sext32(f0), 0x6C00);
        { int32_t tmp = FPU_CVT_W_S(ctx->f[23]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        std::memcpy(&f0, &ctx->f[0], sizeof(f0));
        const uint64_t y1 = addiu(sext32(f0), 0x7900);
        uint32_t *w = putItem(G_PASS, itemWords(kFillF));
        w[0] = kFillF;
        w[1] = lo32(r0);
        w[2] = lo32(x0);
        w[3] = lo32(y0);
        w[4] = lo32(x1);
        w[5] = lo32(y1);
        SET_GPR_U64(ctx, 31, READ64(frame + 0x10u));
        SET_GPR_U64(ctx, 16, READ64(frame));
        ctx->f[23] = LWC1(frame + 0x38u);
        ctx->f[22] = LWC1(frame + 0x30u);
        ctx->f[21] = LWC1(frame + 0x28u);
        ctx->f[20] = LWC1(frame + 0x20u);
        SET_GPR_U64(ctx, 2, addiu(packet, 0x48));
        SET_GPR_U64(ctx, 3, x1);
        SET_GPR_U64(ctx, 4, y1);
        SET_GPR_U64(ctx, 5, 5u);
        SET_GPR_U64(ctx, 6, addiu(ptr, 0x10));
        SET_GPR_U64(ctx, 7, sext32(0x140007FCu));
        SET_GPR_U64(ctx, 8, ~0ull);
        SET_GPR_U64(ctx, 9, sext32(0x11000000u));
        SET_GPR_U64(ctx, 10, ptr);
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(frame + 0x40u));
        returnToCaller(ctx);
    }

    // ---- dlSetClip (0x2b8050)(x0, y0, x1, y1): SCISSOR_1 with the corners
    // clamped to the 640x224 field (the steps of ts_native_game.cpp's twin,
    // its packet and list writes made an item).
    void nativeDlSetClip(G_ARGS)
    {
        if (keptList(G_PASS))
        {
            dlSetClip_0x2b8050(G_PASS);
            return;
        }
        const uint32_t sp = GPR_U32(ctx, 29) - 0x50u;
        WRITE64(sp + 0x20u, GPR_U64(ctx, 18));
        uint64_t s2 = GPR_U64(ctx, 4);
        WRITE64(sp + 0x30u, GPR_U64(ctx, 19));
        WRITE64(sp + 0x10u, GPR_U64(ctx, 17));
        uint64_t s3 = GPR_U64(ctx, 5);
        WRITE64(sp, GPR_U64(ctx, 16));
        uint64_t s1 = GPR_U64(ctx, 7);
        uint64_t s0 = GPR_U64(ctx, 6);
        WRITE64(sp + 0x40u, GPR_U64(ctx, 31));
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(sp));
        SET_GPR_U64(ctx, 16, s0);
        SET_GPR_U64(ctx, 17, s1);
        SET_GPR_U64(ctx, 18, s2);
        SET_GPR_U64(ctx, 19, s3);
        SET_GPR_U64(ctx, 4, 0x30u);
        if (!guestCall(G_PASS, 0x201F78u, 0x2B8078u, 0x2B8080u))
            return;
        // 0x2b8080
        const uint32_t gp = GPR_U32(ctx, 28);
        s0 = GPR_U64(ctx, 16);
        s1 = GPR_U64(ctx, 17);
        s2 = GPR_U64(ctx, 18);
        s3 = GPR_U64(ctx, 19);
        uint64_t v0 = GPR_U64(ctx, 2);
        uint64_t a1;
        uint64_t a0 = 0x30u;
        uint64_t v1 = sext32(0x6C020000u);
        uint64_t a2 = 0x8001u;
        v1 |= 0x8000u;
        const uint64_t t0 = sext32(0x10000000u);
        const uint64_t a3 = LW(gp - kListPointer);
        a0 = slti(s0, 0x280);
        v1 = 0x27Fu;
        const uint64_t t1 = 0xEu;
        if (a0 == 0u)
        {
            s0 = v1;
            copyHigh(ctx, 16, 3);
        }
        v0 = addiu(v0, 4);
        a1 = ~0ull;
        v1 = slt(a1, s2);
        v0 = addiu(v0, 4);
        if (v1 == 0u)
        {
            s2 = 0u;
            zeroHigh(ctx, 18);
        }
        s0 = sll32(s0, 16);
        v0 = addiu(v0, 4);
        a0 = slti(s1, 0xE0);
        v1 = 0xDFu;
        v0 = addiu(v0, 4);
        if (a0 == 0u)
        {
            s1 = v1;
            copyHigh(ctx, 17, 3);
        }
        s2 |= s0;
        a1 = slt(a1, s3);
        v0 = addiu(v0, 4);
        if (a1 == 0u)
        {
            s3 = 0u;
            zeroHigh(ctx, 19);
        }
        s1 = sll32(s1, 16);
        v0 = addiu(v0, 4);
        s3 |= s1;
        a0 = 0x40u;
        v1 = sext32(0x14000000u);
        v0 = addiu(v0, 4);
        v1 |= 0x7FCu;
        a2 = addiu(a3, 0x10);
        v0 = addiu(v0, 4);
        a0 = 3u;
        a1 = sext32(0x11000000u);
        v0 = addiu(v0, 4);
        v0 = addiu(v0, 4);
        uint32_t *w = putItem(G_PASS, itemWords(kClip));
        w[0] = kClip;
        w[1] = lo32(s2);
        w[2] = lo32(s3);
        const uint64_t ra = READ64(sp + 0x40u);
        s3 = READ64(sp + 0x30u);
        s2 = READ64(sp + 0x20u);
        s1 = READ64(sp + 0x10u);
        s0 = READ64(sp);
        SET_GPR_U64(ctx, 2, v0);
        SET_GPR_U64(ctx, 3, v1);
        SET_GPR_U64(ctx, 4, a0);
        SET_GPR_U64(ctx, 5, a1);
        SET_GPR_U64(ctx, 6, a2);
        SET_GPR_U64(ctx, 7, a3);
        SET_GPR_U64(ctx, 8, t0);
        SET_GPR_U64(ctx, 9, t1);
        SET_GPR_U64(ctx, 16, s0);
        SET_GPR_U64(ctx, 17, s1);
        SET_GPR_U64(ctx, 18, s2);
        SET_GPR_U64(ctx, 19, s3);
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(sp + 0x50u));
        SET_GPR_U64(ctx, 31, ra);
        ctx->pc = lo32(ra);
    }

#endif // !TS_NATIVE_2D_HOST_TEST

    // ---- The rebuilt VIF bytes
    std::vector<uint8_t> g_vif;

    void appendGuest(uint32_t addr, uint32_t bytes)
    {
        const uint32_t a = addr & 0x7FFFFFFFu;
        const size_t at = g_vif.size();
        g_vif.resize(at + bytes);
        std::memcpy(g_vif.data() + at, g_rdram + a, bytes);
    }

    void appendWords(const uint32_t *w, uint32_t count)
    {
        const size_t at = g_vif.size();
        g_vif.resize(at + count * 4u);
        std::memcpy(g_vif.data() + at, w, count * 4u);
    }

    void materializeItem(const uint32_t *item)
    {
        switch (item[0])
        {
        case kRef:
            appendGuest(item[1], item[2] * 16u);
            break;
        case kRect:
        {
            const uint32_t rgba = item[1];
            const uint32_t w[20] = {rgba >> 24,  (rgba >> 16) & 0xFFu, (rgba >> 8) & 0xFFu, rgba & 0xFFu,
                                    item[2],     item[3],              0u,                  0u,
                                    item[4],     item[5],              0xFFFFFFFFu,         0u,
                                    item[6],     item[7],              0u,                  0u,
                                    item[8],     item[9],              0xFFFFFFFFu,         0u};
            appendGuest(kRectHeader, 32u);
            appendWords(w, 20u);
            appendGuest(kRectTrailer, 16u);
            break;
        }
        case kFill:
        {
            const uint32_t w[20] = {0x6C048000u, 0x8003u,     0x10274000u, 0xEu,       0u,
                                    item[1],     0x3F800000u, 1u,          0u,         item[2],
                                    0xFFFFFFFFu, 5u,          0u,          item[3],    0xFFFFFFFFu,
                                    5u,          0u,          0x140007FCu, 0x11000000u, 0u};
            appendWords(w, 20u);
            break;
        }
        case kFillF:
        {
            const uint32_t rgba = item[1];
            const uint32_t w[20] = {0x6C048000u, 0x8001u,     0x30274000u, 0x551u,     0u,
                                    rgba >> 24,  (rgba >> 16) & 0xFFu, (rgba >> 8) & 0xFFu, rgba & 0xFFu, item[2],
                                    item[3],     0xFFFFFFFFu, 0u,          item[4],    item[5],
                                    0xFFFFFFFFu, 0u,          0x140007FCu, 0x11000000u, 0u};
            appendWords(w, 20u);
            break;
        }
        case kClip:
        {
            const uint32_t w[12] = {0x6C028000u, 0x8001u, 0x10000000u, 0xEu,        0u,          item[1],
                                    item[2],     0x40u,   0u,          0x140007FCu, 0x11000000u, 0u};
            appendWords(w, 12u);
            break;
        }
        default:
            break;
        }
    }

    // ---- The planned kicks and their token packet
    std::vector<uint8_t> g_kicks;
    std::vector<uint32_t> g_kickEnds;
    uint32_t g_kickSequence = 0;
    bool g_kicksPending = false;
    uint8_t g_token[16];
    constexpr uint64_t kTokenMagic = 0x58324E5354564E58ull; // REGS: 'XNVTSN2X'

    // Rows an UNPACK of the batch writes, [first, first + count): within
    // VU1 memory without wrapping (the native kick's own bound), clear of
    // the program's constants and of the native program's watched rows.
    bool rowsFree(uint32_t first, uint32_t count)
    {
        if (first < 123u || first + count >= 1024u)
            return false;
        const Vu1WatchedRows &w = g_vu1WatchedRows;
        for (uint32_t i = 0; i < w.ranges; ++i)
            if (first < w.end[i] && w.first[i] < first + count)
                return false;
        return true;
    }
}

const uint8_t *xboxNative2dWalk(uint32_t addr)
{
    if (!xboxNative2dIsTag(addr))
        return nullptr;
    const uint32_t sequence = addr & kXboxNative2dIndexMask;
    Batch &b = g_batches[sequence % kBatches];
    if (!batchLive(b, sequence))
    {
        ++g_stats.lost;
        return nullptr;
    }
    b.walked = true; // no more items join it
    ++g_stats.walked;
    return reinterpret_cast<const uint8_t *>(b.marker);
}

bool xboxNative2dMaterialize(uint32_t sequence, const uint8_t *&bytes, uint32_t &size)
{
    sequence &= kXboxNative2dIndexMask;
    const Batch &b = g_batches[sequence % kBatches];
    if (!g_rdram || !batchLive(b, sequence))
    {
        ++g_stats.lost;
        return false;
    }
    g_vif.clear();
    const uint32_t *item = &g_ring[b.start & (kRingWords - 1u)];
    for (uint32_t at = 0; at < b.words;)
    {
        materializeItem(item + at);
        at += itemWords(item[at]);
    }
    bytes = g_vif.data();
    size = uint32_t(g_vif.size());
    return true;
}

bool xboxNative2dPlan(const uint8_t *bytes, uint32_t size, uint32_t cycle, uint32_t mode, XboxNative2dVifState &st)
{
    uint32_t cl = cycle & 0xFFu, wl = (cycle >> 8) & 0xFFu;
    if (!cl)
        cl = 1u;
    if (!wl)
        wl = 1u;
    if (cl != wl || (mode & 3u) != 0u)
    {
        xboxNative2dCountDecline(XboxNative2dDeclineCycle);
        return false;
    }
    g_kicks.clear();
    g_kickEnds.clear();
    g_kicksPending = false;
    XboxNative2dVifState s = st;
    s.mscals = 0;
    uint32_t at = 0, unpackAt = 0, unpackQw = 0;
    bool unpacked = false;
    auto word = [&](uint32_t offset) {
        uint32_t w;
        std::memcpy(&w, bytes + offset, 4);
        return w;
    };
    while (at + 4u <= size)
    {
        const uint32_t cmd = word(at);
        at += 4u;
        const uint32_t opcode = (cmd >> 24) & 0x7Fu, imm = cmd & 0xFFFFu, num = (cmd >> 16) & 0xFFu;
        if (cmd & 0x80000000u) // the I bit: STAT.INT
        {
            xboxNative2dCountDecline(XboxNative2dDeclineParse);
            return false;
        }
        if (opcode == 0x00u || opcode == 0x10u || opcode == 0x11u || opcode == 0x13u) // NOP, FLUSHE, FLUSH, FLUSHA
            continue;
        if (opcode == 0x6Cu && (imm & 0x83FFu) == 0x8000u && !unpacked)
        {
            // UNPACK V4-32 to TOPS+0, unmasked.
            const uint32_t qw = num ? num : 256u;
            if (qw * 16u > size - at)
            {
                xboxNative2dCountDecline(XboxNative2dDeclineParse);
                return false;
            }
            if (!rowsFree(s.tops & 0x3FFu, qw))
            {
                xboxNative2dCountDecline(XboxNative2dDeclineRows);
                return false;
            }
            unpacked = true;
            unpackAt = at;
            unpackQw = qw;
            at += qw * 16u;
            continue;
        }
        if (opcode == 0x14u && imm == 0x7FCu && unpacked)
        {
            // MSCAL 0x3FE0: the kick program XGKICKs the packet at TOP, up to
            // its EOP (complete PACKED tags within the unpacked rows).
            uint32_t qwords = 0;
            bool eop = false;
            for (int tags = 0; tags < 256 && !eop; ++tags)
            {
                if (qwords >= unpackQw)
                    break;
                uint64_t lo;
                std::memcpy(&lo, bytes + unpackAt + qwords * 16u, 8);
                const uint32_t nloop = uint32_t(lo) & 0x7FFFu, flg = uint32_t(lo >> 58) & 3u;
                const uint32_t nreg = (uint32_t(lo >> 60) & 15u) ? uint32_t(lo >> 60) & 15u : 16u;
                if (flg != 0u)
                    break;
                qwords += 1u + nloop * nreg;
                eop = (lo & 0x8000u) != 0u;
            }
            if (!eop || qwords > unpackQw)
            {
                xboxNative2dCountDecline(XboxNative2dDeclineParse);
                return false;
            }
            g_kicks.insert(g_kicks.end(), bytes + unpackAt, bytes + unpackAt + qwords * 16u);
            g_kickEnds.push_back(uint32_t(g_kicks.size()));
            // The decoder's MSCAL steps.
            s.top = s.tops & 0x3FFu;
            s.itop = s.itops & 0x3FFu;
            s.tops = (s.dbf ? s.base : s.base + s.ofst) & 0x3FFu;
            s.dbf = !s.dbf;
            ++s.mscals;
            unpacked = false;
            continue;
        }
        xboxNative2dCountDecline(XboxNative2dDeclineParse);
        return false;
    }
    if (unpacked || at != size)
    {
        xboxNative2dCountDecline(XboxNative2dDeclineParse);
        return false;
    }
    st = s;
    ++g_kickSequence;
    g_kicksPending = true;
    const uint64_t lo = 0x8000u | (uint64_t(g_kickSequence & 0x3FFFFFFFu) << 16) | (1ull << 60);
    std::memcpy(g_token, &lo, 8);
    std::memcpy(g_token + 8, &kTokenMagic, 8);
    ++g_stats.fast;
    g_stats.kicks += g_kickEnds.size();
    return true;
}

const uint8_t *xboxNative2dTokenPacket()
{
    return g_token;
}

bool xboxNative2dIsTokenPacket(const uint8_t *data)
{
    uint64_t hi;
    std::memcpy(&hi, data + 8, 8);
    return hi == kTokenMagic;
}

bool xboxNative2dTakeKicks(const uint8_t *token, const uint8_t *&bytes, const uint32_t *&ends, uint32_t &count)
{
    uint64_t lo;
    std::memcpy(&lo, token, 8);
    if (!g_kicksPending || uint32_t(lo >> 16) != (g_kickSequence & 0x3FFFFFFFu))
        return false;
    g_kicksPending = false;
    bytes = g_kicks.data();
    ends = g_kickEnds.data();
    count = uint32_t(g_kickEnds.size());
    return true;
}

void xboxNative2dCountDecline(uint32_t reason)
{
    if (reason < 6u)
        ++g_stats.declined[reason];
    ++g_stats.nested;
}

void xboxNative2dCountGsFallback()
{
    ++g_stats.gsFallback;
}

void xboxNative2dGetStats(XboxNative2dStats &out)
{
    out = g_stats;
}

#if !TS_NATIVE_2D_HOST_TEST
void xboxNative2dInstall(PS2Runtime &runtime)
{
    g_rdram = runtime.memory().getRDRAM();
    g_vif.reserve(16u * 1024u);
    g_kicks.reserve(16u * 1024u);
    g_kickEnds.reserve(1024u);
    runtime.replaceFunction(0x2B7CD0u, &nativeDlSetZB);
    runtime.replaceFunction(0x2B7DF0u, &nativeDlSetDitherMatrix);
    runtime.replaceFunction(0x2B8C08u, &nativeDlTextureRectangle);
    runtime.replaceFunction(0x2B8DF8u, &nativeDlTextureRectangleFloat);
    runtime.replaceFunction(0x2B8420u, &nativeDlFillRectangle);
    runtime.replaceFunction(0x2B85C8u, &nativeDlFillRectangleFloat);
    runtime.replaceFunction(0x2B8050u, &nativeDlSetClip);
}
#endif

#if TS_NATIVE_2D_HOST_TEST
// test/native_2d_test.cpp: batches made of given items (as the natives'
// putItem lays them out), over the test's guest memory.
void xboxNative2dTestSetRam(uint8_t *rdram)
{
    g_rdram = rdram;
}

uint32_t xboxNative2dTestBatch(const uint32_t *items, uint32_t words)
{
    if ((g_written & (kRingWords - 1u)) + words > kRingWords)
        g_written += kRingWords - (g_written & (kRingWords - 1u));
    const uint32_t sequence = g_sequence++ & kXboxNative2dIndexMask;
    Batch &b = g_batches[sequence % kBatches];
    b.sequence = sequence;
    b.start = g_written;
    b.words = words;
    b.walked = true;
    std::memcpy(&g_ring[g_written & (kRingWords - 1u)], items, words * 4u);
    g_written += words;
    return sequence;
}
#endif

#else

void xboxNative2dGetStats(XboxNative2dStats &out)
{
    out = XboxNative2dStats{};
}

#endif
