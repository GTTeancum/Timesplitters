#include "MiniTest.h"
#include "runtime/ps2_music.h"
#include "runtime/ps2_spu2.h"
#include "runtime/ps2_spu_gauss.h"

#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <filesystem>
#include <string>
#include <vector>

// The SPU2 voice and the native music player against a straightforward model
// of the hardware: decode the whole ADPCM stream (with its loop) up front,
// then read four samples ending at the pitch counter's position, zeros before
// the key-on, through the documented Gaussian formula.
namespace
{
    constexpr uint32_t kRamBytes = 2u * 1024u * 1024u;
    constexpr uint32_t kSampleBase = 0x1000u;

    // Filter 0, shift 0: every sample is its nibble << 12, independent of the
    // previous block, so the expected stream is known exactly.
    void writeBlock(uint8_t *block, uint8_t flags, uint32_t seed)
    {
        block[0] = 0x00;
        block[1] = flags;
        for (unsigned i = 0; i < 14; ++i)
        {
            seed = seed * 1103515245u + 12345u;
            block[2 + i] = static_cast<uint8_t>(seed >> 16);
        }
    }

    std::vector<int16_t> decodeBlock(const uint8_t *block)
    {
        std::vector<int16_t> samples;
        for (unsigned i = 0; i < 28; ++i)
        {
            const uint8_t byte = block[2 + i / 2];
            const unsigned nibble = (i & 1u) ? (byte >> 4) : (byte & 0x0Fu);
            samples.push_back(static_cast<int16_t>(static_cast<uint16_t>(nibble << 12)));
        }
        return samples;
    }

    int32_t gaussReference(int32_t oldest, int32_t older, int32_t old, int32_t current, uint32_t i)
    {
        using ps2_spu::kGauss;
        return ((kGauss[0x0FF - i] * oldest) >> 15) + ((kGauss[0x1FF - i] * older) >> 15) +
               ((kGauss[0x100 + i] * old) >> 15) + ((kGauss[i] * current) >> 15);
    }

    // Sample n of a stream that plays `intro` once and then `loop` forever;
    // silence before the start.
    int32_t streamSample(const std::vector<int16_t> &intro, const std::vector<int16_t> &loop, int64_t n)
    {
        if (n < 0)
            return 0;
        if (n < static_cast<int64_t>(intro.size()))
            return intro[static_cast<size_t>(n)];
        return loop[static_cast<size_t>((n - static_cast<int64_t>(intro.size())) % static_cast<int64_t>(loop.size()))];
    }

    int16_t clamp16(int32_t value)
    {
        return static_cast<int16_t>(std::clamp(value, -32768, 32767));
    }

    // libsd entries: id << 8 | voice << 1 | core.
    uint32_t entry(unsigned id, unsigned voice = 0, unsigned core = 0)
    {
        return (id << 8) | (voice << 1) | core;
    }

    struct VoiceFixture
    {
        std::vector<uint8_t> ram = std::vector<uint8_t>(kRamBytes, 0u);
        std::vector<int16_t> intro, loop;
        Spu2 spu{ram.data()};
        uint64_t tick = 0; // output frames since the key-on

        // Four blocks: the first plays once, the loop flag on the second and
        // the end+repeat flags on the last make blocks 1..3 repeat.
        explicit VoiceFixture(uint32_t pitch)
        {
            const uint8_t flags[4] = {0x00, 0x04, 0x00, 0x03};
            for (unsigned b = 0; b < 4; ++b)
            {
                uint8_t *block = ram.data() + kSampleBase + 16u * b;
                writeBlock(block, flags[b], 0x9E3779B9u * (b + 1));
                const std::vector<int16_t> samples = decodeBlock(block);
                (b == 0 ? intro : loop).insert((b == 0 ? intro : loop).end(), samples.begin(), samples.end());
            }
            for (unsigned core = 0; core < 2; ++core)
            {
                spu.setParam(entry(0x09, 0, core), 0x3FFF); // MVOLL: 0x7FFE
                spu.setParam(entry(0x0A, 0, core), 0x3FFF);
            }
            spu.setParam(entry(0x00), 0x3FFF); // VOLL
            spu.setParam(entry(0x01), 0x3FFF); // VOLR
            spu.setParam(entry(0x02), pitch);
            spu.setParam(entry(0x03), 0x000F); // ADSR as the game's music driver sets it
            spu.setParam(entry(0x04), 0x1FC0);
            spu.setAddr(entry(0x20), kSampleBase); // SSA
        }

