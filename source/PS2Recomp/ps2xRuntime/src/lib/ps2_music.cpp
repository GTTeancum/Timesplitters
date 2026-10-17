#include "runtime/ps2_music.h"
#include "runtime/ps2_spu_gauss.h"

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <fstream>

// TS_MUSIC_STREAMED 1: the track stays on the disc and is read a range at a
// time (the Xbox's 64 MB has no room for a 9-14 MB track); 0: the whole file
// is loaded at open. The Xbox default; on the host the streamed path builds
// behind this switch (with a std::thread loader).
#ifndef TS_MUSIC_STREAMED
#if defined(PLATFORM_XBOX)
#define TS_MUSIC_STREAMED 1
#else
#define TS_MUSIC_STREAMED 0
#endif
#endif
// TS_MUSIC_LOADER 1 (src/xbox/PUSH-BC-PLAN.md section 3.5 item 8, M4.4): a
// loader thread reads the next range ahead of the mix, so the audio feeder
// (TIME_CRITICAL) does not wait for the drive; a range not there in time is
// read by the mix itself, as before. The bytes are the same either way.
// 0: every range is read by the mix when it needs it, as before.
#ifndef TS_MUSIC_LOADER
#define TS_MUSIC_LOADER 1
#endif
// TS_MUSIC_SELFCHECK 1: one block in TS_MUSIC_SELFCHECK_EVERY taken from a
// range is read again straight from the file and compared (musicdiff=).
#ifndef TS_MUSIC_SELFCHECK
#define TS_MUSIC_SELFCHECK 0
#endif
#ifndef TS_MUSIC_SELFCHECK_EVERY
#define TS_MUSIC_SELFCHECK_EVERY 64
#endif
// The loader thread's stack (TS_STACK_PAINT=1 reports its deepest use).
#ifndef TS_MUSIC_LOADER_STACK
#define TS_MUSIC_LOADER_STACK 0x4000
#endif

#if TS_MUSIC_STREAMED && TS_MUSIC_LOADER
#include <mutex>
#if defined(PLATFORM_XBOX)
#include <windows.h>
void *xboxThreadStart(uint32_t stackBytes, void (*entry)(void *), void *arg); // src/xbox/xbox_stacks.cpp
#else
#include <condition_variable>
#include <thread>
#endif
#endif

#if defined(PLATFORM_XBOX)
unsigned long long g_musicMixCycles = 0, g_musicDiscCycles = 0, g_musicLoaderCycles = 0;
unsigned g_musicSyncReads = 0, g_musicLoaderReads = 0, g_musicChecks = 0, g_musicDiffs = 0;
#define TS_MUSIC_COUNT(expr) (expr)
#else
#define TS_MUSIC_COUNT(expr) ((void)0)
#endif

namespace
{
    constexpr int32_t kFilter0[5] = {0, 60, 115, 98, 122};
    constexpr int32_t kFilter1[5] = {0, 0, -52, -55, -60};
    constexpr uint32_t kOutputRate = 48000u;

    // The envelope level of the stream driver's voices while they play.
    // STREAM.IRX sets ADSR 0x000F/0x1FC0: attack (rate 0) to 0x7FFF in three
    // samples, then one decay step (rate 0, exponential) to 0x3FFF, which is
    // already below the sustain level, and a sustain that never moves. The
    // SPU2 voice model goes through the same steps for the same registers.
    constexpr int32_t kDriverEnvelope = 0x3FFF;

