// partGfx list tokens (make TS_NATIVE_MODELS=1, Xbox only; see
// xbox_model_cache.h).
//
// partGfx builds each model's piece of the display list from REF tags: a
// prologue before the model's CALL (static VIF headers, the matrices, and
// when lit the light headers and blocks), and on the REF routes a run of
// REFs per batch of the model's arrays. The patched partGfx writes one QWC-0
// REF in place of each such sequence: its ADDR field names a record here
// that lists the sequence's (address, QWC) pairs, and the DMA walker appends
// the same payloads in the same order when it reaches the token. The tags'
// upper halves (TTE) are left out but the token's own: partGfx never writes
// them, so they are the list's NOPs.
//
// Records are variable-length runs of pairs in one ring, contiguous for the
// walker (a run that would wrap is moved to the ring's start). Each closed
// record gets the next sequence number, which the token carries; a token
// whose record was overwritten (by the ring or the index coming round)
// expands to nothing and is counted.
//
// TS_NATIVE_REPLAY: a token whose record is a model prologue (only the
// static headers below, each UNPACK header followed by its data) is not
// expanded. The walker appends one 16-byte marker piece in its place
// (xboxPrologueNative), and the decoder, reaching the marker at the same
// stream position, runs the prologue's commands itself (xboxPrologueDecode):
// each UNPACK header's STCYCL and UNPACK as register writes and four rows
// copied from the data's guest address into VU1 memory (with the watched-row
// note the decoder makes), each MSCAL header's MSCAL as the decoder runs it
// (the register steps, then the native constant program, its interpreter
// fallback or the callback, through the decoder's own XboxModelVif::mscal).
// The data and the headers are read at the decode, where the decoder would
// read the payloads; a header no longer holding its static commands, a VIF
// MODE other than 0 (the UNPACKs would add ROW) or an open model capture
// (whose hooks must see the commands) decodes the payloads from guest memory
// instead. Every VU1 row, VIF1 register (CYCLE, CODE, NUM, TOP, ITOP, TOPS,
// DBF) and program effect is what decoding the payloads leaves: nothing
// later code reads differs.
#include "xbox_model_cache.h"

#if TS_NATIVE_MODELS

#include <cstring>
#if TS_NATIVE_REPLAY
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1_watch.h"
#endif

namespace
{
    // The static headers (partGfx: lui 0x36 plus these offsets).
    constexpr uint32_t kHeaderMatrixA = 0x358FC0u, kHeaderMatrixB = 0x358FF0u;
    constexpr uint32_t kHeaderLight0 = 0x358F40u, kHeaderLight1 = 0x358F90u;
    constexpr uint32_t kHeaderLight2 = 0x358F70u, kHeaderLight3 = 0x358F80u;

    // Records stay until the ring comes round: several frames of lists (about
    // 1,200 models a frame at four players, 3 to 21 pairs a prologue and 12
    // to 14 a batch), so a list walked a frame late still finds its records.
    constexpr uint32_t kPairs = 1u << 15;  // 256 KB: 128 KB lost records in busy frames
    constexpr uint32_t kRecords = 1u << 13; // divides 2^24: the index survives the sequence's wrap
    // A run longer than this closes at its next batch (partGfx then opens
    // another token after it); one that reaches kPairs / 2 is dropped.
    constexpr uint32_t kRunLimit = 4096u;
    struct Record
    {
        uint32_t sequence, start, count;
    };
    XboxPrologueRef g_pairs[kPairs];
    Record g_records[kRecords];
    uint32_t g_written = 0; // pairs ever written (the ring position is this modulo kPairs)
    uint32_t g_open = 0;    // the open record's first pair (the same count)
    bool g_broken = false;  // the open record outgrew the ring
    uint32_t g_sequence = 0;
    XboxPrologueStats g_stats;
}

void xboxPrologueOpen()
{
    g_open = g_written;
    g_broken = false;
}

void xboxPrologueRef(uint32_t addr, uint32_t qwc)
{
    const uint32_t count = g_written - g_open;
    if (count >= kPairs / 2u)
    {
        g_broken = true;
        return;
    }
    uint32_t position = g_written & (kPairs - 1u);
    if (position == 0u && count != 0u)
    {
        // The record would wrap: its pairs so far move to the ring's start
        // (over the oldest records), so the walker reads it in one piece.
        std::memmove(&g_pairs[0], &g_pairs[g_open & (kPairs - 1u)], count * sizeof(XboxPrologueRef));
        g_open = g_written;
        g_written += count;
        position = count;
    }
    // As the walker reads the tag: ADDR bits 0-30, QWC bits 0-15.
    g_pairs[position].addr = addr & 0x7FFFFFFFu;
    g_pairs[position].qwc = qwc & 0xFFFFu;
    ++g_written;
}

