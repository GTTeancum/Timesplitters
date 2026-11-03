#include "runtime/ps2_music.h"
#include "runtime/ps2_spu_gauss.h"

#include <algorithm>
#include <cstdio>
#include <fstream>

#if defined(PLATFORM_XBOX)
unsigned long long g_musicMixCycles = 0, g_musicDiscCycles = 0;
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

#if defined(PLATFORM_XBOX)
    // 64 MB: tracks (9-14 MB) are streamed from the disc instead of loaded.
    // m_data then holds one chunk pair (left + right chunk); the player has a
    // single instance, so the file state lives here rather than in the class.
    struct StreamedTrack
    {
        std::FILE *file = nullptr;
        uint64_t size = 0;
        uint64_t loadedPair = ~0ull;
    } g_track;

    void closeTrack()
    {
        if (g_track.file)
            std::fclose(g_track.file);
        g_track = StreamedTrack{};
    }
#endif
}

bool Ps2Music::open(const std::string &hostPath, uint32_t interleave, uint32_t sampleRate)
{
#if defined(PLATFORM_XBOX)
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
    std::lock_guard<std::mutex> lock(m_mutex);
    closeTrack();
    g_track.file = file;
    g_track.size = static_cast<uint64_t>(size);
    m_interleave = std::max<uint32_t>(interleave & ~15u, 16u);
    m_data.assign(2u * m_interleave, 0u);
    m_pitch = pitchFor(sampleRate);
    m_playing = false;
    rewind();
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
    m_data.clear();
#if defined(PLATFORM_XBOX)
    closeTrack();
#endif
}

void Ps2Music::rewind()
{
    for (Channel &c : m_channels)
        c = Channel{};
    m_counter = 0;
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

// Decodes the channel's next block after the last three samples of the
// previous one; the track loops at its end.
void Ps2Music::decodeBlock(Channel &c)
{
    std::copy(c.samples.end() - 3, c.samples.end(), c.samples.begin());
    const unsigned channel = &c == &m_channels[1] ? 1u : 0u;
    const uint32_t blocksPerChunk = m_interleave / 16u;
    uint64_t offset = static_cast<uint64_t>(c.block / blocksPerChunk) * 2u * m_interleave +
                      channel * m_interleave + (c.block % blocksPerChunk) * 16u;
#if defined(PLATFORM_XBOX)
    const uint64_t trackSize = g_track.size;
#else
    const uint64_t trackSize = m_data.size();
#endif
    if (offset + 16u > trackSize)
    {
        c.block = 0;
        c.prev1 = c.prev2 = 0;
        offset = channel * m_interleave;
    }
#if defined(PLATFORM_XBOX)
    const uint64_t pairBytes = 2ull * m_interleave;
    const uint64_t pair = offset / pairBytes;
    if (pair != g_track.loadedPair && g_track.file)
    {
        std::fill(m_data.begin(), m_data.end(), 0u);
        const unsigned long long start = __builtin_ia32_rdtsc();
        std::fseek(g_track.file, static_cast<long>(pair * pairBytes), SEEK_SET);
        std::fread(m_data.data(), 1u, m_data.size(), g_track.file);
        g_musicDiscCycles += __builtin_ia32_rdtsc() - start;
        g_track.loadedPair = pair;
    }
    offset -= pair * pairBytes;
#endif
    const uint8_t *block = m_data.data() + offset;
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