    // The SPU2 pitch for a source rate, truncated as the driver's constant
    // is: 44.1 kHz gives 0xEB3, the pitch STREAM.IRX sets on its voices.
    uint32_t pitchFor(uint32_t sampleRate)
    {
        return std::min<uint32_t>(static_cast<uint32_t>((static_cast<uint64_t>(sampleRate) << 12) / kOutputRate), 0x3FFFu);
    }

#if TS_MUSIC_STREAMED
    // The track is read in ranges: a channel's chunk in halves ((interleave
    // / 2) & ~15 bytes; a whole chunk when the interleave is under 64), one
    // range in use and the next read ahead, per channel. m_data holds the
    // four ranges. The player has a single instance, so the file state lives
    // here rather than in the class.
    //
    // Locks: Ps2Music::m_mutex (the player) before g_fileMutex (the FILE*,
    // held across a read) before g_loadMutex (the ranges' bookkeeping, held
    // briefly); the mix never holds g_loadMutex while it takes g_fileMutex.
    enum RangeState : uint8_t { kRangeEmpty, kRangeRequested, kRangeLoading, kRangeReady };
    struct Range
    {
        uint64_t start = 0;   // file offset
        uint32_t bytes = 0;
        uint32_t generation = 0; // the track's at the request
        uint8_t state = kRangeEmpty;
        uint8_t *data = nullptr; // in m_data
    };
    struct StreamedTrack
    {
        std::FILE *file = nullptr;
        uint64_t size = 0;
        uint32_t generation = 0; // moves at every open and close
        uint32_t rangeBytes = 0;
        Range ranges[2][2];      // per channel
        // The range each channel reads now (the mix's view; only the mix
        // and open/close change it, both under the player's lock).
        const uint8_t *current[2] = {nullptr, nullptr};
        uint64_t currentStart[2] = {0, 0};
        uint32_t currentBytes[2] = {0, 0};
        unsigned currentSlot[2] = {0, 0};
    } g_track;
#if TS_MUSIC_LOADER
    std::mutex g_fileMutex, g_loadMutex;
#endif

    // Reads a range at its file offset (g_fileMutex held, with a loader);
    // the time goes to the mix's disc cycles, or the loader's.
    bool readRange(std::FILE *file, uint64_t start, uint8_t *data, uint32_t bytes, bool loader = false)
    {
        if (!file)
            return false;
#if defined(PLATFORM_XBOX)
        const unsigned long long begin = __builtin_ia32_rdtsc();
#endif
        const bool read = std::fseek(file, static_cast<long>(start), SEEK_SET) == 0 &&
                          std::fread(data, 1u, bytes, file) == bytes;
#if defined(PLATFORM_XBOX)
        (loader ? g_musicLoaderCycles : g_musicDiscCycles) += __builtin_ia32_rdtsc() - begin;
#else
        (void)loader;
#endif
        return read;
    }

#if TS_MUSIC_LOADER
    // The loader thread: reads the requested ranges, one at a time, ahead
    // of the mix.
#if defined(PLATFORM_XBOX)
    HANDLE g_loaderWake = nullptr;
    void wakeLoader() { ReleaseSemaphore(g_loaderWake, 1, nullptr); }
    void waitLoader()
    {
        // A failed wait must not spin above the game's priority.
        if (WaitForSingleObject(g_loaderWake, INFINITE) != WAIT_OBJECT_0)
            Sleep(10);
    }
#else
    std::mutex g_wakeMutex;
    std::condition_variable g_wakeCondition;
    unsigned g_wakeCount = 0;
    void wakeLoader()
    {
        {
            std::lock_guard<std::mutex> lock(g_wakeMutex);
            ++g_wakeCount;
        }
        g_wakeCondition.notify_one();
    }
    void waitLoader()
    {
        std::unique_lock<std::mutex> lock(g_wakeMutex);
        g_wakeCondition.wait(lock, [] { return g_wakeCount != 0u; });
        --g_wakeCount;
    }
#endif

    void loaderMain(void *)
    {
        for (;;)
        {
            waitLoader();
            for (;;)
            {
                std::lock_guard<std::mutex> file(g_fileMutex);
                Range *range = nullptr;
                uint64_t start = 0;
                uint32_t bytes = 0, generation = 0;
                uint8_t *data = nullptr;
                {
                    std::lock_guard<std::mutex> load(g_loadMutex);
                    for (auto &channel : g_track.ranges)
                        for (Range &r : channel)
                            if (!range && r.state == kRangeRequested)
                                range = &r;
                    if (!range)
                        break;
                    range->state = kRangeLoading;
                    start = range->start;
                    bytes = range->bytes;
                    generation = range->generation;
                    data = range->data;
                }
                // A request from before an open or close is dropped (the
                // track's generation moved, under g_fileMutex, which this
                // read holds).
                const bool read = generation == g_track.generation && readRange(g_track.file, start, data, bytes, true);
                TS_MUSIC_COUNT(++g_musicLoaderReads);
                std::lock_guard<std::mutex> load(g_loadMutex);
                if (range->state == kRangeLoading && range->generation == generation && range->start == start)
                    range->state = read ? kRangeReady : kRangeEmpty;
            }
        }
    }

