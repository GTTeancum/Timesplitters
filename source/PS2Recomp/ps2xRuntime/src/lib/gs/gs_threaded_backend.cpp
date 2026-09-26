#include "runtime/gs/gs_threaded_backend.h"
#include "runtime/gs/gs_cpu_backend.h"
#include "ThreadNaming.h"
#include "runtime/ps2_sample_profiler.h"

#include <algorithm>
#include <immintrin.h>
#include <cstdlib>
#include <string>
#include <cstring>
#include <chrono>
#include <cstdio>

namespace
{
    constexpr size_t kRingSize = 16384; // power of two
    constexpr uint64_t kPageBytes = 8192u;
    constexpr uint64_t kPageCount = 512u;

    std::atomic<unsigned> s_sleepers{0};
}

GSThreadedBackend::GSThreadedBackend(unsigned workers)
    : m_ring(kRingSize)
{
    if (workers == 0)
    {
        if (const char *text = std::getenv("TS_GS_THREADS"); text && *text)
            workers = static_cast<unsigned>(std::atoi(text));
        else
        {
            // Leave cores for the EE, host and IOP threads.
            const unsigned hardware = std::max(1u, std::thread::hardware_concurrency());
            workers = hardware > 4u ? std::min(8u, hardware - 4u) : 1u;
        }
    }
    workers = std::clamp(workers, 1u, 32u);
    for (unsigned i = 0; i < workers; ++i)
    {
        auto worker = std::make_unique<Worker>();
        worker->backend = std::make_unique<GSCpuBackend>();
        m_workers.push_back(std::move(worker));
    }
    for (auto &backend : m_presentBackends)
        backend = std::make_unique<GSCpuBackend>();
    m_readback = std::make_unique<GSCpuBackend>();
    m_presenter = std::thread([this] { presenterLoop(); });
    for (unsigned i = 0; i < workers; ++i)
        m_workers[i]->thread = std::thread([this, i] { workerLoop(i); });
    // TS_SAMPLE_PROFILE_GS=<worker>: the sampling profiler follows that
    // rasterizer worker instead of the EE thread.
    if (const char *gs = std::getenv("TS_SAMPLE_PROFILE_GS"); gs && *gs)
        ps2_sample_profiler::start(m_workers[std::min<unsigned>(std::atoi(gs), workers - 1u)]->thread);
}

GSThreadedBackend::~GSThreadedBackend()
{
    drain();
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        m_stop.store(true);
    }
    m_wake.notify_all();
    for (auto &worker : m_workers)
        worker->thread.join();
    {
        std::lock_guard<std::mutex> lock(m_presentMutex);
        m_presentStop = true;
    }
    m_presentWake.notify_all();
    m_presenter.join();
}

void GSThreadedBackend::presenterLoop()
{
    ThreadNaming::SetCurrentThreadName("GSPresenter");
    for (;;)
    {
        PresentJob job;
        {
            std::unique_lock<std::mutex> lock(m_presentMutex);
            m_presentWake.wait(lock, [&] { return m_presentStop || !m_presentJobs.empty(); });
            if (m_presentJobs.empty())
                return;
            job = std::move(m_presentJobs.front());
            m_presentJobs.pop_front();
        }
        PresentationFrame frame = m_presentBackends[job.buffer]->Present(job.request);
        if (job.done)
            job.done(std::move(frame));
        {
            std::lock_guard<std::mutex> lock(m_presentMutex);
            m_presentBusy[job.buffer] = false;
        }
        m_presentWake.notify_all();
    }
}

// Runs on worker 0 at the Present command's position in the stream.
void GSThreadedBackend::queuePresent(Command &c)
{
    unsigned buffer;
    {
        std::unique_lock<std::mutex> lock(m_presentMutex);
        buffer = m_nextPresentBuffer;
        m_presentWake.wait(lock, [&] { return !m_presentBusy[buffer]; });
        m_presentBusy[buffer] = true;
        m_nextPresentBuffer = (buffer + 1u) % m_presentSnapshots.size();
    }
    auto &snapshot = m_presentSnapshots[buffer];
    if (snapshot.size() != m_vramSize)
    {
        snapshot.assign(m_vramSize, 0u);
        m_presentBackends[buffer]->Initialize(snapshot.data(), m_vramSize);
    }
    std::memcpy(snapshot.data(), m_vram, m_vramSize);
    {
        std::lock_guard<std::mutex> lock(m_presentMutex);
        m_presentJobs.push_back({buffer, c.request, std::move(c.done)});
    }
    c.done = nullptr;
    m_presentWake.notify_all();
}