bool xboxPrologueFull()
{
    return g_written - g_open >= kRunLimit;
}

uint32_t xboxPrologueClose()
{
    const uint32_t count = g_written - g_open;
    if (count == 0u && !g_broken)
        return 0u;
    const uint32_t sequence = g_sequence++ & kXboxPrologueIndexMask;
    Record &record = g_records[sequence % kRecords];
    record.sequence = g_broken ? ~0u : sequence; // a dropped record expands to nothing
    record.start = g_open;
    record.count = count;
    g_open = g_written;
    g_broken = false;
    ++g_stats.tokens;
    g_stats.refs += count;
    return kXboxPrologueTag | sequence;
}

uint32_t xboxPrologueRecord(uint32_t matrix, uint32_t lightA, uint32_t lightB)
{
    // The original tags' order (partGfx 0x261048-0x261180).
    xboxPrologueOpen();
    xboxPrologueRef(kHeaderMatrixA, 1u);
    xboxPrologueRef(matrix, 4u);
    xboxPrologueRef(kHeaderMatrixB, 1u);
    if (lightA != 0u)
    {
        xboxPrologueRef(kHeaderLight0, 1u);
        xboxPrologueRef(lightA, 4u);
        xboxPrologueRef(kHeaderLight1, 1u);
        xboxPrologueRef(kHeaderLight2, 1u);
        xboxPrologueRef(lightB, 4u);
        xboxPrologueRef(kHeaderLight3, 1u);
    }
    return xboxPrologueClose();
}

const XboxPrologueRef *xboxPrologueExpand(uint32_t addr, uint32_t &count)
{
    count = 0u;
    if ((addr & ~kXboxPrologueIndexMask) != kXboxPrologueTag)
        return nullptr;
    const uint32_t sequence = addr & kXboxPrologueIndexMask;
    const Record &record = g_records[sequence % kRecords];
    // Lost: the index entry was reused, or the ring has written past the
    // record's first pair since (it wrote them in order, so the rest too).
    if (record.sequence != sequence || g_written - record.start > kPairs)
    {
        ++g_stats.lost;
        return nullptr;
    }
    ++g_stats.expanded;
    count = record.count;
    return &g_pairs[record.start & (kPairs - 1u)];
}

void xboxPrologueGetStats(XboxPrologueStats &out)
{
    out = g_stats;
}

#if TS_NATIVE_REPLAY
namespace
{
    // The static headers at 0x358F40-0x358FF0 (the game's data section, as
    // the ELF holds them): UNPACK headers (NOP, NOP, STCYCL 4/4, UNPACK
    // V4-32 of four qwords to TOPS + row) and MSCAL headers (MSCAL, NOP,
    // NOP, FLUSH). partGfx sends each with QWC 1, an UNPACK header followed
    // by its four data qwords (matrix or light block).
    constexpr uint32_t kHeaderFirst = 0x358F40u, kHeaderCount = 12u;
    enum HeaderKind : uint8_t { HeaderUnpack = 1, HeaderMscal = 2 };
    struct Header
    {
        uint32_t words[4];
        uint8_t kind;
    };
    constexpr Header kHeaders[kHeaderCount] = {
        {{0u, 0u, 0x01000404u, 0x6c04801au}, HeaderUnpack}, // 358F40: TOPS + 26 (light directions)
        {{0u, 0u, 0x01000404u, 0x6c04801eu}, HeaderUnpack}, // 358F50: TOPS + 30
        {{0u, 0u, 0x01000404u, 0x6c048022u}, HeaderUnpack}, // 358F60: TOPS + 34
        {{0u, 0u, 0x01000404u, 0x6c048016u}, HeaderUnpack}, // 358F70: TOPS + 22 (light colours)
        {{0x1400075fu, 0u, 0u, 0x11000000u}, HeaderMscal},  // 358F80: MSCAL 0x3af8
        {{0x1400076au, 0u, 0u, 0x11000000u}, HeaderMscal},  // 358F90: MSCAL 0x3b50
        {{0x14000775u, 0u, 0u, 0x11000000u}, HeaderMscal},  // 358FA0: MSCAL 0x3ba8
        {{0x14000780u, 0u, 0u, 0x11000000u}, HeaderMscal},  // 358FB0: MSCAL 0x3c00
        {{0u, 0u, 0x01000404u, 0x6c048004u}, HeaderUnpack}, // 358FC0: TOPS + 4 (the model matrix)
        {{0u, 0u, 0x01000404u, 0x6c048008u}, HeaderUnpack}, // 358FD0: TOPS + 8
        {{0u, 0u, 0x01000404u, 0x6c04800cu}, HeaderUnpack}, // 358FE0: TOPS + 12
        {{0x140007a8u, 0u, 0u, 0x11000000u}, HeaderMscal},  // 358FF0: MSCAL 0x3d40
    };
    constexpr uint32_t kUnpackQwc = 4u; // (the UNPACKs' NUM: four V4-32 qwords)