    void startLoader()
    {
        static bool s_started = false;
        if (s_started)
            return;
        s_started = true;
#if defined(PLATFORM_XBOX)
        g_loaderWake = CreateSemaphore(nullptr, 0, 0x7FFFFFFF, nullptr);
        if (HANDLE thread = g_loaderWake ? static_cast<HANDLE>(xboxThreadStart(TS_MUSIC_LOADER_STACK, &loaderMain, nullptr))
                                         : nullptr)
        {
            // Above the game: it only wakes for a request, and handing the
            // drive the read at once keeps the mix from catching it up.
            SetThreadPriority(thread, THREAD_PRIORITY_ABOVE_NORMAL);
            CloseHandle(thread);
        }
#else
        std::thread(&loaderMain, nullptr).detach();
#endif
    }
#endif

    void clearRanges(uint8_t *data, uint32_t rangeBytes)
    {
        for (unsigned c = 0; c < 2; ++c)
        {
            for (unsigned s = 0; s < 2; ++s)
            {
                Range &r = g_track.ranges[c][s];
                r = Range{};
                r.data = data + (c * 2u + s) * rangeBytes;
            }
            g_track.current[c] = nullptr;
            g_track.currentBytes[c] = 0;
        }
    }

    void closeTrackFile()
    {
        std::FILE *old = nullptr;
        {
#if TS_MUSIC_LOADER
            std::lock_guard<std::mutex> file(g_fileMutex);
            std::lock_guard<std::mutex> load(g_loadMutex);
#endif
            old = g_track.file;
            g_track.file = nullptr;
            g_track.size = 0;
            ++g_track.generation;
            clearRanges(nullptr, 0);
        }
        if (old)
            std::fclose(old);
    }
#endif
}

bool Ps2Music::open(const std::string &hostPath, uint32_t interleave, uint32_t sampleRate)
{
#if TS_MUSIC_STREAMED
    std::FILE *file = std::fopen(hostPath.c_str(), "rb");
    if (!file)
        return false;
    std::fseek(file, 0, SEEK_END);
    const long size = std::ftell(file);
    if (size < 0 || static_cast<uint64_t>(size) < 2u * interleave)
    {
        std::fclose(file);
        return false;
    }
#if TS_MUSIC_LOADER
    startLoader();
#endif
    std::FILE *old = nullptr;
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        m_interleave = std::max<uint32_t>(interleave & ~15u, 16u);
        // Ranges: half a chunk, a whole one under 64 bytes of interleave.
        const uint32_t rangeBytes = m_interleave < 64u ? m_interleave : (m_interleave / 2u) & ~15u;
        {
#if TS_MUSIC_LOADER
            // A read in progress ends first (it holds g_fileMutex and reads
            // into m_data); one asked for before this sees the generation
            // moved and reads nothing.
            std::lock_guard<std::mutex> fileLock(g_fileMutex);
            std::lock_guard<std::mutex> load(g_loadMutex);
#endif
            old = g_track.file;
            g_track.file = file;
            g_track.size = static_cast<uint64_t>(size);
            ++g_track.generation;
            g_track.rangeBytes = rangeBytes;
            m_data.assign(4u * rangeBytes, 0u);
            clearRanges(m_data.data(), rangeBytes);
        }
        m_pitch = pitchFor(sampleRate);
        m_playing = false;
        rewind();
    }
    if (old)
        std::fclose(old);
    return true;