uint64_t GSThreadedBackend::minCompleted() const
{
    uint64_t value = UINT64_MAX;
    for (const auto &worker : m_workers)
        value = std::min(value, worker->completed.load(std::memory_order_acquire));
    return value;
}

void GSThreadedBackend::waitUntil(const std::function<bool()> &ready, unsigned) const
{
    // Brief spin for the common short waits, then sleep until a worker
    // reports progress (timed, so a missed wake-up only costs a millisecond).
    for (unsigned spin = 0; spin < 256; ++spin)
    {
        if (ready())
            return;
        _mm_pause();
    }
    std::unique_lock<std::mutex> lock(m_progressMutex);
    m_progressWaiters.fetch_add(1, std::memory_order_acq_rel);
    while (!ready())
        m_progressCv.wait_for(lock, std::chrono::milliseconds(1));
    m_progressWaiters.fetch_sub(1, std::memory_order_acq_rel);
}

void GSThreadedBackend::notifyProgress() const
{
    if (m_progressWaiters.load(std::memory_order_acquire))
    {
        std::lock_guard<std::mutex> lock(m_progressMutex);
        m_progressCv.notify_all();
    }
}

GSThreadedBackend::Command &GSThreadedBackend::beginCommand()
{
    if (m_head - minCompleted() >= kRingSize)
        wakeWorkers();
    if (m_head - minCompleted() >= kRingSize)
        waitUntil([&] { return m_head - minCompleted() < kRingSize; }, 0);
    Command &c = m_ring[m_head & (kRingSize - 1)];
    c.join = false;
    c.primaryOnly = false;
    return c;
}

void GSThreadedBackend::commit(Command &c)
{
    if (c.join || c.primaryOnly)
        clearPending();
    publish();
}

void GSThreadedBackend::clearPending()
{
    m_pendingWrites.reset();
    for (MarkedRange &range : m_markedRanges)
    {
        if (range.begin != UINT64_MAX)
            notePageWriters(range.begin, range.end, range.writerDone);
        range = {};
    }
}

void GSThreadedBackend::SetClutState(const std::array<uint16_t, 512> &clut, const std::array<uint32_t, 2> &cbp)
{
    drain();
    for (auto &worker : m_workers)
        worker->backend->SetClutState(clut, cbp);
}

