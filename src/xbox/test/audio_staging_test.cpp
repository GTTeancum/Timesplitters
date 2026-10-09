// Host test of the Xbox audio feeder's staging buffer (TS_AUDIO_STAGING,
// src/xbox/xbox_raylib.cpp). The feeder used to mix each buffer straight
// into the AC97 ring (write-combined memory); now it mixes into a cached
// staging buffer and copies that into the ring. The ring gets the same bytes
// only if the mix never depends on what its buffer held before: the SPU2 mix
// (or the silence fill) must store every sample before the music mix adds
// onto them. The staging buffer holds the previous buffer's mix, a ring slot
// the one from eight buffers before.
//
// The real Spu2 and Ps2Music play the same seeded script several times:
// random ADPCM sound RAM and music track, key-ons with random pitch, ADSR
// and (sweeping) volumes, key-offs, master volume and mix-mask changes, and
// music play/pause/resume/stop/volume/close/reopen at fixed buffers, with
// stretches where the stream callback has no SPU2 and where the stream is
// stopped. The first run is the old feeder; the others go through a staging
// buffer, or put junk in the buffer before every mix, and every ring buffer
// must match the first byte for byte. A control run checks the comparison
// does catch a mix that reads old samples.
//
//   clang++ -std=c++20 -O2 -DPLATFORM_XBOX=1 -I source/PS2Recomp/ps2xRuntime/include \
//       src/xbox/test/audio_staging_test.cpp source/PS2Recomp/ps2xRuntime/src/lib/ps2_spu2.cpp \
//       source/PS2Recomp/ps2xRuntime/src/lib/ps2_music.cpp -o audio_staging_test && ./audio_staging_test
// (-DPLATFORM_XBOX=1 builds the console's streaming music player; without it
// the PC player, which loads the whole track, is tested the same way)
#include "runtime/ps2_music.h"
#include "runtime/ps2_spu2.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <memory>
#include <random>
#include <string>
#include <vector>

namespace
{
    constexpr unsigned kFrames = 1024;  // per buffer (the feeder's kAudioFrames)
    constexpr unsigned kRing = 8;       // ring slots (kAudioRing)
    constexpr unsigned kBuffers = 1500; // 32 s of output
    constexpr uint32_t kRamBytes = 2u * 1024u * 1024u;
    constexpr uint32_t kInterleave = 0x800u; // music: bytes per channel chunk
    constexpr uint32_t kTrackPairs = 16u;    // left + right chunk pairs in the track

    // libsd entries: id << 8 | voice << 1 | core.
    uint32_t entry(unsigned id, unsigned voice = 0, unsigned core = 0)
    {
        return (id << 8) | (voice << 1) | core;
    }

    // ADPCM blocks with every shift and filter (13-15 play as 9, 5-7 as 4);
    // with loopFlags, now and then a loop start, an end, or an end + repeat.
    void fillAdpcm(uint8_t *data, size_t bytes, std::mt19937 &rng, bool loopFlags)
    {
        for (size_t at = 0; at + 16u <= bytes; at += 16u)
        {
            data[at] = static_cast<uint8_t>(rng());
            const uint32_t r = rng() % 48u;
            data[at + 1] = !loopFlags ? 0u : r == 0 ? 0x03u : r == 1 ? 0x01u : r == 2 ? 0x04u : r == 3 ? 0x07u : 0x00u;
            for (unsigned i = 2; i < 16; ++i)
                data[at + i] = static_cast<uint8_t>(rng());
        }
    }

    // Mostly fixed volumes, a quarter sweeps (bit 15: rate, direction, phase).
    uint32_t volume(std::mt19937 &rng)
    {
        return rng() % 4u ? rng() % 0x4000u : 0x8000u | (rng() & 0x7FFFu);
    }

    struct Stats
    {
        unsigned keyOns = 0, musicBuffers = 0;
    };

    struct Player
    {
        std::vector<uint8_t> ram = std::vector<uint8_t>(kRamBytes, 0u);
        std::unique_ptr<Spu2> spu;
        Ps2Music music;
        bool spuOn = true;         // the callback has an SPU2 (g_outputSpu)
        bool streamPlaying = true; // the feeder's g_audio.playing
        Stats stats;
    };