        void keyOn()
        {
            spu.setSwitch(entry(0x15), 1u);
            tick = 0;
        }

        // The core 0 voice through its volume, core 0's and core 1's master
        // volumes (core 0's output is core 1's input).
        static int16_t expectedOutput(int32_t interpolated, int32_t level)
        {
            const int32_t voice = static_cast<int16_t>((interpolated * level) >> 15);
            const int32_t core0 = (clamp16((voice * 0x7FFE) >> 15) * 0x7FFE) >> 15;
            return clamp16((clamp16(core0) * 0x7FFE) >> 15);
        }

        // Mixes `ticks` frames one at a time and checks each against the
        // model. The envelope level each tick used is read back after it,
        // unless the caller knows it (a voice that stops reads back 0).
        bool matches(unsigned ticks, uint32_t pitch, std::string &failure, int32_t knownLevel = -1)
        {
            const uint64_t step = std::min<uint32_t>(pitch, 0x3FFFu);
            for (unsigned end = static_cast<unsigned>(tick) + ticks; tick < end; ++tick)
            {
                int16_t out[2] = {0, 0};
                spu.mix(out, 1);
                const int32_t level = knownLevel >= 0 ? knownLevel : static_cast<int32_t>(spu.getParam(entry(0x05)));
                const uint64_t position = step * tick;
                const int64_t n = static_cast<int64_t>(position >> 12);
                const uint32_t phase = static_cast<uint32_t>(position >> 4) & 0xFFu;
                const int32_t interpolated =
                    gaussReference(streamSample(intro, loop, n - 3), streamSample(intro, loop, n - 2),
                                   streamSample(intro, loop, n - 1), streamSample(intro, loop, n), phase);
                const int16_t expected = expectedOutput(interpolated, level);
                if (out[0] != expected || out[1] != expected)
                {
                    failure = "pitch " + std::to_string(pitch) + " tick " + std::to_string(tick) + ": got " +
                              std::to_string(out[0]) + "/" + std::to_string(out[1]) + ", expected " +
                              std::to_string(expected);
                    return false;
                }
            }
            return true;
        }
    };
}