// TS_GS_CAPTURE=<file>: from the first presentation after TS_GS_CAPTURE_AFTER
// seconds (default 60), record TS_GS_CAPTURE_FRAMES (default 4) frames of GS
// backend commands, preceded by GS local memory and the CLUT buffer, for
// timesplitters_gs_replay. Format: see gs_capture.h in project/game.
void GSThreadedBackend::captureCommand(const Command &c)
{
    static const char *path = std::getenv("TS_GS_CAPTURE");
    if (!path || !*path || m_captureDone)
        return;
    if (!m_capture)
    {
        if (c.kind != Kind::Present || !m_vram)
            return;
        const char *afterText = std::getenv("TS_GS_CAPTURE_AFTER");
        const double after = afterText ? std::atof(afterText) : 60.0;
        if (std::chrono::duration<double>(std::chrono::steady_clock::now() - m_created).count() < after)
            return;
        m_capture = std::fopen(path, "wb");
        if (!m_capture)
        {
            m_captureDone = true;
            return;
        }
        const char *framesText = std::getenv("TS_GS_CAPTURE_FRAMES");
        m_captureFramesLeft = framesText ? static_cast<unsigned>(std::max(1, std::atoi(framesText))) : 4u;
        drain(); // everything before this command is in memory
        const uint32_t magic = 0x43534754u, version = 1u; // "TGSC"
        std::fwrite(&magic, 4, 1, m_capture);
        std::fwrite(&version, 4, 1, m_capture);
        std::fwrite(&m_vramSize, 4, 1, m_capture);
        std::fwrite(m_vram, 1, m_vramSize, m_capture);
        std::array<uint16_t, 512> clut{};
        std::array<uint32_t, 2> cbp{};
        m_workers[0]->backend->GetClutState(clut, cbp);
        std::fwrite(clut.data(), sizeof(uint16_t), clut.size(), m_capture);
        std::fwrite(cbp.data(), sizeof(uint32_t), cbp.size(), m_capture);
        std::fprintf(stderr, "[TS:gs-capture] started %s\n", path);
    }
    const uint8_t kind = static_cast<uint8_t>(c.kind);
    auto record = [&](const void *data, uint32_t size) {
        std::fwrite(&kind, 1, 1, m_capture);
        std::fwrite(&size, 4, 1, m_capture);
        if (size)
            std::fwrite(data, 1, size, m_capture);
    };
    switch (c.kind)
    {
    case Kind::Submit: record(&c.batch, sizeof(c.batch)); break;
    case Kind::LoadClut:
    {
        uint8_t bytes[sizeof(c.tex0) + sizeof(c.texclut)];
        std::memcpy(bytes, &c.tex0, sizeof(c.tex0));
        std::memcpy(bytes + sizeof(c.tex0), &c.texclut, sizeof(c.texclut));
        record(bytes, sizeof(bytes));
        break;
    }
    case Kind::BeginTransfer: record(&c.transfer, sizeof(c.transfer)); break;
    case Kind::Upload: record(c.payload.data(), static_cast<uint32_t>(c.payload.size())); break;
    case Kind::Flush:
    case Kind::TextureFlush: record(nullptr, 0); break;
    case Kind::Clear:
    {
        uint8_t bytes[sizeof(c.context) + 4];
        std::memcpy(bytes, &c.context, sizeof(c.context));
        std::memcpy(bytes + sizeof(c.context), &c.values[0], 4);
        record(bytes, sizeof(bytes));
        break;
    }
    case Kind::WriteVram: record(c.values, sizeof(c.values)); break;
    case Kind::Present:
        record(&c.request, sizeof(c.request));
        if (m_captureFramesLeft-- == 0u)
        {
            std::fclose(m_capture);
            m_capture = nullptr;
            m_captureDone = true;
            std::fprintf(stderr, "[TS:gs-capture] complete\n");
        }
        break;
    }
}

void GSThreadedBackend::publish()
{
    captureCommand(m_ring[m_head & (kRingSize - 1)]);
    // TS_GS_STATS=1: once a second, how much of the stream serializes.
    static const bool stats = [] { const char *v = std::getenv("TS_GS_STATS"); return v && *v == '1'; }();
    if (stats)
    {
        const Command &c = m_ring[m_head & (kRingSize - 1)];
        ++m_stats[c.primaryOnly ? 2 : c.join ? 1 : 0];
        if (c.kind == Kind::Submit)
            ++m_stats[3];
        const auto now = std::chrono::steady_clock::now();
        if (now - m_statsStart >= std::chrono::seconds(1))
        {
            std::fprintf(stderr, "[TS:gs-stats] commands=%llu joins=%llu primary_only=%llu primitives=%llu workers=%u\n",
                         static_cast<unsigned long long>(m_stats[0] + m_stats[1] + m_stats[2]),
                         static_cast<unsigned long long>(m_stats[1]), static_cast<unsigned long long>(m_stats[2]),
                         static_cast<unsigned long long>(m_stats[3]), WorkerCount());
            m_stats = {};
            m_statsStart = now;
        }
    }
    const Command &published = m_ring[m_head & (kRingSize - 1)];
    const bool urgent = published.join || published.primaryOnly || published.kind == Kind::Present;
    ++m_head;
    m_published.store(m_head, std::memory_order_release);
    // Waking a sleeping worker is a system call: batch it within a burst of
    // primitives; sleepers also re-check on a short timeout.
    if (s_sleepers.load(std::memory_order_acquire) && (++m_unnotified >= 64u || urgent))
        wakeWorkers();
}

