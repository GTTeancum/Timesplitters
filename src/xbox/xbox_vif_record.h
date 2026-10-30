#pragma once
// Decoded VIF prefixes inside exact live partGfx side descriptors. The
// original decoder still executes MSCAL, including every native fallback.
#include "xbox_draw_record.h"
#include <cstdint>

struct VIFRegisters;

// Reject commands that cannot start an admitted prefix before touching the
// descriptor caches. Reads no payload, advances no reader and changes no
// state; a later control command may still restore a supported mode/cycle.
inline bool xboxVifRecordMayStart(uint32_t code, uint32_t cycle, uint32_t mode)
{
    const uint32_t opcode = (code >> 24u) & 0x7Fu;
    if ((opcode & 0x60u) == 0x60u)
    {
        uint32_t cl = cycle & 0xFFu, wl = (cycle >> 8u) & 0xFFu;
        if (!cl) cl = 1u;
        if (!wl) wl = 1u;
        const uint32_t format = opcode & 0xFu;
        // All standard widths share the admitted mode/cycle semantics.
        // The other VL=3 encodings retain the decoder's legacy fallback.
        const bool standardFormat = (format & 3u) != 3u || format == 0xFu;
        return !(opcode & 0x10u) && !(mode & 3u) && cl >= wl && standardFormat;
    }
    switch (opcode)
    {
    case 0x00u: case 0x01u: case 0x02u: case 0x03u: case 0x04u: case 0x05u:
    case 0x07u: case 0x10u: case 0x11u: case 0x13u: case 0x20u: case 0x30u: case 0x31u:
        return true;
    default: return false;
    }
}

// The matcher advances only a COPY of the original segmented reader. Each
// source span must be contiguous in that live reader and match its address,
// so accepted prefixes preserve split accounting and background provenance.
using XboxVifRecordMatch = bool (*)(void *user, const uint8_t *source, uint32_t bytes);
// The production observer notes watched VU rows and BG source provenance.
// It must not change VIF registers, payload bytes or the reader.
using XboxVifRecordObserve = void (*)(void *user, uint32_t dest, const uint8_t *source,
                                     uint32_t vectors, uint32_t format,
                                     uint32_t cl, uint32_t wl, uint32_t mode);

// Admit a nonempty prefix with at least one UNPACK, ending just BEFORE an
// MSCAL/MSCALF. No GS/VU-program callback runs here. Complete structural,
// register-mode and live-reader admission precedes every register/VU write.
// On success the caller skips consumedBytes in its ORIGINAL reader and
// continues its existing loop, which executes the untouched MSCAL branch.
// On failure guest state and the original reader are untouched; output
// counts are zero. Source payloads and STROW/STCOL/STMASK values stay live.
bool xboxVifRecordTryPrefix(const XboxDrawRecordChain &chain, const uint8_t *rdram,
                            const uint8_t *firstData, VIFRegisters &registers,
                            uint8_t *vuData, XboxVifRecordMatch match,
                            XboxVifRecordObserve observe, void *user,
                            uint32_t &consumedBytes, uint32_t &vectors,
                            uint32_t &commands);

struct XboxVifRecordStats
{
    uint64_t attempts = 0, hits = 0, built = 0, rejected = 0;
    uint64_t prefixes = 0, commands = 0, vectors = 0, bytes = 0;
    uint32_t busy = 0;
};
bool xboxVifRecordGetStats(XboxVifRecordStats &out);
