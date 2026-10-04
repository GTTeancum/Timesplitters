// Prebuilt texture pack reader and pool. See xbox_texture_pack.h.
#include "xbox_texture_pack.h"

#include "runtime/gs/gs_texture_hash.h"

#define NOMINMAX
#include <windows.h>

#include <algorithm>
#include <cstring>
#include <iostream>

namespace
{
    struct Header
    {
        char magic[4];
        uint32_t version, hashVersion, count, indexOffset, dataOffset, reserved[2];
    };
    static_assert(sizeof(Header) == 32, "header layout");

    // Far above any disc (2,303 textures); a corrupt count fails here
    // instead of asking for gigabytes.
    constexpr uint32_t kMaxEntries = 65536u;

    // Eviction. Entries used in this frame or the last are never taken (the
    // GPU may still read them, and the next frame draws them again). Of the
    // rest, those idle for kLongIdle frames or more are taken first: an
    // entry drawn a few frames ago (one the view has just left, or one drawn
    // every other frame) is the likeliest to be wanted back, and reading it
    // again costs a disc read. A load that would take more than kMaxVictims
    // entries is refused: the texture keeps the runtime path for a while.
    constexpr uint32_t kLongIdle = 30u;
    constexpr uint32_t kRecentCost = 8u; // one recent victim counts as this many idle ones
    constexpr uint32_t kMaxVictims = 8u;

    // The loader's stack: a read goes down through the file system and the
    // drive's driver on it. (0 would be the main thread's 256 KB.)
    constexpr SIZE_T kLoaderStack = 64u * 1024u;

    bool powerOfTwo(uint32_t v) { return v != 0u && (v & (v - 1u)) == 0u; }

    // Bytes of an entry's levels as the NV2A reads them: DXT in 4x4 blocks
    // (a level narrower than 4 still takes whole blocks), the others a
    // texel at a time. Zero for a format this reader does not know.
    uint64_t levelBytes(const XboxTexturePack::Entry &e)
    {
        uint64_t total = 0;
        uint32_t w = e.width, h = e.height;
        for (uint32_t level = 0; level < e.levels; ++level)
        {
            switch (e.format)
            {
            case XboxTexturePack::kDxt1: total += uint64_t((w + 3u) / 4u) * ((h + 3u) / 4u) * 8u; break;
            case XboxTexturePack::kDxt5: total += uint64_t((w + 3u) / 4u) * ((h + 3u) / 4u) * 16u; break;
            case XboxTexturePack::kA8R8G8B8: total += uint64_t(w) * h * 4u; break;
            case XboxTexturePack::kA1R5G5B5: total += uint64_t(w) * h * 2u; break;
            default: return 0;
            }
            w = std::max(w / 2u, 1u);
            h = std::max(h / 2u, 1u);
        }
        return total;
    }

    uint32_t fullChain(uint32_t w, uint32_t h)
    {
        uint32_t levels = 1;
        while ((1u << (levels - 1u)) < std::max(w, h))
            ++levels;
        return levels;
    }
}

XboxTexturePack::~XboxTexturePack() { close(); }

void XboxTexturePack::close()
{
    if (thread_)
    {
        // The loader looks at stop_ after every wake-up; a read in progress
        // ends first (the pool must outlive it).
        stop_.store(true);
        ReleaseSemaphore(static_cast<HANDLE>(work_), 1, nullptr);
        WaitForSingleObject(static_cast<HANDLE>(thread_), INFINITE);
        CloseHandle(static_cast<HANDLE>(thread_));
        thread_ = nullptr;
    }
    if (work_)
    {
        CloseHandle(static_cast<HANDLE>(work_));
        work_ = nullptr;
    }
    if (file_)
    {
        CloseHandle(static_cast<HANDLE>(file_));
        file_ = nullptr;
    }
    pool_ = nullptr;
}

bool XboxTexturePack::readAt(uint32_t offset, void *out, uint32_t bytes)
{
    HANDLE file = static_cast<HANDLE>(file_);
    if (SetFilePointer(file, LONG(offset), nullptr, FILE_BEGIN) == INVALID_SET_FILE_POINTER)
        return false;
    uint8_t *dst = static_cast<uint8_t *>(out);
    while (bytes)
    {
        DWORD got = 0;
        if (!ReadFile(file, dst, bytes, &got, nullptr) || got == 0)
            return false;
        dst += got;
        bytes -= got;
    }
    return true;
}

