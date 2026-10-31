#pragma once
// One decoder invocation may lend the immediately following fast native
// draw its exact live UNPACK sources. Final VU state remains materialized.
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

// Borrowed only within the owning synchronous native call. No view may
// escape that scope. The format and extension flag describe source bytes,
// not a copy of the expanded VU row.
struct XboxVifSourceArray
{
    const uint8_t *data = nullptr;
    uint32_t stride = 0, format = 0;
    bool zeroExtend = false;
};

class XboxVifSourceScope
{
public:
    XboxVifSourceScope(const uint8_t *rdram, const uint8_t *vu, bool enabled);
    ~XboxVifSourceScope();
    XboxVifSourceScope(const XboxVifSourceScope &) = delete;
    XboxVifSourceScope &operator=(const XboxVifSourceScope &) = delete;

    void beginPrefix(const uint8_t *rdram, const uint8_t *vu);
    void noteUnpack(uint32_t dest, const uint8_t *source, uint32_t count,
                    uint32_t format, uint32_t cl, uint32_t wl, bool zeroExtend = false);
    void finishPrefix(const uint8_t *terminal, uint32_t code, uint32_t top);
    void command(const uint8_t *source, uint32_t code, uint32_t top);

    // A complete source array, valid only during the active native call.
    // Every requested row must name this prefix's same last writer.
    bool array(const uint8_t *vu, uint32_t row, uint32_t count, bool color,
               const uint8_t *&source, uint32_t &stride) const;
    // Bone selection reads only lane zero. Unlike floating-point vectors,
    // that lane may use any standard mode-0 UNPACK width (including V4-5).
    bool boneArray(const uint8_t *vu, uint32_t row, uint32_t count,
                   XboxVifSourceArray &view) const;
    bool active(const uint8_t *vu) const;
    bool active(const uint8_t *vu, uint32_t kind) const;

private:
    friend class XboxVifSourceCallScope;
    friend class XboxVifSourceNativeScope;
    friend bool xboxVifSourceTryReadRow(const uint8_t *, uint32_t, void *);
    enum Phase : uint8_t { Empty, Collecting, Armed, Command, Permit, Native, Spent };
    struct Upload
    {
        uint32_t offset;
        uint16_t dest, count;
        uint8_t format, cl, wl, zeroExtend;
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
    bool lookup(const uint8_t *vu, uint32_t row, uint32_t count,
                XboxVifSourceArray &view) const;
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

// A single complete row for native loadV/loadI, only during the claimed
// synchronous draw. Standard 32/16/8-bit and V4-5 uploads are expanded with
// their recorded sign/zero-extension rule. Scalar uploads broadcast; V2/V3
// keep untouched upper lanes from the materialized VU image. Wrapped,
// skipped and unbound rows retain the original reader.
// out addresses 16 writable bytes. False leaves them untouched. No borrowed
// pointer escapes. Diagnostic native readers deliberately do not use this.
bool xboxVifSourceTryReadRow(const uint8_t *vu, uint32_t row, void *out);

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
    uint64_t groups = 0, strips = 0, vertices = 0, readRows = 0;
    uint32_t busy = 0;
};
bool xboxVifSourceGetStats(XboxVifSourceStats &out);
