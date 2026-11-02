#pragma once
// Native FX route for the 0x3FE0 kicks (make TS_NATIVE_FX=1, Xbox only).
//
// The game's screen-space drawing - HUD, text glyphs, fills, particles,
// bullets, weather, decals, glows, the depth-mode and dither blocks between
// them - reaches the GS as small VIF packets: an UNPACK of a GIF packet into
// VU1 memory, then MSCAL 0x3FE0, whose program XGKICKs it. On the original
// route each one is copied into VU1 memory, the native VU1 program finds its
// length again and hands it to the GIF arbiter, the GS front end decodes it
// register by register and every primitive goes to the renderer on its own
// (a texture lookup, material key and vertex reservation each). About 640 of
// them a frame at four players.
//
// Here the VIF decoder (tools/patch_native_fx.py vif) recognises the pair as
// it reads it - an unmasked V4-32 UNPACK to TOPS+0, nothing but NOP/FLUSH
// after its data, then MSCAL 0x3FE0 - and takes the kick without the VU1
// copy, the program call or the arbiter: the GIF bytes stay where they lie
// in the stream's pieces (a list of spans, no copy), and the VIF1 and VU1
// registers are stepped as the MSCAL and the native kick leave them.
// Consecutive kicks collect; before the next command that can reach the GS
// or VU1 programs (MSCAL of any other program, DIRECT, MSKPATH3, markers,
// the end of the decoder call) they go to the GS in one call
// (tools/patch_native_fx.py gs): one direct GIF decoder (xbox_gif_direct.h)
// over all of their bytes, stores that only set a value deferred, so a
// string of glyphs, a burst of particles or a fill and its text is one run
// for the renderer (one texture/material lookup and one reservation per run
// instead of per primitive).
//
// Left on the original route (decoded and kicked as before):
//  - a kick whose packet holds an IMAGE tag (the GS's upload check) or an
//    A+D write of SIGNAL, FINISH or LABEL (the EE observes them: dlFinish,
//    dlLabel), whose packet would reach past the rows it unpacked, or whose
//    rows wrap or touch the native program's constant or watched rows
//    (0-122 and the transform constants: they are read by other programs);
//  - an UNPACK or MSCAL with the I bit, STCYCL not 1:1, STMOD not 0;
//  - no native VU1 program, the VIF1 worker, GIF packets queued in the
//    arbiter, a model capture running (its hooks see every command);
//  - a running GS debug history (the GS then takes the same bytes the
//    original way, in order).
// What the rest of the frame reads is what the original leaves: VIF1 TOP,
// ITOP, TOPS, DBF, CODE, NUM; VU1 TOP/ITOP and the D/T state; the GS's
// registers, vertex queue, draw counters and display-copy source (the
// direct decoder's own guarantees). Not written: the VU1 rows the skipped
// UNPACKs would fill, which only the kick itself reads (the rows other
// programs read are excluded above).
#include <cstdint>
#include <cstring>

#ifndef TS_NATIVE_FX
#define TS_NATIVE_FX 0
#endif

#if TS_NATIVE_FX
#include "runtime/ps2_vu1_watch.h"
#include "xbox_gif_direct.h"

class GS;

// The kicks taken since the last flush: their GIF bytes in stream order, as
// spans of the decoder's pieces (valid until the decoder call returns, which
// flushes them first).
struct XboxNativeFxSpan
{
    const uint8_t *data;
    uint32_t bytes;
};
struct XboxNativeFxPending
{
    static constexpr uint32_t kSpans = 64u; // a glyph is two (its tag and its packet): 32 glyphs a GS call
    XboxNativeFxSpan spans[kSpans];
    uint32_t count = 0;
    GS *gs = nullptr; // the GS the kicks go to (the native program's)
};
extern XboxNativeFxPending g_xboxNativeFx;

struct XboxNativeFxStats
{
    uint64_t kicks = 0, flushes = 0, spans = 0; // kicks taken, GS calls, spans handed over
    uint64_t gsOriginal = 0;                     // flushes the GS took the original way (debug history, busy)
    // UNPACK V4-32 to TOPS+0 left to the original route: no kick after it,
    // the program/arbiter/worker/capture state, rows, the packet (IMAGE,
    // past its rows).
    uint64_t notKick = 0, state = 0, rows = 0, packet = 0;
};
extern XboxNativeFxStats g_xboxNativeFxStats;