#else
    std::ifstream file(hostPath, std::ios::binary);
    if (!file)
        return false;
    std::vector<uint8_t> data((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    if (data.size() < 2u * interleave)
        return false;
    std::lock_guard<std::mutex> lock(m_mutex);
    m_data = std::move(data);
    m_interleave = std::max<uint32_t>(interleave & ~15u, 16u);
    m_pitch = pitchFor(sampleRate);
    m_playing = false;
    rewind();
    return true;
#endif
}

void Ps2Music::close()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_playing = false;
#if TS_MUSIC_STREAMED
    closeTrackFile();
#endif
    m_data.clear();
}

void Ps2Music::rewind()
{
    for (Channel &c : m_channels)
        c = Channel{};
    m_counter = 0;
#if TS_MUSIC_STREAMED
    // Block 0's ranges first, read ahead now (play starts there).
    for (unsigned ch = 0; ch < 2; ++ch)
        prefetchBlock(ch, 0u);
#endif
}

void Ps2Music::play()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    rewind();
    m_playing = !m_data.empty();
}

void Ps2Music::resume()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_playing = !m_data.empty();
}

void Ps2Music::pause()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_playing = false;
}

void Ps2Music::stop()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_playing = false;
    rewind();
}

void Ps2Music::setVolume(uint32_t left, uint32_t right)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_volumeL = static_cast<int32_t>(std::min<uint32_t>(left, 0x3FFFu));
    m_volumeR = static_cast<int32_t>(std::min<uint32_t>(right, 0x3FFFu));
}

bool Ps2Music::playing() const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_playing;
}

// The file offset of a channel's block (the track loops at its end: a block
// past it is block 0); `wrapped`: it was.
uint64_t Ps2Music::blockOffset(unsigned channel, uint32_t block, uint64_t trackSize, bool &wrapped) const
{
    const uint32_t blocksPerChunk = m_interleave / 16u;
    const uint64_t offset = static_cast<uint64_t>(block / blocksPerChunk) * 2u * m_interleave +
                            channel * m_interleave + (block % blocksPerChunk) * 16u;
    wrapped = offset + 16u > trackSize;
    return wrapped ? channel * m_interleave : offset;
}

#if TS_MUSIC_STREAMED
// The range holding the block at this file offset: its start and length
// (within the channel's chunk and the file).
static void rangeOf(uint64_t offset, uint32_t interleave, uint32_t rangeBytes, uint64_t trackSize, uint64_t &start,
                    uint32_t &bytes)
{
    const uint64_t chunkStart = offset - offset % interleave; // chunks are interleave-aligned
    const uint64_t k = (offset - chunkStart) / rangeBytes;
    start = chunkStart + k * rangeBytes;
    bytes = static_cast<uint32_t>(std::min<uint64_t>(std::min<uint64_t>(rangeBytes, interleave - k * rangeBytes),
                                                     trackSize - start));
}

// Asks the loader for the range holding a channel's block, into the slot the
// channel does not read now (nothing when it is there or on its way).
void Ps2Music::prefetchBlock(unsigned channel, uint32_t block)
{
#if TS_MUSIC_LOADER
    if (!g_track.file || g_track.rangeBytes == 0u)
        return;
    bool wrapped = false;
    const uint64_t offset = blockOffset(channel, block, g_track.size, wrapped);
    uint64_t start = 0;
    uint32_t bytes = 0;
    rangeOf(offset, m_interleave, g_track.rangeBytes, g_track.size, start, bytes);
    bool wake = false;
    {
        std::lock_guard<std::mutex> load(g_loadMutex);
        Range *target = nullptr;
        for (unsigned s = 0; s < 2; ++s)
        {
            Range &r = g_track.ranges[channel][s];
            if (r.state != kRangeEmpty && r.start == start && r.generation == g_track.generation)
                return; // there, or on its way
        }
        for (unsigned s = 0; s < 2 && !target; ++s)
        {
            Range &r = g_track.ranges[channel][s];
            const bool inUse = g_track.current[channel] && s == g_track.currentSlot[channel];
            if (!inUse && r.state != kRangeLoading)
                target = &r;
        }
        if (target)
        {
            target->start = start;
            target->bytes = bytes;
            target->generation = g_track.generation;
            target->state = kRangeRequested;
            wake = true;
        }
    }
    if (wake)
        wakeLoader();
#else
    (void)channel;
    (void)block;
#endif
}

