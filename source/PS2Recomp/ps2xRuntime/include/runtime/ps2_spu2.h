#pragma once

#include <array>
#if defined(PLATFORM_XBOX)
#include <atomic>
#endif
#include <cstdint>
#include <mutex>

#if defined(PLATFORM_XBOX)
// TS_SPU2_SELFCHECK 1: one mix in TS_SPU2_SELFCHECK_EVERY also runs the
// frame-major reference from the same state and compares output and state
// (g_spu2Diffs: spu2diff=; the reference plays when they differ). Sound RAM
// writes from the IOP's transfers then take the mix's lock
// (PS2AudioBackend::writeSpuMemory), so that both mixes read the same RAM.
#ifndef TS_SPU2_SELFCHECK
#define TS_SPU2_SELFCHECK 0
#endif
#ifndef TS_SPU2_SELFCHECK_EVERY
#define TS_SPU2_SELFCHECK_EVERY 1
#endif

#endif
// SPU2 sound processor: two cores of 24 voices playing 4-bit ADPCM from the
// shared 2 MiB sound RAM, with the hardware's Gaussian interpolation, ADSR
// envelopes, pitch, looping, per-voice and master volume. Driven at the libsd
// level (sceSdSetParam/Switch/Addr/CoreAttr, which map one-to-one onto SPU2
// registers) and mixed to 48 kHz stereo on the host audio thread. Not
// modelled: noise, pitch modulation, core input streaming (AutoDMA), and
// reverb. TimeSplitters turns the reverb on for both cores (soundRestart:
// effect enable, Hall preset) but sets the effect return volume EVOL to 0
// there, directly and again through the effect's depth, and nothing writes
// it afterwards: the game's other libsd calls and batches, and its music
// driver, only set voice registers, key on/off and transfer. On the PS2 none
// of the reverb reaches the output, so computing it would be wasted time.
class Spu2
{
public:
    explicit Spu2(uint8_t *soundRam) : m_ram(soundRam) {}

    // libsd entries: parameter/switch/address id in bits 8.., core in bit 0,
    // voice in bits 1..5.
    void setParam(uint32_t entry, uint32_t value);
    uint32_t getParam(uint32_t entry);
    void setSwitch(uint32_t entry, uint32_t value);
    uint32_t getSwitch(uint32_t entry);
    void setAddr(uint32_t entry, uint32_t value);
    uint32_t getAddr(uint32_t entry);
    void setCoreAttr(uint32_t entry, uint32_t value);
    uint32_t getCoreAttr(uint32_t entry);

    // Hardware register interface used by IOP code (the real libsd running on
    // the emulated IOP): offset = physical address - 0x1F900000, 16-bit
    // registers. readRegister returns false for registers this model does
    // not own (the caller keeps its stored value).
    void writeRegister(uint32_t offset, uint16_t value);
    bool readRegister(uint32_t offset, uint16_t &value);
    // IOP DMA into sound RAM at the core's transfer address (TSA).
    void dmaWrite(unsigned core, const uint8_t *data, uint32_t bytes);
#if defined(PLATFORM_XBOX)
    // SPU interrupt raised since the last call (IRQA hit). Lock-free: the
    // IOP polls it, and it must not wait for a mix in progress.
    bool takeIrq() { return m_irqPending.exchange(false, std::memory_order_acq_rel); }
#else
    // SPU interrupt raised since the last call (IRQA hit).
    bool takeIrq();
#endif

    // Mixes frames of interleaved stereo 16-bit output at 48 kHz.
    // TS_SPU2_VOICE_MAJOR (ps2_spu2.cpp): voice by voice over a chunk of
    // frames, the same output and state to the bit as the frame-major
    // reference (mixReference), which TS_SPU2_SELFCHECK compares it with.
    void mix(int16_t *out, unsigned frames);
#if defined(PLATFORM_XBOX)
    // The frame-major mix (every voice once per output frame), the
    // reference the voice-major mix is checked against (host tests).
    void mixReference(int16_t *out, unsigned frames);

    // The sound RAM, read-only (B-SCHED's det stream hashes it).
    const uint8_t *ram() const { return m_ram; }
    // The lock a mix holds (TS_SPU2_SELFCHECK: sound RAM writers take it).
    std::mutex &mixLock() { return m_mutex; }
#endif

private:
    enum class Phase : uint8_t { Off, Attack, Decay, Sustain, Release };