void register_ps2_spu2_tests()
{
    MiniTest::Case("PS2Spu2", [](TestCase &tc)
    {
        tc.Run("voice interpolates like the hardware across blocks and loops", [](TestCase &t)
        {
            // 1:1, the music's 44.1 kHz, half and double speed, a fast
            // fractional step, the maximum step, and a pitch the hardware
            // clamps to it.
            for (const uint32_t pitch : {0x1000u, 0x0EB3u, 0x0800u, 0x2000u, 0x2E8Bu, 0x3FFFu, 0x5000u})
            {
                VoiceFixture fixture(pitch);
                fixture.keyOn();
                std::string failure;
                t.IsTrue(fixture.matches(600, pitch, failure), failure);
            }
        });

        tc.Run("key-on interpolates from silence, not the previous note", [](TestCase &t)
        {
            VoiceFixture fixture(0x1234u);
            fixture.keyOn();
            int16_t scratch[2 * 77];
            fixture.spu.mix(scratch, 77);
            fixture.keyOn();
            std::string failure;
            t.IsTrue(fixture.matches(200, 0x1234u, failure), failure);
        });

        tc.Run("a voice's last tick before its end block still sounds", [](TestCase &t)
        {
            VoiceFixture fixture(0x1000u);
            fixture.ram[kSampleBase + 1] = 0x01; // end, no repeat: stops after block 0
            fixture.keyOn();
            std::string failure;
            t.IsTrue(fixture.matches(27, 0x1000u, failure), failure);
            // The sustain level holds (rate 0x7F), so the last tick's level
            // is the one before it.
            const int32_t level = static_cast<int32_t>(fixture.spu.getParam(entry(0x05)));
            t.IsTrue(level > 0, "voice still sounding before its last tick");
            t.IsTrue(fixture.matches(1, 0x1000u, failure, level), failure);
            t.Equals(fixture.spu.getSwitch(entry(0x17)) & 1u, 1u, "ENDX set at the end block");
            int16_t out[2] = {1, 1};
            fixture.spu.mix(out, 1);
            t.IsTrue(out[0] == 0 && out[1] == 0, "silent after the end block");
        });

        tc.Run("the music driver's envelope holds its voices at 0x3FFF", [](TestCase &t)
        {
            // Ps2Music plays at this level; the voice model reaches it with
            // the driver's ADSR (attack to 0x7FFF, one decay step, sustain).
            VoiceFixture fixture(0x0EB3u);
            fixture.keyOn();
            const int32_t expected[4] = {0x3800, 0x7000, 0x7FFF, 0x3FFF};
            for (unsigned tick = 0; tick < 4; ++tick)
            {
                int16_t out[2];
                fixture.spu.mix(out, 1);
                t.Equals(static_cast<int32_t>(fixture.spu.getParam(entry(0x05))), expected[tick],
                         "level after tick " + std::to_string(tick));
            }
            std::vector<int16_t> out(2u * 4800u);
            fixture.spu.mix(out.data(), 4800u);
            t.Equals(static_cast<int32_t>(fixture.spu.getParam(entry(0x05))), 0x3FFF, "level 0.1 s later");
        });

        tc.Run("music plays 44.1 kHz with the voice's pitch, interpolation, envelope and volume", [](TestCase &t)
        {
            // Two chunk pairs of 4 blocks per channel, interleaved left/right.
            constexpr uint32_t kInterleave = 0x40u;
            std::vector<uint8_t> track(4u * kInterleave);
            std::vector<int16_t> channels[2];
            for (unsigned pair = 0; pair < 2; ++pair)
                for (unsigned ch = 0; ch < 2; ++ch)
                    for (unsigned b = 0; b < kInterleave / 16u; ++b)
                    {
                        uint8_t *block = track.data() + (pair * 2u + ch) * kInterleave + b * 16u;
                        writeBlock(block, 0, 0x85EBCA6Bu * (pair * 16u + ch * 4u + b + 1u));
                        const std::vector<int16_t> samples = decodeBlock(block);
                        channels[ch].insert(channels[ch].end(), samples.begin(), samples.end());
                    }
            const std::filesystem::path path =
                std::filesystem::temp_directory_path() / "ps2x-spu2-music-test.msc";
            if (std::FILE *file = std::fopen(path.string().c_str(), "wb"))
            {
                std::fwrite(track.data(), 1u, track.size(), file);
                std::fclose(file);
            }

            Ps2Music music;
            t.IsTrue(music.open(path.string(), kInterleave, 44100u), "track opens");
            music.setVolume(0x3FFF, 0x2000);
            music.play();
            constexpr unsigned kFrames = 1000; // over four times through the track
            std::vector<int16_t> out(2u * kFrames, 0);
            music.mix(out.data(), kFrames);
            music.close();
            std::filesystem::remove(path);

            const std::vector<int16_t> none;
            const int32_t volume[2] = {0x3FFF, 0x2000};
            bool same = true;
            for (unsigned f = 0; f < kFrames && same; ++f)
            {
                const uint64_t position = 0xEB3ull * f;
                const int64_t n = static_cast<int64_t>(position >> 12);
                const uint32_t phase = static_cast<uint32_t>(position >> 4) & 0xFFu;
                for (unsigned ch = 0; ch < 2; ++ch)
                {
                    const std::vector<int16_t> &s = channels[ch];
                    const int32_t sample = gaussReference(streamSample(none, s, n - 3), streamSample(none, s, n - 2),
                                                          streamSample(none, s, n - 1), streamSample(none, s, n), phase);
                    // The voice's envelope level, then its volume register
                    // (half the gain).
                    const int32_t voice = (sample * 0x3FFF) >> 15;
                    const int16_t expected = clamp16((voice * (volume[ch] << 1)) >> 15);
                    if (out[f * 2u + ch] != expected)
                    {
                        t.Fail("frame " + std::to_string(f) + " channel " + std::to_string(ch) + ": got " +
                               std::to_string(out[f * 2u + ch]) + ", expected " + std::to_string(expected));
                        same = false;
                    }
                }
            }
        });
    });
}