// The 16-byte PATH1 packet a flush hands the GS (a PACKED tag of no loops:
// a GS without the hook would write nothing for it).
const uint8_t *xboxNativeFxToken();
inline bool xboxNativeFxIsToken(const uint8_t *data, uint32_t size)
{
    return size == 16u && data == xboxNativeFxToken();
}
// The pending kicks to the GS (decoder side), then none pending.
void xboxNativeFxFlush();
// The run buffer when the direct GIF decoder's is not built (TS_GIF_DIRECT=0).
GSVertex *xboxNativeFxRunBuffer(uint32_t &capacity);

// VIF commands that neither reach the GS nor run a VU1 program: pending
// kicks can wait across them.
inline bool xboxNativeFxQuiet(uint32_t opcode)
{
    switch (opcode)
    {
    case 0x00u: // NOP
    case 0x01u: // STCYCL
    case 0x02u: // OFFSET
    case 0x03u: // BASE
    case 0x04u: // ITOP
    case 0x05u: // STMOD
    case 0x07u: // MARK
    case 0x10u: // FLUSHE
    case 0x11u: // FLUSH
    case 0x13u: // FLUSHA
    case 0x20u: // STMASK
    case 0x30u: // STROW
    case 0x31u: // STCOL
        return true;
    case 0x7Eu: // the native model marker (xbox_model_cache.h): it draws a model
        return false;
    default:
        return (opcode & 0x60u) == 0x60u; // UNPACK
    }
}

// Rows [first, first + count) of an UNPACK the route may leave unwritten:
// within VU1 memory without wrapping (the native kick's own bound), clear of
// the program's constants and of the native program's watched rows, and
// short of TOPS+216, where a model draw reads its render-state block
// (vu1_native_ts.cpp runDraw): a kick that long would leave that row's
// content to a later draw.
inline bool xboxNativeFxRowsFree(uint32_t first, uint32_t count)
{
    if (first < 123u || count > 216u || first + count > 1024u)
        return false;
    const Vu1WatchedRows &w = g_vu1WatchedRows;
    for (uint32_t i = 0; i < w.ranges; ++i)
        if (first < w.end[i] && w.first[i] < first + count)
            return false;
    return true;
}

// The VIFcodes after an UNPACK's data (`in` at its data, `dataBytes` of
// it): NOP/FLUSH/FLUSHE/FLUSHA, then MSCAL 0x3FE0, none with the I bit, all
// in this decoder call. Returns how many (the MSCAL last), 0 if not so.
template <class Reader>
uint32_t xboxNativeFxKickCodes(Reader in, uint32_t dataBytes)
{
    if (in.left() < dataBytes + 4u)
        return 0u;
    in.skip(dataBytes);
    for (uint32_t n = 1; n <= 8u; ++n)
    {
        uint32_t code;
        if (!in.word(code) || (code & 0x80000000u) != 0u)
            return 0u;
        const uint32_t opcode = (code >> 24) & 0x7Fu;
        if (opcode == 0x14u)
            return (code & 0xFFFFu) == 0x7FCu ? n : 0u;
        if (opcode != 0x00u && opcode != 0x10u && opcode != 0x11u && opcode != 0x13u)
            return 0u;
    }
    return 0u;
}

// The packet the native kick (vu1_native_ts.cpp kickPacket) sends from the
// `rows` qwords the UNPACK writes (`in` at its data): its length in qwords,
// tags up to EOP or 256 of them. 0: it reaches past those rows (it would
// read rows written before), holds an IMAGE tag, or writes SIGNAL, FINISH
// or LABEL by A+D (the EE observes those: they keep their exact place).
template <class Reader>
uint32_t xboxNativeFxPacketQwords(Reader in, uint32_t rows)
{
    uint32_t qwords = 0;
    for (int tags = 0; tags < 256; ++tags)
    {
        if (qwords >= rows)
            return 0u;
        uint64_t tag[2];
        in.read(tag, 16u);
        const uint64_t lo = tag[0], regs = tag[1];
        const uint32_t nloop = uint32_t(lo) & 0x7FFFu, flg = uint32_t(lo >> 58) & 3u;
        const uint32_t nreg = (uint32_t(lo >> 60) & 15u) ? uint32_t(lo >> 60) & 15u : 16u;
        if (flg >= 2u)
            return 0u;
        const uint32_t body = flg == 0u ? nloop * nreg : (nloop * nreg + 1u) / 2u;
        if (body >= rows - qwords) // the tag's qword and its body past the rows
            return 0u;
        qwords += 1u + body;
        bool addressed = false; // a PACKED A+D descriptor (REGLIST names only registers 0-15)
        if (flg == 0u)
            for (uint32_t r = 0; r < nreg; ++r)
                addressed = addressed || ((regs >> (4u * r)) & 15u) == 0xEu;
        if (addressed)
        {
            for (uint32_t k = 0; k < body; ++k)
            {
                uint8_t qword[16];
                in.read(qword, 16u);
                if (((regs >> (4u * (k % nreg))) & 15u) == 0xEu && (qword[8] & 0xE0u) == 0x60u)
                    return 0u; // SIGNAL 0x60, FINISH 0x61, LABEL 0x62 (and the undefined above)
            }
        }
        else if (!(lo & 0x8000u))
            in.skip(body * 16u);
        if (lo & 0x8000u)
            return qwords;
    }
    return qwords;
}