void GSThreadedBackend::wakeWorkers() const
{
    m_unnotified = 0;
    std::lock_guard<std::mutex> lock(m_mutex);
    m_wake.notify_all();
}

void GSThreadedBackend::publishPrimaryOnly(Command &c)
{
    c.primaryOnly = true;
    commit(c);
}

void GSThreadedBackend::drain() const
{
    const uint64_t target = m_published.load(std::memory_order_acquire);
    if (minCompleted() < target && s_sleepers.load(std::memory_order_acquire))
        wakeWorkers();
    waitUntil([&] { return minCompleted() >= target; }, 0);
}

void GSThreadedBackend::notePageWriters(uint64_t begin, uint64_t end, uint64_t done)
{
    if (end == UINT64_MAX || end > kPageCount * kPageBytes)
    {
        m_allPagesWriterDone = std::max(m_allPagesWriterDone, done);
        return;
    }
    for (uint64_t page = begin / kPageBytes; page < (end + kPageBytes - 1) / kPageBytes && page < kPageCount; ++page)
        m_pageWriterDone[page] = std::max(m_pageWriterDone[page], done);
}

uint64_t GSThreadedBackend::writersDoneFor(uint64_t begin, uint64_t end) const
{
    uint64_t done = m_allPagesWriterDone;
    const bool unknown = end == UINT64_MAX || end > kPageCount * kPageBytes;
    for (const MarkedRange &range : m_markedRanges)
        if (range.begin != UINT64_MAX && (unknown || range.end == UINT64_MAX || (begin < range.end && range.begin < end)))
            done = std::max(done, range.writerDone);
    if (unknown)
    {
        for (uint64_t page : m_pageWriterDone)
            done = std::max(done, page);
        return done;
    }
    for (uint64_t page = begin / kPageBytes; page < (end + kPageBytes - 1) / kPageBytes && page < kPageCount; ++page)
        done = std::max(done, m_pageWriterDone[page]);
    return done;
}

void GSThreadedBackend::markWritten(const GSRasterBackend *, uint64_t begin, uint64_t end)
{
    const uint64_t done = m_head + 1u; // the command being published
    // Consecutive primitives nearly always target the same buffers.
    for (MarkedRange &range : m_markedRanges)
        if (range.begin == begin && range.end == end)
        {
            range.writerDone = done;
            return;
        }
    MarkedRange &slot = m_markedRanges[m_nextMarkedRange];
    if (slot.begin != UINT64_MAX)
        notePageWriters(slot.begin, slot.end, slot.writerDone);
    slot = {begin, end, done};
    m_nextMarkedRange = (m_nextMarkedRange + 1u) % m_markedRanges.size();
    if (end == UINT64_MAX || end > kPageCount * kPageBytes)
    {
        m_pendingWrites.set();
        return;
    }
    for (uint64_t page = begin / kPageBytes; page < (end + kPageBytes - 1) / kPageBytes && page < kPageCount; ++page)
        m_pendingWrites.set(static_cast<size_t>(page));
}

bool GSThreadedBackend::touchesPending(uint64_t begin, uint64_t end) const
{
    if (m_pendingWrites.none())
        return false;
    if (end == UINT64_MAX || end > kPageCount * kPageBytes)
        return true;
    for (uint64_t page = begin / kPageBytes; page < (end + kPageBytes - 1) / kPageBytes && page < kPageCount; ++page)
        if (m_pendingWrites.test(static_cast<size_t>(page)))
            return true;
    return false;
}

