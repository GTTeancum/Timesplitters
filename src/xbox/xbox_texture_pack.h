#pragma once
// Prebuilt textures for the Xbox renderer (gs_nv2a_backend.cpp).
//
// D:\textures.xtp is built at build time from the user's own game data: the
// disc's textures at full size, compressed offline at high quality, each
// with its mip chain. The renderer still decodes a texture from GS memory
// on a cache miss, as before; it then looks the decoded texels' key up here
// (the PC port's texture key, runtime/gs/gs_texture_hash.h) and draws the
// pack's copy instead of encoding its own. Textures the pack does not have
// (render targets, palettes made at run time) keep the runtime path.
//
// File layout (little-endian):
//   header, 32 bytes: char magic[4] "XTP1"; u32 version (1); u32 hashVersion
//     (gs_texture_hash::kVersion); u32 count; u32 indexOffset;
//     u32 dataOffset; u32 reserved[2]
//   index at indexOffset: count Entry records, sorted by key
//   data: each entry's levels back to back from level 0, each entry
//     128-byte aligned. DXT levels in plain block order (the NV2A reads
//     compressed textures block by block, not swizzled), the others in the
//     NV2A's swizzled order, level by level.
//
// Entries are read on first use into one pool of GPU memory and stay there
// until the room is needed for another. The reads run on a thread of their
// own: the renderer draws on the game thread, and a DVD read (a seek, tens
// of milliseconds, behind the game's music streaming from the same drive)
// must not stop the game. Until an entry has arrived the renderer draws
// the texture from the runtime path.
#include <atomic>
#include <cstdint>
#include <vector>

class XboxTexturePack
{
public:
    enum Format : uint8_t
    {
        kDxt1 = 0,
        kDxt5 = 1,
        kA8R8G8B8 = 2, // swizzled
        kA1R5G5B5 = 3, // swizzled
    };
    enum Flags : uint8_t
    {
        kUnitAlpha = 1,   // stored alpha 255 is GS 0x80 (stored = min(2a, 255))
        kBinaryAlpha = 2, // alpha only 0 or opaque (alpha-tested textures)
        kReplacement = 4, // from an HD replacement
    };

    // One index record, exactly as on the disc.
    struct Entry
    {
        uint64_t key;
        uint32_t offset;        // file offset of level 0
        uint32_t size;          // bytes of all levels
        uint16_t width, height; // level 0, powers of two
        uint8_t format;         // Format
        uint8_t levels;         // mip levels, at least 1
        uint8_t flags;          // Flags
        uint8_t reserved;
    };
    static_assert(sizeof(Entry) == 24, "index record layout");

    // What acquire found.
    enum Status : uint8_t
    {
        kReady,       // in the pool: draw it
        kLoading,     // asked for (now or before), not read yet: try again next frame
        kBusy,        // the loader's queue is full: try again next frame
        kNoRoom,      // the pool has no room that may be taken now: try again later
        kUnavailable, // never (no pool, or the disc could not read it)
    };

    struct Stats
    {
        uint32_t loads = 0, evictions = 0, failures = 0;
        uint32_t busy = 0;              // requests turned away by a full queue
        uint32_t mostVictims = 0;       // the most entries evicted for one load
        uint32_t usedBytes = 0;         // pool bytes holding entries (or reserved for reads)
        uint64_t loadMicroseconds = 0;  // the loader's reads, in total
        uint32_t longestMicroseconds = 0; // the longest single read
    };

    XboxTexturePack() = default;
    ~XboxTexturePack();
    XboxTexturePack(const XboxTexturePack &) = delete;
    XboxTexturePack &operator=(const XboxTexturePack &) = delete;

    // Reads and checks the header and the index. False when the file is
    // missing or is not a pack this reader understands (the reason is
    // logged); the pack then stays unused.
    bool open(const char *path);
    // GPU memory for resident entries, 128-byte aligned, owned by the
    // caller (who must close() before freeing it), and starts the loader.
    // False when the loader cannot start: the pack stays unused.
    bool attachPool(uint8_t *pool, uint32_t bytes);
    // Stops the loader (after its current read) and closes the file.
    void close();
    bool enabled() const { return pool_ != nullptr; }
    uint32_t count() const { return uint32_t(index_.size()); }

