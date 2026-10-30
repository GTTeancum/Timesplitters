#include "xbox_bg_loader.h"

#include <cstdlib>
#include <cstring>
#include <limits>

#if defined(PLATFORM_XBOX) && PLATFORM_XBOX
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace
{
class Guard
{
public:
    Guard(std::atomic_flag &flag, std::atomic<uint32_t> &busy) : flag_(flag)
    {
        held_ = !flag_.test_and_set(std::memory_order_acquire);
        if (!held_) busy.fetch_add(1u, std::memory_order_relaxed);
    }
    ~Guard() { if (held_) flag_.clear(std::memory_order_release); }
    explicit operator bool() const { return held_; }
private:
    std::atomic_flag &flag_;
    bool held_ = false;
};

// Pending resources remain private until complete validation. Every exit closes
// the file and releases uncommitted storage, including short or failed reads.
struct Pending
{
    const XboxBgLoader::Platform &platform;
    XboxBgLoader::Stats &stats;
    void *file = nullptr;
    uint8_t *data = nullptr;
    ~Pending()
    {
        if (file) platform.close(platform.context, file);
        if (data)
        {
            stats.liveBytes = 0;
            platform.release(platform.context, data);
        }
    }
};

#if defined(PLATFORM_XBOX) && PLATFORM_XBOX
XboxBgLoader::OpenResult openFile(void *, const char *path, void *&out, uint64_t &bytes)
{
    out = nullptr;
    bytes = 0;
    HANDLE file = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ, nullptr,
                              OPEN_EXISTING, 0, nullptr);
    if (file == INVALID_HANDLE_VALUE)
    {
        const DWORD error = GetLastError();
        return error == ERROR_FILE_NOT_FOUND || error == ERROR_PATH_NOT_FOUND
                   ? XboxBgLoader::OpenResult::Missing : XboxBgLoader::OpenResult::Error;
    }
    LARGE_INTEGER size{};
    if (!GetFileSizeEx(file, &size) || size.QuadPart < 0)
    {
        CloseHandle(file);
        return XboxBgLoader::OpenResult::Error;
    }
    out = file;
    bytes = static_cast<uint64_t>(size.QuadPart);
    return XboxBgLoader::OpenResult::Opened;
}
bool readFile(void *, void *file, uint8_t *out, uint32_t bytes, uint32_t &received)
{
    DWORD count = 0;
    const bool ok = ReadFile(static_cast<HANDLE>(file), out, bytes, &count, nullptr) != 0;
    received = count;
    return ok;
}
void closeFile(void *, void *file) { CloseHandle(static_cast<HANDLE>(file)); }
uint8_t *allocateBytes(void *, uint32_t bytes)
{
    // Direct malloc is fallible; the title's throwing global new terminates on
    // allocation failure. This is cached CPU storage, not GPU-visible memory.
    return static_cast<uint8_t *>(std::malloc(bytes));
}
void releaseBytes(void *, uint8_t *bytes) { std::free(bytes); }
#endif
} // namespace

XboxBgLoader::Platform XboxBgLoader::defaultPlatform()
{
#if defined(PLATFORM_XBOX) && PLATFORM_XBOX
    return {nullptr, openFile, readFile, closeFile, allocateBytes, releaseBytes};
#else
    return {};
#endif
}

XboxBgLoader::XboxBgLoader() : XboxBgLoader(defaultPlatform()) {}
XboxBgLoader::XboxBgLoader(const Platform &platform) : platform_(platform) {}
XboxBgLoader::~XboxBgLoader() { clearOwned(); }

void XboxBgLoader::clearOwned()
{
    uint8_t *old = data_;
    data_ = nullptr;
    view_ = ts_xbg::View{};
    stats_.liveBytes = 0;
    // Clear every internal borrow before invoking even a custom release hook.
    if (old) platform_.release(platform_.context, old);
}

bool XboxBgLoader::advanceGeneration()
{
    // Never wrap a previously issued generation into a valid future token.
    if (generation_ == std::numeric_limits<uint64_t>::max()) return false;
    stats_.generation = ++generation_;
    return true;
}