bool XboxTexturePack::open(const char *path)
{
    HANDLE file = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, FILE_FLAG_RANDOM_ACCESS, nullptr);
    if (file == INVALID_HANDLE_VALUE)
    {
        std::cout << "[TS:xbox] texture pack: no " << path << ", textures from the runtime path only" << std::endl;
        return false;
    }
    file_ = file;
    auto fail = [&](const char *why, long long detail = -1) {
        std::cout << "[TS:xbox] texture pack " << path << " not used: " << why;
        if (detail >= 0)
            std::cout << " " << detail;
        std::cout << std::endl;
        CloseHandle(file);
        file_ = nullptr;
        index_.clear();
        index_.shrink_to_fit();
        return false;
    };

    LARGE_INTEGER fileSize{};
    if (!GetFileSizeEx(file, &fileSize) || fileSize.QuadPart < LONGLONG(sizeof(Header)) || fileSize.QuadPart > 0x7FFFFFFF)
        return fail("bad file size", fileSize.QuadPart);
    const uint64_t size = uint64_t(fileSize.QuadPart);
    Header header{};
    if (!readAt(0, &header, sizeof(header)))
        return fail("header unreadable");
    if (std::memcmp(header.magic, "XTP1", 4) != 0)
        return fail("not a texture pack");
    if (header.version != 1u)
        return fail("format version", header.version);
    if (header.hashVersion != gs_texture_hash::kVersion)
        return fail("texture key version", header.hashVersion);
    if (header.count == 0u || header.count > kMaxEntries)
        return fail("entry count", header.count);
    if (header.indexOffset < sizeof(Header) || uint64_t(header.indexOffset) + uint64_t(header.count) * sizeof(Entry) > size)
        return fail("index outside the file", header.indexOffset);
    if (header.dataOffset > size)
        return fail("data outside the file", header.dataOffset);

    index_.resize(header.count);
    if (!readAt(header.indexOffset, index_.data(), header.count * uint32_t(sizeof(Entry))))
        return fail("index unreadable");
    // Every entry checked now: one the GPU would read wrongly (a size that
    // does not match its levels, an unaligned start) means the tool and
    // this reader disagree, and the whole pack is suspect.
    for (uint32_t i = 0; i < header.count; ++i)
    {
        const Entry &e = index_[i];
        if (i > 0 && e.key <= index_[i - 1u].key)
            return fail("index not sorted by key, or a key twice: entry", i);
        if (!powerOfTwo(e.width) || !powerOfTwo(e.height) || e.width > 4096u || e.height > 4096u)
            return fail("size not a power of two up to 4096: entry", i);
        if (e.levels == 0u || e.levels > std::min<uint32_t>(15u, fullChain(e.width, e.height)))
            return fail("mip level count: entry", i);
        const uint64_t bytes = levelBytes(e);
        if (bytes == 0u)
            return fail("unknown format: entry", i);
        if (e.size != bytes)
            return fail("size does not match the levels: entry", i);
        if (e.offset % kAlign != 0u || e.offset < header.dataOffset || uint64_t(e.offset) + e.size > size)
            return fail("data offset: entry", i);
    }
    slots_.assign(header.count, Slot{});
    LARGE_INTEGER frequency{};
    QueryPerformanceFrequency(&frequency);
    ticksPerSecond_ = frequency.QuadPart;
    std::cout << "[TS:xbox] texture pack: " << header.count << " textures in " << path << std::endl;
    return true;
}

bool XboxTexturePack::attachPool(uint8_t *pool, uint32_t bytes)
{
    if (!file_ || !pool || thread_)
        return false;
    work_ = CreateSemaphore(nullptr, 0, LONG(kQueue) + 1, nullptr); // + 1: close()'s wake-up
    if (work_)
        thread_ = CreateThread(nullptr, kLoaderStack, &loaderMain, this, 0, nullptr);
    if (!thread_)
    {
        std::cout << "[TS:xbox] texture pack: the loader did not start, not used" << std::endl;
        close();
        return false;
    }
    // Above the game: it wakes only when a read has finished, and handing
    // the drive its next request at once keeps the queue short.
    SetThreadPriority(static_cast<HANDLE>(thread_), THREAD_PRIORITY_ABOVE_NORMAL);
    pool_ = pool;
    poolBytes_ = bytes & ~(kAlign - 1u);
    free_.assign(1, Range{0u, poolBytes_});
    return true;
}