    // The entry with this key, or -1.
    int find(uint64_t key) const;
    const Entry &entry(int index) const { return index_[size_t(index)]; }

    // The entry's levels in the pool (status kReady), else null. An entry
    // that is not there is queued for the loader when there is room for it:
    // the least costly run of neighbouring entries not used in this frame or
    // the last is evicted (the renderer waits for the last frame's end
    // before it starts a frame, so the GPU is done with them), long-idle
    // entries before recent ones, a few at most. Their indices are added to
    // `evicted`, and whatever still refers to them must be dropped. Never
    // waits for the disc.
    uint8_t *acquire(int index, uint32_t frame, std::vector<int> &evicted, Status &status);
    // A resident entry was used in this frame.
    void touch(int index, uint32_t frame) { slots_[size_t(index)].lastFrame = frame; }
    // Takes in the loader's finished reads (acquire does too).
    void poll();

    const Stats &stats() const { return stats_; }

private:
    static constexpr uint32_t kAlign = 128;
    static constexpr uint32_t kNoOffset = 0xFFFFFFFFu;
    // Requests the loader may hold. It reads one at a time, so a read of
    // the game's own (music) waits behind one texture at most.
    static constexpr uint32_t kQueue = 8;
    enum SlotState : uint8_t
    {
        kAbsent,
        kQueued, // room taken, the loader has it
        kResident,
        kUnreadable,
    };
    struct Slot
    {
        uint32_t offset = 0; // in the pool, while queued or resident
        uint32_t lastFrame = 0;
        uint8_t state = kAbsent;
    };
    struct Range
    {
        uint32_t offset, bytes;
    };
    struct Block // the pool in address order, for eviction
    {
        uint32_t offset, bytes;
        int entry; // -1: free
    };
    enum RequestState : uint32_t
    {
        kPending,
        kRead,
        kFailed,
    };
    struct Request
    {
        int index = -1;
        uint8_t *dest = nullptr;
        uint32_t fileOffset = 0, bytes = 0;
        uint32_t microseconds = 0;
        std::atomic<uint32_t> state{kPending};
    };

    static uint32_t poolBytesOf(const Entry &e) { return (e.size + kAlign - 1u) & ~(kAlign - 1u); }
    bool readAt(uint32_t offset, void *out, uint32_t bytes);
    uint32_t allocate(uint32_t bytes);
    void release(uint32_t offset, uint32_t bytes);
    void evict(int index);
    uint32_t makeRoom(uint32_t bytes, uint32_t frame, std::vector<int> &evicted);
    static unsigned long __stdcall loaderMain(void *self); // LPTHREAD_START_ROUTINE
    void runLoader();

    void *file_ = nullptr; // HANDLE
    std::vector<Entry> index_;
    std::vector<Slot> slots_;      // per entry
    std::vector<int> resident_;    // entries in the pool (queued or resident)
    std::vector<Range> free_;      // free pool ranges, by offset
    std::vector<Block> blocks_;    // makeRoom's scratch
    uint8_t *pool_ = nullptr;
    uint32_t poolBytes_ = 0;
    int64_t ticksPerSecond_ = 0;
    // A request this size or larger found no room in this frame: the same
    // search would fail again until the frame changes.
    uint32_t noRoomFrame_ = 0, noRoomBytes_ = 0;
    // The loader: the game thread fills requests_[issued_ % kQueue] and
    // counts the semaphore up; the loader reads them in order and marks
    // each done; the game thread takes them back in order (collected_).
    Request requests_[kQueue];
    uint32_t issued_ = 0, collected_ = 0;
    void *thread_ = nullptr, *work_ = nullptr; // HANDLEs
    std::atomic<bool> stop_{false};
    Stats stats_;
};