void GSThreadedBackend::workerLoop(unsigned index)
{
    ThreadNaming::SetCurrentThreadName(("GSWorker" + std::to_string(index)).c_str());
    const unsigned count = static_cast<unsigned>(m_workers.size());
    GSCpuBackend::SetThreadBand(index, count);
    Worker &self = *m_workers[index];
    GSCpuBackend &backend = *self.backend;
    uint64_t next = 0;
    for (;;)
    {
        if (m_published.load(std::memory_order_acquire) == next)
        {
            for (unsigned spin = 0; spin < 256 && m_published.load(std::memory_order_acquire) == next; ++spin)
                _mm_pause();
            if (m_published.load(std::memory_order_acquire) == next)
            {
                std::unique_lock<std::mutex> lock(m_mutex);
                s_sleepers.fetch_add(1, std::memory_order_acq_rel);
                while (!m_stop.load() && m_published.load(std::memory_order_acquire) == next)
                    m_wake.wait_for(lock, std::chrono::milliseconds(2));
                s_sleepers.fetch_sub(1, std::memory_order_acq_rel);
                if (m_published.load(std::memory_order_acquire) == next)
                    return; // stopping with nothing left
            }
        }
        Command &c = m_ring[next & (kRingSize - 1)];
        if (c.join || c.primaryOnly)
            waitUntil([&] { return minCompleted() >= next; }, index);
        if (c.primaryOnly)
        {
            if (index == 0)
            {
                GSCpuBackend::SetThreadBand(0, 1);
                execute(backend, c);
                GSCpuBackend::SetThreadBand(0, count);
            }
            else
            {
                waitUntil([&] { return m_workers[0]->completed.load(std::memory_order_acquire) > next; }, index);
                // Worker 0 may have rewritten textures this worker decoded.
                if (c.kind == Kind::Upload || c.kind == Kind::BeginTransfer || c.kind == Kind::WriteVram ||
                    c.kind == Kind::Clear || c.kind == Kind::Submit)
                    backend.InvalidateDecodedTextures();
            }
        }
        else
        {
            execute(backend, c);
        }
        ++next;
        self.completed.store(next, std::memory_order_release);
        notifyProgress();
    }
}

void GSThreadedBackend::execute(GSCpuBackend &backend, Command &c)
{
    switch (c.kind)
    {
    case Kind::Submit:
        backend.Submit(c.batch);
        break;
    case Kind::LoadClut:
        backend.LoadClut(c.tex0, c.texclut);
        break;
    case Kind::BeginTransfer:
        backend.BeginTransfer(c.transfer);
        break;
    case Kind::Upload:
        backend.UploadImage(c.payload.data(), static_cast<uint32_t>(c.payload.size()));
        break;
    case Kind::Flush:
        backend.Flush();
        break;
    case Kind::TextureFlush:
        backend.TextureFlush();
        break;
    case Kind::Clear:
        backend.ClearFramebuffer(c.context, c.values[0]);
        break;
    case Kind::WriteVram:
        backend.WriteVram(c.values[0], c.values[1], c.values[2], c.values[3], c.values[4], c.values[5]);
        break;
    case Kind::Present:
        if (m_vram && m_vramSize)
            queuePresent(c);
        else
        {
            PresentationFrame frame = backend.Present(c.request);
            auto done = std::move(c.done);
            c.done = nullptr;
            if (done)
                done(std::move(frame));
        }
        break;
    }
}

void GSThreadedBackend::Initialize(uint8_t *vram, uint32_t vramSize)
{
    drain();
    for (auto &worker : m_workers)
        worker->backend->Initialize(vram, vramSize);
    m_readback->Initialize(vram, vramSize);
    m_readbackActive = false;
    m_vram = vramSize >= 4u * 1024u * 1024u ? vram : nullptr;
    m_vramSize = m_vram ? vramSize : 0u;
    clearPending();
}

void GSThreadedBackend::Reset()
{
    drain();
    for (auto &worker : m_workers)
        worker->backend->Reset();
    m_readback->Reset();
    m_readbackActive = false;
    clearPending();
    m_lastTransfer = {};
}