    int headerIndex(uint32_t addr)
    {
        const uint32_t k = (addr - kHeaderFirst) >> 4;
        return (addr & 15u) == 0u && addr >= kHeaderFirst && k < kHeaderCount ? static_cast<int>(k) : -1;
    }

    // A data address as the walker maps it (main RAM and its uncached
    // mirrors; not the scratchpad): its offset in RAM.
    bool dataAddress(uint32_t addr, uint32_t bytes, uint32_t &phys)
    {
        if (ps2IsScratchpadAddress(addr))
            return false;
        if (addr < PS2_RAM_SIZE)
            phys = addr;
        else if (addr >= 0x20000000u && addr < 0x40000000u)
            phys = addr & PS2_RAM_MASK;
        else
            return false;
        return bytes <= PS2_RAM_SIZE - phys;
    }

    // The record of token `addr` while its pairs are intact (null: not a
    // token, or its record is gone).
    const Record *liveRecord(uint32_t sequence)
    {
        const Record &record = g_records[sequence % kRecords];
        if (record.sequence != sequence || g_written - record.start > kPairs)
            return nullptr;
        return &record;
    }

    // Marker pieces, each walk's until the ring comes round (the decoder
    // reads them where the walker left them; as the model cache's markers).
    constexpr uint32_t kMarkers = 4096u;
    uint32_t g_markers[kMarkers][4];
    uint32_t g_nextMarker = 0;

    using Piece = PS2Memory::Vif1Piece;

    // The payloads as the walker would have listed them, decoded by the
    // decoder itself (contiguous payloads joined into one piece).
    void decodePayloads(PS2Memory *memory, const XboxPrologueRef *pairs, uint32_t count)
    {
        Piece pieces[64];
        uint32_t n = 0, bytes = 0;
        const uint8_t *rdram = memory->getRDRAM();
        for (uint32_t i = 0; i < count; ++i)
        {
            uint32_t phys = 0;
            const uint32_t size = pairs[i].qwc * 16u;
            if (!dataAddress(pairs[i].addr, size, phys) || size == 0u)
                continue; // (xboxPrologueNative admitted none such)
            const uint8_t *p = rdram + phys;
            if (n && pieces[n - 1u].first + pieces[n - 1u].second == p)
                pieces[n - 1u].second += size;
            else if (n < 64u)
                pieces[n++] = Piece(p, size);
            else
                return;
            bytes += size;
        }
        if (n)
            memory->decodeVIF1Pieces(pieces, n, bytes, true);
    }
}

const uint8_t *xboxPrologueNative(uint32_t addr)
{
    if ((addr & ~kXboxPrologueIndexMask) != kXboxPrologueTag)
        return nullptr;
    const uint32_t sequence = addr & kXboxPrologueIndexMask;
    const Record *record = liveRecord(sequence);
    if (!record || record->count == 0u || record->count > 64u)
        return nullptr; // (expanded as before: counted lost, or nothing)
    const XboxPrologueRef *pairs = &g_pairs[record->start & (kPairs - 1u)];
    // Only the static headers, QWC 1 each, an UNPACK header's data next.
    bool wantData = false;
    for (uint32_t i = 0; i < record->count; ++i)
    {
        const XboxPrologueRef &p = pairs[i];
        if (wantData)
        {
            uint32_t phys;
            if (p.qwc != kUnpackQwc || !dataAddress(p.addr, kUnpackQwc * 16u, phys))
                return nullptr;
            wantData = false;
            continue;
        }
        const int h = headerIndex(p.addr);
        if (h < 0 || p.qwc != 1u)
            return nullptr; // a REF loop's batch (or something else): expanded
        wantData = kHeaders[h].kind == HeaderUnpack;
    }
    if (wantData)
        return nullptr;
    uint32_t *w = g_markers[g_nextMarker++ & (kMarkers - 1u)];
    w[0] = (kXboxModelMarkerOpcode << 24) | XboxModelPrologue;
    w[1] = sequence;
    w[2] = kXboxModelMagic;
    w[3] = record->start;
    ++g_stats.native;
    return reinterpret_cast<const uint8_t *>(w);
}

