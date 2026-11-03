#pragma once
// Optional, level-time ownership of one XBG1 pack. This does not enable drawing.
#include "xbox_bg_pack.h"

#include <atomic>
#include <cstddef>
#include <cstdint>

class XboxBgLoader
{
public:
    // An explicit admission ceiling, not a default reservation. Zero budget
    // disables loading. The format reader's 64 MiB limit is not a RAM budget.
    static constexpr uint32_t kMaxResidentBytes = 4u * 1024u * 1024u;
    enum class Status
    {
        Unloaded, Ready, Disabled, Missing, InvalidArgument, Unavailable,
        OverBudget, NoMemory, IoError, InvalidPack, LevelMismatch, Busy,
        GenerationExhausted
    };
    enum class OpenResult { Opened, Missing, Error };
    enum class Section { Textures, Rooms, Batches, Strips, Vertices };

    // Copyable, narrow platform boundary. A successful open supplies a non-null
    // handle and the full file size. Read may succeed with a short count; zero
    // means EOF. Close/release must consume their resource without throwing.
    // Context and this loader must outlive every operation and callback.
    struct Platform
    {
        void *context = nullptr;
        OpenResult (*open)(void *, const char *, void *&, uint64_t &) = nullptr;
        bool (*read)(void *, void *, uint8_t *, uint32_t, uint32_t &) = nullptr;
        void (*close)(void *, void *) = nullptr;
        uint8_t *(*allocate)(void *, uint32_t) = nullptr;
        void (*release)(void *, uint8_t *) = nullptr;
    };

    struct Snapshot
    {
        uint64_t generation = 0;
        uint32_t level = 0, bytes = 0, sourceRawBytes = 0, flags = 0;
        uint32_t textureCount = 0, roomCount = 0, batchCount = 0;
        uint32_t stripCount = 0, vertexCount = 0;
        uint8_t sourceRawSha256[32]{}, sourcePakSha256[32]{};
    };

    struct Stats
    {
        uint64_t attempts = 0, loads = 0, unloads = 0, missing = 0;
        uint64_t invalidPacks = 0, levelMismatches = 0, overBudget = 0;
        uint64_t noMemory = 0, ioFailures = 0, disabled = 0;
        uint64_t badArguments = 0, unavailable = 0;
        uint64_t staleAccesses = 0, invalidAccesses = 0;
        uint64_t bytesRead = 0, loadedBytes = 0, generation = 0;
        uint32_t busy = 0, liveBytes = 0, peakBytes = 0;
        uint32_t lastRequestedLevel = 0;
        uint64_t lastFileBytes = 0;
        Status lastStatus = Status::Unloaded;
        ts_xbg::Error lastValidationError = ts_xbg::Error::None;
    };

    using Visitor = void (*)(void *user, const ts_xbg::View &view);

    // Xbox: fallible malloc/free and synchronous Win32 file reads. Other host
    // builds return an unavailable table; tests supply an explicit Platform.
    static Platform defaultPlatform();
    XboxBgLoader();
    explicit XboxBgLoader(const Platform &platform);
    ~XboxBgLoader();
    XboxBgLoader(const XboxBgLoader &) = delete;
    XboxBgLoader &operator=(const XboxBgLoader &) = delete;

    // The caller supplies the path and expected level; no filename implies an
    // identity. A successful ownership acquisition invalidates the prior pack
    // and advances the generation even if loading fails. Old and new storage
    // never coexist. Busy preserves both the old pack and its generation.
    Status load(const char *path, uint32_t expectedLevel, uint32_t budgetBytes);
    Status unload();

    // One nonblocking guard serializes access. Both clear their outputs and
    // return false when busy; snapshot also fails without a loaded pack.
    // Statistics remain available while unloaded. Values contain no borrows.
    bool snapshot(Snapshot &out) const;
    bool stats(Stats &out) const;

    // Callback storage stays pinned until the callback returns. It must not
    // retain the View or any pointer from it, mutate storage, destroy the loader,
    // or submit its CPU allocation directly to a GPU. Reentrant load/unload
    // returns Busy. Other view/copy acquisitions also fail while it is pinned.
    bool withView(uint64_t expectedGeneration, Visitor callback, void *user) const;

    // Copy serialized records into caller-owned bytes. A failure leaves the
    // destination unchanged. Destination must not overlap the owned pack.
    bool copyRecords(uint64_t expectedGeneration, Section section,
                     uint32_t first, uint32_t count, void *destination,
                     size_t capacity) const;

private:
    bool current(uint64_t expectedGeneration) const;
    bool advanceGeneration();
    void clearOwned();
    Status finish(Status result);
    bool readFully(void *file, uint8_t *out, uint32_t bytes);

    Platform platform_;
    uint8_t *data_ = nullptr;
    ts_xbg::View view_{};
    uint64_t generation_ = 0;
    mutable std::atomic_flag guard_ = ATOMIC_FLAG_INIT;
    mutable std::atomic<uint32_t> busy_{0};
    mutable Stats stats_{};
};