    // Voice, master and music commands for buffer b, the same in every run.
    void command(Player &p, std::mt19937 &rng, unsigned b, const std::string &track)
    {
        Spu2 &spu = *p.spu;
        if (rng() % 3u == 0u)
        {
            const unsigned core = rng() & 1u;
            uint32_t mask = 0;
            for (unsigned n = 1u + rng() % 4u; n; --n)
            {
                const unsigned v = rng() % 24u;
                mask |= 1u << v;
                const uint32_t left = volume(rng), right = volume(rng);
                spu.setParam(entry(0x00, v, core), left);
                spu.setParam(entry(0x01, v, core), right);
                spu.setParam(entry(0x02, v, core), 0x100u + rng() % 0x3F00u); // pitch
                spu.setParam(entry(0x03, v, core), rng() & 0xFFFFu);          // ADSR1
                spu.setParam(entry(0x04, v, core), rng() & 0xFFFFu);          // ADSR2
                spu.setAddr(entry(0x20, v, core), (rng() % (kRamBytes / 16u)) * 16u); // SSA
            }
            spu.setSwitch(entry(0x15, 0, core), mask); // KON
            p.stats.keyOns += static_cast<unsigned>(__builtin_popcount(mask));
        }
        // One rng() per expression from here: a call's arguments are
        // evaluated in no set order.
        if (rng() % 5u == 0u)
        {
            const unsigned core = rng() & 1u;
            const uint32_t voices = rng() & 0xFFFFFFu;
            spu.setSwitch(entry(0x16, 0, core), voices & rng()); // KOFF
        }
        if (rng() % 40u == 0u)
        {
            const unsigned core = rng() & 1u;
            const uint32_t left = b < 50u ? 0x3FFFu : volume(rng);
            const uint32_t right = b < 50u ? 0x3FFFu : volume(rng);
            spu.setParam(entry(0x09, 0, core), left);  // MVOLL
            spu.setParam(entry(0x0A, 0, core), right); // MVOLR
        }
        if (rng() % 80u == 0u)
        {
            const unsigned id = rng() & 1u ? 0x18u : 0x1Au; // VMIXL / VMIXR
            const unsigned core = rng() & 1u;
            const uint32_t voices = rng();
            spu.setSwitch(entry(id, 0, core), voices | rng());
        }
        Ps2Music &music = p.music;
        if (b == 5u || b == 830u)
            music.play();
        else if (b == 300u || b == 1100u)
            music.pause();
        else if (b == 340u || b == 1130u)
            music.resume();
        else if (b == 800u)
            music.stop();
        else if (b == 1200u)
            music.close();
        else if (b == 1230u)
        {
            music.open(track, kInterleave, 44100u);
            music.play();
        }
        if (b % 97u == 0u)
        {
            const uint32_t left = rng() % 0x4000u;
            music.setVolume(left, rng() % 0x4000u);
        }
        p.spuOn = !(b >= 600u && b < 640u);
        p.streamPlaying = !(b >= 700u && b < 720u);
    }

    // The runtime's stream callback (spu2StreamCallback, ps2_audio.cpp): the
    // SPU2 mix stores the buffer (silence without an SPU2), then the music
    // is added onto it. broken: the music only, onto whatever was there.
    void streamCallback(Player &p, int16_t *out, unsigned frames, bool broken)
    {
        if (!broken)
        {
            if (p.spuOn)
                p.spu->mix(out, frames);
            else
                std::memset(out, 0, size_t(frames) * 4u);
        }
        p.music.mix(out, frames);
    }

    struct Run
    {
        bool staging = false;  // mix into a staging buffer, then copy into the ring
        bool scribble = false; // fresh junk in the buffer before every mix
        bool broken = false;   // the control: a mix that reads old samples
        uint32_t junkSeed = 1;
    };

    // Every ring buffer in the order the engine plays them.
    std::vector<int16_t> play(const Run &how, const std::string &track, Stats *stats = nullptr)
    {
        Player p;
        std::mt19937 script(0x7E5Bu), junk(how.junkSeed);
        fillAdpcm(p.ram.data(), p.ram.size(), script, true);
        p.spu = std::make_unique<Spu2>(p.ram.data());
        for (unsigned core = 0; core < 2; ++core)
        {
            p.spu->setParam(entry(0x09, 0, core), 0x3FFFu);
            p.spu->setParam(entry(0x0A, 0, core), 0x3FFFu);
        }
        if (!p.music.open(track, kInterleave, 44100u))
        {
            std::printf("FAIL: cannot open the test track %s\n", track.c_str());
            std::exit(1);
        }
        std::vector<int16_t> ring(kRing * kFrames * 2u), staging(kFrames * 2u), played;
        auto scribble = [&junk](int16_t *buffer) {
            for (unsigned i = 0; i < kFrames * 2u; ++i)
                buffer[i] = static_cast<int16_t>(junk());
        };
        for (unsigned s = 0; s < kRing; ++s)
            scribble(ring.data() + s * kFrames * 2u);
        scribble(staging.data());
        played.reserve(size_t(kBuffers) * kFrames * 2u);
        for (unsigned b = 0; b < kBuffers; ++b)
        {
            command(p, script, b, track);
            // The feeder's loop body (audioFeeder): buffer = ring slot.
            int16_t *buffer = ring.data() + (b % kRing) * kFrames * 2u;
            int16_t *mixInto = how.staging ? staging.data() : buffer;
            if (how.scribble)
                scribble(mixInto);
            p.stats.musicBuffers += p.streamPlaying && p.music.playing();
            if (p.streamPlaying)
                streamCallback(p, mixInto, kFrames, how.broken);
            else
                std::memset(mixInto, 0, kFrames * 4u);
            if (how.staging)
                std::memcpy(buffer, staging.data(), kFrames * 4u);
            played.insert(played.end(), buffer, buffer + kFrames * 2u);
        }
        p.music.close();
        if (stats)
            *stats = p.stats;
        return played;
    }