void GSThreadedBackend::Submit(const GSPrimitiveBatch &batch)
{
    const GSDrawState &state = batch.state;
    Command &c = beginCommand();
    c.kind = Kind::Submit;
    c.batch = batch;
    if (m_workers.size() > 1u)
    {
        if (state.prim.tme)
        {
            if (!GSCpuBackend::TextureReadOnlyDuringDraw(state))
            {
                // May sample its own output: draw it whole, in pixel order.
                const auto frame = GSCpuBackend::FrameRange(state);
                markWritten(nullptr, frame.begin, frame.end);
                if (!state.context.zbuf.zmask)
                {
                    const auto depth = GSCpuBackend::DepthRange(state);
                    markWritten(nullptr, depth.begin, depth.end);
                }
                publishPrimaryOnly(c);
                return;
            }
            const auto texture = GSCpuBackend::TextureRange(state);
            if (touchesPending(texture.begin, texture.end))
                c.join = true;
        }
        if (c.join)
            clearPending();
        const auto frame = GSCpuBackend::FrameRange(state);
        markWritten(nullptr, frame.begin, frame.end);
        if (!state.context.zbuf.zmask)
        {
            const auto depth = GSCpuBackend::DepthRange(state);
            markWritten(nullptr, depth.begin, depth.end);
        }
        publish();
        return;
    }
    commit(c);
}

void GSThreadedBackend::LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut)
{
    Command &c = beginCommand();
    c.kind = Kind::LoadClut;
    c.tex0 = tex0;
    c.texclut = texclut;
    const auto range = GSCpuBackend::ClutRange(tex0);
    c.join = touchesPending(range.begin, range.end);
    commit(c);
}

void GSThreadedBackend::BeginTransfer(const GSTransferCommand &command)
{
    m_lastTransfer = {};
    m_lastTransfer.direction = command.direction;
    m_lastTransfer.totalPixels = command.trxreg.rrw * command.trxreg.rrh;
    if (command.direction == 1u && m_workers.size() > 1u)
    {
        // Local -> host: wait only for queued writers of the source pages,
        // then read on this thread while the workers keep drawing.
        GSDrawState state{};
        state.context.frame.psm = command.bitbltbuf.spsm;
        state.context.frame.fbp = command.bitbltbuf.sbp / 32u;
        state.context.frame.fbw = std::max<uint32_t>(command.bitbltbuf.sbw, 1u);
        state.context.scissor.x1 = uint32_t(command.trxpos.ssax) + command.trxreg.rrw;
        state.context.scissor.y1 = uint32_t(command.trxpos.ssay) + command.trxreg.rrh;
        auto range = GSCpuBackend::FrameRange(state);
        if (command.bitbltbuf.sbp % 32u != 0u && range.end != UINT64_MAX)
            range.end += 2u * kPageBytes; // base not page aligned
        const uint64_t needed = writersDoneFor(range.begin, range.end);
        if (minCompleted() < needed)
        {
            if (s_sleepers.load(std::memory_order_acquire))
                wakeWorkers();
            waitUntil([&] { return minCompleted() >= needed; }, 0);
        }
        m_readback->BeginTransfer(command);
        m_readbackActive = true;
        // TS_GS_VERIFY_READBACK=1: compare with a readback after a full drain.
        static const bool verify = [] { const char *v = std::getenv("TS_GS_VERIFY_READBACK"); return v && *v == '1'; }();
        if (verify)
        {
            std::vector<uint8_t> early(1u << 20), late(1u << 20);
            const uint32_t earlyBytes = m_readback->ConsumeLocalToHostBytes(early.data(), static_cast<uint32_t>(early.size()));
            drain();
            GSCpuBackend check;
            check.Initialize(m_vram, m_vramSize);
            check.BeginTransfer(command);
            const uint32_t lateBytes = check.ConsumeLocalToHostBytes(late.data(), static_cast<uint32_t>(late.size()));
            static uint64_t checks = 0, mismatches = 0;
            ++checks;
            if (earlyBytes != lateBytes || std::memcmp(early.data(), late.data(), lateBytes) != 0)
                ++mismatches;
            if ((checks & 63u) == 0u || mismatches == 1u)
                std::fprintf(stderr, "[TS:gs-readback-verify] checks=%llu mismatches=%llu bytes=%u\n",
                             static_cast<unsigned long long>(checks), static_cast<unsigned long long>(mismatches), lateBytes);
            m_readback->BeginTransfer(command); // re-arm for the caller
        }
        return;
    }
    m_readbackActive = false;
    Command &c = beginCommand();
    c.kind = Kind::BeginTransfer;
    c.transfer = command;
    // Transfers into local memory: readbacks must wait for them.
    m_allPagesWriterDone = m_head + 1u;
    publishPrimaryOnly(c);
}