// The 16 bytes of a channel's block at this file offset, from the range
// holding it: the one in use, else the one read ahead, else read now.
const uint8_t *Ps2Music::streamedBlock(unsigned channel, uint64_t offset)
{
    if (g_track.current[channel] && offset >= g_track.currentStart[channel] &&
        offset + 16u <= g_track.currentStart[channel] + g_track.currentBytes[channel])
        return g_track.current[channel] + (offset - g_track.currentStart[channel]);
    uint64_t start = 0;
    uint32_t bytes = 0;
    rangeOf(offset, m_interleave, g_track.rangeBytes, g_track.size, start, bytes);
    unsigned slot = 2u;
#if TS_MUSIC_LOADER
    for (int attempt = 0; attempt < 2 && slot == 2u; ++attempt)
    {
        bool loading = false;
        {
            std::lock_guard<std::mutex> load(g_loadMutex);
            for (unsigned s = 0; s < 2; ++s)
            {
                const Range &r = g_track.ranges[channel][s];
                if (r.start == start && r.generation == g_track.generation)
                {
                    if (r.state == kRangeReady)
                        slot = s;
                    else if (r.state == kRangeLoading)
                        loading = true;
                }
            }
        }
        if (slot != 2u || !loading)
            break;
        // On its way: the loader holds g_fileMutex until it has marked it.
        std::lock_guard<std::mutex> file(g_fileMutex);
    }
    if (slot == 2u)
    {
        // Not read ahead (or the read failed): read it now, into the slot
        // the channel is leaving (never one the loader is filling).
        {
            std::lock_guard<std::mutex> load(g_loadMutex);
            for (unsigned s = 0; s < 2 && slot == 2u; ++s)
                if (g_track.ranges[channel][s].state != kRangeLoading)
                    slot = s;
            if (slot == 2u)
                slot = 0u; // (cannot happen: one request per channel at a time)
            Range &r = g_track.ranges[channel][slot];
            r.start = start;
            r.bytes = bytes;
            r.generation = g_track.generation;
            r.state = kRangeLoading;
        }
        std::lock_guard<std::mutex> file(g_fileMutex);
        Range &r = g_track.ranges[channel][slot];
        const bool read = readRange(g_track.file, start, r.data, bytes);
        if (!read)
            std::memset(r.data, 0, bytes);
        TS_MUSIC_COUNT(++g_musicSyncReads);
        std::lock_guard<std::mutex> load(g_loadMutex);
        r.state = kRangeReady;
    }
#else
    // Every range read when the mix comes to it, alternating slots.
    slot = g_track.current[channel] ? g_track.currentSlot[channel] ^ 1u : 0u;
    {
        Range &r = g_track.ranges[channel][slot];
        if (!readRange(g_track.file, start, r.data, bytes))
            std::memset(r.data, 0, bytes);
        r.start = start;
        r.bytes = bytes;
        r.generation = g_track.generation;
        r.state = kRangeReady;
        TS_MUSIC_COUNT(++g_musicSyncReads);
    }
#endif
    const Range &r = g_track.ranges[channel][slot];
    g_track.current[channel] = r.data;
    g_track.currentStart[channel] = start;
    g_track.currentBytes[channel] = bytes;
    g_track.currentSlot[channel] = slot;
    // The next range, read ahead: the block after this range's last.
    const uint32_t blocksPerChunk = m_interleave / 16u;
    const uint64_t chunkStart = start - start % m_interleave;
    const uint32_t lastInChunk = static_cast<uint32_t>((start + bytes - 16u - chunkStart) / 16u);
    const uint32_t pair = static_cast<uint32_t>(chunkStart / (2ull * m_interleave));
    prefetchBlock(channel, pair * blocksPerChunk + lastInChunk + 1u);
    return r.data + (offset - start);
}
#endif