XboxBgLoader::Status XboxBgLoader::finish(Status result)
{
    stats_.lastStatus = result;
    switch (result)
    {
    case Status::Ready: ++stats_.loads; break;
    case Status::Disabled: ++stats_.disabled; break;
    case Status::Missing: ++stats_.missing; break;
    case Status::InvalidArgument: ++stats_.badArguments; break;
    case Status::Unavailable: ++stats_.unavailable; break;
    case Status::OverBudget: ++stats_.overBudget; break;
    case Status::NoMemory: ++stats_.noMemory; break;
    case Status::IoError: ++stats_.ioFailures; break;
    case Status::InvalidPack: ++stats_.invalidPacks; break;
    case Status::LevelMismatch: ++stats_.levelMismatches; break;
    default: break;
    }
    return result;
}

bool XboxBgLoader::readFully(void *file, uint8_t *out, uint32_t bytes)
{
    while (bytes)
    {
        const uint32_t request = bytes < 65536u ? bytes : 65536u;
        uint32_t received = 0;
        const bool ok = platform_.read(platform_.context, file, out, request, received);
        if (received > request) return false;
        stats_.bytesRead += received;
        if (!ok || received == 0) return false;
        out += received;
        bytes -= received;
    }
    return true;
}

XboxBgLoader::Status XboxBgLoader::load(const char *path, uint32_t expectedLevel,
                                       uint32_t budgetBytes)
{
    Guard guard(guard_, busy_);
    if (!guard) return Status::Busy;
    ++stats_.attempts;
    clearOwned();
    stats_.lastRequestedLevel = expectedLevel;
    stats_.lastFileBytes = 0;
    stats_.lastValidationError = ts_xbg::Error::None;
    if (!advanceGeneration()) return finish(Status::GenerationExhausted);
    if (!budgetBytes) return finish(Status::Disabled);
    if (!path || !*path || !expectedLevel || budgetBytes > kMaxResidentBytes)
        return finish(Status::InvalidArgument);
    if (!platform_.open || !platform_.read || !platform_.close ||
        !platform_.allocate || !platform_.release)
        return finish(Status::Unavailable);

    Pending pending{platform_, stats_};
    uint64_t fileBytes = 0;
    const OpenResult opened = platform_.open(platform_.context, path, pending.file, fileBytes);
    stats_.lastFileBytes = fileBytes;
    if (opened == OpenResult::Missing) return finish(Status::Missing);
    if (opened != OpenResult::Opened || !pending.file) return finish(Status::IoError);
    if (fileBytes > budgetBytes) return finish(Status::OverBudget);
    if (fileBytes < ts_xbg::kHeaderBytes)
    {
        stats_.lastValidationError = ts_xbg::Error::Size;
        return finish(Status::InvalidPack);
    }

    uint8_t header[ts_xbg::kHeaderBytes];
    if (!readFully(pending.file, header, sizeof(header))) return finish(Status::IoError);
    static const uint8_t magic[8] = {'T', 'S', 'X', 'B', 'G', 'P', '1', 0};
    if (std::memcmp(header, magic, sizeof(magic)) != 0 ||
        ts_xbg::read32(header + 8) != 1 || ts_xbg::read32(header + 12) != sizeof(header))
    {
        stats_.lastValidationError = ts_xbg::Error::Header;
        return finish(Status::InvalidPack);
    }
    if (ts_xbg::read32(header + 16) != ts_xbg::kRequiresLiveBinding ||
        ts_xbg::read32(header + 156) != 0 || !ts_xbg::read32(header + 20))
    {
        stats_.lastValidationError = ts_xbg::Error::Layout;
        return finish(Status::InvalidPack);
    }
    if (ts_xbg::read32(header + 24) != fileBytes)
    {
        stats_.lastValidationError = ts_xbg::Error::Size;
        return finish(Status::InvalidPack);
    }
    if (ts_xbg::read32(header + 20) != expectedLevel)
        return finish(Status::LevelMismatch);

    const uint32_t bytes = static_cast<uint32_t>(fileBytes); // <= explicit 4 MiB ceiling
    pending.data = platform_.allocate(platform_.context, bytes);
    if (!pending.data) return finish(Status::NoMemory);
    stats_.liveBytes = bytes;
    if (bytes > stats_.peakBytes) stats_.peakBytes = bytes;
    std::memcpy(pending.data, header, sizeof(header));
    if (!readFully(pending.file, pending.data + sizeof(header), bytes - sizeof(header)))
        return finish(Status::IoError);
    uint8_t extra = 0;
    uint32_t received = 0;
    if (!platform_.read(platform_.context, pending.file, &extra, 1, received) || received > 1)
        return finish(Status::IoError);
    stats_.bytesRead += received;
    if (received)
    {
        stats_.lastValidationError = ts_xbg::Error::Size;
        return finish(Status::InvalidPack);
    }
    ts_xbg::View checked;
    stats_.lastValidationError = ts_xbg::open(pending.data, bytes, checked);
    if (stats_.lastValidationError != ts_xbg::Error::None) return finish(Status::InvalidPack);

    data_ = pending.data;
    pending.data = nullptr;
    view_ = checked;
    stats_.loadedBytes += bytes;
    return finish(Status::Ready);
}

