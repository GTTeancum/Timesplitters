#pragma once

#include "runtime/gs/gs_backend.h"

#include <array>
#include <atomic>
#include <chrono>
#include <bitset>
#include <condition_variable>
#include <cstdio>
#include <deque>
#include <functional>
#include <memory>
#include <mutex>
#include <thread>
#include <vector>

class GSCpuBackend;

// Runs the CPU rasterizer on worker threads, off the EE thread.
//
// The EE thread only queues commands. Every worker consumes the whole command
// stream with its own GSCpuBackend instance (own texture cache and CLUT) over
// the shared GS local memory, drawing only its interleaved rows, so each pixel
// sees the same operations in the same order as a serial draw.
//
// Commands that touch memory outside a row band (uploads, transfers, clears,
// presentation) run on worker 0 only, after every worker caught up ("join").
// A primitive that samples pages written by queued draws of other rows, or
// that can observe its own writes through its texture, also joins (and the
// latter is drawn whole by worker 0). Anything that reads GS local memory from
// the EE side first waits for the queue to drain.
class GSThreadedBackend final : public GSRasterBackend
{
public:
    // workers == 0 picks a count from the host core count.
    explicit GSThreadedBackend(unsigned workers = 0);
    ~GSThreadedBackend() override;

    unsigned WorkerCount() const { return static_cast<unsigned>(m_workers.size()); }
    // Sets every worker's CLUT buffer (replaying a GS command capture).
    void SetClutState(const std::array<uint16_t, 512> &clut, const std::array<uint32_t, 2> &cbp);

    void Initialize(uint8_t *vram, uint32_t vramSize) override;
    void Reset() override;

    void Submit(const GSPrimitiveBatch &batch) override;
    void LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut) override;

    void BeginTransfer(const GSTransferCommand &command) override;
    void UploadImage(const uint8_t *data, uint32_t sizeBytes) override;

    void Flush() override;
    void TextureFlush() override;
    void Sync(GSSyncReason reason) override;
    PresentationFrame Present(const GSPresentationRequest &request) override;
    bool PresentAsync(const GSPresentationRequest &request, std::function<void(PresentationFrame &&)> done) override;

    bool ClearFramebuffer(const GSContext &context, uint32_t rgba) override;
    uint32_t ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes) override;

    uint32_t ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const override;
    void WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value) override;
    void SnapshotVram(std::vector<uint8_t> &out) const override;
    GSTransferSnapshot GetTransferSnapshot() const override;

private:
    enum class Kind : uint8_t
    {
        Submit,
        LoadClut,
        BeginTransfer,
        Upload,
        Flush,
        TextureFlush,
        Clear,
        WriteVram,
        Present,
    };

    struct Command
    {
        Kind kind = Kind::Flush;
        bool join = false;        // all workers finish earlier commands first
        bool primaryOnly = false; // worker 0 executes (whole), others wait for it
        GSPrimitiveBatch batch;
        GSTex0Reg tex0{};
        GSTexClutReg texclut{};
        GSTransferCommand transfer{};
        std::vector<uint8_t> payload;
        GSContext context{};
        uint32_t values[6]{};
        GSPresentationRequest request{};
        std::function<void(PresentationFrame &&)> done;
    };

    struct alignas(64) Worker
    {
        std::unique_ptr<GSCpuBackend> backend;
        std::atomic<uint64_t> completed{0};
        std::thread thread;
    };

    Command &beginCommand();
    void commit(Command &command);
    void publish();
    void wakeWorkers() const;
    mutable unsigned m_unnotified = 0;
    void captureCommand(const Command &command);
    std::FILE *m_capture = nullptr;
    bool m_captureDone = false;
    unsigned m_captureFramesLeft = 0;
    std::chrono::steady_clock::time_point m_created = std::chrono::steady_clock::now();
    void clearPending();
    void publishPrimaryOnly(Command &command);
    uint64_t minCompleted() const;
    void drain() const;
    void workerLoop(unsigned index);
    void waitUntil(const std::function<bool()> &ready, unsigned index) const;
    void notifyProgress() const;
    mutable std::mutex m_progressMutex;
    mutable std::condition_variable m_progressCv;
    mutable std::atomic<int> m_progressWaiters{0};
    void execute(GSCpuBackend &backend, Command &command);
    void markWritten(const GSRasterBackend *, uint64_t begin, uint64_t end);
    bool touchesPending(uint64_t begin, uint64_t end) const;

    // Presentation: worker 0 snapshots GS memory (a fast copy) at the
    // command's position; this thread converts the snapshot to host RGBA
    // while the workers keep drawing. Frames are published in order.
    struct PresentJob
    {
        unsigned buffer;
        GSPresentationRequest request;
        std::function<void(PresentationFrame &&)> done;
    };
    void presenterLoop();
    void queuePresent(Command &command);
    std::thread m_presenter;
    std::mutex m_presentMutex;
    std::condition_variable m_presentWake;
    std::deque<PresentJob> m_presentJobs;
    bool m_presentStop = false;
    std::array<std::vector<uint8_t>, 2> m_presentSnapshots;
    std::array<std::unique_ptr<GSCpuBackend>, 2> m_presentBackends;
    std::array<bool, 2> m_presentBusy{};
    unsigned m_nextPresentBuffer = 0;
    uint8_t *m_vram = nullptr;
    uint32_t m_vramSize = 0;

    std::vector<std::unique_ptr<Worker>> m_workers;
    std::vector<Command> m_ring;
    uint64_t m_head = 0;
    std::atomic<uint64_t> m_published{0};
    mutable std::mutex m_mutex;
    mutable std::condition_variable m_wake;
    std::atomic<bool> m_stop{false};
    // Pages written by queued work since the last join (8 KiB pages).
    std::bitset<512> m_pendingWrites;
    // Ranges already marked in m_pendingWrites since the last clear, with the
    // completion count at which their newest writer is done.
    struct MarkedRange
    {
        uint64_t begin = UINT64_MAX, end = 0, writerDone = 0;
    };
    std::array<MarkedRange, 4> m_markedRanges{};
    // Per 8 KiB page: completion count (minCompleted) at which every queued
    // command writing the page has finished. Lets local->host readbacks wait
    // only for the draws that touch their source instead of the whole queue.
    std::array<uint64_t, 512> m_pageWriterDone{};
    uint64_t m_allPagesWriterDone = 0;
    void notePageWriters(uint64_t begin, uint64_t end, uint64_t done);
    uint64_t writersDoneFor(uint64_t begin, uint64_t end) const;
    std::unique_ptr<GSCpuBackend> m_readback; // runs readbacks on the EE thread
    bool m_readbackActive = false;
    unsigned m_nextMarkedRange = 0;
    std::array<uint64_t, 4> m_stats{};
    std::chrono::steady_clock::time_point m_statsStart = std::chrono::steady_clock::now();
    GSTransferSnapshot m_lastTransfer{};
};