unsigned long __stdcall XboxTexturePack::loaderMain(void *self)
{
    static_cast<XboxTexturePack *>(self)->runLoader();
    return 0;
}

// The loader thread: the only user of the file once the index is read.
void XboxTexturePack::runLoader()
{
    uint32_t served = 0;
    for (;;)
    {
        // A failed wait must not spin: above the game's priority, on one
        // core, it would starve it. (nxdk's INFINITE is a 49-day time-out.)
        const DWORD wait = WaitForSingleObject(static_cast<HANDLE>(work_), INFINITE);
        if (wait != WAIT_OBJECT_0)
        {
            if (wait != WAIT_TIMEOUT)
                Sleep(10);
            continue;
        }
        if (stop_.load())
            return;
        Request &r = requests_[served % kQueue];
        ++served;
        LARGE_INTEGER start{}, end{};
        QueryPerformanceCounter(&start);
        const bool read = readAt(r.fileOffset, r.dest, r.bytes);
        QueryPerformanceCounter(&end);
        r.microseconds = ticksPerSecond_ > 0 ? uint32_t(uint64_t(end.QuadPart - start.QuadPart) * 1000000u / uint64_t(ticksPerSecond_)) : 0u;
        // Sequentially consistent: a locked exchange, which also drains the
        // write-combining buffers into the pool before the game thread can
        // see the read done and hand the texels to the GPU.
        r.state.store(read ? kRead : kFailed);
    }
}

void XboxTexturePack::poll()
{
    while (collected_ != issued_)
    {
        Request &r = requests_[collected_ % kQueue];
        const uint32_t state = r.state.load(std::memory_order_acquire);
        if (state == kPending)
            return; // the loader keeps the order
        ++collected_;
        Slot &slot = slots_[size_t(r.index)];
        const uint32_t bytes = poolBytesOf(index_[size_t(r.index)]);
        stats_.loadMicroseconds += r.microseconds;
        stats_.longestMicroseconds = std::max(stats_.longestMicroseconds, r.microseconds);
        if (state == kRead)
        {
            slot.state = kResident;
            ++stats_.loads;
            continue;
        }
        // A disc error: this entry keeps the runtime path from now on.
        release(slot.offset, bytes);
        slot.state = kUnreadable;
        stats_.usedBytes -= bytes;
        ++stats_.failures;
        const auto it = std::find(resident_.begin(), resident_.end(), r.index);
        *it = resident_.back();
        resident_.pop_back();
        std::cout << "[TS:xbox] texture pack: entry " << r.index << " unreadable" << std::endl;
    }
}

int XboxTexturePack::find(uint64_t key) const
{
    const auto it = std::lower_bound(index_.begin(), index_.end(), key,
                                     [](const Entry &e, uint64_t k) { return e.key < k; });
    return it != index_.end() && it->key == key ? int(it - index_.begin()) : -1;
}

// First fit: the pool holds a few hundred entries, the free list a handful
// of ranges.
uint32_t XboxTexturePack::allocate(uint32_t bytes)
{
    for (size_t i = 0; i < free_.size(); ++i)
    {
        Range &r = free_[i];
        if (r.bytes < bytes)
            continue;
        const uint32_t at = r.offset;
        r.offset += bytes;
        r.bytes -= bytes;
        if (r.bytes == 0u)
            free_.erase(free_.begin() + long(i));
        return at;
    }
    return kNoOffset;
}

// Back into the free list, joined with its neighbours.
void XboxTexturePack::release(uint32_t offset, uint32_t bytes)
{
    auto next = std::lower_bound(free_.begin(), free_.end(), offset,
                                 [](const Range &r, uint32_t at) { return r.offset < at; });
    const bool joinsNext = next != free_.end() && offset + bytes == next->offset;
    if (next != free_.begin())
    {
        Range &previous = *(next - 1);
        if (previous.offset + previous.bytes == offset)
        {
            previous.bytes += bytes;
            if (joinsNext)
            {
                previous.bytes += next->bytes;
                free_.erase(next);
            }
            return;
        }
    }
    if (joinsNext)
    {
        next->offset = offset;
        next->bytes += bytes;
        return;
    }
    free_.insert(next, Range{offset, bytes});
}

