#ifndef PS2_GIF_ARBITER_H
#define PS2_GIF_ARBITER_H

#include <cstdint>
#include <functional>
#include <vector>

enum class GifPathId : uint8_t
{
    Path1 = 1,
    Path2 = 2,
    Path3 = 3,
};

struct GifArbiterPacket
{
    GifPathId pathId;
    bool path2DirectHl = false;
    bool path3Image = false;
    std::vector<uint8_t> data;
};

class GifArbiter
{
public:
    using ProcessPacketFn = std::function<void(const uint8_t *, uint32_t)>;

    GifArbiter() = default;
    explicit GifArbiter(ProcessPacketFn processFn);

    void setProcessPacketFn(ProcessPacketFn fn) { m_processFn = std::move(fn); m_processPathFn = {}; }
    using ProcessPathPacketFn = std::function<void(GifPathId, const uint8_t *, uint32_t)>;
    void setProcessPathPacketFn(ProcessPathPacketFn fn) { m_processPathFn = std::move(fn); m_processFn = {}; }

    void submit(GifPathId pathId, const uint8_t *data, uint32_t sizeBytes, bool path2DirectHl = false);
#if defined(PLATFORM_XBOX)
    // The same, taking the packet's buffer over instead of copying it (a
    // DMA chain the caller has no further use for).
    void submitOwned(GifPathId pathId, std::vector<uint8_t> &&data, bool path2DirectHl = false);
#endif

    void drain();
    bool empty() const { return m_queue.empty(); }
    // Processes one packet immediately without copying it; only valid when
    // nothing is queued (there is nothing to arbitrate against).
    void processDirect(GifPathId pathId, const uint8_t *data, uint32_t sizeBytes);

private:
    ProcessPacketFn m_processFn;
    ProcessPathPacketFn m_processPathFn;
    std::vector<GifArbiterPacket> m_queue;

    static bool isImagePacket(const uint8_t *data, uint32_t sizeBytes);
    static uint8_t pathPriority(GifPathId id);
};

#endif
