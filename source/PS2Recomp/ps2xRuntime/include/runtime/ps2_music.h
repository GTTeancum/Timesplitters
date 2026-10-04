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
// track into the SPU2 output as the driver's voices play it on the PS2:
// resampled to 48 kHz by the SPU2 pitch counter (pitch 0xEB3) and Gaussian
// interpolation, at the voices' envelope level and volume.
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
        // The last three samples of the previous block, then the current
        // block's 28 (the Gaussian interpolation reads four at a time).
        std::array<int16_t, 3 + 28> samples{};
        unsigned index = 28; // current sample within the block; 28: decode the next block first
    };

    void decodeBlock(Channel &channel);
    void rewind();

    mutable std::mutex m_mutex;
    std::vector<uint8_t> m_data;
    uint32_t m_interleave = 0x8000u;
    uint32_t m_pitch = 0;   // SPU2 voice pitch: source samples per output sample, 4.12
    uint32_t m_counter = 0; // fraction of the play position, 12 bits
    std::array<Channel, 2> m_channels{};
    bool m_playing = false;
    int32_t m_volumeL = 0x3FFF, m_volumeR = 0x3FFF;
};
