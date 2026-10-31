#pragma once
// One decoder invocation may lend the immediately following fast native
// draw its exact live UNPACK sources. Every original VU write still runs.
#include <cstdint>

#ifndef TS_VIF_SOURCE
#define TS_VIF_SOURCE 0
#endif

struct GSXfCursor;
struct GSXfVertex;
class XboxVifSourceCallScope;
class XboxVifSourceNativeScope;
// Revocation only: usable by legacy VIF re-entry without lending a source
// or allocating another decoder record on its stack.
void xboxVifSourceInvalidate();

class XboxVifSourceScope
{
public:
    XboxVifSourceScope(const uint8_t *rdram, const uint8_t *vu, bool enabled);
    ~XboxVifSourceScope();
    XboxVifSourceScope(const XboxVifSourceScope &) = delete;
    XboxVifSourceScope &operator=(const XboxVifSourceScope &) = delete;

    void beginPrefix(const uint8_t *rdram, const uint8_t *vu);
    void noteUnpack(uint32_t dest, const uint8_t *source, uint32_t count,
                    uint32_t format, uint32_t cl, uint32_t wl);
    void finishPrefix(const uint8_t *terminal, uint32_t code, uint32_t top);
    void command(const uint8_t *source, uint32_t code, uint32_t top);

    // A complete source array, valid only during the active native call.
    // Every requested row must name this prefix's same last writer.
    bool array(const uint8_t *vu, uint32_t row, uint32_t count, bool color,
               const uint8_t *&source, uint32_t &stride) const;
    bool active(const uint8_t *vu) const;

private:
    friend class XboxVifSourceCallScope;
    friend class XboxVifSourceNativeScope;
    enum Phase : uint8_t { Empty, Collecting, Armed, Command, Permit, Native, Spent };
    struct Upload
    {
        uint32_t offset;
        uint16_t dest, count;
        uint8_t format, cl, wl, reserved;
    };
    static constexpr uint32_t kUploads = 64u, kRows = 1024u;
    const uint8_t *rdram_ = nullptr, *vu_ = nullptr, *terminal_ = nullptr;
    uint32_t terminalCode_ = 0, top_ = 0, serial_ = 0, count_ = 0;
    bool held_ = false;
    Phase phase_ = Empty;
    // beginPrefix initializes rows; each nonzero row ID refers only to an
    // upload already assigned by noteUnpack. Candidate misses initialize
    // neither array, and cannot expose them while phase is Empty.
    Upload uploads_[kUploads];
    uint16_t rows_[kRows];
    bool valid() const;
};

// The permit encloses only fast.native(...), never fast.interpret or the
// arbitrary MSCAL callback. A native entry must claim it once and exactly.
class XboxVifSourceCallScope
{
public:
    XboxVifSourceCallScope(XboxVifSourceScope &source, uint32_t pc, uint32_t top);
    ~XboxVifSourceCallScope();
    XboxVifSourceCallScope(const XboxVifSourceCallScope &) = delete;
    XboxVifSourceCallScope &operator=(const XboxVifSourceCallScope &) = delete;
private:
    XboxVifSourceScope *source_ = nullptr;
};

class XboxVifSourceNativeScope
{
public:
    XboxVifSourceNativeScope(uint32_t pc, const uint8_t *rdram, const uint8_t *vu,
                             uint32_t bytes, uint32_t top, bool worker);
    ~XboxVifSourceNativeScope();
    XboxVifSourceNativeScope(const XboxVifSourceNativeScope &) = delete;
    XboxVifSourceNativeScope &operator=(const XboxVifSourceNativeScope &) = delete;
private:
    XboxVifSourceScope *source_ = nullptr;
};

struct XboxVifSourceStripSpan { uint32_t vi = 0, count = 0; };
inline constexpr uint32_t kXboxVifSourceMaxStrips = 24u;

bool xboxVifSourceTryDecodeStrip(uint32_t kind, const uint8_t *vu, uint32_t vi,
                                uint32_t count, GSXfVertex *out);
bool xboxVifSourceTryWriteJoinedStrip(uint32_t kind, GSXfCursor &cursor,
                                     const uint8_t *vu, uint32_t vi, uint32_t count);
bool xboxVifSourceTryWriteGroup(uint32_t kind, GSXfCursor &cursor, const uint8_t *vu,
                               const XboxVifSourceStripSpan *strips, uint32_t count);

struct XboxVifSourceStats
{
    uint64_t prefixes = 0, armed = 0, claims = 0, rejected = 0;
    uint64_t groups = 0, strips = 0, vertices = 0;
    uint32_t busy = 0;
};
bool xboxVifSourceGetStats(XboxVifSourceStats &out);