// Decodes the channel's next block after the last three samples of the
// previous one; the track loops at its end.
void Ps2Music::decodeBlock(Channel &c)
{
    std::copy(c.samples.end() - 3, c.samples.end(), c.samples.begin());
    const unsigned channel = &c == &m_channels[1] ? 1u : 0u;
#if TS_MUSIC_STREAMED
    const uint64_t trackSize = g_track.size;
#else
    const uint64_t trackSize = m_data.size();
#endif
    bool wrapped = false;
    const uint64_t offset = blockOffset(channel, c.block, trackSize, wrapped);
    if (wrapped)
    {
        c.block = 0;
        c.prev1 = c.prev2 = 0;
    }
#if TS_MUSIC_STREAMED
    const uint8_t *block = streamedBlock(channel, offset);
#if TS_MUSIC_SELFCHECK
    static uint32_t s_blocks = 0;
    if ((s_blocks++ % static_cast<uint32_t>(TS_MUSIC_SELFCHECK_EVERY)) == 0u)
    {
        uint8_t direct[16] = {};
        bool read;
        {
#if TS_MUSIC_LOADER
            std::lock_guard<std::mutex> file(g_fileMutex);
#endif
            read = readRange(g_track.file, offset, direct, 16u);
        }
        TS_MUSIC_COUNT(++g_musicChecks);
        if (read && std::memcmp(direct, block, 16u) != 0)
        {
            TS_MUSIC_COUNT(++g_musicDiffs);
            static unsigned s_logged = 0;
            if (s_logged++ < 8u)
                std::fprintf(stderr, "[TS:musiccheck] channel %u block %u at %llu differs from the file\n", channel,
                             c.block, static_cast<unsigned long long>(offset));
        }
    }
#endif
#else
    const uint8_t *block = m_data.data() + offset;
#endif
    int shift = block[0] & 0x0F;
    if (shift > 12)
        shift = 9;
    const unsigned filter = std::min<unsigned>((block[0] >> 4) & 7u, 4u);
    for (unsigned i = 0; i < 28; ++i)
    {
        const uint8_t byte = block[2 + i / 2];
        const int32_t nibble = (i & 1u) ? (byte >> 4) : (byte & 0x0F);
        int32_t sample = static_cast<int16_t>(static_cast<uint16_t>(nibble << 12)) >> shift;
        sample += (c.prev1 * kFilter0[filter] + c.prev2 * kFilter1[filter] + 32) >> 6;
        sample = std::clamp(sample, -32768, 32767);
        c.prev2 = c.prev1;
        c.prev1 = sample;
        c.samples[3 + i] = static_cast<int16_t>(sample);
    }
    ++c.block;
}

void Ps2Music::mix(int16_t *out, unsigned frames)
{
#if defined(PLATFORM_XBOX)
    struct Timer // g_musicMixCycles: all of mix(), the lock wait included
    {
        const unsigned long long start = __builtin_ia32_rdtsc();
        ~Timer() { g_musicMixCycles += __builtin_ia32_rdtsc() - start; }
    } timer;
#endif
    std::lock_guard<std::mutex> lock(m_mutex);
    if (!m_playing || m_data.empty())
        return;
    for (unsigned f = 0; f < frames; ++f)
    {
        // Both channels play on voices keyed on together at one pitch, so
        // they share the play position.
        const uint32_t phase = (m_counter >> 4) & 0xFFu;
        for (unsigned ch = 0; ch < 2; ++ch)
        {
            Channel &c = m_channels[ch];
            if (c.index >= 28u)
            {
                decodeBlock(c);
                c.index -= 28u;
            }
            const int32_t sample = ps2_spu::gaussInterpolate(&c.samples[c.index], phase);
            // Then the voice's envelope and its volume register, which the
            // driver sets to the game's value; the register holds the gain
            // halved (0x3FFF plays at x0.99994).
            const int32_t voice = (sample * kDriverEnvelope) >> 15;
            const int32_t volume = (ch == 0 ? m_volumeL : m_volumeR) << 1;
            const int32_t scaled = (voice * volume) >> 15;
            out[f * 2 + ch] = static_cast<int16_t>(std::clamp(out[f * 2 + ch] + scaled, -32768, 32767));
        }
        m_counter += m_pitch;
        const unsigned advance = m_counter >> 12;
        m_counter &= 0xFFFu;
        m_channels[0].index += advance;
        m_channels[1].index += advance;
    }
}