// The kick's packet bytes (`packetBytes` of the UNPACK's `dataBytes` at
// `in`) recorded as spans where they lie; `in` moves past all of the data.
template <class Reader>
void xboxNativeFxTake(Reader &in, uint32_t packetBytes, uint32_t dataBytes)
{
    XboxNativeFxPending &p = g_xboxNativeFx;
    if (p.count + 4u > XboxNativeFxPending::kSpans)
        xboxNativeFxFlush();
    for (uint32_t n = packetBytes; n != 0u;)
    {
        const uint32_t avail = in.avail();
        const uint32_t chunk = avail < n ? avail : n;
        const uint8_t *here = in.here();
        if (p.count == XboxNativeFxPending::kSpans) // (a packet over many pieces: the GS stream carries the rest)
            xboxNativeFxFlush();
        p.spans[p.count++] = {here, chunk};
        in.advance(chunk);
        n -= chunk;
    }
    in.skip(dataBytes - packetBytes);
    ++g_xboxNativeFxStats.kicks;
}

#ifndef TS_FAST_DECODE
#define TS_FAST_DECODE 1
#endif
#if TS_FAST_DECODE
// TS_FAST_DECODE: the three functions above in one place where the bytes
// lie. Nearly every kick's packet is wholly inside one piece (a glyph's
// 5-qword packet is a REF payload) and its VIFcodes are in that piece or
// the next one (the glyph's trailer REF): those are read by pointer, each
// byte once, instead of through copies of the reader and memcpy reads; the
// rest go to the functions above. Same results, same order of checks.
namespace xbox_native_fx_detail
{
    inline uint32_t load32(const uint8_t *p)
    {
        uint32_t v;
        std::memcpy(&v, p, 4);
        return v;
    }
    // The VIFcodes from `p` (`room` bytes readable there), as
    // xboxNativeFxKickCodes reads them; ~0u: they run past `room`.
    inline uint32_t kickCodesAt(const uint8_t *p, uint32_t room)
    {
        for (uint32_t n = 1; n <= 8u; ++n, p += 4)
        {
            if (room < 4u * n)
                return ~0u;
            const uint32_t code = load32(p);
            if ((code & 0x80000000u) != 0u)
                return 0u;
            const uint32_t opcode = (code >> 24) & 0x7Fu;
            if (opcode == 0x14u)
                return (code & 0xFFFFu) == 0x7FCu ? n : 0u;
            if (opcode != 0x00u && opcode != 0x10u && opcode != 0x11u && opcode != 0x13u)
                return 0u;
        }
        return 0u;
    }
}