    // Buffers that differ; the first difference is printed.
    unsigned compare(const char *name, const std::vector<int16_t> &want, const std::vector<int16_t> &got, bool quiet)
    {
        unsigned buffers = 0;
        for (unsigned b = 0; b < kBuffers; ++b)
        {
            const size_t at = size_t(b) * kFrames * 2u;
            if (std::memcmp(want.data() + at, got.data() + at, kFrames * 4u) == 0)
                continue;
            if (buffers++ == 0 && !quiet)
                for (unsigned i = 0; i < kFrames * 2u; ++i)
                    if (want[at + i] != got[at + i])
                    {
                        std::printf("  %s: first difference in buffer %u, frame %u %s: %d, old path %d\n", name, b, i / 2u,
                                    i & 1u ? "right" : "left", got[at + i], want[at + i]);
                        break;
                    }
        }
        return buffers;
    }
}

int main()
{
    // The music track: random ADPCM, chunk pairs of left and right.
    const std::string track = (std::filesystem::temp_directory_path() / "ts-audio-staging-test.msc").string();
    {
        std::vector<uint8_t> data(size_t(kTrackPairs) * 2u * kInterleave);
        std::mt19937 rng(0x3A51Cu);
        fillAdpcm(data.data(), data.size(), rng, false);
        std::FILE *file = std::fopen(track.c_str(), "wb");
        if (!file || std::fwrite(data.data(), 1u, data.size(), file) != data.size())
        {
            std::printf("FAIL: cannot write %s\n", track.c_str());
            return 1;
        }
        std::fclose(file);
    }

    Stats stats;
    const std::vector<int16_t> old = play({}, track, &stats);
    int failures = 0;
    struct Case
    {
        const char *name;
        Run how;
    } cases[] = {
        {"staged", {true, false, false, 2}},
        {"staged, junk before every mix", {true, true, false, 3}},
        {"old path, junk before every mix", {false, true, false, 4}},
    };
    for (const Case &c : cases)
    {
        const unsigned diffs = compare(c.name, old, play(c.how, track), false);
        std::printf("%-34s %u of %u buffers differ\n", c.name, diffs, kBuffers);
        failures += diffs != 0u;
    }
    // The control: with a mix that adds onto old samples the two paths must
    // differ (else this test could not see the fault it is for).
    const unsigned control = compare("control", play({false, false, true, 1}, track), play({true, true, true, 3}, track), true);
    std::printf("%-34s %u of %u buffers differ (must not be 0)\n", "control: mix reads old samples", control, kBuffers);
    failures += control == 0u;

    // What the script exercised (the old path's output).
    size_t loud = 0, clipped = 0;
    uint64_t hash = 1469598103934665603ull;
    for (const int16_t s : old)
    {
        loud += s != 0;
        clipped += s == 32767 || s == -32768;
        hash = (hash ^ static_cast<uint16_t>(s)) * 1099511628211ull;
    }
    std::printf("output: %.1f%% of samples non-zero, %zu clipped, %u key-ons, music in %u buffers, fnv %016llx\n",
                100.0 * double(loud) / double(old.size()), clipped, stats.keyOns, stats.musicBuffers,
                static_cast<unsigned long long>(hash));
    if (loud * 2u < old.size() || clipped == 0u || stats.musicBuffers < kBuffers / 2u)
    {
        std::printf("FAIL: the script did not exercise the mix\n");
        ++failures;
    }
    std::remove(track.c_str());
    std::printf("%s\n", failures ? "FAIL" : "PASS");
    return failures ? 1 : 0;
}