void xboxPrologueDecode(const uint32_t words[4], uint8_t *vuData, VIFRegisters &regs, PS2Memory *memory,
                        const XboxModelVif &vif)
{
    const Record *record = liveRecord(words[1] & kXboxPrologueIndexMask);
    if (!record || record->start != words[3] || !memory || !memory->getRDRAM())
    {
        // Overwritten since the walk (as a token found lost at the walk,
        // nothing is sent).
        ++g_stats.nativeLost;
        return;
    }
    const XboxPrologueRef *pairs = &g_pairs[record->start & (kPairs - 1u)];
    const uint32_t count = record->count;
    const uint8_t *rdram = memory->getRDRAM();
    // The headers must hold their static commands now (they are read here,
    // where the decoder reads the payloads); MODE 0 (no ROW added); no
    // capture open (its hooks see each command).
    bool native = vuData && (regs.mode & 3u) == 0u && !xboxModelCapturing();
    for (uint32_t i = 0; i < count && native; ++i)
    {
        const int h = headerIndex(pairs[i].addr);
        if (h < 0)
            continue; // data
        uint32_t live[4];
        std::memcpy(live, rdram + pairs[i].addr, 16);
        const uint32_t *want = kHeaders[h].words;
        native = live[0] == want[0] && live[1] == want[1] && live[2] == want[2] && live[3] == want[3];
        if (kHeaders[h].kind == HeaderUnpack)
            ++i; // its data
    }
    if (!native)
    {
        ++g_stats.nativeInline;
        decodePayloads(memory, pairs, count);
        return;
    }
    ++g_stats.nativeDecoded;
    for (uint32_t i = 0; i < count; ++i)
    {
        const Header &h = kHeaders[headerIndex(pairs[i].addr)];
        if (h.kind == HeaderUnpack)
        {
            // NOP, NOP, STCYCL (CL = WL = 4), then UNPACK V4-32: four rows
            // from TOPS + its address, each wrapping at 1024 (the decoder's
            // consecutive-row copy), noted as the decoder notes an UNPACK.
            regs.cycle = h.words[2] & 0xFFFFu;
            const uint32_t unpack = h.words[3];
            regs.code = unpack;
            regs.num = (unpack >> 16) & 0xFFu;
            const uint32_t vuAddr = ((unpack & 0x3FFu) + (regs.tops & 0x3FFu)) & 0x3FFu;
            if (g_vu1WatchedRows.ranges != 0u)
                g_vu1WatchedRows.note(vuAddr, kUnpackQwc);
            uint32_t phys = 0;
            dataAddress(pairs[i + 1u].addr, kUnpackQwc * 16u, phys); // (admitted by xboxPrologueNative)
            const uint8_t *src = rdram + phys;
            for (uint32_t r = 0; r < kUnpackQwc; ++r)
                std::memcpy(vuData + ((vuAddr + r) & 0x3FFu) * 16u, src + r * 16u, 16);
            ++i; // its data
            continue;
        }
        // MSCAL: the decoder's register steps, then its run of the program
        // (CODE holds the MSCAL meanwhile); NOP, NOP, FLUSH (nothing to wait
        // for: the decoder runs everything in order) leave CODE at FLUSH.
        const uint32_t mscal = h.words[0];
        const uint32_t runTop = regs.tops & 0x3FFu, runItop = regs.itops & 0x3FFu;
        regs.code = mscal;
        regs.num = (mscal >> 16) & 0xFFu;
        regs.top = runTop;
        regs.itop = runItop;
        regs.tops = (regs.stat & (1u << 7)) ? (regs.base & 0x3FFu) : ((regs.base + regs.ofst) & 0x3FFu);
        regs.stat ^= 1u << 7; // DBF
        vif.mscal(memory, (mscal & 0xFFFFu) * 8u, runTop, runItop, false);
        regs.code = h.words[3];
        regs.num = (h.words[3] >> 16) & 0xFFu;
    }
}
#endif

#endif