// Whether n bytes at a and b are the same, a word at a time (the C
// library's memcmp goes byte by byte).
inline bool xboxSameBytes(const uint8_t *a, const uint8_t *b, uint32_t n)
{
    using xbox_native_fx_detail::load32;
    uint32_t i = 0;
    for (; i + 4u <= n; i += 4u)
        if (load32(a + i) != load32(b + i))
            return false;
    for (; i < n; ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

// xboxNativeFxKickCodes. The reader's own piece, or the next one when the
// data ends this one, holds the codes: read there (Reader::peek), else as
// before. `in` is not moved (avail may step past a used-up piece, as any
// read from it would).
template <class Reader>
uint32_t xboxNativeFxKickCodesFast(Reader &in, uint32_t dataBytes)
{
    if (in.left() < dataBytes + 4u)
        return 0u;
    uint32_t room = 0;
    const uint8_t *codes = in.peek(dataBytes, room);
    if (codes)
    {
        const uint32_t n = xbox_native_fx_detail::kickCodesAt(codes, room);
        if (n != ~0u)
            return n;
    }
    return xboxNativeFxKickCodes(in, dataBytes);
}

// xboxNativeFxPacketQwords on the `rows` qwords at `p` (all readable there).
inline uint32_t xboxNativeFxPacketQwordsAt(const uint8_t *p, uint32_t rows)
{
    using xbox_native_fx_detail::load32;
    uint32_t qwords = 0;
    for (int tags = 0; tags < 256; ++tags)
    {
        if (qwords >= rows)
            return 0u;
        const uint8_t *tag = p + qwords * 16u;
        // The tag's fields from its 32-bit words (no 64-bit shifts).
        const uint32_t w0 = load32(tag), w1 = load32(tag + 4);
        const uint32_t regsLo = load32(tag + 8), regsHi = load32(tag + 12);
        const uint32_t nloop = w0 & 0x7FFFu, flg = (w1 >> 26) & 3u;
        const uint32_t nreg = (w1 >> 28) ? (w1 >> 28) : 16u;
        if (flg >= 2u)
            return 0u;
        const uint32_t body = flg == 0u ? nloop * nreg : (nloop * nreg + 1u) / 2u;
        if (body >= rows - qwords)
            return 0u;
        if (flg == 0u)
        {
            // A PACKED A+D descriptor: its writes' register bytes.
            uint32_t ad = 0; // bit r: descriptor r is A+D
            for (uint32_t r = 0; r < nreg; ++r)
                if ((((r < 8u ? regsLo >> (4u * r) : regsHi >> (4u * (r - 8u)))) & 15u) == 0xEu)
                    ad |= 1u << r;
            if (ad != 0u)
            {
                const uint8_t *q = tag + 16u;
                for (uint32_t k = 0, r = 0; k < body; ++k, q += 16u)
                {
                    if (((ad >> r) & 1u) != 0u && (q[8] & 0xE0u) == 0x60u)
                        return 0u; // SIGNAL, FINISH, LABEL (and the undefined above)
                    if (++r == nreg)
                        r = 0;
                }
            }
        }
        qwords += 1u + body;
        if (w0 & 0x8000u)
            return qwords;
    }
    return qwords;
}

// xboxNativeFxPacketQwords: by pointer when the rows are in one piece.
template <class Reader>
uint32_t xboxNativeFxPacketQwordsFast(Reader &in, uint32_t rows)
{
    if (in.avail() >= rows * 16u)
        return xboxNativeFxPacketQwordsAt(in.here(), rows);
    return xboxNativeFxPacketQwords(in, rows);
}

// xboxNativeFxTake: one span when the data is in one piece.
template <class Reader>
void xboxNativeFxTakeFast(Reader &in, uint32_t packetBytes, uint32_t dataBytes)
{
    if (in.avail() < dataBytes)
    {
        xboxNativeFxTake(in, packetBytes, dataBytes);
        return;
    }
    XboxNativeFxPending &p = g_xboxNativeFx;
    if (p.count + 4u > XboxNativeFxPending::kSpans)
        xboxNativeFxFlush();
    p.spans[p.count++] = {in.here(), packetBytes};
    in.advance(dataBytes);
    ++g_xboxNativeFxStats.kicks;
}
#endif

// GS side: the pending kicks through one direct GIF decoder on PATH1's
// stream, stores that only set a value deferred (xbox_gif_direct.h's
// deferStores). The caller holds the GS lock. False: declined before any
// effect (the GS takes the spans the original way).
template <class Gs, class Stream>
bool xboxNativeFxRun(Gs &a, Stream &st)
{
#if defined(AGRESSIVE_LOGS) && AGRESSIVE_LOGS
    (void)a;
    (void)st;
    return false;
#else
    const XboxNativeFxPending &p = g_xboxNativeFx;
    if (!a.backend() || !a.paused())
        return false;
#if TS_GIF_DIRECT
    xbox_gif_direct::Scratch &s = xbox_gif_direct::scratch();
    if (s.busy.test_and_set(std::memory_order_acquire))
        return false;
    GSVertex *buffer = s.vertices;
    const uint32_t capacity = xbox_gif_direct::kRunPrims;
#else
    uint32_t capacity = 0;
    GSVertex *buffer = xboxNativeFxRunBuffer(capacity);
#endif
    xbox_gif_direct::Decoder<Gs> dec{a, buffer};
    dec.capacity = capacity;
    dec.wide = hostSettings().widescreen.load(std::memory_order_relaxed) && !gsSplitScreen();
    dec.defer = true;
    for (uint32_t i = 0; i < p.count; ++i)
        xbox_gif_direct::decodeInto(dec, a, st, p.spans[i].data, p.spans[i].bytes, false);
    dec.flush();
#if TS_GIF_DIRECT
    s.busy.clear(std::memory_order_release);
#endif
    return true;
#endif
}

#endif // TS_NATIVE_FX