void XboxTexturePack::evict(int index)
{
    Slot &slot = slots_[size_t(index)];
    const uint32_t bytes = poolBytesOf(index_[size_t(index)]);
    release(slot.offset, bytes);
    slot.state = kAbsent;
    stats_.usedBytes -= bytes;
    ++stats_.evictions;
    const auto it = std::find(resident_.begin(), resident_.end(), index);
    *it = resident_.back();
    resident_.pop_back();
}

// Room for `bytes` when no free range holds them: the run of neighbouring
// pool blocks (free ranges and evictable entries) that holds them at the
// least cost, its entries evicted. kNoOffset when no run may be taken.
uint32_t XboxTexturePack::makeRoom(uint32_t bytes, uint32_t frame, std::vector<int> &evicted)
{
    if (frame == noRoomFrame_ && bytes >= noRoomBytes_)
        return kNoOffset;
    blocks_.clear();
    for (const Range &r : free_)
        blocks_.push_back(Block{r.offset, r.bytes, -1});
    for (int r : resident_)
        blocks_.push_back(Block{slots_[size_t(r)].offset, poolBytesOf(index_[size_t(r)]), r});
    std::sort(blocks_.begin(), blocks_.end(), [](const Block &a, const Block &b) { return a.offset < b.offset; });
    size_t bestFirst = 0, bestLast = 0;
    uint32_t bestCost = UINT32_MAX;
    for (size_t first = 0; first < blocks_.size(); ++first)
    {
        uint32_t room = 0, cost = 0, victims = 0;
        for (size_t last = first; last < blocks_.size(); ++last)
        {
            const Block &b = blocks_[last];
            if (last > first && b.offset != blocks_[last - 1u].offset + blocks_[last - 1u].bytes)
                break; // not neighbours (cannot happen: the blocks tile the pool)
            if (b.entry >= 0)
            {
                const Slot &s = slots_[size_t(b.entry)];
                if (s.state != kResident || s.lastFrame + 1u >= frame)
                    break; // queued for the loader, or in use
                cost += frame - s.lastFrame >= kLongIdle ? 1u : kRecentCost;
                if (++victims > kMaxVictims || cost >= bestCost)
                    break;
            }
            room += b.bytes;
            if (room >= bytes)
            {
                bestCost = cost;
                bestFirst = first;
                bestLast = last;
                break;
            }
        }
    }
    if (bestCost == UINT32_MAX)
    {
        if (noRoomFrame_ != frame || bytes < noRoomBytes_)
            noRoomBytes_ = bytes;
        noRoomFrame_ = frame;
        return kNoOffset;
    }
    uint32_t victims = 0;
    for (size_t i = bestFirst; i <= bestLast; ++i)
        if (blocks_[i].entry >= 0)
        {
            evict(blocks_[i].entry);
            evicted.push_back(blocks_[i].entry);
            ++victims;
        }
    stats_.mostVictims = std::max(stats_.mostVictims, victims);
    return allocate(bytes);
}

uint8_t *XboxTexturePack::acquire(int index, uint32_t frame, std::vector<int> &evicted, Status &status)
{
    if (!pool_)
    {
        status = kUnavailable;
        return nullptr;
    }
    poll();
    Slot &slot = slots_[size_t(index)];
    switch (slot.state)
    {
    case kResident:
        slot.lastFrame = frame;
        status = kReady;
        return pool_ + slot.offset;
    case kQueued: status = kLoading; return nullptr;
    case kUnreadable: status = kUnavailable; return nullptr;
    default: break;
    }
    if (issued_ - collected_ >= kQueue)
    {
        ++stats_.busy;
        status = kBusy;
        return nullptr;
    }
    const Entry &e = index_[size_t(index)];
    const uint32_t bytes = poolBytesOf(e);
    uint32_t at = allocate(bytes);
    if (at == kNoOffset)
        at = makeRoom(bytes, frame, evicted);
    if (at == kNoOffset)
    {
        status = kNoRoom;
        return nullptr;
    }
    slot.offset = at;
    slot.state = kQueued;
    slot.lastFrame = frame;
    resident_.push_back(index);
    stats_.usedBytes += bytes;
    Request &r = requests_[issued_ % kQueue];
    r.index = index;
    r.dest = pool_ + at;
    r.fileOffset = e.offset;
    r.bytes = e.size;
    r.microseconds = 0;
    r.state.store(kPending);
    ++issued_;
    ReleaseSemaphore(static_cast<HANDLE>(work_), 1, nullptr);
    status = kLoading;
    return nullptr;
}
