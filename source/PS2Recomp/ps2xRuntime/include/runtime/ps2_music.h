#pragma once

#include <array>
#include <cstdint>
#include <mutex>
#include <string>
#include <vector>

// Native streamed-music player for PS2 ADPCM tracks stored as stereo
// interleaved chunks (left chunk, right chunk, ...), as TimeSplitters' .MSC
// files are. Replaces an IOP stream driver: the game's music commands map
// onto open/play/pause/stop/volume, and the host audio thread mixes the
// track (resampled to 48 kHz) into the SPU2 output.
class Ps2Music
{
public:
    // interleave: bytes per channel chunk; sampleRate: source rate in Hz.
    bool open(const std::string &hostPath, uint32_t interleave = 0x8000u, uint32_t sampleRate = 44100u);
    void close();
    void play();  // from the start
    void resume();
    void pause();
    void stop();
    // 0..0x3FFF per channel, as the game's stream driver takes them.
    void setVolume(uint32_t left, uint32_t right);
    bool playing() const;

    // Adds the music to frames of interleaved stereo 16-bit output (48 kHz).
    void mix(int16_t *out, unsigned frames);

private:
    struct Channel
    {
        uint32_t block = 0; // next ADPCM block index within the channel
        int32_t prev1 = 0, prev2 = 0;
        std::array<int16_t, 28> samples{};
        unsigned index = 28; // 28: decode the next block first
        int32_t last = 0, current = 0;
    };

    int16_t nextSample(Channel &channel);
    void rewind();

    mutable std::mutex m_mutex;
    std::vector<uint8_t> m_data;
    uint32_t m_interleave = 0x8000u;
    uint32_t m_step = 0; // source samples per output sample, 16.16
    uint32_t m_phase = 0;
    std::array<Channel, 2> m_channels{};
    bool m_playing = false;
    int32_t m_volumeL = 0x3FFF, m_volumeR = 0x3FFF;
};