XboxBgLoader::Status XboxBgLoader::unload()
{
    Guard guard(guard_, busy_);
    if (!guard) return Status::Busy;
    ++stats_.unloads;
    clearOwned();
    stats_.lastValidationError = ts_xbg::Error::None;
    if (!advanceGeneration()) return finish(Status::GenerationExhausted);
    return finish(Status::Unloaded);
}

bool XboxBgLoader::current(uint64_t expectedGeneration) const
{
    if (!data_ || expectedGeneration == 0 || expectedGeneration != generation_)
    {
        ++stats_.staleAccesses;
        return false;
    }
    return true;
}

bool XboxBgLoader::snapshot(Snapshot &out) const
{
    out = Snapshot{};
    Guard guard(guard_, busy_);
    if (!guard || !data_) return false;
    out.generation = generation_;
    out.level = view_.level; out.bytes = stats_.liveBytes;
    out.sourceRawBytes = view_.sourceRawBytes; out.flags = view_.flags;
    out.textureCount = view_.textureCount; out.roomCount = view_.roomCount;
    out.batchCount = view_.batchCount; out.stripCount = view_.stripCount;
    out.vertexCount = view_.vertexCount;
    std::memcpy(out.sourceRawSha256, view_.sourceRawSha256, 32);
    std::memcpy(out.sourcePakSha256, view_.sourcePakSha256, 32);
    return true;
}

bool XboxBgLoader::stats(Stats &out) const
{
    out = Stats{};
    Guard guard(guard_, busy_);
    if (!guard) return false;
    out = stats_;
    out.busy = busy_.load(std::memory_order_relaxed);
    return true;
}

bool XboxBgLoader::withView(uint64_t expectedGeneration, Visitor callback, void *user) const
{
    Guard guard(guard_, busy_);
    if (!guard || !current(expectedGeneration)) return false;
    if (!callback) { ++stats_.invalidAccesses; return false; }
    callback(user, view_);
    return true;
}

bool XboxBgLoader::copyRecords(uint64_t expectedGeneration, Section section,
                                uint32_t first, uint32_t count, void *destination,
                                size_t capacity) const
{
    Guard guard(guard_, busy_);
    if (!guard || !current(expectedGeneration)) return false;
    const uint8_t *source = nullptr;
    uint32_t total = 0, width = 0;
    switch (section)
    {
    case Section::Textures: source = view_.textures; total = view_.textureCount; width = ts_xbg::kTextureBytes; break;
    case Section::Rooms: source = view_.rooms; total = view_.roomCount; width = ts_xbg::kRoomBytes; break;
    case Section::Batches: source = view_.batches; total = view_.batchCount; width = ts_xbg::kBatchBytes; break;
    case Section::Strips: source = view_.strips; total = view_.stripCount; width = ts_xbg::kStripBytes; break;
    case Section::Vertices: source = view_.vertices; total = view_.vertexCount; width = ts_xbg::kVertexBytes; break;
    default: ++stats_.invalidAccesses; return false;
    }
    const uint64_t bytes = uint64_t(count) * width;
    if (first > total || count > total - first || bytes > capacity || (bytes && !destination))
    { ++stats_.invalidAccesses; return false; }
    if (!bytes) return true;
    const uintptr_t dest = reinterpret_cast<uintptr_t>(destination);
    const uintptr_t base = reinterpret_cast<uintptr_t>(data_);
    if (bytes > std::numeric_limits<uintptr_t>::max() - dest ||
        (dest < base + stats_.liveBytes && base < dest + bytes))
    { ++stats_.invalidAccesses; return false; }
    std::memcpy(destination, source + size_t(first) * width, static_cast<size_t>(bytes));
    return true;
}