void GSThreadedBackend::UploadImage(const uint8_t *data, uint32_t sizeBytes)
{
    Command &c = beginCommand();
    c.kind = Kind::Upload;
    c.payload.assign(data, data + sizeBytes);
    m_allPagesWriterDone = m_head + 1u;
    publishPrimaryOnly(c);
}

void GSThreadedBackend::Flush()
{
    Command &c = beginCommand();
    c.kind = Kind::Flush;
    commit(c);
}

void GSThreadedBackend::TextureFlush()
{
    Command &c = beginCommand();
    c.kind = Kind::TextureFlush;
    commit(c);
}

void GSThreadedBackend::Sync(GSSyncReason reason)
{
    // FINISH and presentation need no wait: every observer of local memory
    // drains the queue itself.
    if (reason == GSSyncReason::Finish || reason == GSSyncReason::Presentation)
        return;
    drain();
    m_workers[0]->backend->Sync(reason);
}

PresentationFrame GSThreadedBackend::Present(const GSPresentationRequest &request)
{
    drain();
    return m_workers[0]->backend->Present(request);
}

bool GSThreadedBackend::PresentAsync(const GSPresentationRequest &request,
                                     std::function<void(PresentationFrame &&)> done)
{
    Command &c = beginCommand();
    c.kind = Kind::Present;
    c.request = request;
    c.done = std::move(done);
    publishPrimaryOnly(c);
    return true;
}

bool GSThreadedBackend::ClearFramebuffer(const GSContext &context, uint32_t rgba)
{
    // Mirrors GSCpuBackend::ClearFramebuffer's failure conditions so the
    // caller's result is known without waiting.
    const uint32_t psm = context.frame.psm;
    if (context.frame.fbw == 0u ||
        !(psm == GS_PSM_CT32 || psm == GS_PSM_CT24 || psm == GS_PSM_CT16 || psm == GS_PSM_CT16S))
        return false;
    Command &c = beginCommand();
    c.kind = Kind::Clear;
    c.context = context;
    c.values[0] = rgba;
    if (m_workers.size() > 1u)
    {
        // Every worker clears its own rows, like a draw.
        GSDrawState state{};
        state.context = context;
        const auto frame = GSCpuBackend::FrameRange(state);
        markWritten(nullptr, frame.begin, frame.end);
        publish();
        return true;
    }
    commit(c);
    return true;
}

uint32_t GSThreadedBackend::ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes)
{
    if (m_readbackActive)
        return m_readback->ConsumeLocalToHostBytes(dst, maxBytes);
    drain();
    return m_workers[0]->backend->ConsumeLocalToHostBytes(dst, maxBytes);
}

uint32_t GSThreadedBackend::ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const
{
    drain();
    return m_workers[0]->backend->ReadVram(psm, base, bw, x, y);
}

void GSThreadedBackend::WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value)
{
    Command &c = beginCommand();
    c.kind = Kind::WriteVram;
    c.values[0] = psm;
    c.values[1] = base;
    c.values[2] = bw;
    c.values[3] = x;
    c.values[4] = y;
    c.values[5] = value;
    m_allPagesWriterDone = m_head + 1u;
    publishPrimaryOnly(c);
}

void GSThreadedBackend::SnapshotVram(std::vector<uint8_t> &out) const
{
    drain();
    m_workers[0]->backend->SnapshotVram(out);
}

GSTransferSnapshot GSThreadedBackend::GetTransferSnapshot() const
{
    // Called for every debug-history event; answering from the producer side
    // keeps it from serializing the threads.
    if (minCompleted() == m_published.load(std::memory_order_acquire))
        return m_workers[0]->backend->GetTransferSnapshot();
    return m_lastTransfer;
}