    struct Envelope
    {
        int32_t level = 0;
        uint32_t counter = 0;
        // rate: 7-bit PSX/PS2 envelope rate (shift << 2 | step)
        bool tick(uint32_t rate, bool decreasing, bool exponential);
    };

    struct Volume
    {
        uint16_t reg = 0;
        int32_t current = 0; // -0x8000..0x7FFF
        Envelope sweep;
        void set(uint16_t value);
        void tick();
    };

    struct Voice
    {
        Volume volL, volR;
        uint16_t pitch = 0, adsr1 = 0, adsr2 = 0;
        uint32_t ssa = 0, lsa = 0, nax = 0; // byte addresses
        bool customLoop = false;
        Phase phase = Phase::Off;
        Envelope env;
        uint32_t counter = 0; // 12-bit fractional sample position
        int32_t prev1 = 0, prev2 = 0;
        // The last three samples of the previous block, then the current
        // block's 28: the interpolation reads the four samples ending at the
        // current one, across block boundaries and loops as the hardware does.
        std::array<int16_t, 3 + 28> samples{};
        uint8_t blockFlags = 0;
        uint32_t blockAddr = 0;
        unsigned index = 0; // current sample within the block
    };

    struct Core
    {
        std::array<Voice, 24> voices{};
        uint32_t playing = 0; // voices not Off: the mix visits only these
        Volume mvolL, mvolR;
        uint16_t mmix = 0, evolL = 0, evolR = 0, avolL = 0, avolR = 0, bvolL = 0, bvolR = 0;
        uint32_t vmixL = 0xFFFFFFu, vmixR = 0xFFFFFFu, vmixEL = 0, vmixER = 0, pmon = 0, non = 0, endx = 0;
        uint32_t esa = 0, eea = 0, tsa = 0, irqa = 0;
        uint32_t attr = 0;
        uint16_t attrReg = 0;  // hardware ATTR (bit 6: IRQ enable)
        uint32_t tsaWords = 0; // transfer address, halfwords
        uint32_t irqaWords = 0;
    };

    void keyOn(Core &core, unsigned voice);
    void checkIrq(uint32_t byteAddress, uint32_t bytes);
    void decodeBlock(Voice &v);
    void nextBlock(Core &core, unsigned index, Voice &v);
    int16_t tickVoice(Core &core, unsigned index, Voice &v);
#if defined(PLATFORM_XBOX)
    // The two mixes' bodies (the lock held).
    void mixFrameMajor(int16_t *out, unsigned frames);
    void mixVoiceMajor(int16_t *out, unsigned frames);
    // TS_SPU2_SELFCHECK: the state a mix moves, saved, restored, compared.
    struct MixState;
    void saveMixState(MixState &out) const;
    void restoreMixState(const MixState &state);
    static bool sameMixState(const MixState &a, const MixState &b);
#endif

    uint8_t *m_ram;
    uint16_t m_irqInfo = 0;
#if defined(PLATFORM_XBOX)
    std::atomic<bool> m_irqPending{false};
#else
    bool m_irqPending = false;
#endif
    std::array<Core, 2> m_cores{};
    std::mutex m_mutex;
};

#if defined(PLATFORM_XBOX)
// The SPU2 and music output as the host audio stream plays it (48 kHz
// stereo, 16-bit): the SPU2 mix, then the music added with its own clamp.
// B-SCHED's det pcm stream calls it; silence before the output started
// (runtime/ps2_audio.cpp).
void ps2AudioMixOutput(int16_t *out, unsigned frames);

#endif
#if defined(PLATFORM_XBOX)
// Development counter for the Xbox status block (cumulative): voice samples
// mixed, one per playing voice per output frame. With the mix's CPU time it
// gives the cost per voice sample.
extern unsigned long long g_spu2VoiceSamples;
#if defined(PLATFORM_XBOX)
// TS_SPU2_SELFCHECK: mixes compared, and those whose voice-major output or
// state differed from the frame-major reference (spu2diff=, [TS:audio]).
extern unsigned g_spu2Checks, g_spu2Diffs;
#endif
#endif
